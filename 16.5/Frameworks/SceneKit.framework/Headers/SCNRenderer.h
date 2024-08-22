// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNRENDERER_H
#define SCNRENDERER_H

@class NSArray, EAGLContext, UIColor, __SKSCNRenderer, AVAudioEngine, AVAudioEnvironmentNode, MTLRenderPassDescriptor, NSString, SKScene;
@protocol SCNMTLRenderContextCommandBufferStatusMonitor, SCNMTLRenderContextResourceManagerMonitor, SCNSceneRenderer, SCNTechniqueSupport, OS_dispatch_queue, MTLTexture, _SCNSceneRendererResourceManagerMonitor, _SCNSceneCommandBufferStatusMonitor, MTLCommandQueue, MTLRenderCommandEncoder, SCNSceneRendererDelegate, MTLDevice;

#import <Foundation/Foundation.h>

#import "SCNScene.h"
#import "SCNNode.h"
#import "SCNRecursiveLock.h"
#import "SCNRendererTransitionContext.h"
#import "SCNMTLRenderContext.h"
#import "SCNRenderer.h"
#import "SCNTechnique.h"
#import "SCNAuthoringEnvironment.h"

@interface SCNRenderer : NSObject <SCNMTLRenderContextCommandBufferStatusMonitor, SCNMTLRenderContextResourceManagerMonitor, SCNSceneRenderer, SCNTechniqueSupport>

 {
    SCNScene *_scene;
    SCNNode *_pointOfView;
    SCNNode *_pointOfCulling;
    SCNRecursiveLock *_lock;
    NSObject<OS_dispatch_queue> *__renderingQueue;
    NSUInteger __antialiasingMode;
    NSUInteger __preparePixelFormat;
    ? _framebufferInfo;
    id<MTLTexture> *_mtlTexture;
    NSArray *_viewpoints;
    NSUInteger _viewpointCoordinateSpace;
    BOOL _pointOfViewWasSet;
    BOOL _shouldDeleteFramebuffer;
    BOOL _rendersContinuously;
    BOOL _isPrivateRenderer;
    BOOL _isViewPrivateRenderer;
    BOOL _renderingSnapshot;
    BOOL _renderingPrepare;
    BOOL _autoUpdate;
    BOOL _disableLinearRendering;
    CGFloat _currentSceneTime;
    CGFloat _currentSystemTime;
    CGFloat _deltaTime;
    CGFloat _forceSystemTime;
    CGFloat _lastSystemTime;
    CGFloat __nextFrameTime;
    SCNRendererTransitionContext *_transitionContext;
    BOOL _playing;
    BOOL _loops;
    BOOL _isAnimating;
    unsigned int _adaptativeState0;
    unsigned int _adaptativeEndFrame;
    unsigned int _adaptativeTechniqueTimeStamp;
    id *_delegate;
    *__C3DEngineContext _engineContext;
    NSUInteger _renderingAPI;
    SCNVector4 __viewport;
    CGFloat __aspectRatio;
    ? __drawableSafeAreaInsets;
    EAGLContext *_glContext;
    SCNMTLRenderContext *_renderContext;
    BOOL _jitteringEnabled;
    BOOL _temporalAntialiasingEnabled;
    BOOL _frozen;
    BOOL _shouldForwardSceneRendererDelegationMessagesToSelf;
    BOOL _shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner;
    ? _selfDelegationConformance;
    ? _privateRendererOwnerDelegationConformance;
    ? _delegationConformance;
    UIColor *_backgroundColor;
    C3DColor4 _c3dBackgroundColor;
    SCNRenderer *_preloadRenderer;
    id<SCNSceneRenderer> *_privateRendererOwner;
    SCNTechnique *_technique;
    SCNRenderer *_snapshotRenderer;
    __SKSCNRenderer *_overlayRenderer;
    id *_overlayScene;
    BOOL _disableOverlays;
    float _contentScaleFactor;
    BOOL _isRunningInExtension;
    SCNAuthoringEnvironment *_authoringEnvironment;
    NSUInteger _debugOptions;
    BOOL _showStatistics;
    BOOL _showAuthoringEnvironment;
    CGFloat _statisticsTimeStamp;
    id<_SCNSceneRendererResourceManagerMonitor> *_resourceManagerMonitor;
    id<_SCNSceneCommandBufferStatusMonitor> *_commandBufferStatusMonitor;
}


@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (retain, nonatomic) SCNNode *audioListener;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (readonly, nonatomic) NSUInteger colorPixelFormat;
@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue;
@property (readonly, nonatomic) *void context;
@property (readonly, nonatomic) NSObject<MTLRenderCommandEncoder> *currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) CGRect currentViewport;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger debugOptions;
@property (weak, nonatomic) NSObject<SCNSceneRendererDelegate> *delegate;
@property (readonly, nonatomic) NSUInteger depthPixelFormat;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic) BOOL loops;
@property (readonly, nonatomic) CGFloat nextFrameTime;
@property (retain, nonatomic) SKScene *overlaySKScene;
@property (getter=isPlaying) BOOL playing;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (readonly, nonatomic) NSUInteger renderingAPI;
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) CGFloat sceneTime;
@property (nonatomic) BOOL showsStatistics;
@property (readonly, nonatomic) NSUInteger stencilPixelFormat;
@property (readonly) Class superclass;
@property (copy, nonatomic) SCNTechnique *technique;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL usesReverseZ;


+(id)rendererWithContext:(id)arg0 options:(id)arg1 ;
+(id)rendererWithDevice:(id)arg0 options:(id)arg1 ;
-(*void)__CFObject;
-(?)_rendererContextGL;
-(BOOL)_collectCompilationErrors;
-(BOOL)_disableLinearRendering;
-(BOOL)_drawSceneWithLegacyRenderer:(struct __C3DScene *)arg0 ;
-(BOOL)_drawSceneWithNewRenderer:(struct __C3DScene *)arg0 ;
-(BOOL)_enableARMode;
-(BOOL)_enablesDeferredShading;
-(BOOL)_installContext;
-(BOOL)_isNodeInsideFrustum:(id)arg0 withPointOfView:(id)arg1 viewport:(struct SCNVector4 )arg2 ;
-(BOOL)_needsRedrawAsap;
-(BOOL)_needsRepetitiveRedraw;
-(BOOL)_preloadResource:(id)arg0 abortHandler:(id)arg1 ;
-(BOOL)_prepareObject:(id)arg0 shouldAbortBlock:(id)arg1 ;
-(BOOL)_preparePreloadRenderer:(id)arg0 ;
-(BOOL)_recordWithoutExecute;
-(BOOL)_shouldDelegateARCompositing;
-(BOOL)_shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner;
-(BOOL)_showsAuthoringEnvironment;
-(BOOL)_wantsSceneRendererDelegationMessages;
-(BOOL)autoAdjustCamera;
-(BOOL)disableOverlays;
-(BOOL)frozen;
-(BOOL)isNodeInsideFrustum:(id)arg0 withPointOfView:(id)arg1 ;
-(BOOL)isVertexAmplificationEnabled;
-(BOOL)jitteringEnabled;
-(BOOL)prepareObject:(id)arg0 shouldAbortBlock:(id)arg1 ;
-(BOOL)renderMovieToURL:(id)arg0 size:(struct CGSize )arg1 antialiasingMode:(NSUInteger)arg2 attributes:(id)arg3 error:(*id)arg4 ;
-(BOOL)temporalAntialiasingEnabled;
-(BOOL)vertexAmplificationEnabled;
-(CGFloat)_aspectRatio;
-(CGFloat)_computeNextFrameTime;
-(CGFloat)_contentsScaleFactor;
-(CGFloat)_superSamplingFactor;
-(CGFloat)_systemTime;
-(CGFloat)currentTime;
-(NSInteger)_getFrameIndex;
-(NSUInteger)_antialiasingMode;
-(NSUInteger)_preparePixelFormat;
-(id)MTLTexture;
-(id)_authoringEnvironment;
-(id)_commandBufferStatusMonitor;
-(id)_compilationErrors;
-(id)_computedLightingEnvironmentMapsPath;
-(id)_copyPassDescription;
-(id)_copyPerformanceStatistics;
-(id)_copyRenderGraphDescription;
-(id)_defaultPOVForScene:(id)arg0 ;
-(id)_drawableSafeAreaInsets;
-(id)_hitTest:(struct CGPoint )arg0 viewport:(struct CGSize )arg1 options:(id)arg2 ;
-(id)_initWithOptions:(id)arg0 isPrivateRenderer:(BOOL)arg1 privateRendererOwner:(id)arg2 clearsOnDraw:(BOOL)arg3 context:(*void)arg4 renderingAPI:(NSUInteger)arg5 ;
-(id)_nodesInsideFrustumWithPointOfView:(id)arg0 viewport:(struct SCNVector4 )arg1 ;
-(id)_prepareSKRenderer;
-(id)_readSubdivCacheForHash:(id)arg0 ;
-(id)_renderContextMetal;
-(id)_renderingQueue;
-(id)_resourceManagerMonitor;
-(id)_setupSKRendererIfNeeded;
-(id)adjustViewportForRendering;
-(id)backgroundColor;
-(id)currentCommandBuffer;
-(id)hitTest:(struct CGPoint )arg0 options:(id)arg1 ;
-(id)hitTestWithSegmentFromPoint:(struct SCNVector3 )arg0 toPoint:(struct SCNVector3 )arg1 options:(id)arg2 ;
-(id)init;
-(id)metalDevice;
-(id)metalLayer;
-(id)nodesInsideFrustumWithPointOfView:(id)arg0 ;
-(id)pointOfCulling;
-(id)privateRendererOwner;
-(id)programWithNode:(id)arg0 withMaterial:(id)arg1 ;
-(id)snapshotAtTime:(CGFloat)arg0 ;
-(id)snapshotAtTime:(CGFloat)arg0 withSize:(struct CGSize )arg1 antialiasingMode:(NSUInteger)arg2 ;
-(id)snapshotAtTime:(CGFloat)arg0 withSize:(struct CGSize )arg1 antialiasingMode:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)snapshotRendererWithSize:(struct CGSize )arg0 ;
-(struct CGImage *)_createBackgroundColorImageWithSize:(struct CGSize )arg0 ;
-(struct CGImage *)_createSnapshotAtTime:(CGFloat)arg0 withSize:(struct CGSize )arg1 antialiasingMode:(NSUInteger)arg2 ;
-(struct CGImage *)_createSnapshotAtTime:(CGFloat)arg0 withSize:(struct CGSize )arg1 antialiasingMode:(NSUInteger)arg2 error:(*id)arg3 ;
-(struct CGImage *)createSnapshot:(CGFloat)arg0 error:(*id)arg1 ;
-(struct CGRect )viewport;
-(struct CGSize )_backingSize;
-(struct SCNMatrix4 )_screenTransform;
-(struct SCNVector3 )_projectPoint:(struct SCNVector3 )arg0 viewport:(struct SCNVector4 )arg1 ;
-(struct SCNVector3 )_unprojectPoint:(struct SCNVector3 )arg0 viewport:(struct SCNVector4 )arg1 ;
-(struct SCNVector3 )projectPoint:(struct SCNVector3 )arg0 ;
-(struct SCNVector3 )unprojectPoint:(struct SCNVector3 )arg0 ;
-(struct SCNVector4 )_viewport;
-(struct __C3DEngineContext *)_engineContext;
-(void)_UIOrientationDidChangeNotification:(id)arg0 ;
-(void)__setTransitionContext:(id)arg0 ;
-(void)_addGPUFrameCompletedHandler:(id)arg0 ;
-(void)_addGPUFramePresentedHandler:(id)arg0 ;
-(void)_addGPUFrameScheduledHandler:(id)arg0 ;
-(void)_beginFrame;
-(void)_c3dBackgroundColorDidChange;
-(void)_clearBackBuffer;
-(void)_createOffscreenFramebufferIfNeeded;
-(void)_createPrepareFramebufferIfNeeded;
-(void)_deleteGLFramebuffer;
-(void)_didRenderScene:(id)arg0 ;
-(void)_displayLinkStatsTack;
-(void)_displayLinkStatsTick;
-(void)_draw;
-(void)_drawAtTime:(CGFloat)arg0 ;
-(void)_drawOverlaySceneAtTime:(CGFloat)arg0 ;
-(void)_drawScene:(struct __C3DScene *)arg0 ;
-(void)_drawWithJitteringPresentationMode;
-(void)_endFrame;
-(void)_installGLContextAndSetViewport;
-(void)_installViewport;
-(void)_interfaceOrientationDidChange;
-(void)_invalidateFramebuffer;
-(void)_jitterAtStep:(NSUInteger)arg0 updateMainFramebuffer:(BOOL)arg1 redisplay:(BOOL)arg2 jitterer:(id)arg3 ;
-(void)_overlaysDidUpdate:(id)arg0 ;
-(void)_pause;
-(void)_play;
-(void)_prepareForTransition:(id)arg0 outgoingScene:(id)arg1 outgoingPointOfView:(id)arg2 completionHandler:(id)arg3 ;
-(void)_prepareGLRenderTarget;
-(void)_prepareRenderTarget;
-(void)_presentFramebuffer;
-(void)_projectPoints:(struct SCNVector3 *)arg0 count:(NSUInteger)arg1 viewport:(struct SCNVector4 )arg2 ;
-(void)_releasePreloadRenderer;
-(void)_reloadDebugOptions;
-(void)_renderAtTime:(CGFloat)arg0 ;
-(void)_renderAtTime:(CGFloat)arg0 viewport:(struct CGRect )arg1 encoder:(id)arg2 passDescriptor:(id)arg3 commandQueue:(id)arg4 commandBuffer:(id)arg5 ;
-(void)_renderGraphFrameRecordingAtPath:(id)arg0 withCompletion:(id)arg1 ;
-(void)_renderSceneWithEngineContext:(struct __C3DEngineContext *)arg0 sceneTime:(CGFloat)arg1 ;
-(void)_resolveAndDiscardGL;
-(void)_runningInExtension;
-(void)_setBackingSize:(struct CGSize )arg0 ;
-(void)_setContentsScaleFactor:(CGFloat)arg0 ;
-(void)_setInterfaceOrientation:(NSInteger)arg0 ;
-(void)_setupOffscreenRendererWithSize:(struct CGSize )arg0 ;
-(void)_stop;
-(void)_update:(struct __C3DScene *)arg0 ;
-(void)_updateEngineCallbacks;
-(void)_updatePointOfView;
-(void)_updateProbes:(id)arg0 withProgress:(id)arg1 ;
-(void)_updateSystemTimeAndDeltaTimeWithCurrentTime:(CGFloat)arg0 ;
-(void)_updateWithSystemTime:(CGFloat)arg0 ;
-(void)_willRenderScene:(id)arg0 ;
-(void)_writeSubdivCacheForHash:(id)arg0 dataProvider:(id)arg1 ;
-(void)dealloc;
-(void)lock;
-(void)prepareObjects:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)presentScene:(id)arg0 withTransition:(id)arg1 incomingPointOfView:(id)arg2 completionHandler:(id)arg3 ;
-(void)render;
-(void)renderAtTime:(CGFloat)arg0 ;
-(void)renderAtTime:(CGFloat)arg0 commandBuffer:(id)arg1 viewPoints:(id)arg2 ;
-(void)renderAtTime:(CGFloat)arg0 encoder:(id)arg1 commandQueue:(id)arg2 passDescriptor:(id)arg3 viewPoints:(id)arg4 ;
-(void)renderAtTime:(CGFloat)arg0 encoder:(id)arg1 commandQueue:(id)arg2 passDescriptor:(id)arg3 viewPoints:(id)arg4 coordinateSpace:(NSUInteger)arg5 ;
-(void)renderAtTime:(CGFloat)arg0 viewport:(struct CGRect )arg1 commandBuffer:(id)arg2 passDescriptor:(id)arg3 ;
-(void)renderAtTime:(CGFloat)arg0 viewport:(struct CGRect )arg1 encoder:(id)arg2 passDescriptor:(id)arg3 commandQueue:(id)arg4 ;
-(void)renderContext:(id)arg0 commandBufferDidCompleteWithError:(id)arg1 ;
-(void)renderContext:(id)arg0 didFallbackToDefaultTextureForSource:(id)arg1 message:(id)arg2 ;
-(void)renderWithCommandBuffer:(id)arg0 viewPoints:(id)arg1 ;
-(void)renderWithCommandBuffer:(id)arg0 viewpoints:(id)arg1 coordinateSpace:(NSUInteger)arg2 ;
-(void)renderWithViewpoints:(id)arg0 events:(id)arg1 ;
-(void)renderWithViewport:(struct CGRect )arg0 commandBuffer:(id)arg1 passDescriptor:(id)arg2 ;
-(void)resolvedBackgroundColorDidChange;
-(void)setAutoAdjustCamera:(BOOL)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setCurrentTime:(CGFloat)arg0 ;
-(void)setDisableOverlays:(BOOL)arg0 ;
-(void)setFrozen:(BOOL)arg0 ;
-(void)setPointOfCulling:(id)arg0 ;
-(void)setRendersContinuously:(BOOL)arg0 ;
-(void)setVertexAmplificationEnabled:(BOOL)arg0 ;
-(void)set_antialiasingMode:(NSUInteger)arg0 ;
-(void)set_aspectRatio:(CGFloat)arg0 ;
-(void)set_collectCompilationErrors:(BOOL)arg0 ;
-(void)set_commandBufferStatusMonitor:(id)arg0 ;
-(void)set_computedLightingEnvironmentMapsPath:(id)arg0 ;
-(void)set_deltaTime:(CGFloat)arg0 ;
-(void)set_disableLinearRendering:(BOOL)arg0 ;
-(void)set_drawableSafeAreaInsets;
-(void)set_enableARMode:(BOOL)arg0 ;
-(void)set_enablesDeferredShading:(BOOL)arg0 ;
-(void)set_nextFrameTime:(CGFloat)arg0 ;
-(void)set_preparePixelFormat:(NSUInteger)arg0 ;
-(void)set_recordWithoutExecute:(BOOL)arg0 ;
-(void)set_resourceManagerMonitor:(id)arg0 ;
-(void)set_screenTransform:(struct SCNMatrix4 )arg0 ;
-(void)set_shouldDelegateARCompositing:(BOOL)arg0 ;
-(void)set_shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner:(BOOL)arg0 ;
-(void)set_showsAuthoringEnvironment:(BOOL)arg0 ;
-(void)set_superSamplingFactor:(CGFloat)arg0 ;
-(void)set_systemTime:(CGFloat)arg0 ;
-(void)set_viewport:(struct SCNVector4 )arg0 ;
-(void)set_wantsSceneRendererDelegationMessages:(BOOL)arg0 ;
-(void)setupAuthoringEnvironment;
-(void)unlock;
-(void)updateAndDrawStatisticsIfNeeded;
-(void)updateAtTime:(CGFloat)arg0 ;
-(void)updateCurrentTimeIfPlayingWithSystemTime:(CGFloat)arg0 ;
-(void)updateProbes:(id)arg0 atTime:(CGFloat)arg1 ;


@end


#endif