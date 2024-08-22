// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFDEVICESETUPB238SESSION_H
#define SFDEVICESETUPB238SESSION_H

@class RPCompanionLinkClient, AVAudioSession, AVAudioPlayer, ACAccountStore, ACAccount, NSString, SSAccount, AMSPromise, NSArray, HMAccessory, AFVoiceInfo, AFEnablementConfiguration, AFEnablementFlowConfigurationProvider, APCListener, TRSession, NSMutableArray, TROperationQueue, NSSet, NSDictionary, UIViewController, HMHome;
@protocol AVAudioPlayerDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDeviceOperationWiFiSetup.h"
#import "SFDeviceOperationCDPSetup.h"
#import "SFDeviceOperationHomeKitSetup.h"
#import "SFDevice.h"

@interface SFDeviceSetupB238Session : NSObject <AVAudioPlayerDelegate>

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
    NSObject<OS_dispatch_source> *_appleMusicTimeoutTimer;
    int _preflightAppleMusicState;
    int _appleStoreMode;
    AMSPromise *_amsDeviceRegistrationPromise;
    int _preflightMiscState;
    BOOL _locationEnabled;
    BOOL _locationDecided;
    BOOL _siriEnabled;
    BOOL _prefStereoPairEnabled;
    BOOL _prefStereoWait;
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
    unsigned int _siriFlags;
    NSArray *_siriLanguageCodes;
    NSInteger _siriLanguageIndex;
    BOOL _siriLanguagePicked;
    int _siriLanguageState;
    AFVoiceInfo *_selectedSiriVoice;
    int _siriEnablementConfigurationState;
    AFEnablementConfiguration *_siriEnablementConfiguration;
    AFEnablementFlowConfigurationProvider *_siriEnablementConfigurationProvider;
    NSString *_siriPreferredLanguage;
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
    int _termsState;
    BOOL _termsAgreed;
    int _shareSettingsState;
    BOOL _shareSettingsAgreed;
    int _authKitTrustState;
    int _basicConfigState;
    NSUInteger _basicConfigStartTicks;
    CGFloat _basicConfigSecs;
    NSString *_deviceGUID;
    NSString *_deviceSerialNumber;
    NSString *_deviceModel;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    CGFloat _wifiSetupSecs;
    CGFloat _wifiSetupStepSecs;
    CGFloat _wifiBonjourTestSecs;
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
    BOOL _hasExistingHomePod;
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
}


@property (copy, nonatomic) NSDictionary *additionalMetrics; // ivar: _additionalMetrics
@property (readonly, nonatomic) int bonjourTestState; // ivar: _bonjourTestState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceColorFoundHandler; // ivar: _deviceColorFoundHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) BOOL hasMultipleUsers; // ivar: _hasMultipleUsers
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL liveOn; // ivar: _liveOn
@property (nonatomic) BOOL pauseAfterPreAuth; // ivar: _pauseAfterPreAuth
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (nonatomic) NSUInteger peerFeatureFlags; // ivar: _peerFeatureFlags
@property (copy, nonatomic) id *preAuthHandler; // ivar: _preAuthHandler
@property (retain, nonatomic) NSDictionary *preAuthResponse; // ivar: _preAuthResponse
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForAppleMusicHandler; // ivar: _promptForAppleMusicHandler
@property (copy, nonatomic) id *promptForHomeHandler; // ivar: _promptForHomeHandler
@property (copy, nonatomic) id *promptForHomeiCloudHandler; // ivar: _promptForHomeiCloudHandler
@property (copy, nonatomic) id *promptForLocationEnableHandler; // ivar: _promptForLocationEnableHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *promptForPersonalRequestsHandler; // ivar: _promptForPersonalRequestsHandler
@property (copy, nonatomic) id *promptForRoomHandler; // ivar: _promptForRoomHandler
@property (copy, nonatomic) id *promptForSiriEnableHandler; // ivar: _promptForSiriEnableHandler
@property (copy, nonatomic) id *promptForSiriLanguageHandler; // ivar: _promptForSiriLanguageHandler
@property (copy, nonatomic) id *promptForSiriVoiceSelectionHandler; // ivar: _promptForSiriVoiceSelectionHandler
@property (copy, nonatomic) id *promptForStereoMultipleHandler; // ivar: _promptForStereoMultipleHandler
@property (copy, nonatomic) id *promptForStereoRoleHandler; // ivar: _promptForStereoRoleHandler
@property (copy, nonatomic) id *promptForTVAudioHandler; // ivar: _promptForTVAudioHandler
@property (copy, nonatomic) id *promptForTermsHandler; // ivar: _promptForTermsHandler
@property (copy, nonatomic) id *promptForiTunesSignInHandler; // ivar: _promptForiTunesSignInHandler
@property (copy, nonatomic) id *promptToInstallHomeAppHandler; // ivar: _promptToInstallHomeAppHandler
@property (copy, nonatomic) id *promptToShareSettingsHandler; // ivar: _promptToShareSettingsHandler
@property (readonly, nonatomic) HMHome *selectedHome;
@property (readonly, nonatomic) NSString *selectedSiriLanguage;
@property (readonly, nonatomic) BOOL siriDataSharingEnabled;
@property (readonly, nonatomic) unsigned char stereoCounterpartColor; // ivar: _stereoCounterpartColor
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger testFlags; // ivar: _testFlags
@property (nonatomic) BOOL touchRemoteEnabled; // ivar: _touchRemoteEnabled


-(BOOL)_recognizeVoiceAlreadyEnabled;
-(id)_homeKitFindSettingsWithKeyPath:(id)arg0 group:(id)arg1 ;
-(id)init;
-(int)_enableSiriForPersonalRequestIfNecessary;
-(int)_runAppleMusic;
-(int)_runAudioPasscode;
-(int)_runAuthKitTrustFinish;
-(int)_runBasicConfig;
-(int)_runCDPSetup:(BOOL)arg0 ;
-(int)_runCheckAccount;
-(int)_runFinishStart;
-(int)_runHomeKitSetup;
-(int)_runHomeKitUserInput;
-(int)_runLEDPassCodeAlignment;
-(int)_runMultiUserEnable;
-(int)_runPairSetup;
-(int)_runPersonalRequests;
-(int)_runPreAuth;
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
-(int)_runStereoPairUserInput;
-(int)_runTRActivation;
-(int)_runTRAuthentication:(id)arg0 ;
-(int)_runTROtherAuthentication;
-(int)_runTRSessionStart;
-(int)_runTRSetupConfiguration;
-(int)_runTRiCloudAuthentication;
-(int)_runTVAudioUserInput;
-(int)_runTerms;
-(int)_runWiFiSetup;
-(void)_activate;
-(void)_cleanup;
-(void)_cleanupSession;
-(void)_getSiriEnablementConfiguration;
-(void)_handlePeerEvent:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_homeKitUpdateiCloudSwitchState:(BOOL)arg0 ;
-(void)_invalidate;
-(void)_logMetrics:(id)arg0 ;
-(void)_playLocalSoundID:(int)arg0 remoteSoundID:(int)arg1 ;
-(void)_playLocalSoundID:(int)arg0 remoteSoundID:(int)arg1 completion:(id)arg2 ;
-(void)_preflightAppleMusic;
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
-(void)_runMultiUserEnableEnableSettingStart:(id)arg0 privateSettings:(BOOL)arg1 ;
-(void)_runMultiUserEnableHome;
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
-(void)dealloc;
-(void)didDismiss;
-(void)disconnect;
-(void)forcePassCode:(id)arg0 ;
-(void)homeAppInstallChoice:(BOOL)arg0 ;
-(void)homeKitReselectHome;
-(void)homeKitSelectHome:(id)arg0 ;
-(void)homeKitSelectRoom:(id)arg0 ;
-(void)homeiCloudEnable;
-(void)invalidate;
-(void)ledPasscodeMatched;
-(void)locationEnable:(BOOL)arg0 ;
-(void)pairSetupTryPIN:(id)arg0 ;
-(void)personalRequestsEnabled:(BOOL)arg0 ;
-(void)playAudioPasscodeAgain;
-(void)preflight;
-(void)recognizeVoiceAnswered:(BOOL)arg0 ;
-(void)shareSettingsAgreed;
-(void)siriEnable;
-(void)siriForEveryoneAnswered;
-(void)siriLanguagePicked:(NSInteger)arg0 ;
-(void)siriVoicePicked:(id)arg0 ;
-(void)skipAudioPasscode;
-(void)skipiTunesSignIn;
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