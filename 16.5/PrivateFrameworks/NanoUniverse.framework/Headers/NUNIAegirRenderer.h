// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUNIAEGIRRENDERER_H
#define NUNIAEGIRRENDERER_H

@class CALayer;
@protocol MTLDevice, NUNIRendererOptions;


#import "NUNIRenderer.h"
#import "NUNIAegirTextureGroup.h"
#import "NUNAegirOffscreen.h"
#import "NUNIAegirResourceManager.h"

@interface NUNIAegirRenderer : NUNIRenderer {
    id<MTLDevice> *_device;
    BOOL _supportsMTLGPUFamilyApple6;
    NUNIAegirTextureGroup *_textureGroup;
    NSMutableArray" _renderUniformsBuffers;
    int _renderUniformBuffersCounts;
    NUNAegirOffscreen" _offscreenScenes;
    NUNAegirOffscreen *_offscreenBlooms;
    NUNAegirOffscreen *_offscreenPosts;
    id<MTLTexture>" _contentMaskTextures;
    IOSurface" _contentMaskSurfaces;
    CALayer *_contentMaskLayer;
    NSUInteger _frame;
    NUNIAegirRendererState _state;
    NUNIAegirRenderUniforms _baseUniforms;
    unsigned int _rendererOptionsChangeSequence;
    NUNIAegirPipelineConstants _pipelineConstants;
}


@property (retain, nonatomic) NSObject<NUNIRendererOptions> *rendererOptions; // ivar: _rendererOptions
@property (readonly, nonatomic) NUNIAegirResourceManager *resourceManager; // ivar: _resourceManager


-(id)contentMaskLayer;
-(id)getOrCreateUniformBufferforFrameBufferIndex:(NSUInteger)arg0 ;
-(id)initWithPixelFormat:(NSUInteger)arg0 textureSuffix:(id)arg1 rendererStyle:(NSUInteger)arg2 ;
-(void)_renderLocationDot:(id)arg0 uniPtr:(struct NUNIAegirRenderUniforms *)arg1 viewport:(struct NUNIViewport )arg2 renderEncoder:(id)arg3 ;
-(void)_renderOffscreenBackgroundWithRenderEncoder:(id)arg0 frameBufferIndex:(NSUInteger)arg1 ;
-(void)_renderOffscreenBloomWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 commandBuffer:(id)arg2 frameBufferIndex:(NSUInteger)arg3 ;
-(void)_renderOffscreenPostWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 commandBuffer:(id)arg2 frameBufferIndex:(NSUInteger)arg3 ;
-(void)_renderOffscreenSceneWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 commandBuffer:(id)arg2 frameBufferIndex:(NSUInteger)arg3 drawableTexture:(id)arg4 ;
-(void)_renderRaytraceSpheroid:(id)arg0 uniPtr:(struct NUNIAegirRenderUniforms *)arg1 renderEncoder:(id)arg2 ;
-(void)_renderSpriteSpheroid:(id)arg0 uniPtr:(struct NUNIAegirRenderUniforms *)arg1 renderEncoder:(id)arg2 ;
-(void)_updateBaseUniformsForViewport:(struct NUNIViewport )arg0 ;
-(void)_updateStateWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 ;
-(void)dealloc;
-(void)discard;
-(void)purgeUnusedWithScene:(id)arg0 ;
-(void)renderOffscreenWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 commandBuffer:(id)arg2 ;
-(void)renderWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 commandBuffer:(id)arg2 passDescriptor:(id)arg3 ;
-(void)setContentMaskLayer:(id)arg0 ;


@end


#endif