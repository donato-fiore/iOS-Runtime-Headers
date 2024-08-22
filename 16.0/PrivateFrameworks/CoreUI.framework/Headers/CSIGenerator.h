// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSIGENERATOR_H
#define CSIGENERATOR_H

@class NSMutableArray, NSData, NSString, NSSet, NSArray, MDLAsset, MDLMesh, MDLSubmesh, NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "CUIShapeEffectPreset.h"
#import "CUIPSDGradient.h"

@interface CSIGenerator : NSObject {
    NSMutableArray *_slices;
    NSMutableArray *_bitmaps;
    NSMutableArray *_metrics;
    BOOL _vectorContainsMulticolorLayers;
    BOOL _vectorContainsHierarchicalLayers;
    NSInteger _targetPlatform;
    short _layout;
    NSData *_rawData;
    NSUInteger _rowbytes;
    NSString *_assetPackIdentifier;
    NSSet *_externalTags;
    CGRect _externalReferenceFrame;
    unsigned short _linkLayout;
    NSArray *_containedNamedElements;
    CGFloat _compressionQuality;
    NSInteger _compressionType;
    NSString *_systemColorName;
}


@property (nonatomic) short alignment; // ivar: _alignment
@property (nonatomic) ? alignmentRectInsets; // ivar: _alignmentRectInsets
@property (nonatomic) BOOL allowsDeepmap2ImageCompression; // ivar: _allowsDeepmap2ImageCompression
@property (nonatomic) BOOL allowsDeepmapImageCompression; // ivar: _allowsDeepmapImageCompression
@property (nonatomic) BOOL allowsHevcCompression; // ivar: _allowsHevcCompression
@property (nonatomic) BOOL allowsMultiPassEncoding; // ivar: _allowsMultiPassEncoding
@property (nonatomic) BOOL allowsOptimalRowbytesPacking; // ivar: _allowsOptimalRowbytesPacking
@property (nonatomic) BOOL allowsPaletteImageCompression; // ivar: _allowsPaletteImageCompression
@property (nonatomic) CGRect alphaCroppedFrame; // ivar: _alphaCroppedFrame
@property (nonatomic) float baseline; // ivar: _baseline
@property (nonatomic) int blendMode; // ivar: _blendMode
@property (nonatomic) float capHeight; // ivar: _capHeight
@property (nonatomic) BOOL clampMetrics; // ivar: _clampMetrics
@property (copy, nonatomic) NSArray *colorComponents; // ivar: _colorComponents
@property (nonatomic) short colorSpaceID; // ivar: _colorSpaceID
@property (nonatomic) CGFloat compressionQuality;
@property NSInteger compressionType;
@property (nonatomic) BOOL cubemap; // ivar: _isCubeMap
@property (retain, nonatomic) CUIShapeEffectPreset *effectPreset; // ivar: _effectPreset
@property (nonatomic, getter=isExcludedFromContrastFilter) BOOL excludedFromContrastFilter; // ivar: _isExcludedFromFilter
@property (nonatomic) int exifOrientation; // ivar: _exifOrientation
@property (copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (retain, nonatomic) CUIPSDGradient *gradient; // ivar: _gradient
@property (nonatomic, getter=isInterpolatable) BOOL interpolatable; // ivar: _isInterpolatable
@property (nonatomic) BOOL isFlippable; // ivar: _isFlippable
@property (nonatomic) BOOL isTintable; // ivar: _isTintable
@property (nonatomic) BOOL isVectorBased; // ivar: _isVectorBased
@property (readonly, nonatomic) NSArray *layerReferences; // ivar: _layerReferences
@property (nonatomic) CGFloat maxPointSize; // ivar: _maxPointSize
@property (readonly, nonatomic) NSArray *meshReferences; // ivar: _meshReferences
@property (nonatomic) CGFloat minPointSize; // ivar: _minPointSize
@property (readonly, nonatomic) NSArray *mipReferences; // ivar: _mipReferences
@property (copy, nonatomic) MDLAsset *modelAsset; // ivar: _modelAsset
@property (copy, nonatomic) MDLMesh *modelMesh; // ivar: _modelMesh
@property (copy, nonatomic) MDLSubmesh *modelSubmesh; // ivar: _modelSubmesh
@property (copy, nonatomic) NSDate *modtime; // ivar: _modtime
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int objectVersion; // ivar: _objectVersion
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (nonatomic) BOOL optOutOfThinning; // ivar: _optOutOfThinning
@property (nonatomic) CGSize originalUncroppedSize; // ivar: _originalUncroppedSize
@property (nonatomic) CGSize physicalSizeInMeters; // ivar: _physicalSizeInMeters
@property (nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat
@property (nonatomic) BOOL preserveForArchiveOnly; // ivar: _preserveForArchiveOnly
@property (nonatomic) BOOL preservedVectorRepresentation; // ivar: _preservedVectorRepresentation
@property (copy, nonatomic) NSDictionary *renditionProperties; // ivar: _renditionProperties
@property (nonatomic) unsigned int scaleFactor; // ivar: _scaleFactor
@property (nonatomic) short scalingStyle; // ivar: _scalingStyle
@property (nonatomic) CGSize size; // ivar: _size
@property (copy, nonatomic) NSDictionary *sizesByIndex; // ivar: _sizesByIndex
@property (nonatomic) unsigned int standardVectorSize; // ivar: _standardVectorSize
@property (readonly, nonatomic) NSArray *submeshReferences; // ivar: _submeshReferences
@property NSInteger targetPlatform;
@property (nonatomic) NSInteger templateRenderingMode; // ivar: _templateRenderingMode
@property (nonatomic) float templateVersion; // ivar: _templateVersion
@property (nonatomic) NSInteger textureFormat; // ivar: _textureFormat
@property (nonatomic) NSInteger textureInterpretation; // ivar: _textureInterpretation
@property (nonatomic) BOOL textureOpaque; // ivar: _textureOpaque
@property (nonatomic) ? transformation; // ivar: _transformation
@property (copy, nonatomic) NSString *utiType; // ivar: _utiType
@property (nonatomic) BOOL vectorContainsHierarchicalLayers;
@property (nonatomic) BOOL vectorContainsMulticolorLayers;
@property (nonatomic) NSInteger vectorGlyphRenderingMode; // ivar: _vectorGlyphRenderingMode
@property (copy, nonatomic) NSArray *vectorSizes; // ivar: _vectorSizes


+(int)fileEncoding;
+(void)initialize;
+(void)setFileEncoding:(int)arg0 ;
-(id)CSIRepresentationWithCompression:(BOOL)arg0 ;
-(id)initWithCanvasSize:(struct CGSize )arg0 sliceCount:(unsigned int)arg1 layout:(short)arg2 ;
-(id)initWithColorNamed:(id)arg0 colorSpaceID:(NSUInteger)arg1 components:(id)arg2 ;
-(id)initWithColorNamed:(id)arg0 colorSpaceID:(NSUInteger)arg1 components:(id)arg2 linkedToSystemColorWithName:(id)arg3 ;
-(id)initWithExternalReference:(id)arg0 tags:(id)arg1 ;
-(id)initWithInternalReferenceRect:(struct CGRect )arg0 layout:(short)arg1 ;
-(id)initWithLayerStackData:(id)arg0 type:(NSInteger)arg1 withCanvasSize:(struct CGSize )arg2 ;
-(id)initWithLayerStackData:(id)arg0 withCanvasSize:(struct CGSize )arg1 ;
-(id)initWithModelAsset:(id)arg0 ;
-(id)initWithModelMesh:(id)arg0 ;
-(id)initWithModelSubmesh:(id)arg0 ;
-(id)initWithMultisizeImageSetNamed:(id)arg0 sizesByIndex:(id)arg1 ;
-(id)initWithNameList:(id)arg0 ;
-(id)initWithRawData:(id)arg0 pixelFormat:(unsigned int)arg1 layout:(short)arg2 ;
-(id)initWithShapeEffectPreset:(id)arg0 forScaleFactor:(unsigned int)arg1 ;
-(id)initWithTextStyleNamed:(id)arg0 fontName:(id)arg1 fontSize:(CGFloat)arg2 maxPointSize:(CGFloat)arg3 minPointSize:(CGFloat)arg4 scalingStyle:(short)arg5 alignment:(short)arg6 ;
-(id)initWithTextureForPixelFormat:(NSInteger)arg0 ;
-(id)initWithTextureImageWithSize:(struct CGSize )arg0 forPixelFormat:(NSInteger)arg1 cubeMap:(BOOL)arg2 ;
-(id)rawData;
-(void)addBitmap:(id)arg0 ;
-(void)addLayerReference:(id)arg0 ;
-(void)addMeshReference:(id)arg0 ;
-(void)addMetrics:(struct ? )arg0 ;
-(void)addMipReference:(id)arg0 ;
-(void)addSliceRect:(struct CGRect )arg0 ;
-(void)addSubmeshReference:(id)arg0 ;
-(void)dealloc;


@end


#endif