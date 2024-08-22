// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUITEXTEFFECTSTACK_H
#define CUITEXTEFFECTSTACK_H



#import "CUIShapeEffectStack.h"

@interface CUITextEffectStack : CUIShapeEffectStack {
    BOOL _renderHighQuality;
}




-(BOOL)useCoreImageRendering;
-(CGFloat)effectiveInteriorFillOpacity;
-(id)initWithEffectPreset:(id)arg0 ;
-(struct CGColor *)newBackgroundPatternColorWithSize:(struct CGSize )arg0 contentScale:(CGFloat)arg1 forContext:(struct CGContext *)arg2 ;
-(struct CGContext *)newGlyphMaskContextForBounds:(struct CGRect )arg0 fromContext:(struct CGContext *)arg1 withScale:(CGFloat)arg2 ;
-(void)_drawShadow:(struct ? )arg0 forGlyphs:(*unsigned short)arg1 inContext:(struct CGContext *)arg2 usingFont:(struct __CTFont *)arg3 atPositions:(struct CGPoint *)arg4 count:(NSUInteger)arg5 ;
-(void)_drawShadow:(struct ? )arg0 forGlyphs:(*unsigned short)arg1 inContext:(struct CGContext *)arg2 usingFont:(struct __CTFont *)arg3 withAdvances:(struct CGSize *)arg4 count:(NSUInteger)arg5 ;
// -(void)_drawShadow:(struct ? )arg0 usingQuartz:(id)arg1 inContext:(unk)arg2  ;
-(void)drawGlyphs:(*unsigned short)arg0 inContext:(struct CGContext *)arg1 usingFont:(struct __CTFont *)arg2 atPositions:(struct CGPoint *)arg3 count:(NSUInteger)arg4 lineHeight:(CGFloat)arg5 inBounds:(struct CGRect )arg6 atScale:(CGFloat)arg7 ;
-(void)drawGlyphs:(*unsigned short)arg0 inContext:(struct CGContext *)arg1 usingFont:(struct __CTFont *)arg2 withAdvances:(struct CGSize *)arg3 count:(NSUInteger)arg4 lineHeight:(CGFloat)arg5 inBounds:(struct CGRect )arg6 atScale:(CGFloat)arg7 ;
-(void)drawProcessedMask:(struct CGContext *)arg0 atBounds:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 withScale:(CGFloat)arg3 ;
// -(void)drawUsingQuartz:(id)arg0 inContext:(unk)arg1 inBounds:(struct CGContext *)arg2 atScale:(struct CGRect )arg3  ;


@end


#endif