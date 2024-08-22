// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUINAMEDVECTORGLYPH_H
#define CUINAMEDVECTORGLYPH_H

@class NSDictionary;
@protocol NSCopying;


#import "CUINamedLookup.h"
#import "CUICatalog.h"

@interface CUINamedVectorGlyph : CUINamedLookup <NSCopying>

 {
    CGFloat _pointSize;
    CGFloat _lookedupScaleFactor;
    *CGImage _cgImageRef;
    CGFloat _fontMatchingScaleFactor;
    CUICatalog *_catalog;
    NSInteger _layoutDirection;
    BOOL _generatedImage;
    BOOL _flippable;
    BOOL _canUsePathConcatenation;
    short _containsNamedColorStyles;
    NSInteger _glyphSize;
    NSInteger _glyphWeight;
    CUINamedLookup *_ultralightInterpolationSource;
    CUINamedLookup *_blackInterpolationSource;
    NSDictionary *_templatePaths;
    NSDictionary *_multicolorPaths;
    NSDictionary *_hierarchicalPaths;
}


@property (readonly, nonatomic) CGRect alignmentRect;
@property (readonly, nonatomic) CGRect alignmentRectUnrounded;
@property (readonly, nonatomic) CGFloat baselineOffset;
@property (readonly, nonatomic) CGFloat baselineOffsetUnrounded;
@property (readonly, nonatomic) CGFloat capHeight;
@property (readonly, nonatomic) CGFloat capHeightUnrounded;
@property (readonly, nonatomic) CGRect contentBounds;
@property (readonly, nonatomic) CGRect contentBoundsUnrounded;
@property (nonatomic) CGFloat fontMatchingScaleFactor;
@property (readonly, nonatomic) CGRect interiorAlignmentRect;
@property (readonly, nonatomic) CGRect interiorAlignmentRectUnrounded;
@property (readonly, nonatomic) BOOL isFlippable;
@property (readonly, nonatomic) NSInteger preferredRenderingMode;
@property (readonly, nonatomic) float templateVersion;
@property CGFloat variableMaxValue; // ivar: _variableMaxValue
@property CGFloat variableMinValue; // ivar: _variableMinValue


+(id)_colorStyleNames;
+(id)_knockoutStyleNames;
+(id)_layerHierarchyStyleNames;
-(BOOL)_canUsePathConcatenation;
-(BOOL)_containsWideGamutColor;
-(BOOL)containsNamedColorStyle:(id)arg0 ;
-(BOOL)containsNamedColorStyles;
-(BOOL)generatedImage;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKnockoutEnabledForHierarchicalLayerAtIndex:(NSInteger)arg0 opacity:(*CGFloat)arg1 ;
-(BOOL)isKnockoutEnabledForMulticolorLayerAtIndex:(NSInteger)arg0 opacity:(*CGFloat)arg1 ;
-(BOOL)isKnockoutEnabledForPaletteLayerAtIndex:(NSInteger)arg0 opacity:(*CGFloat)arg1 ;
-(CGFloat)_interpolatedBaselineOffsetWithWeight:(NSInteger)arg0 glyphSize:(NSInteger)arg1 fromUltralight:(CGFloat)arg2 regular:(CGFloat)arg3 black:(CGFloat)arg4 ;
-(CGFloat)_interpolatedCapHeightWithWeight:(NSInteger)arg0 glyphSize:(NSInteger)arg1 fromUltralight:(CGFloat)arg2 regular:(CGFloat)arg3 black:(CGFloat)arg4 ;
-(CGFloat)_requestedPointSizeRatio;
-(CGFloat)pointSize;
-(CGFloat)referencePointSize;
-(CGFloat)scale;
-(NSInteger)glyphSize;
-(NSInteger)glyphWeight;
-(NSInteger)layoutDirection;
-(NSUInteger)hash;
-(NSUInteger)numberOfHierarchyLayers;
-(NSUInteger)numberOfMulticolorLayers;
-(NSUInteger)numberOfPaletteLayers;
-(NSUInteger)numberOfTemplateLayers;
-(id)_blackInterpolationSource;
-(id)_catalog;
-(id)_layersForRenderingMode:(int)arg0 inRendition:(id)arg1 ;
-(id)_referencePathsForHierarchicalMode;
-(id)_referencePathsForMulticolorMode;
-(id)_referencePathsForTemplateMode;
-(id)_stylePrefixForRenderingMode:(int)arg0 ;
-(id)_ultralightInterpolationSource;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)graphicVariantWithOptions:(id)arg0 ;
-(id)hierarchicalLayerThresholds;
-(id)hierarchyLayers;
-(id)hierarchyLevels;
-(id)initWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 pointSize:(CGFloat)arg3 fromCatalog:(id)arg4 usingRenditionKey:(id)arg5 fromTheme:(NSUInteger)arg6 ;
-(id)intWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 pointSize:(CGFloat)arg3 weight:(NSInteger)arg4 glyphSize:(NSInteger)arg5 interpolatedFromRegular:(id)arg6 ultralight:(id)arg7 black:(id)arg8 fromCatalog:(id)arg9 themeRef:(NSUInteger)arg10 ;
-(id)knownAvailableVectorSizes;
-(id)makeLayerWithColorResolver:(id)arg0 ;
-(id)multicolorColorNames;
-(id)multicolorLayerColorNames;
-(id)multicolorLayerThresholds;
-(id)paletteLayerThresholds;
-(id)paletteLevels;
-(id)templateLayerThresholds;
-(id)templateLayersInRendition:(id)arg0 ;
-(struct ? )_interpolatedAlignmentRectInsetsWithWeight:(NSInteger)arg0 glyphSize:(NSInteger)arg1 fromUltralight:(struct ? )arg2 regular:(struct ? )arg3 black:(struct ? )arg4 ;
-(struct CGColor *)_colorForVariableThreshold:(CGFloat)arg0 inRangeColor:(struct CGColor *)arg1 outOfRangeColor:(struct CGColor *)arg2 ;
-(struct CGImage *)image;
-(struct CGImage *)imageWithColorResolver:(id)arg0 ;
-(struct CGImage *)imageWithHierarchicalPrimaryColor:(struct CGColor *)arg0 ;
-(struct CGImage *)imageWithHierarchyColorResolver:(id)arg0 ;
-(struct CGImage *)imageWithPaletteColorResolver:(id)arg0 ;
-(struct CGImage *)imageWithPaletteColors:(id)arg0 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 hierarchicalPrimaryColor:(struct CGColor *)arg2 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 withColorResolver:(id)arg2 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 withHierarchyColorResolver:(id)arg2 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 withPaletteColorResolver:(id)arg2 ;
-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 withPaletteColors:(id)arg2 ;
-(struct CGPath *)CGPath;
-(struct CGPath *)_interpolatedPathWithWeight:(NSInteger)arg0 glyphSize:(NSInteger)arg1 fromUltralightSmall:(struct CGPath *)arg2 regularSmall:(struct CGPath *)arg3 blackSmall:(struct CGPath *)arg4 ;
-(struct CGRect )alignmentRectForTargetSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGRect )interiorAlignmentRectForTargetSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGSVGDocument *)referenceGlyph;
-(struct CGSize )_interpolatedCanvasSizeWithWeight:(NSInteger)arg0 glyphSize:(NSInteger)arg1 fromUltralight:(struct CGSize )arg2 regular:(struct CGSize )arg3 black:(struct CGSize )arg4 ;
-(struct CGSize )referenceCanvasSize;
-(void)_drawHierarchicalLayerNamed:(id)arg0 inContext:(struct CGContext *)arg1 colorResolver:(id)arg2 ;
-(void)_drawHierarchicalLayersInContext:(struct CGContext *)arg0 scaleFactor:(CGFloat)arg1 targetSize:(struct CGSize )arg2 colorResolver:(id)arg3 ;
-(void)_drawMulticolorLayerNamed:(id)arg0 inContext:(struct CGContext *)arg1 colorResolver:(id)arg2 ;
-(void)_drawMulticolorLayersInContext:(struct CGContext *)arg0 scaleFactor:(CGFloat)arg1 targetSize:(struct CGSize )arg2 colorResolver:(id)arg3 ;
-(void)_drawTemplateLayerNamed:(id)arg0 inContext:(struct CGContext *)arg1 scaleFactor:(CGFloat)arg2 targetSize:(struct CGSize )arg3 primaryColor:(struct CGColor *)arg4 tertiaryColor:(struct CGColor *)arg5 ;
-(void)_lookupCatalogImageForIdiom:(NSInteger)arg0 ;
-(void)_setBlackInterpolationSource:(id)arg0 ;
-(void)_setCanUsePathConcatenation:(BOOL)arg0 ;
-(void)_setCatalog:(id)arg0 ;
-(void)_setContainsNamedColorStyles:(short)arg0 ;
-(void)_setFlippable:(BOOL)arg0 ;
-(void)_setGlyphSize:(NSInteger)arg0 ;
-(void)_setGlyphWeight:(NSInteger)arg0 ;
-(void)_setLayoutDirection:(NSInteger)arg0 ;
-(void)_setPointSize:(CGFloat)arg0 ;
-(void)_setScale:(CGFloat)arg0 ;
-(void)_setUltralightInterpolationSource:(id)arg0 ;
-(void)dealloc;
-(void)drawHierarchyLayerAtIndex:(NSUInteger)arg0 inContext:(struct CGContext *)arg1 withColorResolver:(id)arg2 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 withPaletteColors:(id)arg1 ;
-(void)drawMulticolorLayerAtIndex:(NSUInteger)arg0 inContext:(struct CGContext *)arg1 withColorResolver:(id)arg2 ;
-(void)drawPaletteLayerAtIndex:(NSUInteger)arg0 inContext:(struct CGContext *)arg1 withColorResolver:(id)arg2 ;
-(void)setRepresentsOnDemandContent:(BOOL)arg0 ;


@end


#endif