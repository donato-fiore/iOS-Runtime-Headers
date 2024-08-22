// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUISHAPEEFFECTPRESET_H
#define CUISHAPEEFFECTPRESET_H


#import <Foundation/Foundation.h>


@interface CUIShapeEffectPreset : NSObject {
    ? _parameterList;
    unsigned int _effectIndex;
    CGFloat _scaleFactor;
}


@property float minimumShadowSpread; // ivar: _minimumShadowSpread


+(id)caFilterFromCUIEffectBlendMode:(unsigned int)arg0 ;
+(id)requiredEffectParametersForEffectType:(unsigned int)arg0 ;
+(int)cgBlendModeFromCUIEffectBlendMode:(unsigned int)arg0 ;
+(struct _CUIVibrantColorMatrixOptions )monochromeVibrantColorMatrixOptions;
+(struct _CUIVibrantColorMatrixOptions )standardVibrantColorMatrixOptionsForColor:(struct CGColor *)arg0 ;
+(struct _CUIVibrantColorMatrixOptions )vibrantColorMatrixOptionsWithColor:(struct CGColor *)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 ;
+(unsigned int)cuiEffectBlendModeFromCGBlendMode:(int)arg0 ;
+(void)configureVibrantColorMatrixFilter:(id)arg0 withOptions:(struct _CUIVibrantColorMatrixOptions )arg1 ;
-(?)getEffectTuples:(?)arg0 countatEffectIndex;
-(CGFloat)effectScale;
-(NSUInteger)_parameterCount;
-(NSUInteger)effectCount;
-(id)CUIEffectDataRepresentation;
-(id)debugDescription;
-(id)init;
-(id)initWithConstantPreset:(struct ? *)arg0 ;
-(id)initWithEffectScale:(CGFloat)arg0 ;
-(id)layerEffectsRepresentation;
// -(unk)valueForParameter:(struct _rgbcolor )arg0 inEffectAtIndex:(short)arg1  ;
-(unsigned int)effectTypeAtIndex:(NSUInteger)arg0 ;
-(void)_insertEffectTuple:(struct ? )arg0 atEffectIndex:(NSUInteger)arg1 ;
-(void)addBevelEmbossWithHighlightColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(CGFloat)arg3 shadowColorRed:(unsigned int)arg4 green:(unsigned int)arg5 blue:(unsigned int)arg6 opacity:(CGFloat)arg7 blur:(int)arg8 soften:(int)arg9 bevelStyle:(unsigned int)arg10 ;
-(void)addColorFillWithRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(CGFloat)arg3 blendMode:(unsigned int)arg4 tintable:(BOOL)arg5 ;
-(void)addColorValueRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 forParameter:(unsigned int)arg3 withNewEffectType:(unsigned int)arg4 ;
-(void)addDropShadowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(CGFloat)arg3 blur:(int)arg4 spread:(int)arg5 offset:(int)arg6 angle:(int)arg7 ;
-(void)addEffectsFromPreset:(id)arg0 ;
-(void)addEnumValue:(unsigned int)arg0 forParameter:(unsigned int)arg1 withNewEffectType:(unsigned int)arg2 ;
-(void)addExtraShadowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(CGFloat)arg3 blur:(int)arg4 spread:(int)arg5 offset:(int)arg6 angle:(int)arg7 ;
-(void)addFloatValue:(CGFloat)arg0 forParameter:(unsigned int)arg1 withNewEffectType:(unsigned int)arg2 ;
-(void)addGradientFillWithTopColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 bottomColorRed:(unsigned int)arg3 green:(unsigned int)arg4 blue:(unsigned int)arg5 opacity:(CGFloat)arg6 blendMode:(unsigned int)arg7 ;
-(void)addHueSaturationWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 angle:(int)arg3 width:(int)arg4 tintable:(BOOL)arg5 ;
-(void)addInnerGlowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(CGFloat)arg3 blur:(int)arg4 blendMode:(unsigned int)arg5 ;
-(void)addInnerShadowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(CGFloat)arg3 blur:(int)arg4 offset:(int)arg5 angle:(int)arg6 blendMode:(unsigned int)arg7 ;
-(void)addIntValue:(NSUInteger)arg0 forParameter:(unsigned int)arg1 withNewEffectType:(unsigned int)arg2 ;
-(void)addOuterGlowWithColorRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 opacity:(CGFloat)arg3 blur:(int)arg4 spread:(int)arg5 ;
-(void)addOutputOpacityWithOpacity:(CGFloat)arg0 ;
-(void)addShapeOpacityWithOpacity:(CGFloat)arg0 ;
// -(void)addValue:(unk)arg0 forParameter:(CGFloat)arg1 withEffectType:(NSUInteger)arg2 atEffectIndex:(struct _rgbcolor )arg3  ;
// -(void)addValue:(unk)arg0 forParameter:(CGFloat)arg1 withNewEffectType:(NSUInteger)arg2  ;
-(void)appendAngleValue:(NSInteger)arg0 forParameter:(unsigned int)arg1 withEffectType:(unsigned int)arg2 ;
-(void)appendColorValueRed:(unsigned int)arg0 green:(unsigned int)arg1 blue:(unsigned int)arg2 forParameter:(unsigned int)arg3 withEffectType:(unsigned int)arg4 ;
-(void)appendEnumValue:(unsigned int)arg0 forParameter:(unsigned int)arg1 withEffectType:(unsigned int)arg2 ;
-(void)appendFloatValue:(CGFloat)arg0 forParameter:(unsigned int)arg1 withEffectType:(unsigned int)arg2 ;
-(void)appendIntValue:(NSUInteger)arg0 forParameter:(unsigned int)arg1 withEffectType:(unsigned int)arg2 ;
// -(void)appendValue:(unk)arg0 forParameter:(CGFloat)arg1 withEffectType:(NSUInteger)arg2  ;


@end


#endif