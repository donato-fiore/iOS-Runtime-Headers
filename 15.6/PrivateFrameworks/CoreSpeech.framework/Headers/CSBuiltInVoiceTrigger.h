// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSBUILTINVOICETRIGGER_H
#define CSBUILTINVOICETRIGGER_H

@class NSMutableArray, NSDictionary, CSAsset, NSString, NSNumber, CSOSTransaction, CSPolicy;
@protocol CSKeywordAnalyzerNDAPIScoreDelegate, CSActivationEventNotificationHandlerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSVoiceTriggerXPCServiceProxyDelegate, CSStateMachineDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSAudioRouteChangeMonitorDelegate, CSPhoneCallStateMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSelfTriggerDetectorDelegate, CSSecondPassProgressProviding, CSVoiceTriggerDelegate, OS_dispatch_queue, OS_dispatch_group, CSSecondPassProgressDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CSVoiceTriggerAlwaysOnProcessor.h"
#import "CSAudioProvider.h"
#import "CSAudioStream.h"
#import "CSKeywordAnalyzerNDAPIResult.h"
#import "CSStateMachine.h"
#import "CSVoiceTriggerSecondPass.h"

@interface CSBuiltInVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSActivationEventNotificationHandlerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSVoiceTriggerXPCServiceProxyDelegate, CSStateMachineDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSAudioRouteChangeMonitorDelegate, CSPhoneCallStateMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSelfTriggerDetectorDelegate, CSSecondPassProgressProviding>



@property (retain, nonatomic) CSVoiceTriggerAlwaysOnProcessor *alwaysOnProcessorController; // ivar: _alwaysOnProcessorController
@property (retain, nonatomic) NSMutableArray *assetConfigWaitingBuffer; // ivar: _assetConfigWaitingBuffer
@property (retain, nonatomic) CSAudioProvider *audioProvider; // ivar: _audioProvider
@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (retain, nonatomic) NSMutableArray *audioStreamHoldings; // ivar: _audioStreamHoldings
@property (nonatomic) NSUInteger bestChannel; // ivar: _bestChannel
@property (nonatomic) float bestScore; // ivar: _bestScore
@property (nonatomic) NSUInteger channelSelectionDelay; // ivar: _channelSelectionDelay
@property (retain, nonatomic) NSDictionary *channelSelectionScores; // ivar: _channelSelectionScores
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (nonatomic) NSUInteger currentSplitterState; // ivar: _currentSplitterState
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger delayInSamplesRequiredForChannelSelection; // ivar: _delayInSamplesRequiredForChannelSelection
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *firstPassMyriadGoodness; // ivar: _firstPassMyriadGoodness
@property (nonatomic) float firstPassThreshold; // ivar: _firstPassThreshold
@property (nonatomic) BOOL firstTimeAssetConfigured; // ivar: _firstTimeAssetConfigured
@property (nonatomic) BOOL hasTriggerPending; // ivar: _hasTriggerPending
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isExternalPhraseSpotterRunning; // ivar: _isExternalPhraseSpotterRunning
@property (nonatomic) BOOL isListenPollingStarting; // ivar: _isListenPollingStarting
@property (nonatomic) BOOL isPhraseSpotterBypassed; // ivar: _isPhraseSpotterBypassed
@property (nonatomic) BOOL isSecondPassCancelled; // ivar: _isSecondPassCancelled
@property (nonatomic) BOOL isSecondPassRunning; // ivar: _isSecondPassRunning
@property (nonatomic) BOOL isSiriClientListening; // ivar: _isSiriClientListening
@property (retain, nonatomic) NSMutableArray *keywordAnalyzersNDAPI; // ivar: _keywordAnalyzersNDAPI
@property (nonatomic) NSUInteger lastTriggeredBestChannel; // ivar: _lastTriggeredBestChannel
@property (retain, nonatomic) CSKeywordAnalyzerNDAPIResult *lastTriggeredOnsetResult; // ivar: _lastTriggeredOnsetResult
@property (nonatomic) float masterChannelScoreBoost; // ivar: _masterChannelScoreBoost
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger onsetChannel; // ivar: _onsetChannel
@property (retain, nonatomic) CSKeywordAnalyzerNDAPIResult *onsetResult; // ivar: _onsetResult
@property (nonatomic) NSUInteger phoneCallState; // ivar: _phoneCallState
@property (nonatomic) NSUInteger processingChannelsBitset; // ivar: _processingChannelsBitset
@property (nonatomic) NSUInteger processingChunkSamples; // ivar: _processingChunkSamples
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup; // ivar: _recordingWillStartGroup
@property (nonatomic) NSUInteger secondChanceHotTillMachTime; // ivar: _secondChanceHotTillMachTime
@property (weak, nonatomic) NSObject<CSSecondPassProgressDelegate> *secondPassProgressDelegate; // ivar: _secondPassProgressDelegate
@property (retain, nonatomic) CSOSTransaction *secondPassTransaction; // ivar: _secondPassTransaction
@property (nonatomic) BOOL shouldDisableOnSpeakerVerificationInSplitterMode; // ivar: _shouldDisableOnSpeakerVerificationInSplitterMode
@property (retain, nonatomic) CSStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *validationTimer; // ivar: _validationTimer
@property (retain, nonatomic) CSPolicy *voiceTriggerAOPModeStartPolicy; // ivar: _voiceTriggerAOPModeStartPolicy
@property (nonatomic) BOOL voiceTriggerEnabled; // ivar: _voiceTriggerEnabled
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // ivar: _voiceTriggerSecondPass
@property (retain, nonatomic) CSPolicy *voiceTriggerStartPolicy; // ivar: _voiceTriggerStartPolicy


-(BOOL)_hasHFPDuringPhoneCall;
-(BOOL)_isBuiltInAOPVoiceTriggerEvent:(id)arg0 ;
-(BOOL)_isVoiceTriggerStateTransitionEvent:(id)arg0 ;
-(BOOL)_shouldEnableAOPVoiceTrigger;
-(BOOL)_shouldEnableAPVoiceTrigger;
-(BOOL)_shouldHandleAOPVoiceTrigger;
-(BOOL)_shouldReuseBuiltInAudioProvider;
-(BOOL)_shouldSecondPassKeepAlive;
-(NSUInteger)_currentState;
-(id)_eventName:(NSUInteger)arg0 ;
-(id)_firstPassVoiceTriggerSignalEstimate;
-(id)_stateName:(NSUInteger)arg0 ;
-(id)initWithTargetQueue:(id)arg0 ;
-(void)CSAudioRouteChangeMonitor:(id)arg0 didReceiveAudioRouteChangeEvent:(NSInteger)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg0 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)CSBluetoothWirelessSplitterMonitor:(id)arg0 didReceiveSplitterStateChange:(NSUInteger)arg1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg2 ;
-(void)CSPhoneCallStateMonitor:(id)arg0 didRecievePhoneCallStateChange:(NSUInteger)arg1 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg0 didReceiveEnabled:(BOOL)arg1 ;
-(void)CSVoiceTriggerXPCServiceProxy:(id)arg0 bypassPhraseSpotter:(BOOL)arg1 ;
-(void)CSVoiceTriggerXPCServiceProxy:(id)arg0 bypassRaiseToSpeak:(BOOL)arg1 ;
-(void)_APModeValidationTimerFired;
-(void)_addAudioStreamHold:(id)arg0 ;
-(void)_cancelAllAudioStreamHold;
-(void)_cancelLastAudioStreamHold;
-(void)_createSecondPassIfNeededWithFirstPassSource:(NSUInteger)arg0 ;
-(void)_handleAudioChunk:(id)arg0 ;
-(void)_handleSecondPassResult:(NSUInteger)arg0 voiceTriggerInfo:(id)arg1 deviceId:(id)arg2 secondChanceCandidate:(BOOL)arg3 error:(id)arg4 ;
-(void)_handleVoiceTriggerSecondPassWithSource:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 ;
-(void)_keywordAnalyzerNDAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)_notifyEvent:(NSUInteger)arg0 ;
-(void)_receivedHearstConnectionEvent:(BOOL)arg0 ;
-(void)_reportVoiceTriggerFirstPassFireFromAP;
-(void)_requestStartAudioStreamWithSource:(NSUInteger)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)_reset;
-(void)_setAsset:(id)arg0 ;
-(void)_setupStateMachine;
-(void)_startAOPVoiceTrigger;
-(void)_startAPVoiceTriggerWithCompletion:(id)arg0 ;
-(void)_startListenPollingWithInterval:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_startListenWithCompletion:(id)arg0 ;
-(void)_startVoiceTriggerWithCompletion:(id)arg0 ;
-(void)_stopAOPVoiceTrigger;
-(void)_stopAPVoiceTrigger;
-(void)_stopListening;
-(void)_teardownSecondPassIfNeeded;
-(void)_transitAOPMode:(BOOL)arg0 ;
-(void)_transitAOPModeAsync:(BOOL)arg0 ;
-(void)_transitAOPModeSync:(BOOL)arg0 ;
-(void)_transitVoiceTriggerStatus:(BOOL)arg0 force:(BOOL)arg1 ;
-(void)_updateCurrentSplitterState:(NSUInteger)arg0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg1 ;
-(void)activationEventNotificationHandler:(id)arg0 event:(id)arg1 completion:(id)arg2 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)cancelSecondPassRunning;
-(void)didIgnoreEvent:(NSInteger)arg0 from:(NSInteger)arg1 ;
-(void)didTransitFrom:(NSInteger)arg0 to:(NSInteger)arg1 by:(NSInteger)arg2 ;
-(void)keywordAnalyzerNDAPI:(id)arg0 hasMpVtResultsAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)keywordAnalyzerNDAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)pendingSecondPassTriggerWasClearedForClient:(NSUInteger)arg0 deviceId:(id)arg1 ;
-(void)reset;
-(void)selfTriggerDetector:(id)arg0 didDetectSelfTrigger:(id)arg1 ;
-(void)setAsset:(id)arg0 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 withEventUUID:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)start;


@end


#endif