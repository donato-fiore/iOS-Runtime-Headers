// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFDEVICESETUPB238SERVICE_H
#define SFDEVICESETUPB238SERVICE_H

@class NSData, APCPlayer, RPCompanionLinkClient, HMDeviceSetupOperationHandler, CUAudioPlayer, NSString, NSDate, SUICDefaultVoicePreviewer;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFClient.h"
#import "SFService.h"
#import "SFSession.h"
#import "SFSiriClient.h"
#import "SFSiriDeviceSetupGreetingDetails.h"
#import "SFDeviceOperationHandlerCDPSetup.h"
#import "SFDeviceOperationHandlerWiFiSetup.h"

@interface SFDeviceSetupB238Service : NSObject {
    BOOL _activateCalled;
    BOOL _advertiseFast;
    NSData *_apcCapData;
    APCPlayer *_apcPlayer;
    RPCompanionLinkClient *_companionLinkClient;
    NSObject<OS_dispatch_source> *_finishApplyTimer;
    NSObject<OS_dispatch_source> *_finishTimeoutTimer;
    BOOL _finished;
    BOOL _finished2;
    BOOL _finishedEventSent;
    BOOL _finishSessionEnded;
    BOOL _invalidateCalled;
    BOOL _iTunesCloudCompleted;
    int _iTunesCloudCompleteToken;
    CGFloat _iTunesCloudWaitSeconds;
    BOOL _mediaSystemReady;
    CGFloat _mediaSystemWaitSeconds;
    NSUInteger _peerFeatureFlags;
    SFClient *_sfClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFSiriClient *_siriClient;
    BOOL _siriDidDeviceSetup;
    SFSiriDeviceSetupGreetingDetails *_siriGreetingDetails;
    BOOL _siriHeardWhatCanYouDo;
    *__WiFiManagerClient _wifiManager;
    BOOL _wifiSetupEnabled;
    BOOL _identifyB238AsB520;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    CUAudioPlayer *_audioPlayer;
    BOOL _shouldSetupAgentPlayBootTone;
    BOOL _prefCDPEnabled;
    NSString *_languageCode;
    NSString *_localeIdentifier;
    NSString *_temperatureUnit;
    int _siriDataSharingState;
    BOOL _siriDisabled;
    NSString *_siriListenLanguage;
    NSInteger _siriVoiceGender;
    NSString *_siriVoiceLanguage;
    NSString *_siriVoiceName;
    NSDate *_timeObj;
    int _timeAuto;
    NSInteger _timeCycle;
    NSString *_timeZone;
    int _timeZoneAuto;
    SUICDefaultVoicePreviewer *_voicePreviewer;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(BOOL)_handleFinishDone2Ready;
-(id)init;
-(int)_handleBasicConfigRequest:(id)arg0 ;
-(void)_activate;
-(void)_cleanup;
-(void)_handleAuthActionAudioPasscodeInit:(id)arg0 response:(id)arg1 ;
-(void)_handleAuthActionAudioPasscodeStartWithResponse:(id)arg0 ;
-(void)_handleAuthActionRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleAuthActionSiriInit:(id)arg0 ;
-(void)_handleAuthActionSiriStart:(id)arg0 response:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleBasicConfigResponse:(id)arg0 ;
-(void)_handleDeviceActivationRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleFinishApply:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleFinishDone2:(unsigned int)arg0 responseHandler:(id)arg1 ;
-(void)_handleFinishDone:(unsigned int)arg0 responseHandler:(id)arg1 ;
-(void)_handleFinishRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handlePlaySoundRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handlePreAuthRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleRawRequest:(id)arg0 flags:(unsigned int)arg1 responseHandler:(id)arg2 ;
-(void)_handleSessionEnded:(id)arg0 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_handleSiriDialogIdentifier:(id)arg0 ;
-(void)_handleVoicePreviewRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_invalidate;
-(void)_playReadyToSetupSound;
-(void)_setSiriInfo;
-(void)_setSystemName:(id)arg0 hostname:(id)arg1 ;
-(void)_sfServiceStart;
-(void)_siriGreetingDialogA;
-(void)_siriGreetingDialogBPhrase:(id)arg0 localizedText:(id)arg1 error:(id)arg2 ;
-(void)_siriGreetingDialogBStart;
-(void)_siriGreetingDialogCPhrase:(id)arg0 error:(id)arg1 ;
-(void)_siriGreetingDialogCStart;
-(void)_siriGreetingIntroPhrase:(id)arg0 error:(id)arg1 ;
-(void)_siriGreetingIntroStart;
-(void)_siriGreetingStart:(id)arg0 ;
-(void)_speakLocalizedKey:(id)arg0 event:(unsigned int)arg1 ;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif