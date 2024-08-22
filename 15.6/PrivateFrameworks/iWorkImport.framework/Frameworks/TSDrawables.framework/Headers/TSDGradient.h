// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDGRADIENT_H
#define TSDGRADIENT_H

@class NSMutableArray, TSUColor, NSArray;
@protocol TSSPresetSource, TSDMixing, NSCopying, NSMutableCopying;


#import "TSDFill.h"

@interface TSDGradient : TSDFill <TSSPresetSource, TSDMixing, NSCopying, NSMutableCopying>

 {
    NSMutableArray *mStops;
    *CGShading mShadingRef;
    NSUInteger mShadingColorSpace;
}


@property (readonly, nonatomic) TSUColor *firstColor;
@property (readonly, retain, nonatomic) NSArray *gradientStops;
@property (readonly, nonatomic) NSUInteger gradientType; // ivar: mType
@property (readonly, nonatomic) BOOL hasAlpha;
@property (nonatomic, setter=i_setAdvancedGradientFlag:) BOOL i_advancedGradientFlag;
@property (readonly, nonatomic) BOOL isAdvancedGradient; // ivar: mIsAdvancedGradient
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) TSUColor *lastColor;
@property (readonly, nonatomic) CGFloat opacity; // ivar: mOpacity
@property (readonly, nonatomic) *CGShading shadingRef;


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)linearGradientWithGradientStops:(id)arg0 ;
+(id)linearGradientWithStartColor:(id)arg0 endColor:(id)arg1 ;
+(id)presetKinds;
+(id)radialGradientWithGradientStops:(id)arg0 ;
+(id)radialGradientWithStartColor:(id)arg0 endColor:(id)arg1 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
+(void)sortStopsArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringTransform:(id)arg0 ;
-(BOOL)p_isAnyStopP3;
-(NSInteger)fillType;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)p_shadingColorSpace;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithGradientStops:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithGradientStops:(id)arg0 type:(NSUInteger)arg1 opacity:(CGFloat)arg2 ;
-(id)initWithStartColor:(id)arg0 endColor:(id)arg1 type:(NSUInteger)arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)p_insertStopAtFraction:(CGFloat)arg0 ;
-(id)p_insertStopAtFraction:(CGFloat)arg0 withColor:(id)arg1 ;
-(id)p_newColorAtFraction:(CGFloat)arg0 ;
-(id)p_newColorInShadingColorSpaceFromColor:(id)arg0 ;
-(id)p_removeStopAtIndex:(NSUInteger)arg0 ;
-(id)presetKind;
-(id)referenceColor;
-(id)stopAfterFraction:(CGFloat)arg0 ;
-(id)stopAtIndex:(NSUInteger)arg0 ;
-(id)stopBeforeFraction:(CGFloat)arg0 ;
-(struct CGAffineTransform )centeredRadialTransformInRect:(struct CGRect )arg0 ;
-(struct CGContext *)p_beginBitmapWrapperContextInContext:(struct CGContext *)arg0 returningIntegralBounds:(struct CGRect *)arg1 ;
-(struct CGPoint )endPointForPath:(id)arg0 andBounds:(struct CGRect )arg1 ;
-(struct CGPoint )startPointForPath:(id)arg0 andBounds:(struct CGRect )arg1 ;
-(void)dealloc;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)p_endBitmapWrapperContext:(struct CGContext *)arg0 inContext:(struct CGContext *)arg1 withIntegralBounds:(struct CGRect )arg2 ;
-(void)p_evenlyDistributeStops;
-(void)p_insertGradientStop:(id)arg0 ;
-(void)p_moveStopAtIndex:(NSUInteger)arg0 toFraction:(CGFloat)arg1 ;
-(void)p_removeStop:(id)arg0 ;
-(void)p_reverseStopOrder;
-(void)p_setAlpha:(struct CGContext *)arg0 ;
-(void)p_setColorOfStopAtIndex:(NSUInteger)arg0 toColor:(id)arg1 ;
-(void)p_setInflectionOfStopAtIndex:(NSUInteger)arg0 toInflection:(CGFloat)arg1 ;
-(void)p_swapStopAtIndex:(NSUInteger)arg0 withStopAtIndex:(NSUInteger)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 atAngle:(CGFloat)arg2 ;
-(void)releaseShadingRef;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif