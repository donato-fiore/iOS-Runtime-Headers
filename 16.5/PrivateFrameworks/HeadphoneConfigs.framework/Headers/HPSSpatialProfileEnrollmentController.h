// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSSPATIALPROFILEENROLLMENTCONTROLLER_H
#define HPSSPATIALPROFILEENROLLMENTCONTROLLER_H

@class UIViewController, UIView, UIScrollView, UIStackView, OBHeaderView, UILabel, OBTrayButton, UIVisualEffectView, UIImageView, CEKSubjectIndicatorView, NSTimer, HRTFEnrollmentSession, NSMutableData, UIActivityIndicatorView, BluetoothManager, CIContext, CIDetector, NSArray, NSString;
@protocol HRTFEnrollmentSessionDelegate, BKUIPearlEnrollViewDelegate, HPSSpatialProfileManagerViewController, OS_dispatch_queue;


#import "HPSSpatialProfileSoundHapticManager.h"
#import "HPSSpatialProfileUIPearlEnrollView.h"
#import "HPSSpatialProfileEarPillContainerView.h"
#import "HPSSpatialProfileEarTutorialView.h"
#import "HPSSpatialProfileEarDotsMovieView.h"
#import "HPSSpatialProfileVideoCaptureSession.h"
#import "HPSSpatialProfileAnalytics.h"

@interface HPSSpatialProfileEnrollmentController : UIViewController <HRTFEnrollmentSessionDelegate, BKUIPearlEnrollViewDelegate, HPSSpatialProfileManagerViewController>

 {
    UIView *_enrollContentView;
    UIView *_scrollContentView;
    UIScrollView *_scrollView;
    UIView *_scrollInnerContentView;
    UIStackView *_scrollInnerStackView;
    OBHeaderView *_infoView;
    UILabel *_learnMoreView;
    OBTrayButton *_continueButton;
    OBTrayButton *_occlusionContinueButton;
    OBTrayButton *_earDistanceWarnContinueButton;
    UIVisualEffectView *_buttonTrayEffectView;
    UIView *_spacerViewFirst;
    UIView *_spacerViewSecond;
    UIView *_welcomeContentView;
    UIImageView *_welcomeImageView;
    CGRect _visageFrame;
    HPSSpatialProfileSoundHapticManager *_soundHapticManager;
    HPSSpatialProfileUIPearlEnrollView *_enrollView;
    HPSSpatialProfileEarPillContainerView *_earPillContainer;
    UIView *_tutorialContentView;
    HPSSpatialProfileEarTutorialView *_earTutorialView;
    HPSSpatialProfileEarDotsMovieView *_earDotsMovieView;
    CEKSubjectIndicatorView *_earBoundingBoxView;
    NSTimer *_captureViewTimer;
    NSTimer *_postProcessTimer;
    NSTimer *_postProcessSpinnerTimer;
    NSTimer *_tutorialResumeEnrollTimer;
    BOOL _welcomeSpinnerOn;
    BOOL _postProcessSpinnerOn;
    NSTimer *_startEarEnrollWarningCoolDownTimer;
    BOOL _supressEarEnrollWarning;
    int _currentStep;
    int _previousStep;
    NSUInteger _sessionState;
    HPSSpatialProfileVideoCaptureSession *videoCaptureSession;
    HRTFEnrollmentSession *_enrollmentSession;
    NSMutableData *_profileData;
    HPSSpatialProfileAnalytics *_enrollmentAnalytics;
    UIActivityIndicatorView *_spinner;
    float _initialVolume;
    BOOL _volumeChanged;
    BOOL _enrollmentStarted;
    BOOL _enrollmentReady;
    BOOL _enrollmentPaused;
    BOOL _enrollmentCompleted;
    BOOL _enrollViewInitialized;
    CGFloat _currentProgress;
    int _faceBoundingBoxStatus;
    NSTimer *_faceInFrameHandlerTimer;
    BOOL _faceDetected;
    BOOL _faceStraightZeroAngleCaptured;
    BOOL _faceCaptured;
    BOOL _faceUpFilled;
    BOOL _faceDownFilled;
    BOOL _faceLeftFilled;
    BOOL _faceRightFilled;
    unsigned char _earCaptureSoundStep;
    BOOL _rightEarDetected;
    BOOL _rightEarCaptured;
    BOOL _rightEarFrontCaptured;
    BOOL _rightEarMidCaptured;
    BOOL _rightEarRearCaptured;
    unsigned char _rightEarCaptureCount;
    unsigned char _rightEarInViewCount;
    int _rightEarStatus;
    BOOL _leftEarDetected;
    BOOL _leftEarCaptured;
    BOOL _leftEarFrontCaptured;
    BOOL _leftEarMidCaptured;
    BOOL _leftEarRearCaptured;
    unsigned char _leftEarCaptureCount;
    unsigned char _leftEarInViewCount;
    BOOL _earBoundingBoxDetected;
    unsigned char _earBoundingBoxDetectTracker;
    int _leftEarStatus;
    int _currentTrackingEar;
    NSObject<OS_dispatch_queue> *_stepSerialQueue;
    NSObject<OS_dispatch_queue> *_visualDetectionQueue;
    BOOL _debugMode;
    BluetoothManager *_btManager;
    BOOL _bluetoothBecameAvailable;
    BOOL _inEarDetectDisabledPopUpShown;
    BOOL _isEarOccluded;
    unsigned char _earOcclusionDetectTracker;
    NSTimer *_occlusionWarnCoolDownTimer;
    BOOL _supressEarOcclusionWarning;
    unsigned char _occlusionSupressTimeOut;
    BOOL _earTooClose;
    unsigned char _earTooCloseDetectTracker;
    NSTimer *_earTooCloseWarnCoolDownTimer;
    BOOL _earTooFar;
    unsigned char _earTooFarDetectTracker;
    BOOL _motionBlurr;
    unsigned char _motionBlurrTracker;
    BOOL _supressEarDistanceWarning;
    CGRect _currentEarBB;
    NSTimer *_earEnrollmentNudgeTimer;
    CGFloat _lastEarCaptureTime;
    BOOL _isLookingAtPhone;
    unsigned char _faceInFrameCount;
    CIContext *_frameContext;
    CIDetector *_frameDetector;
    CGFloat _leftEarLastYaw;
    CGFloat _rightEarLastYaw;
    CGFloat _leftLastReceivedYaw;
    CGFloat _rightLastReceivedYaw;
    NSTimer *_enrollGuidanceTimer;
    CGFloat _enrollGuidancePitch;
    CGFloat _currentYaw;
    CGFloat _candidateYaw;
    NSArray *_pendingYaw;
    NSArray *_feedBackBinning;
    NSArray *_feedBackPitch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalHandler; // ivar: dismissalHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pillsFilled; // ivar: _pillsFilled
@property (readonly) Class superclass;


-(BOOL)checkAndShowInEarPopup;
-(BOOL)isEarMovingFast;
-(BOOL)isEarOccluded;
-(BOOL)isEarTooClose;
-(BOOL)isEarTooFar;
-(BOOL)isPresentingWrongEar;
-(id)angleArrayToBinaryString:(id)arg0 ;
-(id)getBudsInEarString;
-(id)init;
-(int)state;
-(void)alertEarDistanceWarning:(int)arg0 ;
-(void)alertEarEnrollWarning;
-(void)alertOcclusionWarning;
-(void)bluetoothDidBecomeAvailable;
-(void)cancelBlur;
-(void)cancelSpatialAudioProfile;
-(void)captureViewTimerDidFire;
-(void)checkVolume;
-(void)cleanUpSpinner;
-(void)clearBoundingBox;
-(void)continueButtonTapped;
-(void)continueEarDistanceWarning;
-(void)continueOcclusionWarning;
-(void)didReachLargeNudgePeakForEnrollView:(id)arg0 ;
-(void)didReachSmallNudgePeakForEnrollView:(id)arg0 ;
-(void)didReceiveCaptureVideo:(id)arg0 colorImage:(id)arg1 depthImage:(id)arg2 faceObject:(id)arg3 ;
-(void)didReceiveStateUpdateForSession:(id)arg0 stateInfo:(id)arg1 ;
-(void)earCentralPartCaptured;
-(void)earLeftPartCaptured;
-(void)earRightPartCaptured;
-(void)enrollView:(id)arg0 didNudgeInDirection:(NSUInteger)arg1 nudgeCount:(NSUInteger)arg2 ;
-(void)enrollView:(id)arg0 willNudgeInDirection:(NSUInteger)arg1 nudgeCount:(NSUInteger)arg2 ;
-(void)fillFacePillsByDirection:(int)arg0 ;
-(void)forceBlur;
-(void)hideContinueButton;
-(void)hideEarDistanceWarningContinueButton;
-(void)hideEarPillsDots;
-(void)hideOcclusionContinueButton;
-(void)moveToStep:(int)arg0 ;
-(void)nudgeEar;
-(void)pauseEnrollment;
-(void)playEarCaptureSoundWithCompletion:(id)arg0 ;
-(void)prepareSpinner;
-(void)pulseEarBoundingBox;
-(void)resetVolume;
-(void)restartOcclusionWarnCoolDownTimer;
-(void)resumeEnrollment;
-(void)retrieveProfile;
-(void)sendTipKitSignal;
-(void)setupAudioVideo;
-(void)setupEarBoundingBox;
-(void)setupEarTutorialView;
-(void)setupEnrollController;
-(void)setupEnrollViewUI;
-(void)setupWelcomeContentView;
-(void)showBudsInEarPopUp:(id)arg0 ;
-(void)showContinueButton;
-(void)showEarDistanceWarningContinueButton;
-(void)showEarPillsDots;
-(void)showLandscapeAlert;
-(void)showOcclusionContinueButton;
-(void)startCaptureViewTimer;
-(void)startEarDistanceWarnCoolDownTimer;
-(void)startEarEnrollWarningTimer;
-(void)startEarEnrollmentNudgeTimer;
-(void)startEnrollGuidanceTimer;
-(void)startEnrollment;
-(void)startFaceInFrameHandlerTimer;
-(void)startOcclusionWarnCoolDownTimer;
-(void)startPostProcessSpinner;
-(void)startPostProcessTimer;
-(void)startTutorialResumeEnrollTimer;
-(void)startWelcomeSpinner;
-(void)stopCaptureViewTimer;
-(void)stopEarDistanceWarnCoolDownTimer;
-(void)stopEarEnrollmentNudgeTimer;
-(void)stopEnrollGuidanceTimer;
-(void)stopEnrollment;
-(void)stopFaceInFrameHandlerTimer;
-(void)stopOcclusionWarnCoolDownTimer;
-(void)stopPostProcessSpinner;
-(void)stopPostProcessTimer;
-(void)stopTimers;
-(void)stopTutorialResumeEnrollTimer;
-(void)stopWelcomeSpinner;
-(void)syncProfile;
-(void)translateEarBoundingBox:(struct CGRect )arg0 previewLayerBoundingBox:(struct CGRect )arg1 ;
-(void)triggerEarDistanceWarnCoolDownTimer;
-(void)triggerEarEnrollmentNudgeTimer;
-(void)triggerEnrollGuidanceTimer;
-(void)triggerFaceInFrameHandlerTimeout;
-(void)triggerOcclusionWarnCoolDownTimer;
-(void)triggerPostProcessTimeout;
-(void)triggerstartEarEnrollWarningTimer;
-(void)tutorialResumeEnrollTimerDidFire;
-(void)updateBoundingBoxHiddenStatus;
-(void)updateCurrentTrackingEar:(id)arg0 rightEarPoseStatus:(id)arg1 earBoundingBox:(struct CGRect )arg2 earStatus:(int)arg3 ;
-(void)updateEarEnrollText;
-(void)updateFaceTrackingStatus:(struct CGRect )arg0 ;
-(void)userCancelEnrollment;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif