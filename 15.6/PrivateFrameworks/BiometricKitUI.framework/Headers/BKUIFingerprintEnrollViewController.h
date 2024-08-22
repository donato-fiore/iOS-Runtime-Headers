// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIFINGERPRINTENROLLVIEWCONTROLLER_H
#define BKUIFINGERPRINTENROLLVIEWCONTROLLER_H

@class BiometricKitIdentity, NSDate, NSTimer, NSString, UIView, UILabel, BKDeviceTouchID, BKEnrollTouchIDOperation, BKExtendEnrollTouchIDOperation, BKIdentity;
@protocol BKUIEmbeddedEnrollmentSelectionType, BKEnrollTouchIDOperationDelegate, BKExtendEnrollTouchIDOperationDelegate, CAAnimationDelegate, OS_os_log;


#import "BKUIBundleEnrollViewController.h"
#import "BKUIAlertView.h"
#import "BKUICurvesView.h"
#import "BioStreamsEventHelper.h"
#import "BKUIFingerPrintEnrollmentPhaseViewController.h"
#import "BKUIFingerPrintEnrollTutorialViewController.h"

@interface BKUIFingerprintEnrollViewController : BKUIBundleEnrollViewController <BKUIEmbeddedEnrollmentSelectionType, BKEnrollTouchIDOperationDelegate, BKExtendEnrollTouchIDOperationDelegate, CAAnimationDelegate>

 {
    BOOL _restartRequest;
    BOOL _didDisappear;
    BOOL _enrollmentPhaseTwo;
    BOOL _matchInProgress;
    NSInteger _mesaEnrollSecondPhaseSteps;
    NSInteger _ignoreTouchOffset;
    BiometricKitIdentity *_mesaEnrollFingerIdentity;
    NSDate *_enrollmentEndTime;
    NSTimer *_messageTimer;
    int _movedFingerCount;
    int _movedFingerThr;
    BOOL _movedFingerAlertShown;
    BOOL _stillFingerAlertShown;
    BOOL _showLiftYourFingerMsg;
    NSString *_lastPromptMessage;
    BOOL _cancelForRestart;
    BOOL _displayingFirstTitle;
    CGFloat _liftFingerMsgDelay;
    CGFloat _msgTransLength;
    CGFloat _msgShowTimeout;
    BOOL _enrollInProgress;
    BOOL _waitInProgress;
    float _currentProgress;
    BKUIAlertView *_alertView;
    BOOL _mesaEnrollCompactContainer;
    BKUICurvesView *_mesaFirstEnrollView;
    BKUICurvesView *_mesaSecondEnrollView;
    UIView *_alertHudView;
    UILabel *_alertHudText;
    float _alertHudWhite;
    float _alertHudAlpha;
    float _alertHudCorners;
    float _alertHudBorder;
    BOOL _smallCoverageMessage;
    NSInteger _smallCoverageCount;
    NSInteger _smallCoverageInRowCount;
    NSInteger _maxSmallCoverageCount;
    BOOL _inBuddy;
    unsigned int _userid;
    NSObject<OS_os_log> *bkui_result_delegate_log;
    NSObject<OS_os_log> *bkui_biometric_kit_delegate_log;
    NSObject<OS_os_log> *bkui_fingerprint_enroll_view_controller_log;
}


@property (retain, nonatomic) BioStreamsEventHelper *bioStreamEventHelper; // ivar: _bioStreamEventHelper
@property (retain) BKDeviceTouchID *bkDevice; // ivar: _bkDevice
@property (retain) BKEnrollTouchIDOperation *bkEnroll; // ivar: _bkEnroll
@property (retain) BKExtendEnrollTouchIDOperation *bkExtendEnroll; // ivar: _bkExtendEnroll
@property (retain) BKIdentity *bkIdentity; // ivar: _bkIdentity
@property NSInteger bkProgress; // ivar: _bkProgress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BKUIFingerPrintEnrollmentPhaseViewController *enrollmentControlller; // ivar: _enrollmentControlller
@property (nonatomic) BOOL fingerOn; // ivar: _fingerOn
@property (retain, nonatomic) BiometricKitIdentity *firstFollowUpIdentity; // ivar: _firstFollowUpIdentity
@property (nonatomic) BOOL followUPEnrollmentUpSell; // ivar: _followUPEnrollmentUpSell
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) BKUIFingerPrintEnrollTutorialViewController *tutorialController; // ivar: _tutorialController
@property (nonatomic) BOOL waitForFingerLift; // ivar: _waitForFingerLift


-(BOOL)_shouldHideUnlockMessage;
-(BOOL)_showDisclaimer;
-(BOOL)_touchIDV2Device;
-(BOOL)_useAlertHud;
-(BOOL)isModalInPresentation;
-(BOOL)prefersStatusBarHidden;
-(id)_deviceAwareLocalizedStringForKey:(id)arg0 ;
-(id)_liftFingerString;
-(id)_placeFingerString;
-(id)_readyString;
-(id)_subtitleFont;
-(id)bundleAlertView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)menuAction:(SEL)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_animateHeaderTitle:(id)arg0 ;
-(void)_cancelActiveEnrollOperation;
-(void)_cancelEnrollmentAndRestart:(BOOL)arg0 ;
-(void)_cancelEnrollmentMatch;
-(void)_enrollHapticFeedback:(id)arg0 ;
-(void)_failEnrollment:(int)arg0 withMessage:(id)arg1 ;
-(void)_finishEnrollmentPhaseTwo;
-(void)_hapticFeedback:(BOOL)arg0 ;
-(void)_messageTimeout;
-(void)_requestNewAuthToken;
-(void)_resetUI;
-(void)_restartEnrollment;
-(void)_safeBioKitDelegateClear;
-(void)_sendEnrollResult:(int)arg0 identity:(id)arg1 ;
-(void)_setTapRecognizer:(id)arg0 ;
-(void)_showDirtOnSensorAlertView;
-(void)_showLiftYourFinger;
-(void)_showLiftYourFingerWithDelay;
-(void)_showSkipEnrollmentAlert;
-(void)_showSmallCoverageAlertView;
-(void)_skipEnrollment;
-(void)_startEnroll;
-(void)_startEnrollOperation;
-(void)_startEnrollmentMatch;
-(void)_startExtendEnrollOperation;
-(void)_startInitialTutorial:(BOOL)arg0 ;
-(void)_startMessageTimer:(CGFloat)arg0 ;
-(void)_startTutorial:(BOOL)arg0 ;
-(void)_stopBiometricOperations;
-(void)_stopMessageTimer;
-(void)_stopTutorialTransitionToEnrollView;
-(void)_transitionPromptMessage:(id)arg0 ;
-(void)_transitionToEnrollView:(BOOL)arg0 ;
-(void)_transitionToTutorialView:(BOOL)arg0 ;
-(void)_tutorialContinueButtonPressed;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)cancelEnroll;
-(void)constructAlertView;
-(void)createEnrollUI;
-(void)dealloc;
-(void)didSelectPrimaryButton:(id)arg0 ;
-(void)didSelectSecondaryButton:(id)arg0 ;
-(void)enrollDoneContinueButtonPressed;
-(void)enrollOperation:(id)arg0 failedWithReason:(NSInteger)arg1 ;
-(void)enrollOperation:(id)arg0 finishedWithIdentity:(id)arg1 ;
-(void)enrollOperation:(id)arg0 percentCompleted:(NSInteger)arg1 ;
-(void)enrollOperation:(id)arg0 progressedWithTouchIDInfo:(id)arg1 ;
-(void)enrollProgress:(id)arg0 ;
-(void)enrollResult:(id)arg0 ;
-(void)extendEnroll:(id)arg0 hasUpdated:(BOOL)arg1 ;
-(void)fingerprintCaptureOperation:(id)arg0 encounteredCaptureError:(NSInteger)arg1 ;
-(void)handleProgress:(unsigned int)arg0 ;
-(void)homeButtonPressed;
-(void)initPromptMessage;
-(void)loadView;
-(void)matchResult:(id)arg0 withDetails:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithReason:(NSInteger)arg1 ;
-(void)operation:(id)arg0 presenceStateChanged:(BOOL)arg1 ;
-(void)operation:(id)arg0 stateChanged:(NSInteger)arg1 ;
-(void)respondToTapGesture:(id)arg0 ;
-(void)restartEnroll;
-(void)restartEnrollPressed:(id)arg0 ;
-(void)showSecondFingerEnrollmentUpSell;
-(void)skipEnrollmentPressed:(id)arg0 ;
-(void)statusMessage:(unsigned int)arg0 ;
-(void)touchIDButtonPressedInOperation:(id)arg0 ;
-(void)transitionToEnrollView:(BOOL)arg0 ;
-(void)transitionToTutorialView:(BOOL)arg0 ;
-(void)transitionToTutorialView:(BOOL)arg0 completion:(id)arg1 ;
-(void)tutorialContinueButtonPressed:(id)arg0 ;
-(void)tutorialSkipButtonPressed:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif