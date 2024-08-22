// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPICTUREINPICTUREREMOTEOBJECT_H
#define PGPICTUREINPICTUREREMOTEOBJECT_H

@class NSXPCConnection, NSUUID, NSTimer, NSArray, NSString, FBScene;
@protocol PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate, BSDescriptionProviding, PGCommandHandler, OS_dispatch_queue, BSInvalidatable, PGPictureInPictureAnalyticsDelegate, PGPictureInPictureRemoteObjectDelegate;

#import <Foundation/Foundation.h>

#import "PGProcessAssertion.h"
#import "PGPlaybackState.h"
#import "PGInterruptionAssistant.h"
#import "PGPictureInPictureApplication.h"
#import "PGPictureInPictureViewController.h"
#import "PGPictureInPictureRemoteObject.h"

@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate, BSDescriptionProviding, PGCommandHandler>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _queue_outstandingRotationAnimationsCount;
    NSInteger _controlsStyle;
    PGProcessAssertion *_processAssertion;
    PGProcessAssertion *_startBackgroundPIPAssertion;
    PGProcessAssertion *_interruptionBeganFinishTaskAssertion;
    PGProcessAssertion *_cancelPictureInPictureFinishTaskAssertion;
    NSUUID *_finishTaskInvalidationUUID;
    NSTimer *_timerForInvalidatingIfStopOrCancelFails;
    NSUUID *_analyticsSourceUUID;
    BOOL _pictureInPictureStartedAutomatically;
    BOOL _isPictureInPicturePossible;
    BOOL _hasPendingCancellationRequest;
    BOOL _hasPendingStopRequest;
    BOOL _pictureInPictureShouldStartWhenEnteringBackground;
    BOOL _shouldShowAlternateActionButtonImage;
    BOOL _shouldShowLoadingIndicator;
    NSArray *_menuItems;
    NSString *_activitySessionIdentifier;
    PGPlaybackState *_playbackState;
    PGInterruptionAssistant *_interruptionAssistant;
    BOOL _hasBegunTwoStageStop;
    BOOL _stashed;
    NSUInteger _resourcesUsageReductionReasons;
    NSUInteger _UILockedResourcesUsageReductionReasons;
    NSUInteger _externalResourcesUsageReductionReasons;
    NSTimer *_considerStashedPlaybackAsBackgroundAudioTimer;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    FBScene *_sourceScene;
    NSString *_activitySessionIdentifierForLastActivePIPSession;
}


@property (readonly, copy, nonatomic) NSString *activitySessionIdentifier;
@property (weak, nonatomic) NSObject<PGPictureInPictureAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, nonatomic) BOOL canCancelPictureInPicture;
@property (readonly, nonatomic) BOOL canEndTwoStageStopPictureInPicture;
@property (readonly, nonatomic) BOOL canStartBackgroundPIPForCurrentActivitySessionIdentifier;
@property (readonly, nonatomic) BOOL canStopPictureInPicture;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PGPictureInPictureRemoteObjectDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *exemptAttribution; // ivar: _exemptAttribution
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding; // ivar: _initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding
@property (readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic) BOOL isStartingStoppingOrCancellingPictureInPicture;
@property (readonly, nonatomic) BOOL isStoppingOrCancellingPictureInPicture;
@property (readonly, nonatomic) PGPictureInPictureApplication *pictureInPictureApplication; // ivar: _pictureInPictureApplication
@property (nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // ivar: _pictureInPictureViewController
@property (readonly, nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL shouldStartPictureInPictureEnteringBackground;
@property (readonly, nonatomic) NSString *sourceSceneSessionPersistentIdentifier; // ivar: _sourceSceneSessionPersistentIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) PGPictureInPictureRemoteObject *tetheredRemoteObject; // ivar: _tetheredRemoteObject
@property (retain, nonatomic) PGPictureInPictureRemoteObject *tetheringRemoteObject; // ivar: _tetheringRemoteObject
@property (readonly, nonatomic, getter=isVideoCall) BOOL videoCall;


+(void)tetherRemoteObject:(id)arg0 toRemoteObject:(id)arg1 mode:(NSInteger)arg2 ;
-(BOOL)_canTransitionToState:(NSInteger)arg0 ;
-(BOOL)_isAppICS;
-(BOOL)_isAssociatedWithOtherObject:(id)arg0 ;
-(BOOL)_isICSVideoCall;
-(BOOL)_isInActivitySession;
-(BOOL)_isUnderLock;
-(BOOL)_wantsProcessAssertion;
-(BOOL)canActivateUntetheredAlongsideOtherObject:(id)arg0 ;
-(BOOL)canPreventOrSuspendRemoteObject:(id)arg0 ;
-(BOOL)canStartMicroPIP;
-(BOOL)canTetherRemoteObjectAsMicroPIP:(id)arg0 ;
-(BOOL)isAssociatedWithRemoteObject:(id)arg0 ;
-(BOOL)isStartingPictureInPicture;
-(BOOL)matchesSceneSessionIdentifier:(id)arg0 ;
-(BOOL)pictureInPictureViewControllerShouldHideTetheredViewControllerAlongsideControls:(id)arg0 ;
-(BOOL)pictureInPictureViewControllerWantsStashTabSuppression:(id)arg0 ;
-(BOOL)supportsMicroPIP;
-(id)_invalidationTimerWithTimeout:(CGFloat)arg0 ;
-(id)_invalidationTimerWithTimeout:(CGFloat)arg0 block:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithConnection:(id)arg0 interruptionAssistant:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_acquireOrInvalidateProcessAssertionIfNeeded;
-(void)_finishCleanup;
-(void)_invalidateAllAssertions;
-(void)_invalidateForFailureToStartStopOrCancel;
-(void)_invalidateInterruptionBeganFinishTaskAssertion;
-(void)_notifyProxyOfStashedOrUnderLock:(BOOL)arg0 ;
-(void)_setResolvedResourcesUsageReductionReasons:(NSUInteger)arg0 ;
-(void)_setUILockedResourcesUsageReductionReasons:(NSUInteger)arg0 ;
-(void)_stopTethering;
-(void)_updateActiveProxyAndViewControllerOfInterruptionIfNeeded;
-(void)_updatePreferredContentSize:(struct CGSize )arg0 withCompletionHandler:(id)arg1 ;
-(void)beginTwoStageStopPictureInPictureByRestoringUserInterfaceWithCompletionHandler:(id)arg0 ;
-(void)cancel;
-(void)checkActivePictureInPictureCancellationPolicyWithCompletion:(id)arg0 ;
-(void)cleanupWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)endTwoStageStopPictureInPictureWithCompletionBlock:(id)arg0 ;
-(void)handleCommand:(id)arg0 ;
-(void)initializePictureInPictureWithControlsStyle:(NSInteger)arg0 preferredContentSize:(struct CGSize )arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)pictureInPictureInterruptionBeganWithReason:(NSInteger)arg0 attribution:(id)arg1 ;
-(void)pictureInPictureInterruptionEndedWithReason:(NSInteger)arg0 attribution:(id)arg1 ;
-(void)pictureInPictureViewController:(id)arg0 didReceiveCommand:(id)arg1 ;
-(void)pictureInPictureViewController:(id)arg0 didTransitionToStashed:(BOOL)arg1 ;
-(void)pictureInPictureViewController:(id)arg0 updateHostedWindowSize:(struct CGSize )arg1 animationType:(NSInteger)arg2 initialSpringVelocity:(CGFloat)arg3 ;
-(void)pictureInPictureViewControllerDidRequestCancel:(id)arg0 ;
-(void)pictureInPictureViewControllerDidRequestStop:(id)arg0 ;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg0 ;
-(void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg0 ;
-(void)resume;
-(void)rotateContentContainer:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)sendStartPictureInPictureTestAction;
-(void)setCurrentResourcesUsageReductionReasons:(NSUInteger)arg0 ;
-(void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setupStartAnimated:(BOOL)arg0 hostedWindowHostingHandle:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 preferredContentSize:(struct CGSize )arg3 initialInterfaceOrientation:(NSInteger)arg4 initialLayerFrame:(struct CGRect )arg5 completionHandler:(id)arg6 ;
-(void)setupStopAnimated:(BOOL)arg0 needsApplicationActivation:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)startPictureInPictureAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)startPictureInPictureEnteringBackgroundAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)startPictureInPictureFromBackground;
-(void)stopPictureInPictureAndRestoreUserInterface;
-(void)stopPictureInPictureAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)stopPictureInPictureAnimated:(BOOL)arg0 withFinalInterfaceOrientation:(NSInteger)arg1 finalLayerFrame:(struct CGRect )arg2 completionHandler:(id)arg3 ;
-(void)suspend;
-(void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect )arg0 withCompletionHandler:(id)arg1 ;
-(void)updateMenuItems:(id)arg0 ;
-(void)updatePlaybackStateWithDiff:(id)arg0 ;
-(void)updatePreferredContentSize:(struct CGSize )arg0 withCompletionHandler:(id)arg1 ;
-(void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif