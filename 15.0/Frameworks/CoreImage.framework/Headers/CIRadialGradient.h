// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIRADIALGRADIENT_H
#define CIRADIALGRADIENT_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIColor.h"

@interface CIRadialGradient : CIFilter

@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIColor *inputColor0; // ivar: inputColor0
@property (retain, nonatomic) CIColor *inputColor1; // ivar: inputColor1
@property (retain, nonatomic) NSNumber *inputRadius0; // ivar: inputRadius0
@property (retain, nonatomic) NSNumber *inputRadius1; // ivar: inputRadius1


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif