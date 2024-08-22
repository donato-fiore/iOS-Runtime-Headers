// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUISHAPEEFFECTBLUR1_H
#define CUISHAPEEFFECTBLUR1_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIColor.h"
#import "CIVector.h"

@interface CUIShapeEffectBlur1 : CIFilter

@property (retain, nonatomic) CIImage *inputFill; // ivar: inputFill
@property (retain, nonatomic) CIColor *inputGlowColorInner; // ivar: inputGlowColorInner
@property (retain, nonatomic) CIColor *inputGlowColorOuter; // ivar: inputGlowColorOuter
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputOffset; // ivar: inputOffset
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius
@property (retain, nonatomic) NSNumber *inputShadowBlurInner; // ivar: inputShadowBlurInner
@property (retain, nonatomic) NSNumber *inputShadowBlurOuter; // ivar: inputShadowBlurOuter
@property (retain, nonatomic) CIColor *inputShadowColorInner; // ivar: inputShadowColorInner
@property (retain, nonatomic) CIColor *inputShadowColorOuter; // ivar: inputShadowColorOuter


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif