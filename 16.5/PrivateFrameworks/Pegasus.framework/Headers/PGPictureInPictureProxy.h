// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPICTUREINPICTUREPROXY_H
#define PGPICTUREINPICTUREPROXY_H

@class NSString, NSArray, NSXPCConnection, UIViewController, NSTimer, UIViewController<PGPictureInPictureViewController>;
@protocol PGPictureInPictureExportedInterface, OS_dispatch_queue, PGPictureInPictureProxyDelegate;

#import <Foundation/Foundation.h>

#import "PGPlaybackState.h"
#import "PGRunLoopObserver.h"
#import "PGHostedWindow.h"

@interface PGPictureInPictureProxy : NSObject <PGPictureInPictureExportedInterface>

 {
    CGSize _preferredContentSize;
    CGRect _frameForInteractiveTransitions;
    NSString *_sceneSessionPersistentIdentifier;
    NSString *_clientSessionIdentifier;
    NSString *_sceneSessionPersistentIdentifierAccordingToRemoteObject;
    NSString *_clientSessionIdentifierAccordingToRemoteObject;
    BOOL _canSendPlaybackState;
    BOOL _automaticallyInterruptsForLegacyFaceTimeBehaviors;
    BOOL _isInterruptedForStash;
    BOOL _isInterruptedForDefaultReason;
    BOOL _isInterruptedForAnyReason;
    BOOL _isPictureInPicturePossible;
    BOOL _isPictureInPictureActive;
    BOOL _isPictureInPictureSuspended;
    BOOL _pictureInPictureShouldStartWhenEnteringBackground;
    BOOL _pictureInPictureWasStartedWhenEnteringBackground;
    BOOL _shouldCancelActivePictureInPictureOnStart;
    BOOL _shouldPullCancellationPolicyOnStart;
    BOOL _isObservingViewController;
    BOOL _needsReinitialization;
    BOOL _shouldStopUponActivation;
    BOOL _shouldCancelUponActivation;
    id *_windowSceneActivationStateObserver;
    CGFloat _playbackProgress;
    CGFloat _playbackRate;
    NSArray *_loadedTimeRanges;
    NSArray *_menuItems;
    PGPlaybackState *_playbackState;
    PGPlaybackState *_playbackStateAccordingToRemoteObject;
    PGRunLoopObserver *_runLoopObserver;
    os_unfair_lock_s _lock;
    NSXPCConnection *_lock_connection;
    NSXPCConnection *_lock_connectionIfInterrupted;
    NSObject<OS_dispatch_queue> *_queue;
    PGHostedWindow *_hostedWindow;
    UIViewController *_rootViewController;
    NSInteger _activationState;
    NSTimer *_prewarmingTimeoutTimer;
    BOOL _isHostedWindowSizeChangeDuringPinchGesture;
    BOOL _isInViewService;
    id<PGPictureInPictureProxyDelegate> *_delegate;
    ? _delegateRespondsTo;
}


@property (copy, nonatomic) id *_pipStopFinalStageCompletionHandler; // ivar: __pipStopFinalStageCompletionHandler
@property (copy, nonatomic) id *_pipStopUserInterfaceRestoreContinuationBlock; // ivar: __pipStopUserInterfaceRestoreContinuationBlock
@property (nonatomic) NSInteger controlsStyle; // ivar: _controlsStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PGPictureInPictureProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (readonly, nonatomic, getter=isPictureInPictureInterrupted) BOOL pictureInPictureInterrupted;
@property (readonly, nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (nonatomic) BOOL pictureInPictureShouldStartWhenEnteringBackground;
@property (readonly, nonatomic, getter=isPictureInPictureStashedOrUnderLock) BOOL pictureInPictureStashedOrUnderLock; // ivar: _pictureInPictureStashedOrUnderLock
@property (readonly, nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended;
@property (readonly, nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;
@property (readonly, nonatomic) PGPlaybackState *playbackState;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay; // ivar: _readyForDisplay
@property (readonly, nonatomic) NSUInteger resourcesUsageReductionReasons; // ivar: _resourcesUsageReductionReasons
@property (nonatomic, getter=isPictureInPictureStashed) BOOL stashed; // ivar: _stashed
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController<PGPictureInPictureViewController> *viewController; // ivar: _viewController


+(BOOL)isPictureInPictureSupported;
+(id)pictureInPictureProxyWithControlsStyle:(NSInteger)arg0 viewController:(id)arg1 ;
+(void)_updatePictureInPictureActive:(BOOL)arg0 ;
-(BOOL)_canBeShownInMicroPIPMode;
-(BOOL)_isInCallService;
-(BOOL)_isInactive;
-(BOOL)_isViewControllerWindowSceneActive;
-(BOOL)_isViewControllerWindowSceneConsideredActive;
-(BOOL)automaticallyInterruptsForLegacyFaceTimeBehaviors;
-(BOOL)canSwitchCamera;
-(BOOL)disablesLayerCloning;
-(BOOL)isCameraActive;
-(BOOL)isMicrophoneMuted;
-(CGFloat)playbackProgress;
-(CGFloat)playbackRate;
-(NSInteger)_activationState;
-(NSInteger)_interfaceOrientationForTransitionAnimationAssumeApplicationActive:(BOOL)arg0 ;
-(id)_bestKnownConnectedSceneSessionPersistentIdentifier;
-(id)_connection;
-(id)_expectedScene;
-(id)_generatePlaybackStateDiffAndMarkAsSent;
-(id)_remoteObject;
-(id)_remoteObjectWithErrorHandler:(id)arg0 ;
-(id)_sourceScene;
-(id)clientSessionIdentifier;
-(id)init;
-(id)initWithControlsStyle:(NSInteger)arg0 viewController:(id)arg1 ;
-(id)loadedTimeRanges;
-(id)menuItems;
-(struct CGRect )_viewFrameForTransitionAnimationAssumeApplicationActive:(BOOL)arg0 ;
// -(void)__actuallyStartWithAnimationType:(NSInteger)arg0 successHandler:(id)arg1 failureHandler:(unk)arg2  ;
-(void)__actuallyStopAnimated:(BOOL)arg0 reason:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)__actuallyStopAnimated:(BOOL)arg0 reason:(NSInteger)arg1 finalLayerFrame:(struct CGRect )arg2 finalInterfaceOrientation:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)__cleanupWithCompletionHandler:(id)arg0 ;
-(void)__coordinateStartAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)__didStartWithAnimationType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)__restoreUserInterfaceAnimated:(BOOL)arg0 reason:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)__setConnection:(id)arg0 ;
// -(void)__setupStartWithAnimationType:(NSInteger)arg0 initialLayerFrame:(struct CGRect )arg1 successHandler:(id)arg2 failureHandler:(unk)arg3  ;
// -(void)__setupStopAnimated:(BOOL)arg0 needsApplicationActivation:(BOOL)arg1 successHandler:(id)arg2 failureHandler:(unk)arg3  ;
// -(void)__setupStopAnimated:(BOOL)arg0 needsApplicationActivation:(BOOL)arg1 waitForApplicationActivation:(BOOL)arg2 successHandler:(id)arg3 failureHandler:(unk)arg4  ;
// -(void)__updateCancellationPolicyWithSuccessHandler:(id)arg0 failureHandler:(unk)arg1  ;
// -(void)__waitForApplicationActivationWithSuccessHandler:(id)arg0 failureHandler:(unk)arg1  ;
-(void)_addViewControllerToHostedWindowIfNeeded;
-(void)_addWindowSceneActivationStateObserverIfNeeded:(id)arg0 ;
-(void)_applicationDidBecomeActive;
-(void)_beginDeactivatingPictureInPicture;
-(void)_beginDeactivatingPictureInPictureWithAnimationType:(NSInteger)arg0 stopReason:(NSInteger)arg1 ;
-(void)_cancelPrewarming;
-(void)_deactivateIfNeededForInterruptedOrInvalidatedConnection;
-(void)_endDeactivatingPictureInPictureIfNeededWithAnimationType:(NSInteger)arg0 stopReason:(NSInteger)arg1 ;
-(void)_endDeactivatingPictureInPictureIfNeededWithAnimationType:(NSInteger)arg0 stopReason:(NSInteger)arg1 cleanupHandlerOrNil:(id)arg2 ;
-(void)_establishConnection;
// -(void)_executeDelegateCallbackBlock:(id)arg0 assumeApplicationActive:(unk)arg1  ;
-(void)_handleSceneConnectionChangedNotification:(id)arg0 ;
-(void)_initializeWithControlsStyle:(NSInteger)arg0 viewController:(id)arg1 reason:(id)arg2 ;
-(void)_invalidateConnectionForFailure;
-(void)_legacyPictureInPictureInterruptionBegan;
-(void)_legacyPictureInPictureInterruptionEnded;
-(void)_markConnectionAsInterrupted;
-(void)_notifyActionButtonTapped;
-(void)_prewarmAndStartAfterTimeout;
-(void)_removeViewControllerFromHostedWindowIfNeeded;
-(void)_resetInternalState;
-(void)_restoreInterruptedConnectionIfNeeded;
-(void)_setActivationState:(NSInteger)arg0 reason:(id)arg1 ;
-(void)_setInterruptedForDefaultReason:(BOOL)arg0 initiatedByRemoteObject:(BOOL)arg1 ;
-(void)_setMaybeNeedsUpdatePlaybackState;
-(void)_startBackgroundPIPWhilePrewarmingIfNeeded;
-(void)_startPictureInPictureAnimated:(BOOL)arg0 enteringBackground:(BOOL)arg1 reason:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)_stopObservingWindowSceneActivationState;
-(void)_stopPictureInPictureAnimated:(BOOL)arg0 restoreUserInterface:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
// -(void)_twoStageStopForPictureInPictureRestoreWithContinueAfterUserInterfaceRestoreBlock:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_updateAutoPIPSettingsAndNotifyRemoteObjectIfNeeded;
-(void)_updateAutoPIPSettingsAndNotifyRemoteObjectWithReason:(id)arg0 ;
-(void)_updateFaceTimePlaybackStateUsingBlock:(id)arg0 ;
-(void)_updateInteractiveFrameWorkaroundFor_100127310:(id)arg0 ;
-(void)_updateIsInterruptedIfNeededForReason:(id)arg0 ;
-(void)_updateIsInterruptedIfNeededForReason:(id)arg0 initiatedByRemoteObject:(BOOL)arg1 ;
-(void)_updatePlaybackStateContentTypeIfNeeded;
-(void)_updatePlaybackStateIfNeeded;
-(void)_updateScreenSharingInfoIfNeeded;
-(void)_viewFrameForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewControllerWithReason:(id)arg0 ;
-(void)_windowSceneForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewControllerWithReason:(id)arg0 ;
-(void)actionButtonTapped;
-(void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)endTwoStagePictureInPictureStopWithCompletionBlock:(id)arg0 ;
-(void)handleCommand:(id)arg0 ;
-(void)hostedWindowSizeChangeBegan;
-(void)hostedWindowSizeChangeEnded;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pictureInPictureCancelRequestedAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)pictureInPictureInvalidated;
-(void)pictureInPictureStartRequestedAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)pictureInPictureStopRequestedAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)preferredContentSizeDidChangeForViewController;
-(void)rotateContentContainer:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)setAutomaticallyInterruptsForLegacyFaceTimeBehaviors:(BOOL)arg0 ;
-(void)setCameraActive:(BOOL)arg0 ;
-(void)setCanSwitchCamera:(BOOL)arg0 ;
-(void)setClientSessionIdentifier:(id)arg0 ;
-(void)setDisablesLayerCloning:(BOOL)arg0 ;
-(void)setLoadedTimeRanges:(id)arg0 ;
-(void)setMenuItems:(id)arg0 ;
-(void)setMicrophoneMuted:(BOOL)arg0 ;
-(void)setPlaybackProgress:(CGFloat)arg0 playbackRate:(CGFloat)arg1 ;
-(void)setScreenSharingTitle:(id)arg0 avatar:(id)arg1 ;
-(void)skipForwardButtonTappedWithTimeInterval:(CGFloat)arg0 ;
-(void)startPictureInPicture;
-(void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg0 ;
-(void)updateHostedWindowSize:(struct CGSize )arg0 animationType:(NSInteger)arg1 initialSpringVelocity:(CGFloat)arg2 synchronizationFence:(id)arg3 ;
-(void)updatePictureInPicturePossible:(BOOL)arg0 ;
-(void)updatePlaybackStateUsingBlock:(id)arg0 ;
-(void)viewFrameForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;
-(void)windowSceneForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;


@end


#endif