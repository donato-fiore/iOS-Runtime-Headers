// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDVRGBCAPTURESELFIEVC_H
#define CIDVRGBCAPTURESELFIEVC_H

@class UIViewController, UIBarButtonItem, UIView, UILabel, UIVisualEffectView, UIImageView, UIScrollView, UIButton, UIActivityIndicatorView, NSLayoutConstraint, NSArray, NSTimer, NSString, NSError, NSMutableArray, UIColor;
@protocol CIDVRGBCaptureSelfieControllerDelegate, CIDVRGBCaptureSelfieController;


#import "CIDVRGBCameraPreview.h"
#import "CIDVRGBCoachingView.h"
#import "CIDVRGBAudioSession.h"
#import "CIDVRGBCameraShutterView.h"
#import "CIDVRGBCaptureTimer.h"
#import "CIDVRGBCaptureUIConfig.h"

@interface CIDVRGBCaptureSelfieVC : UIViewController <CIDVRGBCaptureSelfieControllerDelegate>

 {
    UIBarButtonItem *_flashButton;
    UIView *_topContainer;
    UIView *_nagContainer;
    UILabel *_nagPrompt;
    CIDVRGBCameraPreview *_cameraFeed;
    UIVisualEffectView *_blurView;
    CIDVRGBCoachingView *_coachingView;
    UIImageView *_selfieView;
    CIDVRGBAudioSession *_audioSession;
    UIView *_bottomContainer;
    UIView *_coachingPromptContainer;
    UIView *_livenessButtonContainer;
    UIScrollView *_coachingPromptScrollView;
    UILabel *_coachingPrompt;
    UILabel *_axOptionsPrompt;
    UIButton *_livenessPrimaryButton;
    UIButton *_livenessSecondaryButton;
    UIActivityIndicatorView *_livenessPrimaryButtonActivityIndicator;
    UILabel *_shutterPrompt;
    UIButton *_retakeButton;
    UIButton *_continueButton;
    UIButton *_expandButton;
    CIDVRGBCameraShutterView *_shutterButton;
    NSLayoutConstraint *_coachingViewCenterYConstraintLarge;
    NSLayoutConstraint *_coachingViewCenterYConstraintSmall;
    NSLayoutConstraint *_coachingViewWidthConstraintLarge;
    NSLayoutConstraint *_coachingViewWidthConstraintSmall;
    NSLayoutConstraint *_bottomContainerLivenessHeightConstraint;
    NSLayoutConstraint *_bottomContainerSelfieHeightConstraint;
    NSLayoutConstraint *_coachingPromptBottomConstraint;
    NSLayoutConstraint *_axOptionsPromptBottomConstraint;
    NSArray *_cameraPreviewConstraintsDefault;
    NSArray *_cameraPreviewConstraintsExpanded;
    NSLayoutConstraint *_coachingPromptTopConstraint;
    id<CIDVRGBCaptureSelfieController> *_controller;
    CIDVRGBCaptureTimer *_skipButtonTimer;
    CIDVRGBCaptureTimer *_skipAlertTimer;
    NSTimer *_errorReminderTimer;
    NSTimer *_gestureTutorialDelayTimer;
    NSTimer *_gestureDetectedTimer;
    NSString *_primaryButtonTitle;
    NSInteger _maxRetakeCount;
    NSInteger _reminderCount;
    NSInteger _alertCount;
    NSInteger _consecutiveInvalidFrames;
    NSInteger _flashMode;
    NSError *_latestImageQualityError;
    NSMutableArray *_blocksAwaitingImageQualityVerifications;
    BOOL _shouldIgnoreErrors;
    BOOL _hasPresentedFirstGesture;
    BOOL _hasPresentedLastGesture;
    BOOL _modelsAreRunning;
    BOOL _didSkipLastGesture;
    BOOL _originalIdleTimerDisabled;
    UIColor *_originalNavBarColor;
    BOOL _haveOverriddenWindowUserInterfaceStyle;
    NSInteger _originalWindowUserInterfaceStyle;
    BOOL _cameraPreviewExpanded;
    BOOL _accessibilityOptionsEnabled;
    BOOL _shouldShowSkipGestureAfterInitialTimer;
    BOOL _hasShownGestureReminder;
    BOOL _hasShownGestureNotDetectedAlert;
    BOOL _hasShownErrorAlert;
    BOOL _hasShownInvalidFramesAlert;
    BOOL _hasCancelledFromStitch;
    BOOL _hasPausedGestureTutorial;
    BOOL _canResumeGestureTutorial;
    BOOL _hasShownAXOptions;
    NSInteger _currentGesture;
    NSInteger _alertCause;
    CGFloat _alertStartTime;
    CGFloat _currentGestureDetectionStartTime;
    id *_livenessPrimaryBlock;
    id *_livenessSecondaryBlock;
}


@property (nonatomic) CIDVRGBCaptureUIConfig *config; // ivar: _config


-(BOOL)_shouldRestart;
-(NSInteger)_coachingViewStyleForGesture:(NSInteger)arg0 ;
-(NSInteger)_restartCauseFromErrorCode:(NSInteger)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(void)_animateGestureReminderWithCompletion:(id)arg0 ;
-(void)_animateTransitionToGesture:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_animateTransitionToPhotoCaptureWithCompletion:(id)arg0 ;
-(void)_cancelCaptureSession:(id)arg0 ;
-(void)_cancelErrorReminderTimer;
-(void)_cancelFromInvalidFramesWithCode:(NSInteger)arg0 ;
-(void)_cancelFromStitchDetection:(id)arg0 ;
-(void)_cancelGestureTutorialDelayTimer;
-(void)_cancelSkipButtonTimers;
-(void)_completeCaptureSession;
-(void)_continuePressed:(id)arg0 ;
-(void)_dispatchSkipButtonTimers;
-(void)_enableAXOptions;
-(void)_enableSkipButtonWithReminder;
-(void)_hideBlurView:(id)arg0 ;
-(void)_hideCoachingView;
-(void)_incrementInvalidFrameCounterWithCode:(NSInteger)arg0 ;
-(void)_livenessPrimaryButtonPressed:(id)arg0 ;
-(void)_livenessSecondaryButtonPressed:(id)arg0 ;
-(void)_overrideWindowUserInterfaceStyle;
-(void)_pauseSkipButtonTimers;
-(void)_pauseTutorial;
-(void)_performBlocksAwaitingImageQualityVerification;
-(void)_performSelfieCapture;
-(void)_presentCoachingForGesture:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_presentCoachingSuccess:(id)arg0 ;
-(void)_presentErrorGenericAlert:(id)arg0 ;
-(void)_presentErrorLowDiskSpaceAlert;
-(void)_presentForcedSkipGestureAlert;
-(void)_presentLastGestureDetectedScreen;
-(void)_presentSelfieErrorAlert:(id)arg0 ;
-(void)_presentSkipGestureAlert;
-(void)_repeatCurrentGestureCoaching;
-(void)_resetInvalidFrameCounter;
-(void)_restartSelfieCapture;
-(void)_restoreOriginalWindowUserInterfaceStyle;
-(void)_resumeTutorial;
-(void)_retakePressed:(id)arg0 ;
-(void)_sendAlertAnalyticsEvent;
-(void)_sendGestureDetectedAnalyticsEvent;
-(void)_setCoachingPromptText:(id)arg0 ;
-(void)_setCoachingPromptTextForGesture:(NSInteger)arg0 ;
-(void)_setErrorReminderTimer;
-(void)_setUseFlash:(BOOL)arg0 ;
-(void)_setupBlurView;
-(void)_setupBottomContainer;
-(void)_setupCameraFeed;
-(void)_setupCoachingPrompt;
-(void)_setupCoachingPromptContainer;
-(void)_setupCoachingPromptScrollView;
-(void)_setupCoachingView;
-(void)_setupContinueButton;
-(void)_setupController;
-(void)_setupExpandButton;
-(void)_setupFlashButton;
-(void)_setupLivenessButtonContainer;
-(void)_setupLivenessPrimaryButton;
-(void)_setupLivenessSecondaryButton;
-(void)_setupNag;
-(void)_setupRetakeButton;
-(void)_setupSelfieView;
-(void)_setupShutterButton;
-(void)_setupShutterPrompt;
-(void)_setupTopContainer;
-(void)_showAXOptions;
-(void)_showBlurView:(id)arg0 ;
-(void)_showNextGesture:(NSInteger)arg0 ;
-(void)_showPhotoCapture;
-(void)_showSelfieCapturedOptions;
-(void)_skipGesture;
-(void)_startCaptureSession;
-(void)_startShowingLivenessActivity;
-(void)_stopShowingLivenessActivity;
-(void)_toggleCameraPreviewExpansion:(id)arg0 ;
-(void)_toggleFlash:(id)arg0 ;
-(void)_updateViewsForWatchMode;
-(void)_useLargeCoachingView;
-(void)_useSmallCoachingView;
-(void)captureSelfieDidDetectIncorrectGesture;
-(void)captureSelfieDidEncounterError:(id)arg0 ;
-(void)captureSelfieDidFinishGestureMonitoring;
-(void)captureSelfieDidObtainImageQualityError:(id)arg0 ;
-(void)captureSelfieDidObtainPicture:(id)arg0 error:(id)arg1 ;
-(void)captureSelfieWillMonitorGesture:(NSInteger)arg0 ;
-(void)loadView;
-(void)performBlockAfterImageQualityVerifications:(id)arg0 ;
-(void)prepareForDismissal;
-(void)setController:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif