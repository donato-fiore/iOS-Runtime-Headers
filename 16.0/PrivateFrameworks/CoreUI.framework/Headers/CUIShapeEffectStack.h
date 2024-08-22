// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUISHAPEEFFECTSTACK_H
#define CUISHAPEEFFECTSTACK_H


#import <Foundation/Foundation.h>


@interface CUIShapeEffectStack : NSObject {
    BOOL _bypassColorFills;
}


@property (readonly, nonatomic) NSUInteger bevelEmbossCount; // ivar: _bevelEmbossCount
@property (readonly, nonatomic) *? colorOverlay; // ivar: _colorOverlay
@property (nonatomic) NSUInteger colorOverlayCount; // ivar: _colorOverlayCount
@property (readonly, nonatomic) *? emboss; // ivar: _emboss
@property (readonly, nonatomic) *? engraveShadow; // ivar: _engraveShadow
@property (nonatomic) NSUInteger engraveShadowCount; // ivar: _engraveShadowCount
@property (readonly, nonatomic) *? extraShadow; // ivar: _extraShadow
@property (readonly, nonatomic) NSUInteger extraShadowCount; // ivar: _extraShadowCount
@property (readonly, nonatomic) *? hueSaturation; // ivar: _hueSaturation
@property (readonly, nonatomic) NSUInteger hueSaturationCount; // ivar: _hueSaturationCount
@property (readonly, nonatomic) *? innerGlow; // ivar: _innerGlow
@property (nonatomic) NSUInteger innerGlowCount; // ivar: _innerGlowCount
@property (readonly, nonatomic) *? innerGradient; // ivar: _innerGradient
@property (nonatomic) NSUInteger innerGradientCount; // ivar: _innerGradientCount
@property (readonly, nonatomic) *? innerShadow; // ivar: _innerShadow
@property (nonatomic) NSUInteger innerShadowCount; // ivar: _innerShadowCount
@property (readonly, nonatomic) *? outerGlow; // ivar: _outerGlow
@property (readonly, nonatomic) NSUInteger outerGlowCount; // ivar: _outerGlowCount
@property (readonly) unsigned int outputBlendMode; // ivar: _outputBlendMode
@property (readonly, nonatomic) float outputOpacity; // ivar: _outputOpacity
@property (readonly, nonatomic) int renderStrategy; // ivar: _renderStrategy
@property (readonly, nonatomic) float scalefactor; // ivar: _scalefactor
@property (readonly, nonatomic) float shapeOpacity; // ivar: _shapeOpacity


+(id)adjustOpacity:(id)arg0 by:(float)arg1 ;
+(id)bevelEmbossFrom:(id)arg0 withSize:(unsigned int)arg1 soften:(unsigned int)arg2 angle:(float)arg3 altitude:(float)arg4 highlightRed:(float)arg5 highlightGreen:(float)arg6 highlightBlue:(float)arg7 highlightOpacity:(float)arg8 shadowRed:(float)arg9 shadowGreen:(float)arg10 shadowBlue:(float)arg11 shadowOpacity:(float)arg12 bevelStyle:(unsigned int)arg13 ;
+(id)blend:(id)arg0 over:(id)arg1 blendKind:(unsigned int)arg2 ;
+(id)blur:(id)arg0 radius:(float)arg1 ;
+(id)colorWithGray:(float)arg0 alpha:(float)arg1 ;
+(id)colorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3 ;
+(id)composite:(id)arg0 atop:(id)arg1 ;
+(id)composite:(id)arg0 into:(id)arg1 ;
+(id)composite:(id)arg0 outOf:(id)arg1 ;
+(id)composite:(id)arg0 over:(id)arg1 ;
+(id)gradientWithParameters:(struct ? *)arg0 inRect:(struct CGRect )arg1 ;
+(id)hueSaturationFrom:(id)arg0 withCenterAngle:(CGFloat)arg1 width:(CGFloat)arg2 tintRed:(float)arg3 tintGreen:(float)arg4 tintBlue:(float)arg5 ;
+(id)image:(id)arg0 withOpacity:(float)arg1 ;
+(id)imageFromBlendWithMask:(id)arg0 foreground:(id)arg1 background:(id)arg2 ;
+(id)innerGlowFrom:(id)arg0 withRadius:(float)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 opacity:(float)arg5 ;
+(id)innerShadowFrom:(id)arg0 withOffset:(struct CGPoint )arg1 radius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6 ;
+(id)invert:(id)arg0 ;
+(id)offset:(id)arg0 by:(struct CGPoint )arg1 ;
+(id)outerGlowFrom:(id)arg0 withSize:(unsigned int)arg1 spread:(unsigned int)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6 ;
+(id)outerShadowFrom:(id)arg0 withOffset:(struct CGPoint )arg1 size:(unsigned int)arg2 spread:(unsigned int)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7 ;
+(id)pixelZoomed:(id)arg0 scale:(int)arg1 about:(struct CGPoint )arg2 ;
+(id)preferredCIContextOptions;
+(id)rectangle:(struct CGRect )arg0 withRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)shadowFrom:(id)arg0 red:(float)arg1 green:(float)arg2 blue:(float)arg3 opacity:(float)arg4 ;
+(id)shapeEffectSingleBlurFrom:(id)arg0 withInteriorFill:(id)arg1 offset:(struct CGPoint )arg2 blurSize:(float)arg3 innerGlowRed:(float)arg4 innerGlowGreen:(float)arg5 innerGlowBlue:(float)arg6 innerGlowOpacity:(float)arg7 innerShadowRed:(float)arg8 innerShadowGreen:(float)arg9 innerShadowBlue:(float)arg10 innerShadowOpacity:(float)arg11 outerGlowRed:(float)arg12 outerGlowGreen:(float)arg13 outerGlowBlue:(float)arg14 outerGlowOpacity:(float)arg15 outerShadowRed:(float)arg16 outerShadowGreen:(float)arg17 outerShadowBlue:(float)arg18 outerShadowOpacity:(float)arg19 hasInsideShadowBlur:(BOOL)arg20 hasOutsideShadowBlur:(BOOL)arg21 ;
+(id)sharedCIContext;
+(id)unsharpMask:(id)arg0 radius:(float)arg1 intensity:(float)arg2 ;
+(struct CGColor *)newColorByAdjustingLightnessOfColor:(struct CGColor *)arg0 darker:(BOOL)arg1 ;
-(BOOL)_precompositeColorOverlayInnerGradient;
-(BOOL)anyEffectAllowsTintSubstitution;
-(BOOL)expressableByColorFillCheckingOutputBlending:(BOOL)arg0 ;
-(BOOL)hasBevelEmboss;
-(BOOL)hasColorOverlay;
-(BOOL)hasEffects;
-(BOOL)hasEngraveShadow;
-(BOOL)hasExtraShadow;
-(BOOL)hasHueSaturation;
-(BOOL)hasInnerGlow;
-(BOOL)hasInnerGradient;
-(BOOL)hasInnerShadow;
-(BOOL)hasOuterGlow;
-(id)cacheKey;
-(id)compositeEffectStackWithShapeImage:(id)arg0 withScale:(CGFloat)arg1 blendOntoImage:(BOOL)arg2 ;
-(id)effectPreset;
-(id)image:(id)arg0 withAdjustedOpacity:(float)arg1 ;
-(id)imageWithBevelEmbossOfImage:(id)arg0 effect:(struct ? )arg1 ;
-(id)imageWithColorOverlayOfImage:(id)arg0 effect:(struct ? )arg1 ;
-(id)imageWithEngraveShadowOfImage:(id)arg0 effect:(struct ? )arg1 ;
-(id)imageWithExtraShadowOfImage:(id)arg0 effect:(struct ? )arg1 ;
-(id)imageWithHueSaturationOfImage:(id)arg0 effect:(struct ? )arg1 ;
-(id)imageWithInnerGlowOfImage:(id)arg0 effect:(struct ? )arg1 ;
-(id)imageWithInnerShadowOfImage:(id)arg0 effect:(struct ? )arg1 ;
-(id)imageWithInteriorGradientFillOfImage:(id)arg0 effect:(struct ? )arg1 ;
-(id)imageWithOuterGlowOfImage:(id)arg0 effect:(struct ? )arg1 ;
-(id)imageWithSingleBlurShapeEffectOfImage:(id)arg0 withInteriorFill:(id)arg1 ;
-(id)initWithEffectPreset:(id)arg0 ;
-(id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)arg0 ;
-(id)processedImageFromImage:(id)arg0 ;
-(id)processedImageFromImage:(id)arg0 withScale:(CGFloat)arg1 ;
-(id)processedImageFromShapeImage:(id)arg0 ;
-(id)processedImageFromShapeImage:(id)arg0 withScale:(CGFloat)arg1 ;
-(id)processedImageFromShapeImage:(id)arg0 withScale:(CGFloat)arg1 invertShadows:(BOOL)arg2 ;
-(id)processedImageFromShapePath:(struct CGPath *)arg0 inRect:(struct CGRect )arg1 ;
-(id)standardEffectCompositeWithShapeImage:(id)arg0 blendOntoImage:(BOOL)arg1 ;
-(int)cgBlendModeForOutputBlending;
-(struct ? )effectInsetsWithScale:(CGFloat)arg0 ;
-(struct CGColor *)newColorByProcessingColor:(struct CGColor *)arg0 ;
-(struct CGImage *)_newFlattenedImageFromShapeCGImage:(struct CGImage *)arg0 withScale:(CGFloat)arg1 ciContext:(id)arg2 blendOverImage:(BOOL)arg3 ;
-(struct CGImage *)newFlattenedImageFromCGImage:(struct CGImage *)arg0 withScale:(CGFloat)arg1 ciContext:(id)arg2 ;
-(struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg0 ;
-(struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg0 withScale:(CGFloat)arg1 ;
-(struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg0 withScale:(CGFloat)arg1 cache:(BOOL)arg2 ;
-(struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg0 withScale:(CGFloat)arg1 ciContext:(id)arg2 ;
-(struct CGRect )effectPaddingWithScale:(CGFloat)arg0 ;
-(void)_cleanupEffectSettings;
-(void)_normalizeEffectParameters;
-(void)_setBevelEmbossAtIndex:(NSUInteger)arg0 fromPreset:(id)arg1 index:(unsigned int)arg2 ;
-(void)_setColorFillAtIndex:(NSUInteger)arg0 FromPreset:(id)arg1 index:(unsigned int)arg2 ;
-(void)_setInteriorGradientAtIndex:(NSUInteger)arg0 fromPreset:(id)arg1 index:(unsigned int)arg2 ;
-(void)_updateRenderStrategyFromEffect:(unsigned int)arg0 ;
-(void)adjustEffectColorsToTemperature:(int)arg0 onlyTintableColors:(BOOL)arg1 ;
-(void)applyCustomForegroundColor:(struct CGColor *)arg0 ;
-(void)applyCustomForegroundColor:(struct CGColor *)arg0 tintEffectColors:(BOOL)arg1 ;
-(void)dealloc;
-(void)scaleBrightnessOfEffectColorsByAmount:(CGFloat)arg0 onlyTintableColors:(BOOL)arg1 ;
-(void)scaleEffectParametersBy:(CGFloat)arg0 ;
-(void)setBypassColorFills:(BOOL)arg0 ;
-(void)updateOutputBlendingWithInteriorFillHeuristic;


@end


#endif