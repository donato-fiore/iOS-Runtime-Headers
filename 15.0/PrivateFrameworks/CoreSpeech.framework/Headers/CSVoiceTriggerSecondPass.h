// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERSECONDPASS_H
#define CSVOICETRIGGERSECONDPASS_H

@class NSString, NSMutableArray, CSAudioCircularBuffer, CSPlainAudioFileWriter, CSAudioTimeConverter, CSAsset, NSMutableData, NSDictionary, NSUUID, SSRSpeakerRecognitionController, SSRSpeakerRecognitionContext, NSMutableDictionary;
@protocol CSKeywordAnalyzerNDEAPIScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate, CSMediaPlayingMonitorDelegate, CSVolumeMonitorDelegate, SSRSpeakerRecognitionControllerDelegate, CSSelfTriggerDetectorDelegate, CSVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioStream.h"
#import "CSKeywordAnalyzerNDEAPI.h"
#import "CSVTSecondPassScorer.h"
#import "CSShadowMicScoreCreator.h"
#import "CSSpeechManager.h"
#import "CSKeywordAnalyzerNDAPI.h"
#import "CSSyncKeywordAnalyzerQuasar.h"

@interface CSVoiceTriggerSecondPass : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate, CSMediaPlayingMonitorDelegate, CSVolumeMonitorDelegate, SSRSpeakerRecognitionControllerDelegate, CSSelfTriggerDetectorDelegate>



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
@property (nonatomic) CGFloat cumulativeDowntime; // ivar: _cumulativeDowntime
@property (nonatomic) CGFloat cumulativeUptime; // ivar: _cumulativeUptime
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (retain, nonatomic) NSString *currentLocale; // ivar: _currentLocale
@property (retain, nonatomic) NSMutableData *dataBufferNDEAPI; // ivar: _dataBufferNDEAPI
@property (nonatomic) NSUInteger dataBufferPositionNDEAPI; // ivar: _dataBufferPositionNDEAPI
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didWakeAP; // ivar: _didWakeAP
@property (nonatomic) NSUInteger earlyDetectFiredMachTime; // ivar: _earlyDetectFiredMachTime
@property (nonatomic) float effectiveKeywordThreshold; // ivar: _effectiveKeywordThreshold
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
@property (nonatomic) BOOL hasPendingNearMiss; // ivar: _hasPendingNearMiss
@property (nonatomic) unsigned char hasReceivedEarlyDetectNDEAPIResult; // ivar: _hasReceivedEarlyDetectNDEAPIResult
@property (nonatomic) BOOL hasReceivedNDEAPIResult; // ivar: _hasReceivedNDEAPIResult
@property (nonatomic) BOOL hasTriggerCandidate; // ivar: _hasTriggerCandidate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSecondChanceHot; // ivar: _isSecondChanceHot
@property (nonatomic) BOOL isStartSampleCountMarked; // ivar: _isStartSampleCountMarked
@property (retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI; // ivar: _keywordAnalyzerNDEAPI
@property (nonatomic) float keywordLoggingThreshold; // ivar: _keywordLoggingThreshold
@property (nonatomic) float keywordRejectLoggingThreshold; // ivar: _keywordRejectLoggingThreshold
@property (nonatomic) float keywordThreshold; // ivar: _keywordThreshold
@property (nonatomic) float keywordThresholdSecondChance; // ivar: _keywordThresholdSecondChance
@property (nonatomic) CGFloat lastAggTime; // ivar: _lastAggTime
@property (nonatomic) float lastScore; // ivar: _lastScore
@property (nonatomic) NSInteger mediaPlayingState; // ivar: _mediaPlayingState
@property (nonatomic) float mediaVolume; // ivar: _mediaVolume
@property (nonatomic) NSUInteger nearMissCandidateDetectedSamples; // ivar: _nearMissCandidateDetectedSamples
@property (nonatomic) NSUInteger nearMissDelayTimeout; // ivar: _nearMissDelayTimeout
@property (nonatomic) NSUInteger numAnalyzedSamples; // ivar: _numAnalyzedSamples
@property (nonatomic) NSUInteger numProcessedSamples; // ivar: _numProcessedSamples
@property (nonatomic) float phsRejectLoggingThreshold; // ivar: _phsRejectLoggingThreshold
@property (nonatomic) float phsThreshold; // ivar: _phsThreshold
@property (nonatomic) NSUInteger processedSampleCountsInPending; // ivar: _processedSampleCountsInPending
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) float recognizerScore; // ivar: _recognizerScore
@property (nonatomic) float recognizerScoreScaleFactor; // ivar: _recognizerScoreScaleFactor
@property (nonatomic) float recognizerThresholdOffset; // ivar: _recognizerThresholdOffset
@property (nonatomic) float referenceKeywordThreshold; // ivar: _referenceKeywordThreshold
@property (copy, nonatomic) id *resultCompletion; // ivar: _resultCompletion
@property (nonatomic) NSUInteger secondChanceHotTillMachTime; // ivar: _secondChanceHotTillMachTime
@property (nonatomic) NSUInteger secondPassAnalyzerStartSampleCount; // ivar: _secondPassAnalyzerStartSampleCount
@property (nonatomic) NSUInteger secondPassClient; // ivar: _secondPassClient
@property (nonatomic) float secondPassCompleteWatchDogTimeoutSec; // ivar: _secondPassCompleteWatchDogTimeoutSec
@property (retain, nonatomic) NSUUID *secondPassCompleteWatchDogToken; // ivar: _secondPassCompleteWatchDogToken
@property (nonatomic) BOOL secondPassHasMadeDecision; // ivar: _secondPassHasMadeDecision
@property (nonatomic) float secondPassPrependingSec; // ivar: _secondPassPrependingSec
@property (retain, nonatomic) NSUUID *secondPassRejectionMHUUID; // ivar: _secondPassRejectionMHUUID
@property (retain, nonatomic) CSVTSecondPassScorer *secondPassScorer; // ivar: _secondPassScorer
@property (nonatomic) NSUInteger secondPassTimeout; // ivar: _secondPassTimeout
@property (nonatomic) NSUInteger secondPassTriggerMachAbsTime; // ivar: _secondPassTriggerMachAbsTime
@property (nonatomic) NSUInteger selectedChannelFromFirstPass; // ivar: _selectedChannelFromFirstPass
@property (retain, nonatomic) CSShadowMicScoreCreator *shadowMicScoreCreator; // ivar: _shadowMicScoreCreator
@property (nonatomic) float shadowMicScoreThresholdForVAD; // ivar: _shadowMicScoreThresholdForVAD
@property (nonatomic) BOOL shouldUsePHS; // ivar: _shouldUsePHS
@property (retain, nonatomic) SSRSpeakerRecognitionController *speakerRecognitionController; // ivar: _speakerRecognitionController
@property (retain, nonatomic) CSSpeechManager *speechManager; // ivar: _speechManager
@property (retain, nonatomic) SSRSpeakerRecognitionContext *ssrContext; // ivar: _ssrContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // ivar: _stateSerialQueue
@property (retain, nonatomic) NSMutableDictionary *storedFirstPassInfo; // ivar: _storedFirstPassInfo
@property (readonly) Class superclass;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *syncKeywordAnalyzerNDAPI; // ivar: _syncKeywordAnalyzerNDAPI
@property (retain, nonatomic) CSSyncKeywordAnalyzerQuasar *syncKeywordAnalyzerQuasar; // ivar: _syncKeywordAnalyzerQuasar
@property (nonatomic) float twoShotFeedbackDelay; // ivar: _twoShotFeedbackDelay
@property (nonatomic) float twoShotFeedbackDelayRemora; // ivar: _twoShotFeedbackDelayRemora


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
-(id)_getVoiceTriggerInfoWithLastResult:(id)arg0 withNumAnalyzedSamples:(NSUInteger)arg1 withKeywordScore:(float)arg2 ;
-(id)_mpvtGetVoiceTriggerInfoWithLastResult:(id)arg0 ;
-(id)initWithPHSEnabled:(BOOL)arg0 ;
-(id)initWithPHSEnabled:(BOOL)arg0 speechManager:(id)arg1 stateQueue:(id)arg2 secondPassQueue:(id)arg3 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)CSMediaPlayingMonitor:(id)arg0 didReceiveMediaPlayingChanged:(NSInteger)arg1 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg0 didReceiveEnabled:(BOOL)arg1 ;
-(void)CSVolumeMonitor:(id)arg0 didReceiveMusicVolumeChanged:(float)arg1 ;
-(void)_addDeviceStatusInfoToDict:(id)arg0 ;
-(void)_addPHSInfoToVTEI:(id)arg0 fromSpeakerInfo:(id)arg1 ;
-(void)_addRejectStatsToDict:(id)arg0 ;
-(void)_analyzeForKeywordDetection:(id)arg0 forChannel:(NSUInteger)arg1 forceMaximized:(BOOL)arg2 ;
-(void)_clearSecondPassCompletionWatchDog;
-(void)_clearTriggerCandidate;
-(void)_computeEffectiveThreshold;
-(void)_didStartAudioStream:(BOOL)arg0 ;
-(void)_didStopAudioStream;
-(void)_getDidWakeAP:(id)arg0 ;
-(void)_handleAudioChunk:(id)arg0 ;
-(void)_handlePHSResults:(id)arg0 voiceTriggerEventInfo:(id)arg1 ;
-(void)_handleResultCompletion:(NSUInteger)arg0 voiceTriggerInfo:(id)arg1 error:(id)arg2 ;
-(void)_handleSecondPassSuccess:(id)arg0 ;
-(void)_handleVoiceTriggerFirstPassFromAOP:(id)arg0 audioProviderUUID:(id)arg1 completion:(id)arg2 ;
-(void)_handleVoiceTriggerFirstPassFromAP:(id)arg0 audioProviderUUID:(id)arg1 completion:(id)arg2 ;
-(void)_handleVoiceTriggerFirstPassFromHearst:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)_handleVoiceTriggerFirstPassFromHearstAP:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)_handleVoiceTriggerFirstPassFromJarvis:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)_handleVoiceTriggerFirstPassFromRemora:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)_initializeMediaPlayingState;
-(void)_logSecondPassResult:(NSUInteger)arg0 withVTEI:(id)arg1 ;
-(void)_logUptimeWithVTSwitchChanged:(BOOL)arg0 VTEnabled:(BOOL)arg1 ;
-(void)_markSecondPassTriggerMachAbsoluteTime:(NSUInteger)arg0 ;
-(void)_mpAnalyzeForTriggerDetection:(id)arg0 forceMaximized:(BOOL)arg1 ;
-(void)_notifySecondPassReject:(id)arg0 result:(NSUInteger)arg1 ;
-(void)_prepareStartAudioStream;
-(void)_requestStartAudioStreamWitContext:(id)arg0 audioProviderUUID:(id)arg1 startStreamOption:(id)arg2 completion:(id)arg3 ;
-(void)_reset;
-(void)_resetStartAnalyzeTime;
-(void)_resetUpTime;
-(void)_runRecognizersWithChunk:(id)arg0 ;
-(void)_scheduleDidStartSecondPassCompletionWatchDogWithToken:(id)arg0 ;
-(void)_scheduleSecondPassCompletionWatchDog;
-(void)_setAsset:(id)arg0 ;
-(void)_setStartAnalyzeTime:(NSUInteger)arg0 ;
-(void)_voiceTriggerFirstPassDidDetectKeywordFrom:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)cancelCurrentRequest;
-(void)dealloc;
-(void)handleVoiceTriggerSecondPassFrom:(NSUInteger)arg0 deviceId:(id)arg1 audioProviderUUID:(id)arg2 firstPassInfo:(id)arg3 completion:(id)arg4 ;
-(void)keywordAnalyzerNDEAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)reset;
-(void)selfTriggerDetector:(id)arg0 didDetectSelfTrigger:(id)arg1 ;
-(void)setAsset:(id)arg0 ;
-(void)start;


@end


#endif