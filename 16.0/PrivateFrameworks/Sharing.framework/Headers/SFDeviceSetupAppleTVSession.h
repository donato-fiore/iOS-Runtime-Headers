// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDEVICESETUPAPPLETVSESSION_H
#define SFDEVICESETUPAPPLETVSESSION_H

@class NSString, HMHomeManager, TRSession, NSMutableArray, TROperationQueue, NSSet, TVLAudioLatencyEstimator, UIViewController;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDeviceOperationCDPSetup.h"
#import "SFDeviceOperationHomeKitSetup.h"
#import "SFDeviceOperationCNJSetup.h"
#import "SFDeviceOperationWiFiSetup.h"
#import "SFDevice.h"

@interface SFDeviceSetupAppleTVSession : NSObject {
    BOOL _activateCalled;
    int _finishState;
    BOOL _invalidateCalled;
    int _proxSetupActiveToken;
    BOOL _useSFSession;
    int _preflightWiFiState;
    BOOL _wifiIsCaptive;
    int _preflightiTunesState;
    int _preflightHomeKitState;
    NSString *_iTunesUserID;
    SFSession *_sfSession;
    int _sfSessionState;
    int _preAuthState;
    int _basicConfigState;
    BOOL _iCloudAccountMatches;
    int _pairSetupState;
    CGFloat _pairSetupSecs;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    CGFloat _cdpSetupSecs;
    int _cdpState;
    BOOL _homeiCloudEnabled;
    BOOL _homeKitDoKeyExchange;
    BOOL _homeKitDoFullSetup;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitUserInputState;
    int _homeKitSetupState;
    CGFloat _homeKitSetupSecs;
    NSString *_homeKitSelectedRoomName;
    HMHomeManager *_homeManager;
    BOOL _doCaptiveJoin;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trSetupConfigurationState;
    NSUInteger _trSetupConfigurationStartTicks;
    CGFloat _trSetupConfigurationSecs;
    BOOL _trNeedsNetwork;
    NSSet *_trUnauthServices;
    SFDeviceOperationCNJSetup *_captiveJoin;
    int _captiveJoinState;
    int _captivePromptState;
    CGFloat _captiveJoinSecs;
    int _trNetworkState;
    NSUInteger _trNetworkStartTicks;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    CGFloat _wifiSetupSecs;
    CGFloat _wifiSetupStepSecs;
    CGFloat _wifiBonjourTestSecs;
    BOOL _prefBonjourTest;
    int _trActivationState;
    NSUInteger _trActivationStartTicks;
    CGFloat _trActivationSecs;
    int _trAuthenticationState;
    NSUInteger _trAuthenticationStartTicks;
    CGFloat _trAuthenticationSecs;
    BOOL _tvLatencyEnabled;
    TVLAudioLatencyEstimator *_tvLatencyEstimator;
    int _tvLatencySetupState;
    int _trCompletionState;
    NSUInteger _trCompletionStartTicks;
    CGFloat _trCompletionSecs;
}


@property (readonly, nonatomic) int bonjourTestState; // ivar: _bonjourTestState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (nonatomic) NSUInteger peerFeatureFlags; // ivar: _peerFeatureFlags
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForCaptiveNetworkHandler; // ivar: _promptForCaptiveNetworkHandler
@property (copy, nonatomic) id *promptForHomeHandler; // ivar: _promptForHomeHandler
@property (copy, nonatomic) id *promptForHomeiCloudHandler; // ivar: _promptForHomeiCloudHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *promptForRoomHandler; // ivar: _promptForRoomHandler


-(BOOL)_shouldSkipHomeKitSetup;
-(BOOL)_verifyiCloudMatch:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)_videoSubscriberAccountData;
-(id)init;
-(int)_runBasicConfig;
-(int)_runCDPSetup;
-(int)_runCaptiveJoin;
-(int)_runCaptivePrompt;
-(int)_runFinish:(BOOL)arg0 ;
-(int)_runHomeKitSetup;
-(int)_runHomeKitUserInput;
-(int)_runPairSetup;
-(int)_runPreAuth;
-(int)_runPreflightHomeKit;
-(int)_runPreflightWiFi;
-(int)_runPreflightiTunes;
-(int)_runSFSessionStart;
-(int)_runTRActivation;
-(int)_runTRAuthentication;
-(int)_runTRCompletion;
-(int)_runTRNetwork;
-(int)_runTRSessionStart;
-(int)_runTRSetupConfiguration;
-(int)_runTVLatencySetup;
-(int)_runWiFiSetup;
-(void)_cleanup;
-(void)_homeKitUpdateiCloudSwitchState:(BOOL)arg0 ;
-(void)_reportError:(id)arg0 label:(id)arg1 ;
-(void)_reportProgress:(unsigned int)arg0 info:(id)arg1 ;
-(void)_run;
-(void)_runBasicConfigRequest;
-(void)_runBasicConfigResponse:(id)arg0 error:(id)arg1 ;
-(void)_runPreAuthRequest;
-(void)_runPreAuthResponse:(id)arg0 error:(id)arg1 ;
-(void)_runTVLatencySetupEnded:(int)arg0 ;
-(void)_runTVLatencySetupEstimate;
-(void)_runTVLatencySetupProgressEvent:(NSUInteger)arg0 info:(id)arg1 ;
-(void)_runTVLatencySetupRequest;
-(void)activate;
-(void)captiveConfirmed;
-(void)dealloc;
-(void)homeKitSelectHome:(id)arg0 ;
-(void)homeKitSelectRoom:(id)arg0 ;
-(void)homeiCloudEnable;
-(void)invalidate;
-(void)pairSetupTryPIN:(id)arg0 ;


@end


#endif