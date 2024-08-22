// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGMETALRENDERER_H
#define PXGMETALRENDERER_H

@class NSMutableArray, NSString;
@protocol PXGMetalTextureConverterDelegate, PXGMetalRenderDestinationDelegate, PXGEffectComponentDelegate, PXGRenderer, MTLDevice, MTLLibrary, MTLCommandQueue, MTLBuffer, MTLTexture, OS_dispatch_queue, MTLSamplerState, MTLDepthStencilState, OS_dispatch_semaphore, PXGRendererDelegate, PXGMetalRenderDestination, PXGTextureConverter;

#import <Foundation/Foundation.h>

#import "PXGSpriteDataStore.h"
#import "PXGMetalRenderTextureStore.h"
#import "PXGMetalTextureConverter.h"
#import "PXGColorGradingTexturesStore.h"
#import "PXGMetalOffscreenTexturesStore.h"
#import "PXGEntityManager.h"
#import "PXScrollViewController.h"

@interface PXGMetalRenderer : NSObject <PXGMetalTextureConverterDelegate, PXGMetalRenderDestinationDelegate, PXGEffectComponentDelegate, PXGRenderer>

 {
    os_unfair_lock_s _metalLock;
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLBuffer> *_squareGeometryBuffer;
    id<MTLBuffer> *_yCbCrMatricesBuffer;
    CGFloat _lastOffscreenRenderTime;
    CGFloat _lastOffscreenEffectRenderTime;
    id<MTLTexture> *_offscreenTexture;
    id<MTLTexture> *_offscreenEffectTexture;
    BOOL _isCreatingOffscreenTexture;
    BOOL _isCreatingOffscreenEffectTexture;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<MTLSamplerState> *_mirrorRepeatSampler;
    id<MTLSamplerState> *_clampToZeroSampler;
    id<MTLDepthStencilState> *_depthStencil;
    os_unfair_lock_s _pipelinesLock;
    *? _pipelines;
    NSInteger _pipelinesCount;
    NSInteger _pipelinesCapacity;
    NSObject<OS_dispatch_queue> *_compilationQueue;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    NSMutableArray *_reusableRenderStates;
    PXGSpriteDataStore *_spriteRenderDataStore;
    NSInteger _frameId;
    CGFloat _lastTime;
    PXGMetalRenderTextureStore *_opaqueTextures;
    PXGMetalRenderTextureStore *_translucentTextures;
    PXGMetalTextureConverter *_textureConverter;
    BOOL _didPerformFirstRender;
    BOOL _renderDestinationWantsCompleteRenderingNotification;
    BOOL _renderDestinationIsPresentable;
    PXGColorGradingTexturesStore *_colorGradingTexturesStore;
    PXGMetalOffscreenTexturesStore *_offscreenTextureCache;
}


@property (readonly, nonatomic) ? camera;
@property (nonatomic) PXGCameraConfiguration cameraConfiguration; // ivar: _cameraConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGRendererDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXGEntityManager *entityManager; // ivar: _entityManager
@property (readonly) NSUInteger hash;
@property (nonatomic) ? interactionState; // ivar: _interactionState
@property (nonatomic) BOOL isInvertColorsEnabled; // ivar: _isInvertColorsEnabled
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // ivar: _layoutQueue
@property (nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (nonatomic) CGFloat offscreenEffectScale; // ivar: _offscreenEffectScale
@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) NSObject<PXGMetalRenderDestination> *renderDestination; // ivar: _renderDestination
@property (retain, nonatomic) PXScrollViewController *scrollViewController;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *test_renderSnapshotHandler; // ivar: _test_renderSnapshotHandler
@property (readonly, nonatomic) NSObject<PXGTextureConverter> *textureConverter;
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect
@property (readonly, nonatomic) CGRect visibleRectInRenderCoordinates;
@property (readonly, nonatomic) BOOL wantsToDriveRender;


+(id)_loadAndPreprocessShaderSourceWithFilename:(id)arg0 extension:(id)arg1 ;
+(id)mainShaderSource;
-(NSInteger)_drawRenderTexture:(struct ? *)arg0 withCommandEncoder:(id)arg1 ;
-(NSInteger)_drawSpritesWithRenderState:(id)arg0 commandEncoder:(id)arg1 passingTest:(id)arg2 ;
-(id)_checkoutRenderState;
-(id)_createPipelineStateForColorProgram:(id)arg0 shader:(id)arg1 shaderFlags:(int)arg2 colorPixelFormat:(NSUInteger)arg3 depthStencilPixelFormat:(NSUInteger)arg4 isOpaque:(BOOL)arg5 ;
-(id)initWithRenderDestination:(id)arg0 layoutQueue:(id)arg1 ;
-(struct ? )_handleCompiledRenderPipelineState:(id)arg0 forColorProgram:(id)arg1 shader:(id)arg2 shaderFlags:(int)arg3 colorPixelFormat:(NSUInteger)arg4 pipelineIndex:(NSInteger)arg5 isOpaque:(BOOL)arg6 ;
-(struct ? )_pipelineForRenderTexture:(struct ? *)arg0 waitForCompilation:(BOOL)arg1 ;
-(void)_checkinRenderState:(id)arg0 ;
-(void)_clearPipelines;
-(void)_configureCaptureSpriteTexture:(id)arg0 renderState:(id)arg1 withTexture:(id)arg2 drawingScale:(CGFloat)arg3 ;
-(void)_configureUniformGeometries:(struct ? *)arg0 drawingScale:(CGFloat)arg1 ;
-(void)_parseSpriteTextures:(id)arg0 willPerformOffscreenPass:(BOOL)arg1 renderState:(id)arg2 ;
-(void)_pipelinesLock_resizePipelinesStorageIfNeeded;
-(void)_populateEffectSprites:(id)arg0 spriteRenderDataStore:(id)arg1 presentationDataStore:(id)arg2 metadataStore:(id)arg3 ;
-(void)_preloadKernel:(id)arg0 ;
-(void)_preloadShader:(id)arg0 ;
-(void)_prepare;
-(void)_render:(id)arg0 withCompletionCompletion:(id)arg1 ;
-(void)_setupConstantBuffers;
-(void)_setupMetalIfNeeded;
-(void)_setupSquareGeometryBuffer;
-(void)_setupYCbCrMatrices;
-(void)dealloc;
-(void)effectComponent:(id)arg0 prepareForEffect:(id)arg1 ;
-(void)metalTextureConverter:(id)arg0 didCreateTexture:(id)arg1 options:(struct ? )arg2 ;
-(void)releaseResources;
-(void)renderDestination:(id)arg0 renderSizeWillChange:(struct CGSize )arg1 ;
-(void)renderDestinationDeviceDidChange:(id)arg0 ;
-(void)renderDestinationRequestRender:(id)arg0 ;
-(void)renderImmediately;
-(void)renderSpritesWithTextures:(id)arg0 dataStore:(id)arg1 presentationDataStore:(id)arg2 presentationMetadataStore:(id)arg3 layout:(id)arg4 ;
-(void)setNeedsRender;
-(void)updateWithChangeDetails:(id)arg0 ;


@end


#endif