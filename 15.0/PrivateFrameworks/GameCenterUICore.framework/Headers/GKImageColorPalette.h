// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKIMAGECOLORPALETTE_H
#define GKIMAGECOLORPALETTE_H



#import "GKColorPalette.h"

@interface GKImageColorPalette : GKColorPalette {
    unsigned int _hueSpread;
    unsigned int _saturationSpread;
    unsigned int _brightnessSpread;
    unsigned int _grayscaleSpread;
    *HSVColor _imageHSVMap;
    CGSize _imageSize;
    CGFloat _borderPercentageForBorderDetection;
    unsigned int _hueHistogram;
    unsigned int _saturationHistogram;
    unsigned int _brightnessHistogram;
}




-(BOOL)analyzeImage:(struct CGImage *)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(unsigned int)weightHistogram:(*unsigned int)arg0 size:(unsigned int)arg1 spread:(unsigned int)arg2 ;
-(void)clearMainHistograms;
-(void)clearSaturationAndBrightnessHistograms;
-(void)findBrightColors;
-(void)generateHSVMapWithContext:(struct CGContext *)arg0 ;
// -(void)iterateOverPixelsWithBlock:(id)arg0 forHue:(unk)arg1  ;
-(void)printHistogram:(*unsigned int)arg0 ofSize:(unsigned int)arg1 ;
-(void)reset;


@end


#endif