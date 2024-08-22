// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNVIEW_H
#define SCNVIEW_H

@class UIView, NSString, CALayer, UIColor, NSArray, AVAudioEngine, AVAudioEnvironmentNode, MTLRenderPassDescriptor, EAGLContext, SKScene;
@protocol SCNSceneRenderer, SCNTechniqueSupport, SCNEventHandler, MTLDevice, SCNCameraControlConfiguration, MTLCommandQueue, MTLRenderCommandEncoder, SCNSceneRendererDelegate;


#import "SCNRenderer.h"
#import "SCNScene.h"
#import "SCNDisplayLink.h"
#import "SCNJitterer.h"
#import "SCNRecursiveLock.h"
#import "SCNSpriteKitEventHandler.h"
#import "SCNNode.h"
#import "SCNCameraController.h"
#import "SCNTechnique.h"

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport>

 {
    CGFloat _currentSystemTime;
    CGFloat _lastUpdate;
    NSString *__ibSceneName;
    NSUInteger __ibPreferredRenderingAPI;
    BOOL _ibNoMultisampling;
    NSUInteger _renderingAPI;
    BOOL _isOpaque;
    BOOL _rendersContinuously;
    BOOL _firstDrawDone;
    BOOL _drawOnMainThreadPending;
    BOOL _viewIsOffscreen;
    BOOL _appChangedColorAppearance;
    BOOL _appIsDeactivated;
    BOOL _autoPausedScene;
    BOOL _inRenderQueueForLayerBackedGLRendering;
    BOOL _disableLinearRendering;
    BOOL _isInLiveResize;
    BOOL _isHidden;
    BOOL _didTriggerRedrawWhileRendering;
    id *_delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    BOOL _displayLinkCreationRequested;
    BOOL _skipFramesIfNoDrawableAvailable;
    SCNDisplayLink *_displayLink;
    NSInteger _preferredFramePerSeconds;
    CALayer *_backingLayer;
    SCNJitterer *_jitterer;
    SCNRecursiveLock *_lock;
    UIColor *_backgroundColor;
    CGSize _boundsSize;
    char * _snapshotImageData;
    NSUInteger _snapshotImageDataLength;
    id<SCNEventHandler> *_navigationCameraController;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
    id<MTLDevice> *_device;
    NSArray *_controllerGestureRecognizers;
}


@property (nonatomic) BOOL allowsCameraControl;
@property (nonatomic) NSUInteger antialiasingMode;
@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (retain, nonatomic) SCNNode *audioListener;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (readonly, nonatomic) NSObject<SCNCameraControlConfiguration> *cameraControlConfiguration;
@property (readonly, nonatomic) NSUInteger colorPixelFormat;
@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue;
@property (readonly, nonatomic) *void context;
@property (readonly, nonatomic) NSObject<MTLRenderCommandEncoder> *currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) CGRect currentViewport;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger debugOptions;
@property (readonly, nonatomic) SCNCameraController *defaultCameraController;
@property (weak, nonatomic) NSObject<SCNSceneRendererDelegate> *delegate;
@property (readonly, nonatomic) NSUInteger depthPixelFormat;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MTLDevice> *device;
@property (retain, nonatomic) EAGLContext *eaglContext;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic) BOOL loops;
@property (retain, nonatomic) SKScene *overlaySKScene;
@property (getter=isPlaying) BOOL playing;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) NSInteger preferredFramesPerSecond;
@property (readonly, nonatomic) NSUInteger renderingAPI;
@property (nonatomic) BOOL rendersContinuously;
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) CGFloat sceneTime;
@property (nonatomic) BOOL showsStatistics;
@property (readonly, nonatomic) NSUInteger stencilPixelFormat;
@property (readonly) Class superclass;
@property (copy, nonatomic) SCNTechnique *technique;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL usesReverseZ;


+(BOOL)_isMetalSupported;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)lowLatency;
+(BOOL)usesSeparateWorkGroup;
+(Class)layerClass;
+(NSUInteger)renderingAPIForOptions:(id)arg0 ;
+(id)_kvoKeysForwardedToRenderer;
+(id)currentUIFocusEnvironment;
+(id)deviceForOptions:(id)arg0 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
-(*void)__CFObject;
-(BOOL)_canJitter;
-(BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
-(BOOL)_controlsOwnScaleFactor;
-(BOOL)_disableLinearRendering;
-(BOOL)_enableARMode;
-(BOOL)_enablesDeferredShading;
-(BOOL)_ibWantsMultisampling;
-(BOOL)_isEditor;
-(BOOL)_shouldDelegateARCompositing;
-(BOOL)_showsAuthoringEnvironment;
-(BOOL)_supportsJitteringSyncRedraw;
-(BOOL)_wantsSceneRendererDelegationMessages;
-(BOOL)asynchronousResizing;
-(BOOL)drawableResizesAsynchronously;
-(BOOL)ibWantsMultisampling;
-(BOOL)isNodeInsideFrustum:(id)arg0 withPointOfView:(id)arg1 ;
-(BOOL)isOpaque;
-(BOOL)prepareObject:(id)arg0 shouldAbortBlock:(id)arg1 ;
-(BOOL)scn_inLiveResize;
-(BOOL)skipFramesIfNoDrawableAvailable;
-(CGFloat)_flipY:(CGFloat)arg0 ;
-(CGFloat)_renderThreadPriority;
-(CGFloat)_runFPSTestWithDuration:(CGFloat)arg0 ;
-(CGFloat)_superSamplingFactor;
-(NSInteger)_preferredFocusMovementStyle;
-(NSUInteger)_renderOptions;
-(id)_authoringEnvironment;
-(id)_commandBufferStatusMonitor;
-(id)_defaultBackgroundColor;
-(id)_focusedItemRegionContainer;
-(id)_getFocusableNodes;
-(id)_ibSceneName;
-(id)_regionForFocusedItem:(id)arg0 inCoordinateSpace:(id)arg1 ;
-(id)_renderingQueue;
-(id)_resourceManagerMonitor;
-(id)backgroundColor;
-(id)displayLink;
-(id)eventHandler;
-(id)hitTest:(struct CGPoint )arg0 options:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTestWithSegmentFromPoint:(struct SCNVector3 )arg0 toPoint:(struct SCNVector3 )arg1 options:(id)arg2 ;
-(id)ibSceneName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(id)arg1 ;
-(id)navigationCameraController;
-(id)nodesInsideFrustumWithPointOfView:(id)arg0 ;
-(id)pointOfCulling;
-(id)renderer;
-(id)scn_backingLayer;
-(id)snapshot;
-(int)_ibPreferredRenderingAPI;
-(int)ibPreferredRenderingAPI;
-(struct CGRect )_focusFrameForSCNNode:(id)arg0 ;
-(struct CGSize )_updateBackingSize;
-(struct CGSize )backingSizeForBoundSize:(struct CGSize )arg0 ;
-(struct SCNMatrix4 )_screenTransform;
-(struct SCNVector3 )projectPoint:(struct SCNVector3 )arg0 ;
-(struct SCNVector3 )unprojectPoint:(struct SCNVector3 )arg0 ;
-(struct SCNVector4 )_viewport;
-(void)SCN_displayLinkCallback:(CGFloat)arg0 ;
-(void)_addGPUFrameCompletedHandler:(id)arg0 ;
-(void)_addGPUFramePresentedHandler:(id)arg0 ;
-(void)_addGPUFrameScheduledHandler:(id)arg0 ;
-(void)_adjustBackingLayerPixelFormat;
-(void)_backgroundDidChange;
-(void)_commonInit:(id)arg0 ;
-(void)_createDisplayLinkIfNeeded;
-(void)_drawAtTime:(CGFloat)arg0 ;
-(void)_enterBackground:(id)arg0 ;
-(void)_enterForeground:(id)arg0 ;
-(void)_flushDisplayLink;
-(void)_initializeDisplayLinkWithScreen:(id)arg0 completionHandler:(id)arg1 ;
-(void)_jitterRedisplay;
-(void)_resetContentsScaleFactor;
-(void)_sceneDidUpdate:(id)arg0 ;
-(void)_scnUpdateContentsGravity;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)_selectRenderingAPIWithOptions:(id)arg0 ;
-(void)_setNeedsDisplay;
-(void)_systemTimeAnimationStarted:(id)arg0 ;
-(void)_updateContentsScaleFactor;
-(void)_updateOpacity;
-(void)_updateProbes:(id)arg0 withProgress:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)displayLayer:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)eventHandlerWantsRedraw;
-(void)layoutSubviews;
-(void)lock;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause:(id)arg0 ;
-(void)pauseDisplayLink;
-(void)play:(id)arg0 ;
-(void)prepareObjects:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)presentScene:(id)arg0 withTransition:(id)arg1 incomingPointOfView:(id)arg2 completionHandler:(id)arg3 ;
-(void)resumeDisplayLink;
-(void)safeAreaInsetsDidChange;
-(void)scn_setBackingLayer:(id)arg0 ;
-(void)scn_setGestureRecognizers:(id)arg0 ;
-(void)scn_updateGestureRecognizers;
-(void)setAsynchronousResizing:(BOOL)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setContentScaleFactor:(CGFloat)arg0 ;
-(void)setDisplayLink:(id)arg0 ;
-(void)setDrawableResizesAsynchronously:(BOOL)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setIbPreferredRenderingAPI:(int)arg0 ;
-(void)setIbSceneName:(id)arg0 ;
-(void)setIbWantsMultisampling:(BOOL)arg0 ;
-(void)setNavigationCameraController:(id)arg0 ;
-(void)setNeedsDisplay;
-(void)setPointOfCulling:(id)arg0 ;
-(void)setSkipFramesIfNoDrawableAvailable:(BOOL)arg0 ;
-(void)set_commandBufferStatusMonitor:(id)arg0 ;
-(void)set_disableLinearRendering:(BOOL)arg0 ;
-(void)set_enableARMode:(BOOL)arg0 ;
-(void)set_enablesDeferredShading:(BOOL)arg0 ;
-(void)set_ibPreferredRenderingAPI:(int)arg0 ;
-(void)set_ibSceneName:(id)arg0 ;
-(void)set_ibWantsMultisampling:(BOOL)arg0 ;
-(void)set_renderOptions:(NSUInteger)arg0 ;
-(void)set_resourceManagerMonitor:(id)arg0 ;
-(void)set_screenTransform:(struct SCNMatrix4 )arg0 ;
-(void)set_shouldDelegateARCompositing:(BOOL)arg0 ;
-(void)set_showsAuthoringEnvironment:(BOOL)arg0 ;
-(void)set_superSamplingFactor:(CGFloat)arg0 ;
-(void)set_wantsSceneRendererDelegationMessages:(BOOL)arg0 ;
-(void)stop:(id)arg0 ;
-(void)switchToCameraNamed:(id)arg0 ;
-(void)switchToNextCamera;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unlock;
-(void)updateAtTime:(CGFloat)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif