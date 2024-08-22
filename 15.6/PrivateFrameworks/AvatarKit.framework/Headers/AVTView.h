// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTVIEW_H
#define AVTVIEW_H

@class SCNView, SCNNode, SCNTechnique, NSTimer, NSLock, NSString;
@protocol _SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor, AVTViewFaceTrackingDelegate, SCNCaptureDeviceOutputConsumer;


#import "AVTAvatar.h"
#import "AVTAvatarEnvironment.h"
#import "AVTFaceTracker.h"
#import "AVTARMaskRenderer.h"
#import "AVTStickerConfiguration.h"
#import "AVTStickerConfigurationReversionContext.h"
#import "AVTHUDView.h"

@interface AVTView : SCNView <_SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor>

 {
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    BOOL _lockLookAt;
    AVTAvatarEnvironment *_environment;
    AVTFaceTracker *_faceTracker;
    BOOL _enableFaceTracking;
    BOOL _captureImageIsTooDark;
    BOOL _isSensorCovered;
    BOOL _directRetargetingMode;
    id<AVTViewFaceTrackingDelegate> *_faceTrackingDelegate;
    id *_faceTrackerDidUpdateBlock;
    BOOL _arMode;
    id<SCNCaptureDeviceOutputConsumer> *_arCaptureDeviceOutputConsumer;
    NSInteger _arInterfaceOrientation;
    SCNTechnique *_arMaskTechnique;
    AVTARMaskRenderer *_arMaskRenderer;
    AVTStickerConfiguration *_stickerConfiguration;
    SCNTechnique *_stickerTransitionTechnique;
    AVTStickerConfigurationReversionContext *_stickerTransitionReversionContext;
    NSUInteger _lastTrackingUpdateTimestamp;
    NSUInteger _noTrackingFrameCount;
    CGFloat _currentlyRenderedTrackingDate;
    ? _perfTimes;
    CGFloat _perfPacketUpdateTimestamp;
    BOOL _packetNeedRecording;
    BOOL _showPerfHUD;
    int _droppedFrameCount;
    NSTimer *_perfTimeRefreshTimer;
    AVTHUDView *_debugView;
    NSLock *_lock;
    AVTAvatar *_lastRenderedAvatar;
}


@property (nonatomic) BOOL arMode;
@property (retain, nonatomic) AVTAvatar *avatar;
@property (readonly, nonatomic) BOOL captureImageIsTooDark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableFaceTracking;
@property (nonatomic) BOOL enableReticle; // ivar: _enableReticle
@property (readonly, nonatomic) BOOL faceIsTracked; // ivar: _faceIsTracked
@property (nonatomic, getter=faceTrackingIsPaused) BOOL faceTrackingPaused; // ivar: _faceTrackingPaused
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isSensorCovered) BOOL sensorCovered;
@property (readonly) Class superclass;


-(BOOL)allowTrackSmoothing;
-(BOOL)directRetargetingMode;
-(BOOL)faceIsFullyActive;
-(BOOL)isDoubleBuffered;
-(BOOL)showPerfHUD;
-(CGFloat)currentAudioTime;
-(CGFloat)currentlyRenderedTrackingDate;
-(id)_renderer:(id)arg0 subdivDataForHash:(id)arg1 ;
-(id)arSession;
-(id)environment;
-(id)faceTracker;
-(id)faceTrackingDelegate;
-(id)framingMode;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(id)arg1 ;
-(id)snapshotWithSize:(struct CGSize )arg0 ;
-(id)snapshotWithSize:(struct CGSize )arg0 scaleFactor:(float)arg1 ;
-(id)snapshotWithSize:(struct CGSize )arg0 scaleFactor:(float)arg1 options:(id)arg2 ;
-(void)_UIOrientationDidChangeNotification:(id)arg0 ;
-(void)_animateToNoTrackingState:(BOOL)arg0 ;
-(void)_avtCommonInit;
-(void)_cancelDelayedtrackingLoss;
-(void)_delayedTrackingLoss;
-(void)_detachAvatarFromRenderer;
-(void)_drawAtTime:(CGFloat)arg0 ;
-(void)_enablePhysics:(BOOL)arg0 ;
-(void)_fireTrackingLoss;
-(void)_refreshPerfTimesInfo;
-(void)_renderer:(id)arg0 didApplyAnimationsAtTime:(CGFloat)arg1 ;
-(void)_renderer:(id)arg0 didBuildSubdivDataForHash:(id)arg1 dataProvider:(id)arg2 ;
-(void)_renderer:(id)arg0 updateAtTime:(CGFloat)arg1 ;
-(void)_renderer:(id)arg0 willRenderScene:(id)arg1 atTime:(CGFloat)arg2 ;
-(void)_resetFaceToRandomPosition;
-(void)_transitionToFaceTrackingWithDuration:(CGFloat)arg0 enableBakedAnimations:(BOOL)arg1 completionHandler:(id)arg2 ;
// -(void)_transitionToStickerConfiguration:(id)arg0 duration:(CGFloat)arg1 completionHandler:(id)arg2 postSnaphotBlock:(unk)arg3  ;
-(void)_updateAvatarForARMode:(BOOL)arg0 ;
-(void)_updateFocal;
-(void)_willRecord;
-(void)addAvatarPresentedOnScreenCallbackWithQueue:(id)arg0 block:(id)arg1 ;
-(void)dealloc;
-(void)didLostTrackingForAWhile;
-(void)didMoveToWindow;
-(void)faceTracker:(id)arg0 session:(id)arg1 didFailWithError:(id)arg2 ;
-(void)faceTracker:(id)arg0 sessionInterruptionEnded:(id)arg1 ;
-(void)faceTracker:(id)arg0 sessionWasInterrupted:(id)arg1 ;
-(void)faceTrackerDidUpdate:(id)arg0 trackingInfo:(id)arg1 ;
-(void)layoutSubviews;
-(void)lockAvatar;
-(void)renderer:(id)arg0 commandBufferDidCompleteWithError:(id)arg1 ;
-(void)renderer:(id)arg0 didFallbackToDefaultTextureForSource:(id)arg1 message:(id)arg2 ;
-(void)setDirectRetargetingMode:(BOOL)arg0 ;
-(void)setFaceTracker:(id)arg0 ;
-(void)setFaceTrackingDelegate:(id)arg0 ;
-(void)setFramingMode:(id)arg0 ;
-(void)setShowPerfHUD:(BOOL)arg0 ;
-(void)setup;
-(void)setupOrientation;
-(void)transitionToFaceTrackingWithDuration:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)transitionToFaceTrackingWithDuration:(CGFloat)arg0 enableBakedAnimations:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)transitionToPose:(id)arg0 duration:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)transitionToStickerConfiguration:(id)arg0 duration:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)unlockAvatar;
-(void)updateAtTime:(CGFloat)arg0 ;
-(void)updateForChangedFaceTrackingPaused;
-(void)updateInterfaceOrientation;
-(void)warmupMemoji;
-(void)willUpdateAvatarWithNewFaceTrackingData:(CGFloat)arg0 ;


@end


#endif