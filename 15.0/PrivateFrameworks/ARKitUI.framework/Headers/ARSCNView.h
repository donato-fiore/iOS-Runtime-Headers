// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSCNVIEW_H
#define ARSCNVIEW_H

@class SCNView, ARSession, SCNNode, NSMutableDictionary, NSMutableArray, ARPointCloud, UIView, CIWarpKernel, ARFrame, NSString, SCNScene;
@protocol ARInternalSessionObserver, _SCNSceneRendererDelegate, ARSessionProviding, SCNCaptureDeviceOutputConsumer, OS_dispatch_semaphore, ARSCNViewDelegate;


#import "ARSCNCompositor.h"

@interface ARSCNView : SCNView <ARInternalSessionObserver, _SCNSceneRendererDelegate, ARSessionProviding>

 {
    ARSession *_session;
    CGFloat _lastFrameInterval;
    id<SCNCaptureDeviceOutputConsumer> *_captureDeviceOutputConsumer;
    SCNNode *_lightNode;
    SCNNode *_cameraNode;
    NSMutableDictionary *_nodesByAnchorIdentifier;
    NSMutableDictionary *_occlusionGeometryNodesByAnchorIdentifier;
    NSObject<OS_dispatch_semaphore> *_nodesSemaphore;
    NSMutableArray *_addedAnchors;
    NSMutableArray *_updatedAnchors;
    NSMutableArray *_removedAnchors;
    NSObject<OS_dispatch_semaphore> *_anchorsSemaphore;
    SCNNode *_worldOriginNode;
    SCNNode *_featurePointNode;
    ARPointCloud *_currentlyVisibleDebugPointerCloud;
    id *_originalBackgroundContents;
    NSUInteger _arDebugOptions;
    NSInteger _interfaceOrientation;
    NSInteger _lastInterfaceOrientation;
    CGSize _viewportSize;
    CGFloat _contentsScale;
    UIView *_rotationSnapshot;
    CIWarpKernel *_warpKernel;
    NSUInteger _warpKernelLensType;
    NSMutableArray *_environmentProbeNodes;
    NSMutableArray *_environmentProbeNodesToRemove;
    BOOL _lastRendersMotionBlur;
    BOOL _renderThreadFixed;
    BOOL _attemptRenderSynchronisationARFrame;
    ARSCNCompositor *_compositor;
    os_unfair_lock_s _occlusionLock;
    ? _currentReferenceTransform;
    NSUInteger _anchorUpdatesPerRendererUpdate;
}


@property (nonatomic) NSInteger actualPreferredFramesPerSecond;
@property (nonatomic) BOOL automaticallyOccludesVirtualContent; // ivar: _automaticallyOccludesVirtualContent
@property (nonatomic) BOOL automaticallyUpdatesLighting; // ivar: _automaticallyUpdatesLighting
@property (nonatomic) NSInteger compositorAlgorithm; // ivar: _compositorAlgorithm
@property (readonly, nonatomic) ARFrame *currentRenderFrame;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSCNViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property NSInteger developerPreferredFramesPerSecond; // ivar: _developerPreferredFramesPerSecond
@property BOOL drawsCameraImage; // ivar: _drawsCameraImage
@property NSInteger frameToRemoveRotationSnapshotOn; // ivar: _frameToRemoveRotationSnapshotOn
@property (nonatomic) BOOL graduallyUpdateAnchors; // ivar: _graduallyUpdateAnchors
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastFrameTimestamp; // ivar: _lastFrameTimestamp
@property (nonatomic) NSUInteger occlusionExcludedBitMask; // ivar: _occlusionExcludedBitMask
@property (nonatomic) BOOL providesOcclusionGeometry; // ivar: _providesOcclusionGeometry
@property (nonatomic) BOOL rendersCameraGrain; // ivar: _rendersCameraGrain
@property (nonatomic) BOOL rendersMotionBlur; // ivar: _rendersMotionBlur
@property NSInteger rotationSnapshotState; // ivar: _rotationSnapshotState
@property (nonatomic) BOOL runningWithSegmentation; // ivar: _runningWithSegmentation
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) BOOL segmentationUseEstimatedDepthData; // ivar: _segmentationUseEstimatedDepthData
@property (retain, nonatomic) ARSession *session;
@property BOOL shouldRestrictFrameRate; // ivar: _shouldRestrictFrameRate
@property (readonly) Class superclass;
@property NSInteger targetFramesPerSecond; // ivar: _targetFramesPerSecond


-(BOOL)automaticallyOccludesUsingSegmentation;
-(NSInteger)preferredFramesPerSecond;
-(NSUInteger)debugOptions;
-(id)_anchorForNode:(id)arg0 inFrame:(id)arg1 ;
-(id)_hitTest:(struct CGPoint )arg0 frame:(id)arg1 types:(NSUInteger)arg2 ;
-(id)anchorForNode:(id)arg0 ;
-(id)compositor;
-(id)hitTest:(struct CGPoint )arg0 types:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(id)arg1 ;
-(id)nodeForAnchor:(id)arg0 ;
-(id)occlusionGeometryNodeForAnchor:(id)arg0 ;
-(id)raycastQueryFromPoint:(struct CGPoint )arg0 allowingTarget:(NSInteger)arg1 alignment:(NSInteger)arg2 ;
-(id)unprojectPoint:(struct ? )arg0 ontoPlaneWithTransform;
-(struct __CVBuffer *)_warpPixelBuffer:(struct __CVBuffer *)arg0 withCamera:(id)arg1 ;
-(void)_addAnchors:(id)arg0 ;
-(void)_addOcclusionGeometryForAnchor:(id)arg0 ;
-(void)_commonInit;
-(void)_forceUpdateCamera;
-(void)_loadWarpKernalForLensType:(NSUInteger)arg0 ;
-(void)_removeAnchors:(id)arg0 ;
-(void)_renderCapturedPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)_renderer:(id)arg0 updateAtTime:(CGFloat)arg1 ;
-(void)_updateAnchors:(id)arg0 frame:(id)arg1 ;
-(void)_updateBackingSize;
-(void)_updateCamera:(id)arg0 ;
-(void)_updateDebugVisualization:(id)arg0 ;
-(void)_updateFramesPerSecondWithTarget:(NSInteger)arg0 shouldRestrictFrameRate:(BOOL)arg1 ;
-(void)_updateLighting:(id)arg0 ;
-(void)_updateNode:(id)arg0 forAnchor:(id)arg1 frame:(id)arg2 ;
-(void)_updateOcclusionCompositor;
-(void)_updatePreferredFramesPerSecond;
-(void)_updateProbesWithFrame:(id)arg0 ;
-(void)cleanupLingeringRotationState;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)session:(id)arg0 cameraDidChangeTrackingState:(id)arg1 ;
-(void)session:(id)arg0 didAddAnchors:(id)arg1 ;
-(void)session:(id)arg0 didChangeGeoTrackingStatus:(id)arg1 ;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)session:(id)arg0 didRemoveAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)session:(id)arg0 willRunWithConfiguration:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionShouldAttemptRelocalization:(id)arg0 completion:(id)arg1 ;
-(void)sessionWasInterrupted:(id)arg0 ;
-(void)setAutomaticallyOccludesUsingSegmentation:(BOOL)arg0 ;
-(void)setDebugOptions:(NSUInteger)arg0 ;
-(void)setPointOfView:(id)arg0 ;
-(void)setPreferredFramesPerSecond:(NSInteger)arg0 ;
-(void)windowDidRotateNotification:(id)arg0 ;
-(void)windowWillAnimateRotateNotification:(id)arg0 ;
-(void)windowWillRotateNotification:(id)arg0 ;


@end


#endif