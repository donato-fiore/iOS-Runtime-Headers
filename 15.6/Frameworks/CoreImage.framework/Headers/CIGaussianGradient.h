// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIGAUSSIANGRADIENT_H
#define CIGAUSSIANGRADIENT_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIColor.h"

@interface CIGaussianGradient : CIFilter

@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIColor *inputColor0; // ivar: inputColor0
@property (retain, nonatomic) CIColor *inputColor1; // ivar: inputColor1
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif