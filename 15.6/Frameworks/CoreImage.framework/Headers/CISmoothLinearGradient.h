// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CISMOOTHLINEARGRADIENT_H
#define CISMOOTHLINEARGRADIENT_H



#import "CIFilter.h"
#import "CIColor.h"
#import "CIVector.h"

@interface CISmoothLinearGradient : CIFilter

@property (retain, nonatomic) CIColor *inputColor0; // ivar: inputColor0
@property (retain, nonatomic) CIColor *inputColor1; // ivar: inputColor1
@property (retain, nonatomic) CIVector *inputPoint0; // ivar: inputPoint0
@property (retain, nonatomic) CIVector *inputPoint1; // ivar: inputPoint1


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif