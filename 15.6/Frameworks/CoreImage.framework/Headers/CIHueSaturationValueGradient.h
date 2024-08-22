// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIHUESATURATIONVALUEGRADIENT_H
#define CIHUESATURATIONVALUEGRADIENT_H

@class NSNumber;


#import "CIFilter.h"

@interface CIHueSaturationValueGradient : CIFilter

@property (retain, nonatomic) id *inputColorSpace; // ivar: inputColorSpace
@property (retain, nonatomic) NSNumber *inputDither; // ivar: inputDither
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius
@property (retain, nonatomic) NSNumber *inputSoftness; // ivar: inputSoftness
@property (retain, nonatomic) NSNumber *inputValue; // ivar: inputValue


+(id)customAttributes;
-(id)_kernel;
-(id)_kernelD;
-(id)outputImage;


@end


#endif