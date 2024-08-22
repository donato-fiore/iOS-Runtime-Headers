// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUIPROXIMITYENROLLTRAININGVIEWCONTROLLER_H
#define VTUIPROXIMITYENROLLTRAININGVIEWCONTROLLER_H

@class UIViewController, AFUISiriLanguage, NSArray, UIView, AFEnablementFlowConfigurationProvider, AFEnablementConfiguration, NSString, AFMyriadCoordinator, NSUUID, SSRVTUITrainingManager;
@protocol AFMyriadDelegate, AFUISiriLanguageDelegate, SSRVTUITrainingManagerDelegate, VTUIEnrollmentDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUIVoiceSelectionViewControllerDelegate, OS_dispatch_queue, VTUIEnrollTrainingViewControllerDelegate;


#import "VTUISiriDataSharingOptInPresenter.h"
#import "VTUIAnalytics.h"
#import "VTUIEnrollmentPageEligibilityProvider.h"
#import "VTUIVoiceSelectionViewController.h"
#import "VTUIAudioHintPlayer.h"
#import "VTUIProximityEnrollTrainingView.h"
#import "VTUIProximityEnrollmentSetupIntroView.h"
#import "VTUIProximityEnrollmentLanguageOptionsView.h"
#import "VTUIProximityEnrollmentSuccessView.h"
#import "VTUIProximityTryAgainView.h"

@interface VTUIProximityEnrollTrainingViewController : UIViewController <AFMyriadDelegate, AFUISiriLanguageDelegate, SSRVTUITrainingManagerDelegate, VTUIEnrollmentDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUIVoiceSelectionViewControllerDelegate>

 {
    AFUISiriLanguage *_siriLanguage;
    BOOL _hasSkippedTraining;
    BOOL _hasPHSInCloud;
    BOOL _isResignedActive;
    id *_hasPHSInCloudFetchBlock;
    NSObject<OS_dispatch_queue> *_hasPHSInCloudFetchQueue;
    NSArray *_siriLanguageOptions;
    NSInteger _consecutiveTimeoutCount;
    UIView *_siriDataSharingProximityView;
    NSInteger _enrollmentMode;
    VTUISiriDataSharingOptInPresenter *_siriDataSharingOptInPresenter;
    VTUIAnalytics *_analyticsEvent;
    VTUIEnrollmentPageEligibilityProvider *_pageEligibilityProvider;
    AFEnablementFlowConfigurationProvider *_provider;
    AFEnablementConfiguration *_enablementConfiguration;
    VTUIVoiceSelectionViewController *_voiceSelectionViewController;
    BOOL _isEnablementConfigurationLoading;
    id *_onEnablementConfigurationDidLoad;
}


@property (nonatomic) NSUInteger AVVCRetryCount; // ivar: _AVVCRetryCount
@property (retain, nonatomic) UIView *aboutTappedSender; // ivar: _aboutTappedSender
@property (retain, nonatomic) VTUIAudioHintPlayer *audioHintPlayer; // ivar: _audioHintPlayer
@property (nonatomic) NSUInteger badMicRetryCount; // ivar: _badMicRetryCount
@property (nonatomic) NSInteger currentTrainingState; // ivar: _currentTrainingState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VTUIEnrollTrainingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disambiguateLanguageOptionsForTesting; // ivar: _disambiguateLanguageOptionsForTesting
@property (retain, nonatomic) NSString *disambiguatedLanguageOption; // ivar: _disambiguatedLanguageOption
@property (retain, nonatomic) VTUIProximityEnrollTrainingView *enrollTrainingView; // ivar: _enrollTrainingView
@property (nonatomic) BOOL hasRetriedTraining; // ivar: _hasRetriedTraining
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VTUIProximityEnrollmentSetupIntroView *introView; // ivar: _introView
@property (retain, nonatomic) VTUIProximityEnrollmentLanguageOptionsView *languageOptionsView; // ivar: _languageOptionsView
@property (retain, nonatomic) AFMyriadCoordinator *myriadCoordinator; // ivar: _myriadCoordinator
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) NSUInteger sessionId; // ivar: _sessionId
@property (nonatomic) BOOL shouldTurnOnMyriad; // ivar: _shouldTurnOnMyriad
@property (nonatomic) BOOL skipToDataSharingForTesting; // ivar: _skipToDataSharingForTesting
@property (nonatomic) BOOL skipToEndForTesting; // ivar: _skipToEndForTesting
@property (retain, nonatomic) NSString *spokenLanguageCode; // ivar: _spokenLanguageCode
@property (retain, nonatomic) VTUIProximityEnrollmentSuccessView *successView; // ivar: _successView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *trainingAttemptUUID; // ivar: _trainingAttemptUUID
@property (retain, nonatomic) SSRVTUITrainingManager *trainingManager; // ivar: _trainingManager
@property (retain, nonatomic) NSArray *trainingPageInstructions; // ivar: _trainingPageInstructions
@property (retain, nonatomic) VTUIProximityTryAgainView *tryAgainView; // ivar: _tryAgainView


-(BOOL)_hasPHSCloudDataForSpokenLanguage;
-(BOOL)_isLocaleSupported:(id)arg0 ;
-(BOOL)_isTrainingInProgress;
-(BOOL)_isVoiceTriggerEnabeld;
-(BOOL)_shouldPresentLanguageDisambiguation;
-(BOOL)_shouldShowSiriDataSharingOptInView;
-(BOOL)_shouldSpeakAudioHint;
-(BOOL)_siriLanguageIsIncompatibleWithPairedWatch;
-(NSInteger)interpretSessionManagerStatus:(int)arg0 forInstruction:(NSInteger)arg1 ;
-(id)_getSetupModeString;
-(id)init;
-(id)initWithEnrollmentMode:(NSInteger)arg0 ;
-(id)interpretAudioSource:(NSUInteger)arg0 ;
-(void)VTUITrainingManagerFeedLevel:(float)arg0 ;
-(void)VTUITrainingManagerStopListening;
-(void)_advanceState;
-(void)_animateCheckMark:(BOOL)arg0 completion:(id)arg1 ;
-(void)_autoContinueFromRetry:(BOOL)arg0 ;
-(void)_becomeActive;
-(void)_checkForPHSCloudDataIfNecessary:(id)arg0 ;
-(void)_cleanupHelper;
-(void)_cleanupTrainingManagerWithCompletion:(id)arg0 ;
// -(void)_cleanupTrainingManagerWithCompletion:(id)arg0 status:(unk)arg1  ;
-(void)_continueToTrainingFromIntro;
-(void)_continueToTrainingFromLanguageOptions;
-(void)_continueToTrainingFromVoiceSelection;
-(void)_createTrainingManagerIfNeeded;
-(void)_didEnterBackground;
-(void)_dismiss:(id)arg0 ;
-(void)_finishSiriSetup:(id)arg0 ;
-(void)_handleTrainingResultForNonRetryablePhraseWithStatus:(int)arg0 ;
-(void)_handleTrainingResultForRetryablePhraseWithStatus:(int)arg0 shouldShowCheckMark:(BOOL)arg1 ;
-(void)_hideInstruction;
-(void)_hideTrainingElements;
-(void)_markEnrollmentSuccessForVoiceProfile:(BOOL)arg0 ;
-(void)_presentAlertToAskUserToEnableVoiceTriggerOnDevice;
-(void)_presentRadarView;
-(void)_processDisambiguatedLanguageOption:(id)arg0 commitLanguageCodeToPreferences:(BOOL)arg1 ;
-(void)_processIntroViewContinueAction:(id)arg0 ;
-(void)_processLanguageSelectionAction:(id)arg0 ;
-(void)_resetEnrollment;
-(void)_resetIdleTimer;
-(void)_resignActive;
-(void)_resumeTraining;
-(void)_retryAfterBadMicAlert;
-(void)_retryInstruction:(BOOL)arg0 ;
-(void)_setAssistantEnabled:(BOOL)arg0 ;
-(void)_setLanguageOptionsAndContinue;
-(void)_setPHSEnrollmentPrefEnabled:(BOOL)arg0 ;
-(void)_setVoiceTriggerEnabled:(BOOL)arg0 ;
-(void)_setupEnrollTrainingView;
-(void)_setupMode;
-(void)_setupTrainingStates;
-(void)_showBadMicAlertCompletion:(id)arg0 ;
-(void)_showBadMicAlertWithCompletion:(id)arg0 ;
-(void)_showEnrollmentSuccessView;
-(void)_showInstruction:(NSInteger)arg0 isRetry:(BOOL)arg1 ;
-(void)_showIntroView;
-(void)_showSiriDataSharingOptInView;
-(void)_showStatusMessage:(id)arg0 afterDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_showTrainingElements;
-(void)_showTrainingInstruction:(NSInteger)arg0 afterDelay:(CGFloat)arg1 isRetry:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)_showUnsupportedLocaleAlert;
-(void)_showUnsupportedLocaleAlertCompletion:(id)arg0 ;
-(void)_showVoiceSelectionViewForRecognitionLanguage:(id)arg0 ;
-(void)_skipSetup;
-(void)_startEnrollment;
-(void)_startTraining;
-(void)_startTrainingIfNecessary;
-(void)_updateCurrentConstraintsToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_updatePageNumberForInstruction:(NSInteger)arg0 ;
-(void)_warnForLanguageCompatibilityIfNecessary:(id)arg0 ;
-(void)aboutTapped:(id)arg0 ;
-(void)cancelTraining;
-(void)dealloc;
-(void)finish:(id)arg0 ;
-(void)setupNavigationBarStyleForAppearing:(BOOL)arg0 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg0 ;
-(void)shouldContinue:(id)arg0 ;
-(void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg0 ;
-(void)siriDataSharingOptInViewDismissButtonTappedFromPresenter:(id)arg0 ;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg0 ;
-(void)skipAssistant:(id)arg0 ;
-(void)skipTraining:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)voiceSelectionController:(id)arg0 didSelectVoice:(id)arg1 ;
-(void)voiceSelectionControllerRequestsDismissal:(id)arg0 ;


@end


#endif