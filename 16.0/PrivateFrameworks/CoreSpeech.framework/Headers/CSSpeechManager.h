// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSPEECHMANAGER_H
#define CSSPEECHMANAGER_H

@class NSMutableDictionary, NSString;
@protocol CSAudioServerCrashMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSActivationEventNotificationHandlerDelegate, CSAudioRecorderDelegate, CSAudioProviderDelegate, CSOpportuneSpeakEventMonitorDelegate, OS_dispatch_queue, OS_dispatch_source, CSSpeechManagerDelegate;

#import <Foundation/Foundation.h>

#import "CSAudioRecorder.h"
#import "CSFallbackAudioSessionReleaseProvider.h"
#import "CSKeywordDetector.h"
#import "CSMyriadPHash.h"
#import "CSMyriadSelfTriggerCoordinator.h"
#import "CSOpportuneSpeakListnerTestService.h"
#import "CSPostBuildInstallService.h"
#import "CSPreMyriadCoordinator.h"
#import "CSSelfTriggerDetector.h"
#import "CSSmartSiriVolumeManager.h"
#import "CSBuiltInVoiceTrigger.h"
#import "CSVoiceTriggerEventsCoordinator.h"
#import "CSVoiceTriggerFidesClient.h"
#import "CSVoiceTriggerFileLogger.h"
#import "CSVoiceTriggerFirstPassHearst.h"
#import "CSVoiceTriggerFirstPassHearstAP.h"
#import "CSVoiceTriggerFirstPassJarvis.h"
#import "CSVoiceTriggerFirstPassRemora.h"
#import "CSVoiceProfileRetrainManager.h"

@interface CSSpeechManager : NSObject <CSAudioServerCrashMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSActivationEventNotificationHandlerDelegate, CSAudioRecorderDelegate, CSAudioProviderDelegate, CSOpportuneSpeakEventMonitorDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // ivar: _assetQueryQueue
@property (retain, nonatomic) NSMutableDictionary *audioProviders; // ivar: _audioProviders
@property (retain, nonatomic) CSAudioRecorder *audioRecorder; // ivar: _audioRecorder
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clearLoggingFileTimer; // ivar: _clearLoggingFileTimer
@property (nonatomic) NSInteger clearLoggingFileTimerCount; // ivar: _clearLoggingFileTimerCount
@property (weak, nonatomic) NSObject<CSSpeechManagerDelegate> *clientController; // ivar: _clientController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CSFallbackAudioSessionReleaseProvider *fallbackAudioSessionReleaseProvider; // ivar: _fallbackAudioSessionReleaseProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSKeywordDetector *keywordDetector; // ivar: _keywordDetector
@property (retain, nonatomic) CSMyriadPHash *myriad; // ivar: _myriad
@property (retain, nonatomic) CSMyriadSelfTriggerCoordinator *myriadSelfTriggerCoordinator; // ivar: _myriadSelfTriggerCoordinator
@property (retain, nonatomic) CSOpportuneSpeakListnerTestService *opportuneSpeakListnerTestService; // ivar: _opportuneSpeakListnerTestService
@property (retain, nonatomic) CSPostBuildInstallService *postBuildInstallService; // ivar: _postBuildInstallService
@property (retain, nonatomic) CSPreMyriadCoordinator *preMyriadCoordinator; // ivar: _preMyriadCoordinator
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *remoraTargetQueue; // ivar: _remoraTargetQueue
@property (retain, nonatomic) CSSelfTriggerDetector *selfTriggerDetector; // ivar: _selfTriggerDetector
@property (retain, nonatomic) CSSmartSiriVolumeManager *ssvManager; // ivar: _ssvManager
@property (readonly) Class superclass;
@property (retain, nonatomic) CSBuiltInVoiceTrigger *voiceTrigger; // ivar: _voiceTrigger
@property (retain, nonatomic) CSVoiceTriggerEventsCoordinator *voiceTriggerEventsCoordinator; // ivar: _voiceTriggerEventsCoordinator
@property (retain, nonatomic) CSVoiceTriggerFidesClient *voiceTriggerFidesClient; // ivar: _voiceTriggerFidesClient
@property (retain, nonatomic) CSVoiceTriggerFileLogger *voiceTriggerFileLogger; // ivar: _voiceTriggerFileLogger
@property (retain, nonatomic) CSVoiceTriggerFirstPassHearst *voiceTriggerFirstPassHearst; // ivar: _voiceTriggerFirstPassHearst
@property (retain, nonatomic) CSVoiceTriggerFirstPassHearstAP *voiceTriggerFirstPassHearstAP; // ivar: _voiceTriggerFirstPassHearstAP
@property (retain, nonatomic) CSVoiceTriggerFirstPassJarvis *voiceTriggerFirstPassJarvis; // ivar: _voiceTriggerFirstPassJarvis
@property (retain, nonatomic) CSVoiceTriggerFirstPassRemora *voiceTriggerFirstPassRemora; // ivar: _voiceTriggerFirstPassRemora
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceTriggerQueue; // ivar: _voiceTriggerQueue
@property (retain, nonatomic) CSVoiceProfileRetrainManager *voiceTriggerRetrainer; // ivar: _voiceTriggerRetrainer


+(id)sharedManager;
+(id)sharedManagerForCoreSpeechDaemon;
-(BOOL)_prepareForBluetoothDeviceWithDeviceType:(NSUInteger)arg0 ;
-(id)_getAudioRecorderWithError:(*id)arg0 ;
-(id)_myriadSelfTriggerCoordinatorIfNeeded:(BOOL)arg0 ;
-(id)_preMyriadCoordinatorCreateIfNeeded:(BOOL)arg0 ;
-(id)_voiceTriggerEventNotifierCreateIfNeeded:(BOOL)arg0 ;
-(id)_voiceTriggerFileLoggerCreateIfNeeded:(BOOL)arg0 ;
-(id)audioFingerprintProvider;
-(id)audioProviderWithContext:(id)arg0 error:(*id)arg1 ;
-(id)audioProviderWithStreamID:(NSUInteger)arg0 ;
-(id)audioProviderWithUUID:(id)arg0 ;
-(id)fetchFallbackAudioSessionReleaseProvider;
-(id)init;
-(void)CSAudioRouteChangeMonitor:(id)arg0 didReceiveAudioRouteChangeEvent:(NSInteger)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)_createClearLoggingFileTimer;
-(void)_getVoiceTriggerAssetIfNeeded:(id)arg0 ;
-(void)_handleClearLoggingFileTimer;
-(void)_prepareRemoraDeviceWithConnectedDeviceIds:(id)arg0 ;
-(void)_reinitializeSmartSiriVolumeWithAsset:(id)arg0 ;
-(void)_reinitializeVoiceTriggerIfNeeded;
-(void)_reinitializeVoiceTriggerWithAsset:(id)arg0 ;
// -(void)_setupForBluetoothDeviceIfNeededWithDeviceType:(NSUInteger)arg0 prepareCompletion:(id)arg1 completion:(unk)arg2  ;
// -(void)_setupForHearstIfNeededWithPrepareCompletion:(id)arg0 completion:(unk)arg1  ;
// -(void)_setupForJarvisIfNeededWithPrepareCompletion:(id)arg0 completion:(unk)arg1  ;
-(void)_setupForRemoraIfNeededWithCompletion:(id)arg0 ;
-(void)_setupSpeakerRecognitionWithVTAsset:(id)arg0 ;
-(void)_setupVoiceTriggerWithCompletion:(id)arg0 ;
-(void)_startAllClients;
-(void)_startClearLoggingFilesTimer;
-(void)_startForBluetoothDeviceWithDeviceType:(NSUInteger)arg0 asset:(id)arg1 ;
-(void)_startVoiceTrigger;
-(void)_teardownForBluetoothDevice;
-(void)_updateBuiltInTriggerForPreMyriadIfNeeded:(id)arg0 ;
-(void)activationEventNotificationHandler:(id)arg0 event:(id)arg1 completion:(id)arg2 ;
-(void)audioProviderInvalidated:(id)arg0 streamHandleId:(NSUInteger)arg1 ;
-(void)audioRecorderBufferAvailable:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 ;
-(void)audioRecorderBufferAvailable:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 remoteVAD:(id)arg3 atTime:(NSUInteger)arg4 arrivalTimestampToAudioRecorder:(NSUInteger)arg5 numberOfChannels:(int)arg6 ;
-(void)audioRecorderWillBeDestroyed:(id)arg0 ;
-(void)dealloc;
-(void)opportuneSpeakEventMonitor:(id)arg0 didStreamStateChanged:(BOOL)arg1 ;
-(void)registerSiriClientProxy:(id)arg0 ;
-(void)registerSpeechController:(id)arg0 ;
-(void)startManager;
-(void)voiceTriggerAssetHandler:(id)arg0 endpointId:(id)arg1 didChangeCachedAsset:(id)arg2 ;


@end


#endif