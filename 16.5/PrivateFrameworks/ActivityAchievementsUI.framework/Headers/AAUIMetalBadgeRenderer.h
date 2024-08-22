// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIMETALBADGERENDERER_H
#define AAUIMETALBADGERENDERER_H

@class CAMetalLayer, CADisplayLink, NSArray, MTLRenderPassDescriptor, UIImage;
@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState, MTLDepthStencilState, MTLTexture;

#import <Foundation/Foundation.h>

#import "AAUIBadgeModelConfiguration.h"

@interface AAUIMetalBadgeRenderer : NSObject {
    CAMetalLayer *_metalLayer;
    CADisplayLink *_displayLink;
    BOOL _useEarnedShader;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLRenderPipelineState> *_shaderRenderPipeline;
    id<MTLRenderPipelineState> *_shaderFaceRenderPipeline;
    id<MTLRenderPipelineState> *_shaderFaceInlayTriColorsPipeline;
    id<MTLRenderPipelineState> *_shaderFaceInlayRenderPipeline;
    id<MTLRenderPipelineState> *_shaderFaceTriColorRenderPipeline;
    id<MTLDepthStencilState> *_depthStencilState;
    ? _viewProjectionMatrix;
    ? _modelTransform;
    ? _environmentMatrix;
    ? _cameraPosition;
    ? _uniforms;
    NSArray *_badgeModels;
    id<MTLTexture> *_fleckNormalTexture;
    id<MTLTexture> *_environmentTexture;
    id<MTLTexture> *_backTexture;
    id<MTLTexture> *_emptyBackTexture;
    id<MTLTexture> *_colorTexture;
    MTLRenderPassDescriptor *_renderPassDesc;
    id<MTLTexture> *_colorAttachmentMSAA;
    id<MTLTexture> *_depthAttachmentMSAA;
    ? _attachmentRasterSize;
    float _rasterScaleFactor;
}


@property (retain, nonatomic) UIImage *backTextureImage; // ivar: _backTextureImage
@property (retain, nonatomic) AAUIBadgeModelConfiguration *configuration; // ivar: _configuration
@property (nonatomic, getter=isPaused) BOOL paused;
@property (copy, nonatomic) id *stateUpdateBlock; // ivar: _stateUpdateBlock


+(CGFloat)screenScaleMaximum;
+(CGFloat)screenScaleMultiple;
+(id)_commandQueueForDevice:(id)arg0 ;
-(id)initWithCAMetalLayer:(id)arg0 useEarnedShader:(BOOL)arg1 ;
-(id)snapshot;
-(void)_cleanupConfiguration;
-(void)_drawBadgeFrameCallback;
-(void)_drawBadgeModel:(id)arg0 intoRenderEncoder:(id)arg1 withBackTexture:(BOOL)arg2 ;
-(void)_drawFrameWithDrawable:(id)arg0 ;
-(void)_drawIntoRenderEncoder:(id)arg0 ;
-(void)_loadBadgeModelWithConfiguration:(id)arg0 ;
-(void)_setupAttributes;
-(void)_setupCommonBindingsForRenderEncoder:(id)arg0 pipelineState:(id)arg1 verticesBuffer:(id)arg2 ;
-(void)_setupRenderPipeline;
-(void)_setupTextures;
-(void)_updateModelTransformForBadge:(id)arg0 ;
-(void)cleanupAfterSnapshot;
-(void)dealloc;
-(void)resizeBadgeForCurrentViewSize;


@end


#endif