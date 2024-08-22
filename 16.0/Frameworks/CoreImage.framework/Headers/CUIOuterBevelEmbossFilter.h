// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIOUTERBEVELEMBOSSFILTER_H
#define CUIOUTERBEVELEMBOSSFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIColor.h"
#import "CIImage.h"

@interface CUIOuterBevelEmbossFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) CIColor *inputHighlightColor; // ivar: inputHighlightColor
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIColor *inputShadowColor; // ivar: inputShadowColor
@property (retain, nonatomic) NSNumber *inputSize; // ivar: inputSize
@property (retain, nonatomic) NSNumber *inputSoften; // ivar: inputSoften


+(id)customAttributes;
-(id)_kernel;
-(id)_kernelC;
-(id)outputImage;


@end


#endif