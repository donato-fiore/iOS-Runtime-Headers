// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUICATALOG_H
#define CUICATALOG_H

@class NSMapTable, NSBundle, NSString, NSCache, NSDictionary;

#import <Foundation/Foundation.h>


@interface CUICatalog : NSObject {
    NSMapTable *_storageMapTable;
    NSBundle *_bundle;
    NSString *_assetStoreName;
    NSCache *_lookupCache;
    NSCache *_negativeCache;
    NSCache *_localObjectCache;
    NSDictionary *_vibrantColorMatrixTints;
    unsigned short _preferredLocalization;
    BOOL _purgeWhenFinished;
    BOOL _fileHasDisplayGamutInKeySpace;
    BOOL _reserved;
}


@property (nonatomic) NSUInteger storageRef; // ivar: _storageRef


+(BOOL)isValidAssetStorageWithURL:(id)arg0 ;
+(BOOL)isValidLCRWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)bestMatchUsingImages:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 ;
+(id)bestMatchUsingImages:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSUInteger)arg4 layoutDirection:(NSUInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 ;
+(id)bestMatchUsingImages:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 sizeClassHorizontal:(NSInteger)arg4 sizeClassVertical:(NSInteger)arg5 ;
+(id)bestMatchUsingImages:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 displayGamut:(NSUInteger)arg3 deviceSubtype:(NSUInteger)arg4 sizeClassHorizontal:(NSInteger)arg5 sizeClassVertical:(NSInteger)arg6 ;
// +(id)bestMatchUsingObjects:(id)arg0 getAttributeValueUsing:(id)arg1 scaleFactor:(unk)arg2 deviceIdiom:(CGFloat)arg3 deviceSubtype:(NSInteger)arg4 displayGamut:(NSUInteger)arg5 deploymentTarget:(NSInteger)arg6 layoutDirection:(NSInteger)arg7 sizeClassHorizontal:(NSInteger)arg8 sizeClassVertical:(NSInteger)arg9 memoryClass:(NSInteger)arg10 graphicsFeatureSetClass:(NSInteger)arg11 graphicsFallBackOrder:(NSInteger)arg12 deviceSubtypeFallBackOrder:(id)arg13  ;
// +(id)bestMatchUsingObjects:(id)arg0 getAttributeValueUsing:(id)arg1 scaleFactor:(unk)arg2 deviceIdiom:(CGFloat)arg3 deviceSubtype:(NSInteger)arg4 displayGamut:(NSUInteger)arg5 deploymentTarget:(NSInteger)arg6 layoutDirection:(NSInteger)arg7 sizeClassHorizontal:(NSInteger)arg8 sizeClassVertical:(NSInteger)arg9 memoryClass:(NSInteger)arg10 graphicsFeatureSetClass:(NSInteger)arg11 graphicsFallBackOrder:(NSInteger)arg12 deviceSubtypeFallBackOrder:(id)arg13 platform:(id)arg14  ;
+(id)defaultUICatalogForBundle:(id)arg0 ;
+(struct CGColor *)newColorByAdjustingLightnessOfColor:(struct CGColor *)arg0 darker:(BOOL)arg1 ;
-(BOOL)_doStyledQuartzDrawingInContext:(struct CGContext *)arg0 inBounds:(struct CGRect )arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 drawingHandler:(id)arg4 ;
-(BOOL)_effectStyle:(*NSUInteger)arg0 state:(*NSInteger)arg1 presentationState:(*NSInteger)arg2 value:(*NSInteger)arg3 resolution:(*NSUInteger)arg4 dimension1:(*NSUInteger)arg5 appearance:(*NSInteger)arg6 fromStyleConfiguration:(id)arg7 ;
-(BOOL)canGetShapeEffectRenditionWithKey:(id)arg0 ;
-(BOOL)containsLookupForName:(id)arg0 ;
-(BOOL)drawGlyphs:(*unsigned short)arg0 atPositions:(struct CGPoint *)arg1 inContext:(struct CGContext *)arg2 withFont:(struct __CTFont *)arg3 count:(NSUInteger)arg4 stylePresetName:(id)arg5 styleConfiguration:(id)arg6 foregroundColor:(struct CGColor *)arg7 ;
-(BOOL)fillStyledPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 ;
-(BOOL)fillStyledRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 ;
-(BOOL)hasStylePresetWithName:(id)arg0 ;
-(BOOL)hasStylePresetWithName:(id)arg0 styleConfiguration:(id)arg1 ;
-(BOOL)imageExistsWithName:(id)arg0 ;
-(BOOL)imageExistsWithName:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(BOOL)strokeStyledPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 ;
-(NSUInteger)_storageRefForRendition:(id)arg0 representsODRContent:(*BOOL)arg1 ;
-(NSUInteger)_themeRef;
-(id)_baseAtlasContentsKeyForName:(id)arg0 ;
-(id)_baseAtlasKeyForName:(id)arg0 ;
-(id)_baseColorKeyForName:(id)arg0 ;
-(id)_baseImageKeyForName:(id)arg0 ;
-(id)_baseKeyForName:(id)arg0 ;
-(id)_baseModelForKeyForName:(id)arg0 ;
-(id)_baseMultisizeImageSetKeyForName:(id)arg0 ;
-(id)_baseRecognitionGroupImageSetKeyForName:(id)arg0 ;
-(id)_baseRecognitionObjectKeyForName:(id)arg0 ;
-(id)_baseTextureKeyForName:(id)arg0 ;
-(id)_baseVectorGlyphForName:(id)arg0 ;
-(id)_baseVectorRenditionKey:(id)arg0 ;
-(id)_dataWithName:(id)arg0 deviceIdiom:(NSInteger)arg1 deviceSubtype:(NSUInteger)arg2 memoryClass:(NSUInteger)arg3 graphicsClass:(NSUInteger)arg4 appearanceIdentifier:(NSInteger)arg5 graphicsFallBackOrder:(id)arg6 deviceSubtypeFallBackOrder:(id)arg7 ;
-(id)_defaultAssetRenditionKey:(id)arg0 ;
-(id)_defaultLayerStackWithScaleFactor:(CGFloat)arg0 deviceIdiom:(NSInteger)arg1 deviceSubtype:(NSUInteger)arg2 sizeClassHorizontal:(NSInteger)arg3 sizeClassVertical:(NSInteger)arg4 ;
-(id)_defaultNamedAssetWithScaleFactor:(CGFloat)arg0 deviceIdiom:(NSInteger)arg1 deviceSubtype:(NSUInteger)arg2 sizeClassHorizontal:(NSInteger)arg3 sizeClassVertical:(NSInteger)arg4 ;
-(id)_imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 memoryClass:(NSUInteger)arg8 graphicsClass:(NSUInteger)arg9 appearanceIdentifier:(NSInteger)arg10 graphicsFallBackOrder:(id)arg11 deviceSubtypeFallBackOrder:(id)arg12 ;
-(id)_layerStackWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 sizeClassHorizontal:(NSInteger)arg4 sizeClassVertical:(NSInteger)arg5 ;
-(id)_modelWithName:(id)arg0 ;
-(id)_nameForAppearanceIdentifier:(NSInteger)arg0 ;
-(id)_namedImageAtlasWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 displayGamut:(NSInteger)arg3 deviceSubtype:(NSUInteger)arg4 memoryClass:(NSUInteger)arg5 graphicsClass:(NSUInteger)arg6 graphicsFallBackOrder:(id)arg7 deviceSubtypeFallBackOrder:(id)arg8 ;
-(id)_namedLookupWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 appearanceName:(id)arg8 ;
-(id)_namedTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 appearanceName:(id)arg2 ;
-(id)_namedTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 appearanceName:(id)arg3 ;
-(id)_namedVectorImageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 appearanceIdentifier:(NSInteger)arg8 ;
-(id)_recognitionImageWithName:(id)arg0 ;
-(id)_recognitionObjectWithName:(id)arg0 ;
-(id)_resolvedRenditionKeyForName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 memoryClass:(NSUInteger)arg8 graphicsClass:(NSUInteger)arg9 graphicsFallBackOrder:(id)arg10 deviceSubtypeFallBackOrder:(id)arg11 withBaseKeySelector:(SEL)arg12 adjustRenditionKeyWithBlock:(id)arg13 ;
-(id)_resolvedRenditionKeyFromThemeRef:(NSUInteger)arg0 withBaseKey:(id)arg1 scaleFactor:(CGFloat)arg2 deviceIdiom:(NSInteger)arg3 deviceSubtype:(NSUInteger)arg4 displayGamut:(NSInteger)arg5 layoutDirection:(NSInteger)arg6 sizeClassHorizontal:(NSInteger)arg7 sizeClassVertical:(NSInteger)arg8 memoryClass:(NSUInteger)arg9 graphicsClass:(NSUInteger)arg10 graphicsFallBackOrder:(id)arg11 deviceSubtypeFallBackOrder:(id)arg12 adjustRenditionKeyWithBlock:(id)arg13 ;
-(id)_themeStore;
-(id)allImageNames;
-(id)appearanceNames;
-(id)colorWithName:(id)arg0 displayGamut:(NSInteger)arg1 ;
-(id)colorWithName:(id)arg0 displayGamut:(NSInteger)arg1 appearanceName:(id)arg2 ;
-(id)colorWithName:(id)arg0 displayGamut:(NSInteger)arg1 deviceIdiom:(NSInteger)arg2 ;
-(id)colorWithName:(id)arg0 displayGamut:(NSInteger)arg1 deviceIdiom:(NSInteger)arg2 appearanceName:(id)arg3 ;
-(id)compositingFilterForStylePresetWithName:(id)arg0 styleConfiguration:(id)arg1 ;
-(id)compositingFilterForStylePresetWithName:(id)arg0 styleConfiguration:(id)arg1 foregroundColor:(struct CGColor *)arg2 ;
-(id)dataWithName:(id)arg0 ;
-(id)dataWithName:(id)arg0 appearanceName:(id)arg1 ;
-(id)dataWithName:(id)arg0 deviceIdiom:(NSInteger)arg1 deviceSubtype:(NSUInteger)arg2 memoryClass:(NSUInteger)arg3 graphicsClass:(NSUInteger)arg4 appearanceIdentifier:(NSInteger)arg5 graphicsFallBackOrder:(id)arg6 deviceSubtypeFallBackOrder:(id)arg7 ;
-(id)dataWithName:(id)arg0 deviceIdiom:(NSInteger)arg1 deviceSubtype:(NSUInteger)arg2 memoryClass:(NSUInteger)arg3 graphicsClass:(NSUInteger)arg4 graphicsFallBackOrder:(id)arg5 deviceSubtypeFallBackOrder:(id)arg6 ;
-(id)debugDescription;
-(id)defaultLayerStackWithScaleFactor:(CGFloat)arg0 deviceIdiom:(NSInteger)arg1 deviceSubtype:(NSUInteger)arg2 sizeClassHorizontal:(NSInteger)arg3 sizeClassVertical:(NSInteger)arg4 ;
-(id)defaultNamedAssetWithScaleFactor:(CGFloat)arg0 deviceIdiom:(NSInteger)arg1 deviceSubtype:(NSUInteger)arg2 sizeClassHorizontal:(NSInteger)arg3 sizeClassVertical:(NSInteger)arg4 ;
-(id)iconImageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 desiredSize:(struct CGSize )arg8 ;
-(id)iconImageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 desiredSize:(struct CGSize )arg8 appearanceName:(id)arg9 ;
-(id)iconImageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSUInteger)arg2 layoutDirection:(NSInteger)arg3 desiredSize:(struct CGSize )arg4 ;
-(id)iconImageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSUInteger)arg2 layoutDirection:(NSInteger)arg3 desiredSize:(struct CGSize )arg4 appearanceName:(id)arg5 ;
-(id)imageByStylingImage:(struct CGImage *)arg0 stylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3 scale:(CGFloat)arg4 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 appearanceName:(id)arg2 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 appearanceName:(id)arg3 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 appearanceName:(id)arg4 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 appearanceName:(id)arg8 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 memoryClass:(NSInteger)arg8 graphicsClass:(NSInteger)arg9 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 memoryClass:(NSUInteger)arg8 graphicsClass:(NSUInteger)arg9 appearanceIdentifier:(NSInteger)arg10 graphicsFallBackOrder:(id)arg11 deviceSubtypeFallBackOrder:(id)arg12 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 memoryClass:(NSUInteger)arg8 graphicsClass:(NSUInteger)arg9 graphicsFallBackOrder:(id)arg10 deviceSubtypeFallBackOrder:(id)arg11 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 sizeClassHorizontal:(NSInteger)arg4 sizeClassVertical:(NSInteger)arg5 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 sizeClassHorizontal:(NSInteger)arg4 sizeClassVertical:(NSInteger)arg5 appearanceName:(id)arg6 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 layoutDirection:(NSInteger)arg3 adjustRenditionKeyWithBlock:(id)arg4 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 layoutDirection:(NSInteger)arg3 ;
-(id)imageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 layoutDirection:(NSInteger)arg3 appearanceName:(id)arg4 ;
-(id)imagesWithName:(id)arg0 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithName:(id)arg0 fromBundle:(id)arg1 ;
-(id)initWithName:(id)arg0 fromBundle:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)layerStackWithName:(id)arg0 ;
-(id)layerStackWithName:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(id)layerStackWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 ;
-(id)layerStackWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 sizeClassHorizontal:(NSInteger)arg4 sizeClassVertical:(NSInteger)arg5 ;
-(id)localObjectCache;
-(id)lookupCache;
-(id)modelWithName:(id)arg0 ;
-(id)namedImageAtlasWithName:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(id)namedImageAtlasWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 ;
-(id)namedImageAtlasWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 displayGamut:(NSInteger)arg3 deviceSubtype:(NSUInteger)arg4 memoryClass:(NSUInteger)arg5 graphicsClass:(NSUInteger)arg6 graphicsFallBackOrder:(id)arg7 deviceSubtypeFallBackOrder:(id)arg8 ;
-(id)namedImageAtlasWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSUInteger)arg2 ;
-(id)namedLookupWithName:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(id)namedLookupWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 ;
-(id)namedLookupWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 appearanceName:(id)arg8 ;
-(id)namedLookupWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 sizeClassHorizontal:(NSInteger)arg4 sizeClassVertical:(NSInteger)arg5 ;
-(id)namedRecognitionGroupWithName:(id)arg0 ;
-(id)namedTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(id)namedTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 appearanceName:(id)arg2 ;
-(id)namedTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 ;
-(id)namedTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 appearanceName:(id)arg3 ;
-(id)namedVectorGlyphWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 glyphSize:(NSInteger)arg3 glyphWeight:(NSInteger)arg4 glyphPointSize:(CGFloat)arg5 appearanceName:(id)arg6 ;
-(id)namedVectorGlyphWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 layoutDirection:(NSInteger)arg3 glyphSize:(NSInteger)arg4 glyphWeight:(NSInteger)arg5 glyphPointSize:(CGFloat)arg6 appearanceName:(id)arg7 ;
-(id)namedVectorImageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 ;
-(id)namedVectorImageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 deviceIdiom:(NSInteger)arg2 deviceSubtype:(NSUInteger)arg3 displayGamut:(NSInteger)arg4 layoutDirection:(NSInteger)arg5 sizeClassHorizontal:(NSInteger)arg6 sizeClassVertical:(NSInteger)arg7 appearanceName:(id)arg8 ;
-(id)namedVectorImageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 layoutDirection:(NSInteger)arg3 ;
-(id)namedVectorImageWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 layoutDirection:(NSInteger)arg3 appearanceName:(id)arg4 ;
-(id)negativeCache;
-(id)newShapeEffectPresetForStylePresetName:(id)arg0 styleConfiguration:(id)arg1 ;
-(id)newShapeEffectPresetWithRenditionKey:(id)arg0 ;
-(id)newShapeEffectStackForStylePresetName:(id)arg0 styleConfiguration:(id)arg1 foregroundColor:(struct CGColor *)arg2 ;
-(id)newTextEffectStackForStylePresetName:(id)arg0 styleConfiguration:(id)arg1 foregroundColor:(struct CGColor *)arg2 ;
-(id)parentNamedImageAtlasForImageNamed:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSUInteger)arg2 ;
-(id)parentNamedImageAtlastForImageNamed:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(id)renditionKeyForShapeEffectPresetForStylePresetName:(id)arg0 styleConfiguration:(id)arg1 ;
-(id)renditionKeyForShapeEffectPresetWithStyleID:(NSUInteger)arg0 state:(NSInteger)arg1 presentationState:(NSInteger)arg2 value:(NSInteger)arg3 resolution:(NSUInteger)arg4 dimension1:(NSUInteger)arg5 ;
-(id)renditionKeyForShapeEffectPresetWithStylePresetName:(id)arg0 state:(NSInteger)arg1 presentationState:(NSInteger)arg2 value:(NSInteger)arg3 resolution:(NSUInteger)arg4 dimension1:(NSUInteger)arg5 appearance:(NSInteger)arg6 ;
-(id)textStyleWithName:(id)arg0 deviceIdiom:(NSInteger)arg1 deviceSubtype:(NSUInteger)arg2 displayGamut:(NSInteger)arg3 sizeClassHorizontal:(NSInteger)arg4 sizeClassVertical:(NSInteger)arg5 ;
-(id)textStyleWithName:(id)arg0 deviceIdiom:(NSInteger)arg1 deviceSubtype:(NSUInteger)arg2 displayGamut:(NSInteger)arg3 sizeClassHorizontal:(NSInteger)arg4 sizeClassVertical:(NSInteger)arg5 appearanceName:(id)arg6 ;
-(id)textStyleWithName:(id)arg0 displayGamut:(NSInteger)arg1 ;
-(id)textStyleWithName:(id)arg0 displayGamut:(NSInteger)arg1 appearanceName:(id)arg2 ;
-(int)blendModeForStylePresetWithName:(id)arg0 styleConfiguration:(id)arg1 ;
-(struct ? )styledInsetsForStylePresetName:(id)arg0 styleConfiguration:(id)arg1 foregroundColor:(struct CGColor *)arg2 scale:(CGFloat)arg3 ;
-(struct CGColor *)equivalentForegroundColorForStylePresetWithName:(id)arg0 styleConfiguration:(id)arg1 ;
-(struct CGColor *)equivalentForegroundColorForStylePresetWithName:(id)arg0 styleConfiguration:(id)arg1 baseForegroundColor:(struct CGColor *)arg2 ;
-(struct CGPDFDocument *)pdfDocumentWithName:(id)arg0 ;
-(struct CGPDFDocument *)pdfDocumentWithName:(id)arg0 appearanceName:(id)arg1 ;
-(void)_resourceUnPinnedNotification:(id)arg0 ;
-(void)_setPreferredLocalization:(id)arg0 ;
-(void)_vibrantColorMatrixBrightnessSaturationForColor:(struct CGColor *)arg0 saturation:(*CGFloat)arg1 brightness:(*CGFloat)arg2 ;
-(void)clearCachedImageResources;
-(void)dealloc;
-(void)enumerateNamedLookupsUsingBlock:(id)arg0 ;
-(void)preloadNamedAtlasWithScaleFactor:(CGFloat)arg0 andNames:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif