// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUITHEMEGRADIENT_H
#define CUITHEMEGRADIENT_H

@protocol CUIThemeGradientDrawing;

#import <Foundation/Foundation.h>


@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing>

 {
    id *gradientEvaluator;
    *CGFunction colorShader;
    *CGColorSpace colorSpace;
    *CGImage _gradientImage;
}




-(BOOL)isDithered;
-(CGFloat)smoothingCoefficient;
-(id)_initWithGradientEvaluator:(id)arg0 colorSpace:(struct CGColorSpace *)arg1 ;
-(id)colorLocations;
-(id)colorStops;
-(id)fillColor;
-(id)gradientByApplyingEffects:(id)arg0 ;
-(id)initWithColors:(id)arg0 colorlocations:(id)arg1 colorMidpoints:(id)arg2 opacities:(id)arg3 opacityLocations:(id)arg4 opacityMidpoints:(id)arg5 smoothingCoefficient:(CGFloat)arg6 fillColor:(id)arg7 colorSpace:(struct CGColorSpace *)arg8 ;
-(id)initWithColors:(id)arg0 colorlocations:(id)arg1 colorMidpoints:(id)arg2 opacities:(id)arg3 opacityLocations:(id)arg4 opacityMidpoints:(id)arg5 smoothingCoefficient:(CGFloat)arg6 fillColor:(id)arg7 colorSpace:(struct CGColorSpace *)arg8 dither:(BOOL)arg9 ;
-(id)interpolatedColorAtLocation:(CGFloat)arg0 ;
-(id)opacityLocations;
-(id)opacityStops;
-(int)blendMode;
-(struct CGImage *)_createRadialGradientImageWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)dealloc;
-(void)drawAngleGradientInRect:(struct CGRect )arg0 relativeCenterPosition:(struct CGPoint )arg1 withContext:(struct CGContext *)arg2 ;
-(void)drawFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 options:(NSUInteger)arg2 withContext:(struct CGContext *)arg3 ;
-(void)drawInRect:(struct CGRect )arg0 angle:(CGFloat)arg1 ;
-(void)drawInRect:(struct CGRect )arg0 angle:(CGFloat)arg1 options:(NSUInteger)arg2 withContext:(struct CGContext *)arg3 ;
-(void)drawInRect:(struct CGRect )arg0 angle:(CGFloat)arg1 withContext:(struct CGContext *)arg2 ;
-(void)drawRadialGradientInRect:(struct CGRect )arg0 relativeCenterPosition:(struct CGPoint )arg1 withContext:(struct CGContext *)arg2 ;


@end


#endif