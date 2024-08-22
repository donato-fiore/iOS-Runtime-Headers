// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCATEGORYVISUALIZATIONCARDVIEW_H
#define PKCATEGORYVISUALIZATIONCARDVIEW_H

@class UIView, MTLRenderPassDescriptor, MPSUnaryImageKernel, NSArray, NSString, NSSet;
@protocol PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol, MTLCommandQueue, MTLTexture, MTLRenderPipelineState, MTLBuffer;


#import "PKMetalRenderLoop.h"
#import "PKTextureLoader.h"

@interface PKCategoryVisualizationCardView : UIView <PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol>

 {
    PKMetalRenderLoop *_renderLoop;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    MTLRenderPassDescriptor *_secondRenderPassDescriptor;
    NSUInteger _drawableWidth;
    NSUInteger _drawableHeight;
    id<MTLCommandQueue> *_commandQueue;
    PKTextureLoader *_overlayTextureLoader;
    PKTextureLoader *_overlayNormalTextureLoader;
    id<MTLTexture> *_texture;
    id<MTLTexture> *_overlayTexture;
    id<MTLTexture> *_overlayNormalTexture;
    id<MTLRenderPipelineState> *_overlayPipelineState;
    id<MTLRenderPipelineState> *_circlePipelineState;
    id<MTLRenderPipelineState> *_circleOutlinePipelineState;
    id<MTLBuffer> *_vertexCoordsBuffer;
    id<MTLBuffer> *_textureCoordsBuffer;
    id<MTLBuffer> *_circleUniformsBuffer;
    id<MTLBuffer> *_circleDataBuffer;
    id<MTLBuffer> *_singleCircleDataBuffer;
    MPSUnaryImageKernel *_blurShader;
    BOOL _hasPendingUpdate;
    NSInteger _pendingUpdateStyle;
    BOOL _invalidated;
    BOOL _effectivePaused;
    BOOL _effectiveMotionEnabled;
    BOOL _needsDraw;
    BOOL _emptying;
    ? _state;
}


@property (nonatomic, getter=isBlurDisabled) BOOL blurDisabled; // ivar: _blurDisabled
@property (copy, nonatomic) NSArray *bucketColors; // ivar: _bucketColors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *magnitudes; // ivar: _magnitudes
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled; // ivar: _motionEnabled
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly) Class superclass;


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)rendererState;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)layoutSubviews;
-(void)motionManager:(id)arg0 didReceiveMotion:(id)arg1 ;
-(void)renderLoop:(id)arg0 didChangeEffectivePaused:(BOOL)arg1 ;
-(void)renderLoop:(id)arg0 drawAtTime:(CGFloat)arg1 ;
-(void)renderLoop:(id)arg0 drawableSizeDidChange:(struct CGSize )arg1 ;
-(void)renderWithTextures:(id)arg0 rendererState:(id)arg1 ;


@end


#endif