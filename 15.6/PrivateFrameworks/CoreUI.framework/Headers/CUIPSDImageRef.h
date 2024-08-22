// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIPSDIMAGEREF_H
#define CUIPSDIMAGEREF_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_CUIPSDSublayerInfo.h"

@interface CUIPSDImageRef : NSObject {
    BOOL _parsedForLayers;
    _CUIPSDSublayerInfo *_rootLayers;
}


@property (nonatomic) int file; // ivar: _file
@property (copy, nonatomic) NSString *path; // ivar: _path
@property (nonatomic) *void psd; // ivar: _psd


+(BOOL)isValidPSDResourceAtPath:(id)arg0 ;
+(BOOL)isValidPSDResourceAtPath:(id)arg0 withImageInfo:(struct _PSDImageInfo *)arg1 ;
+(BOOL)isValidPSDResourceAtPath:(id)arg0 withLayerCount:(*unsigned int)arg1 ;
+(BOOL)isValidPSDResourceAtPath:(id)arg0 withLayerCount:(*unsigned int)arg1 validateLayers:(BOOL)arg2 ;
-(*void)_psdFileWithLayers:(BOOL)arg0 ;
-(*void)_psdLayerRecordAtAbsoluteIndex:(unsigned int)arg0 ;
-(BOOL)_treatDividerAsLayer;
-(BOOL)_visibilityAtAbsoluteIndex:(unsigned int)arg0 ;
-(BOOL)loadPSDFileWithLayers:(BOOL)arg0 ;
-(BOOL)openImageFile;
-(BOOL)visibilityAtLayer:(unsigned int)arg0 ;
-(CGFloat)_fillOpacityAtAbsoluteIndex:(unsigned int)arg0 ;
-(CGFloat)_opacityAtAbsoluteIndex:(unsigned int)arg0 ;
-(id)_bevelEmbossFromLayerEffectsInfo:(*void)arg0 ;
-(id)_colorOverlayFromLayerEffectsInfo:(*void)arg0 ;
-(id)_copySublayerInfoAtAbsoluteIndex:(unsigned int)arg0 atRoot:(BOOL)arg1 ;
-(id)_createMaskFromSlice:(unsigned int)arg0 atAbsoluteIndex:(unsigned int)arg1 ;
-(id)_dropShadowFromLayerEffectsInfo:(*void)arg0 ;
-(id)_fillSampleAtAbsoluteIndex:(unsigned int)arg0 ;
-(id)_gradientAtAbsoluteIndex:(unsigned int)arg0 ;
-(id)_gradientOverlayFromLayerEffectsAtAbsoluteIndex:(unsigned int)arg0 ;
-(id)_imageAtAbsoluteIndex:(unsigned int)arg0 isZeroSizeImage:(*BOOL)arg1 ;
-(id)_imageFromSlice:(unsigned int)arg0 atAbsoluteIndex:(unsigned int)arg1 isEmptyImage:(*BOOL)arg2 ;
-(id)_innerGlowFromLayerEffectsInfo:(*void)arg0 ;
-(id)_innerShadowFromLayerEffectsInfo:(*void)arg0 ;
-(id)_layerEffectsAtAbsoluteIndex:(unsigned int)arg0 ;
-(id)_layerInfo;
-(id)_layerRefAtAbsoluteIndex:(unsigned int)arg0 ;
-(id)_nameAtAbsoluteIndex:(unsigned int)arg0 ;
-(id)_namesOfSublayers:(id)arg0 ;
-(id)_outerGlowFromLayerEffectsInfo:(*void)arg0 ;
-(id)_patternFromSlice:(unsigned int)arg0 atAbsoluteIndex:(unsigned int)arg1 isZeroSizeImage:(*BOOL)arg2 ;
-(id)colorFromDocumentColor:(*CGFloat)arg0 ;
-(id)compositeImage;
-(id)fillSampleAtLayer:(unsigned int)arg0 ;
-(id)gradientAtLayer:(unsigned int)arg0 ;
-(id)imageAtLayer:(unsigned int)arg0 ;
-(id)imageAtLayer:(unsigned int)arg0 isZeroSizeImage:(*BOOL)arg1 ;
-(id)imageFromRef:(struct CGImage *)arg0 ;
-(id)imageFromSlice:(unsigned int)arg0 atAbsoluteLayer:(unsigned int)arg1 ;
-(id)imageFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1 ;
-(id)imageFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1 isEmptyImage:(*BOOL)arg2 ;
-(id)initWithPath:(id)arg0 ;
-(id)layerEnumerator;
-(id)layerNames;
-(id)layerRefAtIndex:(unsigned int)arg0 ;
-(id)maskFromCompositeAlphaChannel:(NSInteger)arg0 ;
-(id)maskFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1 ;
-(id)metadataString;
-(id)patternFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1 ;
-(id)patternFromSlice:(unsigned int)arg0 atLayer:(unsigned int)arg1 isZeroSizeImage:(*BOOL)arg2 ;
-(int)_blendModeAtAbsluteIndex:(unsigned int)arg0 ;
-(int)_layerIndexFromLayerNames:(id)arg0 indexRangeBegin:(int)arg1 indexRangeEnd:(int)arg2 isTopLevel:(BOOL)arg3 ;
-(int)absoluteLayerIndexFromLayerNames:(id)arg0 ;
-(int)cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned int)arg0 ;
-(struct ? )metricsInAlphaChannel:(NSInteger)arg0 forRect:(struct CGRect )arg1 ;
-(struct ? )metricsInMask:(id)arg0 forRect:(struct CGRect )arg1 ;
-(struct CGColorSpace *)copyColorSpace;
-(struct CGImage *)_copyCGImageAtAbsoluteIndex:(unsigned int)arg0 ;
-(struct CGImage *)createCGImageAtLayer:(unsigned int)arg0 ;
-(struct CGImage *)createCompositeCGImage;
-(struct CGRect )_boundsAtAbsoluteIndex:(unsigned int)arg0 ;
-(struct CGRect )boundsAtLayer:(unsigned int)arg0 ;
-(struct CGRect )boundsForSlice:(unsigned int)arg0 ;
-(struct CGSize )size;
-(struct _PSDImageInfo )imageInfo;
-(unsigned int)_absoluteIndexOfRootLayer:(unsigned int)arg0 ;
-(unsigned int)numberOfChannels;
-(unsigned int)numberOfLayers;
-(unsigned int)numberOfSlices;
-(void)_logInvalidAbsoluteIndex:(unsigned int)arg0 psd:(*void)arg1 ;
-(void)dealloc;
-(void)enumerateLayersUsingBlock:(id)arg0 ;


@end


#endif