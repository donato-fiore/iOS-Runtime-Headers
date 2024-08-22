// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICETRIGGERSECONDPASS_H
#define CSVOICETRIGGERSECONDPASS_H

@class NSString, NSMutableArray, CSAudioCircularBuffer, CSPlainAudioFileWriter, CSAudioTimeConverter, CSVoiceTriggerSecondPassConfig, CSAsset, NSDictionary, NSUUID, SSRSpeakerRecognitionController, SSRSpeakerRecognitionContext, NSMutableDictionary;
@protocol CSPhraseNDEAPIScorerDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate, CSMediaPlayingMonitorDelegate, CSVolumeMonitorDelegate, SSRSpeakerRecognitionControllerDelegate, CSSelfTriggerDetectorDelegate, CSVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioStream.h"
#import "CSVoiceTriggerFirstPassMetrics.h"
#import "CSPhraseDetector.h"
#import "CSPhraseNDEAPIScorer.h"
#import "CSVTSecondPassLatencyMetrics.h"
#import "CSSpeechManager.h"

@interface CSVoiceTriggerSecondPass : NSObject <CSPhraseNDEAPIScorerDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate, CSMediaPlayingMonitorDelegate, CSVolumeMonitorDelegate, SSRSpeakerRecognitionControllerDelegate, CSSelfTriggerDetectorDelegate>



@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (nonatomic) NSUInteger analyzerPrependingSamples; // ivar: _analyzerPrependingSamples
@property (nonatomic) NSUInteger analyzerTrailingSamples; // ivar: _analyzerTrailingSamples
@property (retain, nonatomic) NSMutableArray *assetConfigWaitingBuffer; // ivar: _assetConfigWaitingBuffer
@property (weak, nonatomic) CSAudioCircularBuffer *audioBuffer; // ivar: _audioBuffer
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // ivar: _audioFileWriter
@property (retain, nonatomic) NSString *audioProviderUUID; // ivar: _audioProviderUUID
@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // ivar: _audioTimeConverter
@property (retain, nonatomic) CSVoiceTriggerSecondPassConfig *config; // ivar: _config
@property (nonatomic) CGFloat cumulativeDowntime; // ivar: _cumulativeDowntime
@property (nonatomic) CGFloat cumulativeUptime; // ivar: _cumulativeUptime
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (retain, nonatomic) NSString *currentLocale; // ivar: _currentLocale
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didWakeAP; // ivar: _didWakeAP
@property (nonatomic) NSUInteger earlyDetectFiredMachTime; // ivar: _earlyDetectFiredMachTime
@property (nonatomic) NSUInteger extraSamplesAtStart; // ivar: _extraSamplesAtStart
@property (nonatomic) float firstPassChannelSelectionDelaySeconds; // ivar: _firstPassChannelSelectionDelaySeconds
@property (retain, nonatomic) NSDictionary *firstPassChannelSelectionScores; // ivar: _firstPassChannelSelectionScores
@property (retain, nonatomic) NSString *firstPassDeviceId; // ivar: _firstPassDeviceId
@property (nonatomic) float firstPassMasterChannelScoreBoost; // ivar: _firstPassMasterChannelScoreBoost
@property (nonatomic) NSUInteger firstPassOnsetChannel; // ivar: _firstPassOnsetChannel
@property (nonatomic) float firstPassOnsetScore; // ivar: _firstPassOnsetScore
@property (nonatomic) NSUInteger firstPassSource; // ivar: _firstPassSource
@property (nonatomic) NSUInteger firstPassTriggerFireSampleCount; // ivar: _firstPassTriggerFireSampleCount
@property (nonatomic) NSUInteger firstPassTriggerStartSampleCount; // ivar: _firstPassTriggerStartSampleCount
@property (nonatomic) BOOL firstTimeAssetConfigured; // ivar: _firstTimeAssetConfigured
@property (retain, nonatomic) CSVoiceTriggerFirstPassMetrics *firstpassMetrics; // ivar: _firstpassMetrics
@property (nonatomic) BOOL hasLoggedSecondPass; // ivar: _hasLoggedSecondPass
@property (nonatomic) BOOL hasTriggerCandidate; // ivar: _hasTriggerCandidate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isStartSampleCountMarked; // ivar: _isStartSampleCountMarked
@property (nonatomic) CGFloat lastAggTime; // ivar: _lastAggTime
@property (nonatomic) NSInteger mediaPlayingState; // ivar: _mediaPlayingState
@property (nonatomic) float mediaVolume; // ivar: _mediaVolume
@property (nonatomic) NSUInteger numAnalyzedSamples; // ivar: _numAnalyzedSamples
@property (nonatomic) NSUInteger numProcessedSamples; // ivar: _numProcessedSamples
@property (retain, nonatomic) CSPhraseDetector *phraseDetector; // ivar: _phraseDetector
@property (retain, nonatomic) CSPhraseNDEAPIScorer *phraseNDEAPIScorer; // ivar: _phraseNDEAPIScorer
@property (nonatomic) float phsRejectLoggingThreshold; // ivar: _phsRejectLoggingThreshold
@property (nonatomic) NSUInteger processedSampleCountsInPending; // ivar: _processedSampleCountsInPending
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *resultCompletion; // ivar: _resultCompletion
@property (nonatomic) NSUInteger secondPassAnalyzerStartSampleCount; // ivar: _secondPassAnalyzerStartSampleCount
@property (nonatomic) NSUInteger secondPassClient; // ivar: _secondPassClient
@property (nonatomic) float secondPassCompleteWatchDogTimeoutSec; // ivar: _secondPassCompleteWatchDogTimeoutSec
@property (retain, nonatomic) NSUUID *secondPassCompleteWatchDogToken; // ivar: _secondPassCompleteWatchDogToken
@property (nonatomic) BOOL secondPassHasMadeDecision; // ivar: _secondPassHasMadeDecision
@property (retain, nonatomic) CSVTSecondPassLatencyMetrics *secondPassLatencyMetrics; // ivar: _secondPassLatencyMetrics
@property (nonatomic) float secondPassPrependingSec; // ivar: _secondPassPrependingSec
@property (retain, nonatomic) NSUUID *secondPassRejectionMHUUID; // ivar: _secondPassRejectionMHUUID
@property (nonatomic) NSUInteger secondPassTimeout; // ivar: _secondPassTimeout
@property (nonatomic) NSUInteger secondPassTriggerMachAbsTime; // ivar: _secondPassTriggerMachAbsTime
@property (nonatomic) NSUInteger selectedChannelFromFirstPass; // ivar: _selectedChannelFromFirstPass
@property (nonatomic) BOOL shouldUsePHS; // ivar: _shouldUsePHS
@property (retain, nonatomic) SSRSpeakerRecognitionController *speakerRecognitionController; // ivar: _speakerRecognitionController
@property (retain, nonatomic) CSSpeechManager *speechManager; // ivar: _speechManager
@property (retain, nonatomic) SSRSpeakerRecognitionContext *ssrContext; // ivar: _ssrContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // ivar: _stateSerialQueue
@property (retain, nonatomic) NSMutableDictionary *storedFirstPassInfo; // ivar: _storedFirstPassInfo
@property (readonly) Class superclass;


+(id)secondPassAudioLogDirectory;
+(id)secondPassAudioLoggingFilePathWithDeviceId:(id)arg0 ;
+(id)stringForSecondPassResult:(NSUInteger)arg0 ;
+(id)timeStampString;
-(BOOL)_isBuiltInFirstPassSource:(NSUInteger)arg0 ;
-(BOOL)_shouldLogMediaplayState:(NSUInteger)arg0 ;
-(BOOL)_shouldRequestSingleChannelFromAudioProvider;
-(BOOL)_supportTwoShotFeedbackDelay;
-(id)_fetchSiriLocale;
-(id)_getAudioTimeConverter;
-(id)_getFirstPassTriggerSourceAsString:(NSUInteger)arg0 ;
-(id)_getVoiceTriggerInfoWithKeywordDetectorResult:(id)arg0 ;
-(id)_runRecognizersWithChunk:(id)arg0 ;
-(id)_voiceTriggerSecondPassLatencyMetrics;
-(id)initWithPHSEnabled:(BOOL)arg0 ;
-(id)initWithPHSEnabled:(BOOL)arg0 speechManager:(id)arg1 stateQueue:(id)arg2 secondPassQueue:(id)arg3 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)CSMediaPlayingMonitor:(id)arg0 didReceiveMediaPlayingChanged:(NSInteger)arg1 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg0 didReceiveEnabled:(BOOL)arg1 ;
-(void)CSVolumeMonitor:(id)arg0 didReceiveMusicVolumeChanged:(float)arg1 ;
-(void)_addDeviceStatusInfoToDict:(id)arg0 ;
-(void)_addPHSInfoToVTEI:(id)arg0 fromSpeakerInfo:(id)arg1 withThreshold:(float)arg2 ;
-(void)_addRejectStatsToDict:(id)arg0 ;
-(void)_analyzeForChannel:(NSUInteger)arg0 keywordDetectorResult:(id)arg1 ;
-(void)_clearSecondPassCompletionWatchDog;
-(void)_clearTriggerCandidate;
-(void)_didStartAudioStream:(BOOL)arg0 ;
-(void)_didStopAudioStream;
-(void)_getDidWakeAP:(id)arg0 ;
-(void)_handleAudioChunk:(id)arg0 ;
-(void)_handlePHSResults:(id)arg0 voiceTriggerEventInfo:(id)arg1 forPhId:(NSUInteger)arg2 ;
-(void)_handleResultCompletion:(NSUInteger)arg0 voiceTriggerInfo:(id)arg1 isSecondChanceCandidate:(BOOL)arg2 error:(id)arg3 ;
-(void)_handleSecondPassSuccess:(id)arg0 ;
-(void)_handleVoiceTriggerFirstPassFromAOP:(id)arg0 audioProviderUUID:(id)arg1 completion:(id)arg2 ;
-(void)_handleVoiceTriggerFirstPassFromAP:(id)arg0 audioProviderUUID:(id)arg1 completion:(id)arg2 ;
-(void)_handleVoiceTriggerFirstPassFromHearst:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)_handleVoiceTriggerFirstPassFromHearstAP:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)_handleVoiceTriggerFirstPassFromJarvis:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)_handleVoiceTriggerFirstPassFromRemora:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)_initializeMediaPlayingState;
-(void)_logRejectionEventToSELF:(id)arg0 result:(NSUInteger)arg1 ;
-(void)_logSecondPassResult:(NSUInteger)arg0 withVTEI:(id)arg1 ;
-(void)_logUptimeWithVTSwitchChanged:(BOOL)arg0 VTEnabled:(BOOL)arg1 ;
-(void)_markSecondPassTriggerMachAbsoluteTime:(NSUInteger)arg0 ;
-(void)_notifySecondPassReject:(id)arg0 result:(NSUInteger)arg1 isSecondChanceCandidate:(BOOL)arg2 ;
-(void)_prepareStartAudioStream;
-(void)_requestStartAudioStreamWitContext:(id)arg0 audioProviderUUID:(id)arg1 startStreamOption:(id)arg2 completion:(id)arg3 ;
-(void)_reset;
-(void)_resetStartAnalyzeTime;
-(void)_resetUpTime;
-(void)_resetVoiceTriggerLatencyMetrics;
-(void)_scheduleDidStartSecondPassCompletionWatchDogWithToken:(id)arg0 ;
-(void)_scheduleSecondPassCompletionWatchDog;
-(void)_setAsset:(id)arg0 ;
-(void)_setStartAnalyzeTime:(NSUInteger)arg0 ;
-(void)_voiceTriggerFirstPassDidDetectKeywordFrom:(id)arg0 completion:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)cancelCurrentRequest;
-(void)dealloc;
-(void)handleVoiceTriggerSecondPassFrom:(id)arg0 completion:(id)arg1 ;
-(void)reset;
-(void)selfTriggerDetector:(id)arg0 didDetectSelfTrigger:(id)arg1 ;
-(void)setAsset:(id)arg0 ;
-(void)start;
-(void)voiceTriggerPhraseNDEAPIScorerDidDetectedKeyword:(id)arg0 bestStartSampleCount:(NSUInteger)arg1 bestEndSampleCount:(NSUInteger)arg2 ;


@end


#endif