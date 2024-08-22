// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOLORWASHFILTER_H
#define PICOLORWASHFILTER_H

@class CIFilter, CIColor, CIImage, NSString;



@interface PIColorWashFilter : CIFilter

@property (retain, nonatomic) CIColor *inputColor; // ivar: _inputColor
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) NSString *inputMode; // ivar: _inputMode


+(id)colorWashFixedKernel;
+(id)colorWashFixedSmoothKernel;
+(id)colorWashKernels;
+(id)colorWashVariableKernel;
+(id)colorWashVariableSmoothKernel;
+(id)customAttributes;
+(id)hueChromaColorWashKernel;
+(id)hueChromaFixedColorWashKernel;
+(id)hueChromaVariableColorWashKernel;
-(id)outputImage;


@end


#endif