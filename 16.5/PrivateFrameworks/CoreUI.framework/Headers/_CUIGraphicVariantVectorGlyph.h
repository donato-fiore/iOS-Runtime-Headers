// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CUIGRAPHICVARIANTVECTORGLYPH_H
#define _CUIGRAPHICVARIANTVECTORGLYPH_H



#import "CUINamedVectorGlyph.h"
#import "CUIVectorGlyphGraphicVariantOptions.h"

@interface _CUIGraphicVariantVectorGlyph : CUINamedVectorGlyph

@property (retain, nonatomic) CUIVectorGlyphGraphicVariantOptions *options; // ivar: _options


-(BOOL)_containsWideGamutColor;
-(CGFloat)baselineOffset;
-(CGFloat)baselineOffsetUnrounded;
-(NSInteger)_effectiveCenteringStyle;
-(NSUInteger)numberOfHierarchyLayers;
-(NSUInteger)numberOfMulticolorLayers;
-(id)_createContentEffectsForTargetSize:(struct CGSize )arg0 scale:(*CGFloat)arg1 ;
-(id)_createShapeEffectsForTargetSize:(struct CGSize )arg0 scale:(*CGFloat)arg1 ;
-(id)_initWithBaseGlyph:(id)arg0 options:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)graphicVariantWithOptions:(id)arg0 ;
-(struct CGGradient *)_createBackgroundGradientWithColors:(id)arg0 ;
-(struct CGImage *)_createBackgroundImageOfSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)_createGraphicVariantImageAtScale:(CGFloat)arg0 backgroundImage:(struct CGImage *)arg1 symbolImage:(struct CGImage *)arg2 destinationRect:(struct CGRect )arg3 disableColorFill:(BOOL)arg4 outputScale:(CGFloat)arg5 ;
-(struct CGImage *)image;
-(struct CGImage *)imageWithColorResolver:(id)arg0 ;
-(struct CGImage *)imageWithHierarchyColorResolver:(id)arg0 ;
-(struct CGImage *)imageWithPaletteColorResolver:(id)arg0 ;
-(struct CGImage *)imageWithPaletteColors:(id)arg0 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 withColorResolver:(id)arg2 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 withHierarchyColorResolver:(id)arg2 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 withPaletteColorResolver:(id)arg2 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 withPaletteColors:(id)arg2 ;
-(struct CGPath *)CGPath;
-(struct CGPath *)_createBackgroundShapeInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 ;
-(struct CGRect )_backgroundShapeBoundsForTargetSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGRect )_safeContentAreaBounds;
-(struct CGRect )_safeContentAreaBoundsForBackgroundSize:(struct CGSize )arg0 ;
-(struct CGRect )_scaledContentRectForBackgroundSize:(struct CGSize )arg0 safeContentArea:(struct CGRect )arg1 ;
-(struct CGRect )alignmentRect;
-(struct CGRect )alignmentRectForTargetSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGRect )alignmentRectUnrounded;
-(struct CGRect )contentBounds;
-(struct CGRect )contentBoundsUnrounded;
-(struct CGRect )interiorAlignmentRect;
-(struct CGRect )interiorAlignmentRectForTargetSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGRect )interiorAlignmentRectUnrounded;
-(struct CGSize )_sizeOfBackgroundShape;
-(void)_drawBackgroundShapeInContext:(struct CGContext *)arg0 targetSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(void)dealloc;
-(void)drawHierarchyLayerAtIndex:(NSUInteger)arg0 inContext:(struct CGContext *)arg1 withColorResolver:(id)arg2 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 withPaletteColors:(id)arg1 ;
-(void)drawMulticolorLayerAtIndex:(NSUInteger)arg0 inContext:(struct CGContext *)arg1 withColorResolver:(id)arg2 ;
-(void)drawPaletteLayerAtIndex:(NSUInteger)arg0 inContext:(struct CGContext *)arg1 withColorResolver:(id)arg2 ;


@end


#endif