// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKVIEW_H
#define SKVIEW_H

@class UIView, CAMetalLayer, CAEAGLLayer, NSData, NSMutableDictionary, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SKViewDelegate;


#import "SKDisplayLink.h"
#import "SKTransition.h"
#import "SKScene.h"

@interface SKView : UIView {
    SKCStats _currentStats;
    SKCStats _nextStats;
    SKCStats _frameStats;
    *void _renderer;
    ? _viewScale;
    ? _viewTranslation;
    ? _framebuffer;
    ? _frameBufferColorTexture;
    ? _frameBufferDepthStencilTexture;
    unsigned int _colorRenderBuffer;
    unsigned int _depthStencilRenderBuffer;
    shared_ptr<jet_fence> _renderFence;
    CAMetalLayer *_metalLayer;
    CAEAGLLayer *_eaglLayer;
    BOOL _needsInitialUpdate;
    BOOL _didRunOnce;
    BOOL _viewFramebufferIsValid;
    ? _viewFramebufferPixelSize;
    BOOL _isBackgrounded;
    BOOL _allowsTransparency;
    BOOL _priorResignActivePausedState;
    NSUInteger _frameInterval;
    NSUInteger _preferredFramesPerSecond;
    SKDisplayLink *_displayLink;
    NSObject<OS_dispatch_queue> *_updateQueue;
    CGFloat _timePreviousUpdate;
    BOOL _prefersLowPowerGPU;
    BOOL _usesAsyncUpdateQueue;
    BOOL _hasRenderedOnce;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _disableInput;
    BOOL _mouseIsDown;
    BOOL _rightMouseIsDown;
    SKTransition *_transition;
    SKScene *_nextScene;
    SKScene *_scene;
    BOOL _paused;
    NSData *_spriteArrayHint;
    NSMutableDictionary *_viewRenderOptions;
    NSMapTable *_touchMap;
    float _prevBackingScaleFactor;
    id *_dynamicRenderBlock;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_semaphore> *_renderSemaphore;
    int _queuedFrameCount;
    CGFloat _prevVsyncRenderTime;
    CGFloat _prevRenderTime;
}


@property (retain, nonatomic) NSMutableDictionary *_info; // ivar: __info
@property *void _layerBackedRenderer; // ivar: __layerBackedRenderer
@property (nonatomic) BOOL allowsTransparency;
@property (nonatomic, getter=isAsynchronous) BOOL asynchronous;
@property (weak, nonatomic) NSObject<SKViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableDepthStencilBuffer;
@property (nonatomic, getter=disableDepthStencilBuffer, setter=setDisableDepthStencilBuffer:) BOOL disableStencilBuffers;
@property (nonatomic) NSInteger frameInterval;
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (readonly) NSMutableDictionary *options;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) CGFloat physicsDebugStrokeWidth; // ivar: _physicsDebugStrokeWidth
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (nonatomic) float preferredFrameRate;
@property (nonatomic) NSInteger preferredFramesPerSecond;
@property (readonly, nonatomic) SKScene *scene;
@property (nonatomic) BOOL shouldCullNonVisibleNodes;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsFPS;
@property (nonatomic) BOOL showsFields;
@property (nonatomic) BOOL showsNodeCount;
@property (nonatomic) BOOL showsPhysics;
@property (nonatomic) BOOL showsQuadCount;


+(BOOL)supportsSecureCoding;
+(Class)layerClass;
+(id)debugHierarchyAdditionalGroupingIDs;
+(id)debugHierarchyObjectsInGroupWithID:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 ;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
+(void)_setCurrentTime:(CGFloat)arg0 ;
-(*void)chooseViewRenderer;
-(*void)getRootNode;
-(BOOL)_renderUpdateEnabled;
-(BOOL)_shouldRenderForTime:(CGFloat)arg0 ;
-(BOOL)_showsCPUStats;
-(BOOL)_showsGPUStats;
-(BOOL)_usesAsyncUpdateQueue;
-(BOOL)hasValidViewFramebuffer;
-(BOOL)isEqualToView:(id)arg0 ;
-(BOOL)isOpaque;
-(CGFloat)_fps;
-(CGFloat)_viewScale;
-(CGFloat)alphaValue;
-(NSInteger)_preferredFocusMovementStyle;
-(NSUInteger)_getEffectivePreferredFramesPerSecond;
-(float)_getViewContentsScale;
-(id)_focusedItemRegionContainer;
-(id)_getPerformanceStats;
-(id)archiveToFile:(id)arg0 ;
-(id)captureToFile:(id)arg0 ;
-(id)getRenderOptions;
-(id)getViewport;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 updateQueue:(id)arg1 ;
-(id)snapshot;
-(id)textureFromNode:(id)arg0 ;
-(id)textureFromNode:(id)arg0 crop:(struct CGRect )arg1 ;
-(id)textureFromNode:(id)arg0 withOptions:(id)arg1 ;
-(int)_spriteRenderCount;
-(int)_spriteSubmitCount;
-(struct ? )getViewTransform;
-(struct CGPoint )_viewTranslation;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromScene:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toScene:(id)arg1 ;
-(struct shared_ptr<jet_framebuffer> )nextFramebuffer;
-(void)CBApplicationDidBecomeActive;
-(void)CBApplicationWillResignActive;
-(void)_commonInit;
// -(void)_dispatchRenderToIOSurfaceID:(unsigned int)arg0 async:(BOOL)arg1 onQueue:(id)arg2 waitOnFence:(BOOL)arg3 preRender:(id)arg4 postRender:(unk)arg5  ;
-(void)_endFrameStats;
-(void)_ensureRenderer;
-(void)_renderContent;
// -(void)_renderSynchronouslyForTime:(CGFloat)arg0 preRender:(id)arg1 postRender:(unk)arg2  ;
// -(void)_renderSynchronouslyForTime:(CGFloat)arg0 preRender:(id)arg1 postRender:(unk)arg2 withMTLScheduleHandler:(id)arg3  ;
// -(void)_renderToIOSurfaceID:(unsigned int)arg0 scaleFactor:(float)arg1 asynchronous:(BOOL)arg2 preRender:(id)arg3 postRender:(unk)arg4  ;
// -(void)_renderToIOSurfaceID:(unsigned int)arg0 scaleFactor:(float)arg1 asynchronous:(BOOL)arg2 waitOnFence:(BOOL)arg3 preRender:(id)arg4 postRender:(unk)arg5  ;
-(void)_reshape;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)_setUpdateQueue:(id)arg0 ;
-(void)_showAllStats;
-(void)_update:(CGFloat)arg0 ;
// -(void)_vsyncRenderForTime:(CGFloat)arg0 preRender:(id)arg1 postRender:(unk)arg2  ;
-(void)dealloc;
-(void)debugPrint;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)notifyWillRenderContent;
-(void)onInit;
-(void)overrideMetalCommandQueue:(id)arg0 ;
-(void)presentScene:(id)arg0 ;
-(void)presentScene:(id)arg0 transition:(id)arg1 ;
-(void)remakeFramebuffer;
-(void)remakeFramebuffer:(CGFloat)arg0 ;
-(void)renderContent;
-(void)renderForTime:(CGFloat)arg0 shouldBlock:(BOOL)arg1 ;
-(void)renderToIOSurfaceID:(unsigned int)arg0 withScaleFactor:(CGFloat)arg1 ;
-(void)runOnce;
-(void)setDynamicRenderBlock:(id)arg0 ;
-(void)setUpRenderCallback;
-(void)set_renderUpdateEnabled:(BOOL)arg0 ;
-(void)set_showsCPUStats:(BOOL)arg0 ;
-(void)set_showsGPUStats:(BOOL)arg0 ;
-(void)set_usesAsyncUpdateQueue:(BOOL)arg0 ;
-(void)set_viewScale:(CGFloat)arg0 ;
-(void)set_viewTranslation:(struct CGPoint )arg0 ;
-(void)startRenderCallbacks;
-(void)stopRenderCallbacks;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)willRenderContent;
-(void)writeContentsToPNG:(id)arg0 ;


@end


#endif