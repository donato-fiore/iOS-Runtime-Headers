// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSHYBRIDENDPOINTANALYZER_H
#define CSHYBRIDENDPOINTANALYZER_H

@class CSAsset, NSString, NSDate, _EAREndpointer, OSDFeatures, OSDAnalyzer, CSAudioRecordContext, NSMutableArray;
@protocol CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, OSDAnalyzerDelegate, CSEndpointAnalyzerImpl, OS_dispatch_queue, CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate;

#import <Foundation/Foundation.h>

#import "CSServerEndpointFeatures.h"

@interface CSHybridEndpointAnalyzer : NSObject <CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, OSDAnalyzerDelegate, CSEndpointAnalyzerImpl>



@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (nonatomic) NSUInteger anchorMachAbsTime; // ivar: _anchorMachAbsTime
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue; // ivar: _apQueue
@property (nonatomic) CGFloat automaticEndpointingSuspensionEndTime; // ivar: _automaticEndpointingSuspensionEndTime
@property (nonatomic) CGFloat bypassSamples;
@property (nonatomic) BOOL canProcessCurrentRequest; // ivar: _canProcessCurrentRequest
@property (nonatomic) CGFloat clampedSFLatencyMsForClientLag; // ivar: _clampedSFLatencyMsForClientLag
@property (nonatomic) CGFloat clientLagThresholdMs; // ivar: _clientLagThresholdMs
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (nonatomic) NSUInteger currentRequestSampleRate; // ivar: _currentRequestSampleRate
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (weak, nonatomic) NSObject<CSEndpointAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAddAudio; // ivar: _didAddAudio
@property (nonatomic) BOOL didCommunicateEndpoint; // ivar: _didCommunicateEndpoint
@property (nonatomic) BOOL didDetectSpeech; // ivar: _didDetectSpeech
@property (nonatomic) BOOL didReceiveServerFeatures; // ivar: _didReceiveServerFeatures
@property (nonatomic) BOOL didTimestampFirstAudioPacket; // ivar: _didTimestampFirstAudioPacket
@property (nonatomic) CGFloat elapsedTimeWithNoSpeech; // ivar: _elapsedTimeWithNoSpeech
@property (nonatomic) CGFloat endWaitTime; // ivar: _endWaitTime
@property (nonatomic) NSInteger endpointMode; // ivar: _endpointMode
@property (nonatomic) NSInteger endpointStyle; // ivar: _endpointStyle
@property (retain, nonatomic) NSString *endpointerModelVersion; // ivar: _endpointerModelVersion
@property (nonatomic) BOOL epResult; // ivar: _epResult
@property (retain, nonatomic) NSDate *firstAudioPacketTimestamp; // ivar: _firstAudioPacketTimestamp
@property (nonatomic) CGFloat firstAudioSampleSensorTimestamp; // ivar: _firstAudioSampleSensorTimestamp
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat hepAudioOriginInMs; // ivar: _hepAudioOriginInMs
@property (retain, nonatomic) _EAREndpointer *hybridClassifier; // ivar: _hybridClassifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hybridClassifierQueue; // ivar: _hybridClassifierQueue
@property (weak, nonatomic) NSObject<CSEndpointAnalyzerImplDelegate> *implDelegate; // ivar: _implDelegate
@property (nonatomic) CGFloat interspeechWaitTime; // ivar: _interspeechWaitTime
@property (nonatomic) BOOL isAnchorTimeBuffered; // ivar: _isAnchorTimeBuffered
@property (nonatomic) BOOL isRequestTimeout; // ivar: _isRequestTimeout
@property (readonly, nonatomic) CGFloat lastEndOfVoiceActivityTime;
@property (nonatomic) float lastEndpointPosterior; // ivar: _lastEndpointPosterior
@property (nonatomic) CGFloat lastKnowServerFeaturesLatency; // ivar: _lastKnowServerFeaturesLatency
@property (retain, nonatomic) OSDFeatures *lastKnownOSDFeatures; // ivar: _lastKnownOSDFeatures
@property (retain, nonatomic) CSServerEndpointFeatures *lastKnownServerEPFeatures; // ivar: _lastKnownServerEPFeatures
@property (nonatomic) CGFloat lastReportedEndpointTimeMs; // ivar: _lastReportedEndpointTimeMs
@property (retain, nonatomic) NSDate *lastServerFeatureTimestamp; // ivar: _lastServerFeatureTimestamp
@property (readonly, nonatomic) CGFloat lastStartOfVoiceActivityTime;
@property (retain, nonatomic) NSString *mhId; // ivar: _mhId
@property (nonatomic) CGFloat minimumDurationForEndpointer; // ivar: _minimumDurationForEndpointer
@property (nonatomic) NSUInteger numSamplesProcessed; // ivar: _numSamplesProcessed
@property (nonatomic) NSUInteger numSamplesProcessedBeforeAnchorTime; // ivar: _numSamplesProcessedBeforeAnchorTime
@property (retain, nonatomic) OSDAnalyzer *osdAnalyzer; // ivar: _osdAnalyzer
@property (retain, nonatomic) OSDFeatures *osdFeaturesAtEndpoint; // ivar: _osdFeaturesAtEndpoint
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *osdQueue; // ivar: _osdQueue
@property (nonatomic) CGFloat processedAudioInSeconds; // ivar: _processedAudioInSeconds
@property (retain, nonatomic) CSAudioRecordContext *recordContext; // ivar: _recordContext
@property (nonatomic) BOOL recordingDidStop; // ivar: _recordingDidStop
@property (nonatomic) BOOL saveSamplesSeenInReset; // ivar: _saveSamplesSeenInReset
@property (retain, nonatomic) NSMutableArray *serverFeatureLatencies; // ivar: _serverFeatureLatencies
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverFeaturesQueue; // ivar: _serverFeaturesQueue
@property (nonatomic) CGFloat serverFeaturesWarmupLatency; // ivar: _serverFeaturesWarmupLatency
@property (nonatomic) BOOL speechEndpointDetected; // ivar: _speechEndpointDetected
@property (nonatomic) CGFloat startWaitTime; // ivar: _startWaitTime
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // ivar: _stateSerialQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (nonatomic) CGFloat trailingSilenceDurationAtEndpoint; // ivar: _trailingSilenceDurationAtEndpoint
@property (nonatomic) BOOL useDefaultServerFeaturesOnClientLag; // ivar: _useDefaultServerFeaturesOnClientLag
@property (nonatomic) NSUInteger vtEndInSampleCount; // ivar: _vtEndInSampleCount
@property (nonatomic) CGFloat vtExtraAudioAtStartInMs; // ivar: _vtExtraAudioAtStartInMs


-(BOOL)_multimodalEndpointerEnabled;
-(BOOL)_shouldUsePhaticWithRecordContext;
-(NSInteger)fetchCurrentEndpointerOperationMode;
-(id)_getCSHybridEndpointerConfigForAsset:(id)arg0 ;
-(id)init;
-(void)CSAssetManagerDidDownloadNewAsset:(id)arg0 ;
-(void)CSFirstUnlockMonitor:(id)arg0 didReceiveFirstUnlock:(BOOL)arg1 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg0 didReceiveLanguageCodeChanged:(id)arg1 ;
-(void)_emitEndpointDetectedEventWithEndpointTimeMs:(CGFloat)arg0 endpointBufferHostTime:(NSUInteger)arg1 endpointerFeatures:(id)arg2 endpointerDecisionLagInNs:(CGFloat)arg3 extraDelayMs:(NSUInteger)arg4 endpointScore:(CGFloat)arg5 asrFeatureLatencies:(id)arg6 ;
-(void)_loadAndSetupEndpointerAssetIfNecessary;
-(void)_readParametersFromHEPAsset:(id)arg0 ;
-(void)_updateAssetWithCurrentLanguage;
-(void)_updateAssetWithLanguage:(id)arg0 ;
-(void)handleVoiceTriggerWithActivationInfo:(id)arg0 ;
-(void)logFeaturesWithEvent:(id)arg0 locale:(id)arg1 ;
-(void)osdAnalyzer:(id)arg0 didUpdateOSDFeatures:(id)arg1 ;
-(void)preheat;
-(void)processAudioSamplesAsynchronously:(id)arg0 ;
-(void)processServerEndpointFeatures:(id)arg0 ;
-(void)recordingStoppedForReason:(NSInteger)arg0 ;
-(void)reset;
-(void)resetForNewRequestWithSampleRate:(NSUInteger)arg0 recordContext:(id)arg1 ;
-(void)setEndpointerOperationMode:(NSInteger)arg0 ;
-(void)shouldAcceptEagerResultForDuration:(CGFloat)arg0 resultsCompletionHandler:(id)arg1 ;
-(void)stopEndpointer;
-(void)terminateProcessing;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg0 ;
-(void)updateEndpointerThreshold:(float)arg0 ;


@end


#endif