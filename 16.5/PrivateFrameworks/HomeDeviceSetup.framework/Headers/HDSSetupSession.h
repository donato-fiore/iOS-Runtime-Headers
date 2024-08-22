// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSSETUPSESSION_H
#define HDSSETUPSESSION_H

@class RPCompanionLinkClient, AVAudioSession, AVAudioPlayer, ACAccountStore, ACAccount, NSString, SSAccount, NSArray, HMAccessory, SFSession, AFVoiceInfo, AFEnablementConfiguration, AFEnablementFlowConfigurationProvider, APCListener, SFDeviceOperationWiFiSetup, SFDeviceOperationCNJSetup, TRSession, NSMutableArray, TROperationQueue, NSSet, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, HMAccessorySoftwareUpdateControllerV2, NSDictionary, SFDevice, UIViewController, HMHome;
@protocol AVAudioPlayerDelegate, SignpostProviding, FMFSessionDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDSFileTransfer.h"
#import "HDSBonjourTest.h"

@interface HDSSetupSession : NSObject <AVAudioPlayerDelegate, SignpostProviding, FMFSessionDelegate>

 {
    BOOL _activateCalled;
    RPCompanionLinkClient *_companionLinkClient;
    BOOL _invalidateCalled;
    NSUInteger _startTicks;
    int _proxSetupActiveToken;
    BOOL _audioProgress;
    AVAudioSession *_audioSession;
    AVAudioPlayer *_audioPlayerStart;
    AVAudioPlayer *_audioPlayerStep;
    id *_audioPlayerCompletion;
    BOOL _preflightEnabled;
    int _preflightWiFiState;
    int _preflightiCloudState;
    int _preflightTrustedDeviceState;
    BOOL _preventAppleWiFi;
    ACAccountStore *_iCloudAccountStore;
    ACAccount *_iCloudAccount;
    NSString *_iCloudUserID;
    int _iCloudAccountState;
    BOOL _homeiCloudEnabled;
    int _preflightiTunesState;
    SSAccount *_iTunesAccount;
    BOOL _iTunesSignInSkip;
    NSString *_iTunesUserID;
    BOOL _appleMusicEnabled;
    int _appleMusicState;
    BOOL _appleMusicForce;
    BOOL _forceSoftwareUpdate;
    NSObject<OS_dispatch_source> *_appleMusicTimeoutTimer;
    int _preflightAppleMusicState;
    int _appleStoreMode;
    int _preflightMiscState;
    BOOL _locationEnabled;
    BOOL _locationDecided;
    BOOL _siriEnabled;
    BOOL _prefStereoPairEnabled;
    BOOL _prefStereoWait;
    BOOL _prefPrototypeForceUpdate;
    NSArray *_potentialStereoCounterparts;
    HMAccessory *_stereoCounterpartAccessory;
    int _stereoPairUserInputState;
    int _stereoPairRole;
    BOOL _tvAudioEnabled;
    BOOL _tvAudioInputAvailable;
    int _tvAudioUserInputState;
    BOOL _prefTVAudioEnabled;
    NSArray *_potentialTVs;
    HMAccessory *_tvAudioInput;
    SFSession *_sfSession;
    BOOL _sfSessionSecured;
    int _sfSessionState;
    int _preAuthState;
    BOOL _preAuthStartedProgress;
    HDSFileTransfer *_hdsFileTransferSession;
    unsigned int _siriFlags;
    NSArray *_siriLanguageCodes;
    NSString *_selectedSiriLanguageCode;
    BOOL _siriLanguagePicked;
    int _siriLanguageState;
    AFVoiceInfo *_selectedSiriVoice;
    int _siriEnablementConfigurationState;
    AFEnablementConfiguration *_siriEnablementConfiguration;
    AFEnablementFlowConfigurationProvider *_siriEnablementConfigurationProvider;
    NSString *_companionSiriLanguageCode;
    int _siriVoiceProfileState;
    BOOL _apcEnabled;
    BOOL _apcInitDone;
    APCListener *_apcListener;
    BOOL _apcListening;
    BOOL _apcMetricsLogged;
    NSString *_apcPasscode;
    BOOL _apcPlayAgain;
    BOOL _apcPlaying;
    BOOL _apcSecured;
    BOOL _apcSkip;
    int _apcState;
    BOOL _apcStartDone;
    BOOL _apcStartedPairSetup;
    NSUInteger _apcStartTicks;
    NSObject<OS_dispatch_source> *_apcTimer;
    unsigned int _apcTimeoutCount;
    BOOL _apcTryingPasscode;
    BOOL _lpcAligned;
    int _lpcAlignmentState;
    BOOL _lpcPlayAgain;
    BOOL _lpcSkip;
    BOOL _siriPasscodeEnabled;
    BOOL _siriPasscodeInitDone;
    BOOL _siriPasscodeSecured;
    int _siriPasscodeState;
    NSString *_forcedPasscode;
    int _amsActivationState;
    int _homeKitSetupModeState;
    unsigned int _pairSetupFlags;
    int _pairSetupState;
    CGFloat _pairSetupSecs;
    int _recognizeVoiceEnabled;
    int _recognizeVoiceState;
    int _recognizeVoiceStepState;
    int _personalRequestsState;
    int _personalRequestsChoice;
    BOOL _siriForEveryoneAnswered;
    int _siriForEveryoneState;
    int _siriDataSharing;
    int _automaticSoftwareUpdateState;
    int _automaticSoftwareUpdateAgreed;
    int _softwareUpdateState;
    int _softwareUpdateAgreed;
    int _soundRecognitionAndDropInState;
    BOOL _soundRecognitionAndDropInAgreed;
    BOOL _soundRecognitionAndDropInSelected;
    int _termsState;
    BOOL _termsAgreed;
    int _personalRequestsSkipCardState;
    int _preShareSettingsState;
    BOOL _preShareSettingsAgreed;
    int _shareSettingsState;
    BOOL _shareSettingsAgreed;
    int _authKitTrustState;
    int _basicConfigState;
    NSUInteger _basicConfigStartTicks;
    CGFloat _basicConfigSecs;
    NSString *_deviceGUID;
    NSString *_deviceSerialNumber;
    NSString *_deviceModel;
    NSString *_deviceBuildVersion;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    HDSBonjourTest *_bonjourTestOperation;
    int _wifiSetupState;
    CGFloat _wifiSetupSecs;
    CGFloat _wifiSetupStepSecs;
    CGFloat _wifiBonjourTestSecs;
    BOOL _wifiIsCaptive;
    SFDeviceOperationCNJSetup *_captiveJoin;
    int _captiveJoinState;
    CGFloat _reachabilitySecs;
    BOOL _didShowCaptiveSheet;
    BOOL _peerSupportsCaptiveNetworks;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trSetupConfigurationState;
    NSUInteger _trSetupConfigurationStartTicks;
    CGFloat _trSetupConfigurationSecs;
    BOOL _trNeedsNetwork;
    NSSet *_trUnauthServices;
    BOOL _trUseAIDA;
    CGFloat _iCloudAuthMs;
    CGFloat _iTunesAuthMs;
    NSUInteger _userWaitStartTicks;
    CGFloat _userWaitTimeSecs;
    int _trActivationState;
    int _bgActivationState;
    CGFloat _activationSecs;
    int _trAuthenticationState;
    BOOL _trAuthenticationStateReset;
    NSUInteger _trAuthenticationStartTicks;
    CGFloat _trAuthenticationSecs;
    CGFloat _trAuthenticationTotalSecs;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    CGFloat _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitUserInputState;
    int _homeKitSetupState;
    CGFloat _homeKitSetupSecs;
    NSString *_homeKitSelectedRoomName;
    CGFloat _setupDeviceSecs;
    CGFloat _addDeviceSecs;
    CGFloat _assignRoomSecs;
    CGFloat _personalRequestSecs;
    CGFloat _ulhNonUserWaitSecs;
    CGFloat _odeonSecs;
    CGFloat _nonUserWaitSecs;
    BOOL _hasExistingHomePodInSelectedRoom;
    HMAccessory *_existingHomepodInSelectedRoom;
    BOOL _shouldShowCardForPRCounts;
    int _multiUserEnableState;
    int _multiUserEnableStepState;
    int _finishState;
    NSUInteger _finishStartTicks;
    CGFloat _finishSecs;
    CGFloat _iTunesWaitSecs;
    CGFloat _mediaSystemWaitSecs;
    CGFloat _totalSecs;
    BOOL _prefBonjourTest;
    BOOL _prefForceSiriGreeting;
    BOOL _prefLEDPasscodeEnabled;
    BOOL _prefMultiUser;
    BOOL _homePodReceivedSUResponse;
    BOOL _homePodNeedsSU;
    BOOL _homePodRecievedProductVersionResponse;
    NSString *_homePodProductVersionString;
    NSUInteger _amsOptimizationStartTicks;
    CGFloat _amsOptimizationSecs;
    NSUInteger _numberOfHomePodsInHome;
    NSUInteger _numberOfHomePodsInAccount;
    NSUInteger _numberOfHomes;
    BOOL _homePodIsCallbellCapable;
    NSString *_forcedCLIPasscode;
    NSUInteger _homeKitStartTicks;
    CGFloat _homeKitHDSMs;
    HMAccessorySoftwareUpdateControllerV2 *_softwareUpdateController;
    int _homepodSoftwareUpdateState;
    int _odeonState;
    BOOL _logMetricsCalled;
    BOOL _automaticUpdatesEnabled;
    BOOL _homeSafetySecurityEnabled;
    int _rmvSelectionState;
    int _soundRecognitionSelectionState;
    int _siriSettingState;
    int _personalRequestsSelectionState;
    int _activeDeviceSelectionState;
    int _locationSelectionState;
}


@property (nonatomic) BOOL acceptedMusicTerms; // ivar: _acceptedMusicTerms
@property (copy, nonatomic) NSDictionary *additionalMetrics; // ivar: _additionalMetrics
@property (retain, nonatomic) NSString *appleIDPassword; // ivar: _appleIDPassword
@property (copy, nonatomic) NSArray *availableHomes; // ivar: _availableHomes
@property (readonly, nonatomic) int bonjourTestState; // ivar: _bonjourTestState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceColorFoundHandler; // ivar: _deviceColorFoundHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL forceSoftwareUpdateForADP; // ivar: _forceSoftwareUpdateForADP
@property (nonatomic) BOOL hasExistingHomePod; // ivar: _hasExistingHomePod
@property (nonatomic) BOOL hasExistingHomePodInAccount; // ivar: _hasExistingHomePodInAccount
@property (readonly, nonatomic) BOOL hasMultipleUsers; // ivar: _hasMultipleUsers
@property (readonly) NSUInteger hash;
@property (nonatomic) int homePodProductVersion; // ivar: _homePodProductVersion
@property (nonatomic) int homePodSUState; // ivar: _homePodSUState
@property (nonatomic) BOOL isCLIMode; // ivar: _isCLIMode
@property (nonatomic) BOOL liveOn; // ivar: _liveOn
@property (nonatomic) BOOL pauseAfterPreAuth; // ivar: _pauseAfterPreAuth
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (nonatomic) NSUInteger peerFeatureFlags; // ivar: _peerFeatureFlags
@property (copy, nonatomic) id *preAuthHandler; // ivar: _preAuthHandler
@property (readonly, nonatomic) NSDictionary *preAuthResponse; // ivar: _preAuthResponse
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForAppleMusicHandler; // ivar: _promptForAppleMusicHandler
@property (copy, nonatomic) id *promptForAutomaticSoftwareUpdateHandler; // ivar: _promptForAutomaticSoftwareUpdateHandler
@property (copy, nonatomic) id *promptForCaptiveNetworkHandler; // ivar: _promptForCaptiveNetworkHandler
@property (copy, nonatomic) id *promptForHomeHandler; // ivar: _promptForHomeHandler
@property (copy, nonatomic) id *promptForHomeiCloudHandler; // ivar: _promptForHomeiCloudHandler
@property (copy, nonatomic) id *promptForLocationEnableHandler; // ivar: _promptForLocationEnableHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *promptForPersonalRequestsHandler; // ivar: _promptForPersonalRequestsHandler
@property (copy, nonatomic) id *promptForRoomHandlerDetailed; // ivar: _promptForRoomHandlerDetailed
@property (copy, nonatomic) id *promptForSiriEnableHandler; // ivar: _promptForSiriEnableHandler
@property (copy, nonatomic) id *promptForSiriLanguageHandler; // ivar: _promptForSiriLanguageHandler
@property (copy, nonatomic) id *promptForSiriVoiceSelectionHandler; // ivar: _promptForSiriVoiceSelectionHandler
@property (copy, nonatomic) id *promptForSoftwareUpdateHandler; // ivar: _promptForSoftwareUpdateHandler
@property (copy, nonatomic) id *promptForSoundRecognitionHandler; // ivar: _promptForSoundRecognitionHandler
@property (copy, nonatomic) id *promptForStereoMultipleHandler; // ivar: _promptForStereoMultipleHandler
@property (copy, nonatomic) id *promptForStereoRoleHandler; // ivar: _promptForStereoRoleHandler
@property (copy, nonatomic) id *promptForTVAudioHandler; // ivar: _promptForTVAudioHandler
@property (copy, nonatomic) id *promptForTermsHandler; // ivar: _promptForTermsHandler
@property (copy, nonatomic) id *promptForiTunesSignInHandler; // ivar: _promptForiTunesSignInHandler
@property (copy, nonatomic) id *promptToInstallHomeAppHandler; // ivar: _promptToInstallHomeAppHandler
@property (copy, nonatomic) id *promptToShareSettingsHandler; // ivar: _promptToShareSettingsHandler
@property (readonly, nonatomic) HMHome *selectedHome;
@property (readonly, nonatomic) BOOL selectedRoomHasHomePods;
@property (readonly, nonatomic) NSString *selectedSiriLanguageCode;
@property (readonly) NSUInteger signpostID;
@property (readonly, nonatomic) BOOL siriDataSharingEnabled;
@property (readonly, nonatomic) unsigned char stereoCounterpartColor; // ivar: _stereoCounterpartColor
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger testFlags; // ivar: _testFlags
@property (nonatomic) BOOL touchRemoteEnabled; // ivar: _touchRemoteEnabled
@property (nonatomic) BOOL userOptedToHH2; // ivar: _userOptedToHH2


+(id)signpostLog;
-(BOOL)_recognizeVoiceAlreadyEnabled;
-(BOOL)_shouldShowPRCardForHomePodsInRoom;
-(BOOL)homePodBuildRequiresADPForcedSU;
-(BOOL)isCompanionSiriLanguageSupportedByHomePod;
-(BOOL)shouldShowHomePodSoftwareUpdateAvailable;
-(id)_homeKitFindSettingsWithKeyPath:(id)arg0 group:(id)arg1 ;
-(id)_homePodsInAccount;
-(id)_homePodsInSelectedHome;
-(id)_selectedRoomAllHomePods;
-(id)_selectedRoomHomePod;
-(id)init;
-(int)_enableSiriForPersonalRequestIfNecessary;
-(int)_runAppleMusic;
-(int)_runAudioPasscode;
-(int)_runAuthKitTrustFinish;
-(int)_runAutomaticSoftwareUpdate;
-(int)_runBasicConfig;
-(int)_runBonjourTest;
-(int)_runCDPSetup:(BOOL)arg0 ;
-(int)_runCaptiveJoin;
-(int)_runCheckAccount;
-(int)_runFinishStart;
-(int)_runHomeKitSetup;
-(int)_runHomeKitUserInput;
-(int)_runHomePodSoftwareUpdate;
-(int)_runLEDPassCodeAlignment;
-(int)_runMultiUserEnable;
-(int)_runPairSetup;
-(int)_runPersonalRequests;
-(int)_runPreAuth;
-(int)_runPreAuthAlignmentAndSiri;
-(int)_runPreflightMisc;
-(int)_runPreflightWiFi;
-(int)_runPreflightiCloud;
-(int)_runPreflightiTunes;
-(int)_runRecognizeVoice;
-(int)_runSFSessionStart;
-(int)_runShareSettings;
-(int)_runSiriEnablementConfigurationFetch;
-(int)_runSiriForEveryone;
-(int)_runSiriLanguage;
-(int)_runSiriPasscode;
-(int)_runSoftwareUpdate;
-(int)_runSoundRecognition;
-(int)_runStereoPairUserInput;
-(int)_runTRActivation;
-(int)_runTRAuthentication:(id)arg0 ;
-(int)_runTROtherAuthentication;
-(int)_runTRSessionStart;
-(int)_runTRSetupConfiguration;
-(int)_runTRiCloudAuthentication;
-(int)_runTVAudioUserInput;
-(int)_runTerms;
-(int)_runTransferVoiceProfile;
-(int)_runWiFiSetup;
-(int)exportAMSTokenAndAccountSetup:(id)arg0 ifMissing:(BOOL)arg1 ifInvalid:(BOOL)arg2 ;
-(int)expressSetupState;
-(int)isHomePodProductVersionParis:(id)arg0 ;
-(void)_activate;
-(void)_cleanup;
-(void)_cleanupSession;
-(void)_getSiriEnablementConfiguration;
-(void)_handlePeerEvent:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_homeKitUpdateiCloudSwitchState:(BOOL)arg0 ;
-(void)_invalidate;
-(void)_logErrorMetrics:(id)arg0 inLabel:(id)arg1 ;
-(void)_logHomeKitPerformanceMetrics;
-(void)_logMetrics:(id)arg0 ;
-(void)_logMetricsForSoftError:(id)arg0 label:(id)arg1 ;
-(void)_logPerformanceMetrics:(id)arg0 ;
-(void)_logUsageMetrics:(id)arg0 ;
-(void)_preflightAppleMusicCompleted:(int)arg0 ;
-(void)_promptForPINWithFlags:(unsigned int)arg0 throttleSeconds:(int)arg1 ;
-(void)_reportError:(id)arg0 label:(id)arg1 ;
-(void)_run;
-(void)_runAudioPasscodeCleanup:(BOOL)arg0 ;
-(void)_runAudioPasscodeHandleData:(id)arg0 ;
-(void)_runAudioPasscodeInitRequest;
-(void)_runAudioPasscodeInitResponse:(id)arg0 error:(id)arg1 ;
-(void)_runAudioPasscodeLogMetrics;
-(void)_runAudioPasscodeStartRequest;
-(void)_runAudioPasscodeStartResponse:(id)arg0 error:(id)arg1 ;
-(void)_runAudioPasscodeStopRequest;
-(void)_runAudioPasscodeTimeout;
-(void)_runAuthKitTrustStartIfNeeded;
-(void)_runBackgroundActivation;
-(void)_runBasicConfigReceiveResponse:(id)arg0 error:(id)arg1 ;
-(void)_runBasicConfigSendRequest;
-(void)_runFinishRequest;
-(void)_runFinishResponse:(id)arg0 error:(id)arg1 ;
-(void)_runHomeKitSetupMode;
-(void)_runMultiUserEnableEnableSettingStart:(id)arg0 privateSettings:(BOOL)arg1 ;
-(void)_runMultiUserEnableHome;
-(void)_runPersonalRequestsSkipCard;
-(void)_runPreAuthRequest;
-(void)_runPreAuthResponse:(id)arg0 error:(id)arg1 ;
-(void)_runRecognizeVoiceCheckLanguageResponse:(id)arg0 error:(id)arg1 ;
-(void)_runRecognizeVoiceCheckLanguageStart;
-(void)_runRecognizeVoiceCheckVoiceProfileResponse:(BOOL)arg0 error:(id)arg1 ;
-(void)_runRecognizeVoiceCheckVoiceProfileStart;
-(void)_runSiriPasscodeInitRequest;
-(void)_runSiriPasscodeInitResponse:(id)arg0 error:(id)arg1 ;
-(void)_runSiriPasscodeStartPairSetup;
-(void)_runStereoPairUserInputPickColors:(BOOL)arg0 ;
-(void)_setupAudio;
-(void)_speakPasscodeWithInstructions:(id)arg0 languageCode:(id)arg1 completion:(id)arg2 ;
-(void)activate;
-(void)appleMusicNext;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)audioSessionInterrupted:(id)arg0 ;
-(void)automaticSoftwareUpdatesAgreed:(BOOL)arg0 ;
-(void)captiveConfirmed;
-(void)dealloc;
-(void)didDismiss;
-(void)disconnect;
-(void)forceCLIPassCode:(id)arg0 ;
-(void)forcePassCode:(id)arg0 ;
-(void)homeAppInstallChoice:(BOOL)arg0 ;
-(void)homeKitReselectHome;
-(void)homeKitSelectHome:(id)arg0 ;
-(void)homeKitSelectRoom:(id)arg0 ;
-(void)homeiCloudEnable;
-(void)identifyHomePod:(id)arg0 ;
-(void)invalidate;
-(void)isDeviceActiveFetch;
-(void)ledPasscodeMatched;
-(void)locationEnable:(BOOL)arg0 ;
-(void)logMetricsForDismissal:(id)arg0 dismissType:(int)arg1 cardName:(id)arg2 cardDuration:(NSUInteger)arg3 ;
-(void)pairSetupTryPIN:(id)arg0 ;
-(void)personalRequestsEnabled:(BOOL)arg0 ;
-(void)playAudioPasscodeAgain;
-(void)preflight;
-(void)preflightAppleMusic;
-(void)recognizeVoiceAnswered:(BOOL)arg0 ;
-(void)runPersonalRequestsAgreedCLI:(BOOL)arg0 makeActiveDevice:(BOOL)arg1 ;
-(void)shareSettingsAgreed;
-(void)showMeDeviceSwitchWithDevice:(id)arg0 session:(id)arg1 siriEnabled:(BOOL)arg2 activeDeviceEnabled:(BOOL)arg3 ;
-(void)sideloadVoiceProfile:(id)arg0 locale:(id)arg1 withCompletion:(id)arg2 ;
-(void)siriCheck:(BOOL)arg0 ;
-(void)siriEnable;
-(void)siriForEveryoneAnswered;
-(void)siriLanguagePicked:(id)arg0 ;
-(void)siriVoicePicked:(id)arg0 ;
-(void)skipAudioPasscode;
-(void)skipiTunesSignIn;
-(void)softwareUpdateAgreed:(BOOL)arg0 ;
-(void)soundRecognitionAgreed:(BOOL)arg0 ;
-(void)speakPasscodeWithCompletion:(id)arg0 ;
-(void)speakPasscodeWithInstructions:(id)arg0 completion:(id)arg1 ;
-(void)speakPasscodeWithInstructions:(id)arg0 languageCode:(id)arg1 completion:(id)arg2 ;
-(void)speakPasscodeWithLanguageCode:(id)arg0 completion:(id)arg1 ;
-(void)stereoMultiplePicked:(id)arg0 ;
-(void)stereoRolePicked:(int)arg0 ;
-(void)termsAgreed;
-(void)tvAudioEnabled:(BOOL)arg0 ;


@end


#endif