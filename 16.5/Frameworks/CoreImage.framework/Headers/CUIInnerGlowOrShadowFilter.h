// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIINNERGLOWORSHADOWFILTER_H
#define CUIINNERGLOWORSHADOWFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIColor.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CUIInnerGlowOrShadowFilter : CIFilter

@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputOffset; // ivar: inputOffset
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius
@property (retain, nonatomic) NSNumber *inputRange; // ivar: inputRange


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif