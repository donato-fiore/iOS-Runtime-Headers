// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOLORWASHDUOFILTER_H
#define PICOLORWASHDUOFILTER_H

@class CIFilter, CIColor, CIImage, NSString;



@interface PIColorWashDuoFilter : CIFilter

@property (retain, nonatomic) CIColor *inputHighlightColor; // ivar: _inputHighlightColor
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (retain, nonatomic) CIColor *inputShadowColor; // ivar: _inputShadowColor


+(id)colorWashKernels;
+(id)customAttributes;
+(id)hueChromaColorWashDuoFixedKernel;
+(id)hueChromaColorWashDuoKernel;
+(id)hueChromaColorWashDuoVariableKernel;
+(id)iptColorWashDuoFixedKernel;
+(id)iptColorWashDuoKernel;
+(id)iptColorWashDuoVariableKernel;
+(id)rgbColorWashDuoFixedKernel;
+(id)rgbColorWashDuoKernel;
+(id)rgbColorWashDuoVariableKernel;
-(id)outputImage;


@end


#endif