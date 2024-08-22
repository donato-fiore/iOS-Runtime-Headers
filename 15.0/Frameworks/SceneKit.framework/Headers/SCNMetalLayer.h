// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMETALLAYER_H
#define SCNMETALLAYER_H

@class CAMetalLayer, AVAudioEngine, AVAudioEnvironmentNode, MTLRenderPassDescriptor, NSString, SKScene;
@protocol SCNSceneRenderer, SCNTechniqueSupport, MTLCommandQueue, MTLRenderCommandEncoder, SCNSceneRendererDelegate, MTLDevice;


#import "SCNJitterer.h"
#import "SCNRenderer.h"
#import "SCNScene.h"
#import "SCNDisplayLink.h"
#import "SCNNode.h"
#import "SCNTechnique.h"

@interface SCNMetalLayer : CAMetalLayer <SCNSceneRenderer, SCNTechniqueSupport>

 {
    SCNJitterer *_jitterer;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    SCNDisplayLink *_displayLink;
    NSInteger _preferredFramePerSeconds;
    CGFloat _lastUpdate;
    CGFloat _lastRenderedTime;
    BOOL _drawForJittering;
    BOOL _rendersIntoMaterial;
}


@property (nonatomic) NSUInteger antialiasingMode;
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
@property (retain, nonatomic) SKScene *overlaySKScene;
@property (getter=isPlaying) BOOL playing;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (readonly, nonatomic) NSUInteger renderingAPI;
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) CGFloat sceneTime;
@property (nonatomic) BOOL showsStatistics;
@property (readonly, nonatomic) NSUInteger stencilPixelFormat;
@property (readonly) Class superclass;
@property (nonatomic) BOOL syncTimeWithCoreAnimation; // ivar: _syncTimeWithCoreAnimation
@property (copy, nonatomic) SCNTechnique *technique;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL usesReverseZ;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)_kvoKeysForwardedToRenderer;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
-(BOOL)_canJitter;
-(BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
-(BOOL)_isGLLayerBacked;
-(BOOL)_showsAuthoringEnvironment;
-(BOOL)_supportsJitteringSyncRedraw;
-(BOOL)canDrawConcurrently;
-(BOOL)isNodeInsideFrustum:(id)arg0 withPointOfView:(id)arg1 ;
-(BOOL)prepareObject:(id)arg0 shouldAbortBlock:(id)arg1 ;
-(BOOL)rendersIntoMaterial;
-(BOOL)scn_inLiveResize;
-(CGFloat)currentTime;
-(NSInteger)preferredFramesPerSecond;
-(id)_authoringEnvironment;
-(id)contentLayer;
-(id)displayLink;
-(id)hitTest:(struct CGPoint )arg0 options:(id)arg1 ;
-(id)hitTestWithSegmentFromPoint:(struct SCNVector3 )arg0 toPoint:(struct SCNVector3 )arg1 options:(id)arg2 ;
-(id)init;
-(id)initWithLayer:(id)arg0 ;
-(id)layer;
-(id)nodesInsideFrustumWithPointOfView:(id)arg0 ;
-(id)pointOfCulling;
-(id)renderer;
-(id)rendererOptions;
-(id)scn_backingLayer;
-(struct SCNVector3 )projectPoint:(struct SCNVector3 )arg0 ;
-(struct SCNVector3 )unprojectPoint:(struct SCNVector3 )arg0 ;
-(struct SCNVector4 )_viewport;
-(void)SCN_displayLinkCallback:(CGFloat)arg0 ;
-(void)_cancelJitterRedisplay;
-(void)_drawAtTime:(CGFloat)arg0 ;
-(void)_jitterRedisplay;
-(void)_sceneDidUpdate:(id)arg0 ;
-(void)_systemTimeAnimationStarted:(id)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)display;
-(void)pause;
-(void)pause:(id)arg0 ;
-(void)pauseDisplayLink;
-(void)play;
-(void)play:(id)arg0 ;
-(void)prepareObjects:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)presentScene:(id)arg0 withTransition:(id)arg1 incomingPointOfView:(id)arg2 completionHandler:(id)arg3 ;
-(void)projectPoints:(struct SCNVector3 *)arg0 count:(NSUInteger)arg1 ;
-(void)resumeDisplayLink;
-(void)setBackgroundColor:(struct CGColor *)arg0 ;
-(void)setCurrentTime:(CGFloat)arg0 ;
-(void)setNeedsDisplay;
-(void)setPointOfCulling:(id)arg0 ;
-(void)setPreferredFramesPerSecond:(NSInteger)arg0 ;
-(void)setRenderer:(id)arg0 ;
-(void)setRendersIntoMaterial:(BOOL)arg0 ;
-(void)set_showsAuthoringEnvironment:(BOOL)arg0 ;
-(void)stop;
-(void)stop:(id)arg0 ;


@end


#endif