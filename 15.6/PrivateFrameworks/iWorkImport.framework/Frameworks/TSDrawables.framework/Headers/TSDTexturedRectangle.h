// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDTEXTUREDRECTANGLE_H
#define TSDTEXTUREDRECTANGLE_H

@class NSMapTable, TSUBezierPath, TSUColor, NSString, CALayer, NSOperation, NSUUID;
@protocol NSCopying, TSDMetalRendererDirectTextureSourceUpdating, TSDMetalRenderer, MTLTexture;

#import <Foundation/Foundation.h>

#import "TSDBitmapRenderingQualityInfo.h"
#import "TSDTexturedRectangle.h"
#import "TSDTextureSet.h"

@interface TSDTexturedRectangle : NSObject <NSCopying, TSDMetalRendererDirectTextureSourceUpdating>

 {
    id *_renderBlock;
    BOOL _singleTextureContainsMipmaps;
    BOOL _didInitFromLayer;
    BOOL _shouldCleanUpSingleTexture;
    BOOL _didInitFromGPUTexture;
    NSMapTable *_eventIndexToViewLayerMap;
    TSUBezierPath *_bakedShapePath;
    CGPoint _originalLeadingCaretPosition;
    CGPoint _originalTrailingCaretPosition;
    CGSize _originalCaretSize;
    CGRect _originalLeadingCaretRect;
    CGRect _originalTrailingCaretRect;
    NSUInteger _signpostID;
}


@property (copy, nonatomic) TSUColor *backgroundColor; // ivar: _backgroundColor
@property *CGImage bakedImage; // ivar: _bakedImage
@property (nonatomic) CGFloat bakedRotation; // ivar: _bakedRotation
@property (nonatomic) CGFloat bakedScale; // ivar: _bakedScale
@property (weak, nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo; // ivar: _bitmapRenderingQualityInfo
@property (nonatomic) *CGColorSpace colorSpace; // ivar: _colorSpace
@property (nonatomic) CGRect contentRect; // ivar: _contentRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) CGRect frameOnCanvas;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage image;
@property (readonly, nonatomic) BOOL isBackgroundTexture;
@property (readonly, nonatomic) BOOL isBaked;
@property (nonatomic) BOOL isFlattenedRepresentation; // ivar: _isFlattenedRepresentation
@property (readonly, nonatomic) BOOL isImageSource;
@property (nonatomic) BOOL isIncomingContent; // ivar: _isIncomingContent
@property (readonly, nonatomic) BOOL isRenderable;
@property (readonly, nonatomic) BOOL isRendered;
@property (readonly, nonatomic) BOOL isSingleTextureSetup;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL isVerticalText; // ivar: _isVerticalText
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (nonatomic) CGRect leadingCaretRect; // ivar: _leadingCaretRect
@property (readonly, nonatomic) NSObject<TSDMetalRenderer> *liveTexturedRectangleRenderer;
@property (weak, nonatomic) TSDTexturedRectangle *liveTexturedRectangleSourceProxy; // ivar: _liveTexturedRectangleSourceProxy
@property (readonly, nonatomic) NSObject<MTLTexture> *metalTexture; // ivar: _metalTexture
@property (retain, nonatomic) TSDTexturedRectangle *metalTextureProxy; // ivar: _metalTextureProxy
@property (nonatomic) BOOL metalTextureWillBeShared; // ivar: _metalTextureWillBeShared
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (readonly, nonatomic) CGRect originalFrame; // ivar: _originalFrame
@property (nonatomic) CGPoint originalPosition; // ivar: _originalPosition
@property (weak, nonatomic) TSDTextureSet *parent; // ivar: _parent
@property (readonly, nonatomic) CALayer *parentLayer;
@property (weak) NSOperation *renderingOperation; // ivar: _renderingOperation
@property (weak) NSOperation *renderingOperationMetal; // ivar: _renderingOperationMetal
@property (weak) NSOperation *renderingOperationOpenGL; // ivar: _renderingOperationOpenGL
@property (copy, nonatomic) TSUBezierPath *shapePath; // ivar: _shapePath
@property (nonatomic) BOOL shouldGenerateMipmap; // ivar: _shouldGenerateMipmap
@property (nonatomic) BOOL shouldUseDisplayLinkPresentationTime; // ivar: _shouldUseDisplayLinkPresentationTime
@property (readonly, nonatomic) unsigned int singleTextureName; // ivar: _singleTextureName
@property (readonly, nonatomic) CGFloat singleTextureOpacity;
@property (readonly, nonatomic) CGSize singleTextureSize; // ivar: _singleTextureSize
@property (readonly, nonatomic) unsigned int singleTextureTarget;
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) NSUInteger sizeInBytes;
@property *CGImage sourceImage; // ivar: _sourceImage
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) CGFloat textBaseline; // ivar: _textBaseline
@property (copy, nonatomic) TSUColor *textBorderColor; // ivar: _textBorderColor
@property (copy, nonatomic) TSUColor *textColor; // ivar: _textColor
@property (nonatomic) _NSRange textRange; // ivar: _textRange
@property (nonatomic) CGFloat textXHeight; // ivar: _textXHeight
@property (nonatomic) CGFloat textureOpacity; // ivar: _textureOpacity
@property (nonatomic) NSInteger textureType; // ivar: _textureType
@property (nonatomic) CGRect trailingCaretRect; // ivar: _trailingCaretRect
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) BOOL willRenderWithLiveTexturedRectangleSource;


+(id)setupMetalShaderForContext:(id)arg0 ;
+(struct CGRect )boundingRectForTextures:(id)arg0 ;
+(struct CGRect )boundingRectOnCanvasForTextures:(id)arg0 ;
-(BOOL)canReuseMetalTextureWith:(id)arg0 ;
-(BOOL)hasLiveTexturedRectangleSourceWithNewRenderingForTimingInfo:(struct ? )arg0 ;
-(BOOL)isMetalTextureSetup;
-(BOOL)needsToUpdateDirectTextureSourcesForTimingInfo:(struct ? )arg0 ;
-(NSUInteger)p_textureDataSizeWithBitmapSize:(struct CGSize )arg0 ;
-(char *)p_setupTextureDataWithSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(id)initWithLayer:(id)arg0 forGLTexture:(id)arg1 ;
-(id)initWithLayer:(id)arg0 forMetalTexture:(id)arg1 ;
-(id)initWithMetalTexture:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)initWithSize:(struct CGSize )arg0 offset:(struct CGPoint )arg1 renderBlock:(id)arg2 ;
-(id)initWithTextureInfo:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)metalTextureWithContext:(id)arg0 ;
-(id)p_colorForColorspaceWithColor:(id)arg0 ;
-(id)p_newImageAndBufferWithTransform:(struct CGAffineTransform )arg0 ;
-(id)p_rasterizationBlockWithBitmapSize:(SEL)arg0 ;
-(id)shortDescription;
-(id)viewLayerAtEventIndex:(NSUInteger)arg0 ;
-(struct CGAffineTransform )p_transformWithAngle:(CGFloat)arg0 scale:(CGFloat)arg1 offset:(struct CGPoint )arg2 ;
-(struct CGRect )convertToCanvasCoordinates:(struct CGRect )arg0 ;
-(struct CGSize )p_textureSizeWithMaxSize:(struct CGSize )arg0 ;
-(void)adjustAnchorRelativeToCenterOfRotation:(struct CGPoint )arg0 atEventIndex:(NSUInteger)arg1 ;
-(void)bakeLayerWithAngle:(CGFloat)arg0 scale:(CGFloat)arg1 layer:(id)arg2 ;
-(void)clearLiveTexturedRectangleSource;
-(void)dealloc;
-(void)drawFrameWithMetalContext:(id)arg0 ;
-(void)evictRenderedResources;
-(void)p_bakeLayerWithAngle:(CGFloat)arg0 scale:(CGFloat)arg1 layer:(id)arg2 ;
-(void)p_initialize;
-(void)p_renderIntoContext:(struct CGContext *)arg0 viewLayer:(id)arg1 shouldApplyAlpha:(BOOL)arg2 shouldIgnoreLayerVisibility:(BOOL)arg3 shouldClipToBounds:(BOOL)arg4 ;
-(void)p_setupSingleTextureAndGenerateMipMaps:(BOOL)arg0 withContext:(id)arg1 ;
-(void)p_updateFrame;
-(void)promiseLiveTexturedRectangleSource;
-(void)releaseMetalTexture;
-(void)releaseSingleTexture;
-(void)renderIntoContext:(struct CGContext *)arg0 eventIndex:(NSUInteger)arg1 shouldApplyAlpha:(BOOL)arg2 shouldClipToBounds:(BOOL)arg3 ;
-(void)renderIntoContext:(struct CGContext *)arg0 shouldApplyAlpha:(BOOL)arg1 ;
-(void)renderIntoContext:(struct CGContext *)arg0 shouldApplyAlpha:(BOOL)arg1 shouldIgnoreLayerVisibility:(BOOL)arg2 ;
-(void)renderLayerContentsIfNeeded;
-(void)resetAnchorPointAtEventIndex:(NSUInteger)arg0 ;
-(void)resetToSourceImageAtEventIndex:(NSUInteger)arg0 ;
-(void)setLiveTextureRectangleDirectTextureSource:(id)arg0 fallbackRenderer:(id)arg1 ;
-(void)setupMetalTextureForContext:(id)arg0 ;
-(void)setupMetalTextureForDevice:(id)arg0 ;
-(void)setupMetalTextureForDevice:(id)arg0 maxSize:(struct CGSize )arg1 ;
-(void)setupSingleTexture;
-(void)setupSingleTextureWithContext:(id)arg0 ;
-(void)teardown;
-(void)updateDirectTextureSourcesWithUpdateContext:(id)arg0 ;
-(void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg0 ;


@end


#endif