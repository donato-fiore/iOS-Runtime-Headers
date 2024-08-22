// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXIMAGEMTKVIEW_H
#define JFXIMAGEMTKVIEW_H

@class MTKView, MTKTextureLoader, NSString;
@protocol JFXImageViewRendering, MTLLibrary, MTLCommandQueue, MTLRenderPipelineState, MTLTexture, MTLSamplerState;


#import "JTImage.h"

@interface JFXImageMTKView : MTKView <JFXImageViewRendering>

 {
    id<MTLLibrary> *_library;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLRenderPipelineState> *_renderPipelineState;
    MTKTextureLoader *_textureLoader;
    id<MTLTexture> *_mtlTexture_RGBA;
    id<MTLTexture> *_mtlTexture_YUV_Luma;
    id<MTLTexture> *_mtlTexture_YUV_Chroma;
    id<MTLSamplerState> *_sampler;
    *__CVMetalTextureCache _textureCache;
    *__CVBuffer _texture_RGBA;
    *__CVBuffer _texture_YUV_Luma;
    *__CVBuffer _texture_YUV_Chroma;
    *void _pixelBufferColorAttachments;
    CGSize _viewSize;
    CGSize _textureSize;
    BOOL _needsUpdateVertices;
    BOOL _needsUpdateTexture;
    ? _quad;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableDebugDrawing; // ivar: _enableDebugDrawing
@property (nonatomic) BOOL flipX; // ivar: _flipX
@property (nonatomic) BOOL flipY; // ivar: _flipY
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) JTImage *jtImage; // ivar: _jtImage
@property (readonly, nonatomic) NSInteger renderingType; // ivar: _renderingType
@property (readonly) Class superclass;


+(id)buildRenderPipelineWithLabel:(id)arg0 vertexFunction:(id)arg1 fragmentFunction:(id)arg2 device:(id)arg3 view:(id)arg4 error:(*id)arg5 ;
+(id)buildSamplerStateWithDevice:(id)arg0 addressMode:(NSUInteger)arg1 filter:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 device:(id)arg1 ;
-(void)JFXImageMTKView_commonInit;
-(void)cleanupTextureCache;
-(void)cleanupTextures;
-(void)configureRenderPipelineForColorAttachments:(*void)arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setupTextureCache;
-(void)updateDebugDrawing;
-(void)updateTexture;
-(void)updateVertices;


@end


#endif