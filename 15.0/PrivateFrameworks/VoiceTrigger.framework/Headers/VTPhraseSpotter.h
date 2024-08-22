// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTPHRASESPOTTER_H
#define VTPHRASESPOTTER_H

@class NSArray, NSString, NSDateFormatter, NSMutableArray, NSDictionary, NSData, NSDate;
@protocol VTTextDependentSpeakerRecognizerDelegate, VTAssetMonitorDelegate, VTLanguageCodeUpdateMonitorDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "VTAnalyzerNDAPI.h"
#import "VTAudioCircularBuffer.h"
#import "VTSiriNotifications.h"
#import "VTTranscriber.h"
#import "VTTextDependentSpeakerRecognizer.h"
#import "VTCorruptDetector.h"
#import "VTPhraseSpotterEnabledPolicy.h"
#import "VTAudioFileReader.h"
#import "VTBiometricMatchMonitor.h"

@interface VTPhraseSpotter : NSObject <VTTextDependentSpeakerRecognizerDelegate, VTAssetMonitorDelegate, VTLanguageCodeUpdateMonitorDelegate>

 {
    CGFloat _hardwareSampleRate;
    VTAnalyzerNDAPI *_analyzer;
    NSArray *_triggerPhrases;
    id *_readyCompletion;
    id *_readyForAnalyze;
    int _firstUnlockAfterRebootNotificationToken;
    BOOL _isMaximized;
    int _numFramesFromPreTrigger;
    CGFloat _ndapiThreshold;
    CGFloat _ndapiThresholdSecondChance;
    CGFloat _ndapiThresholdLogNearMisses;
    CGFloat _combinedThreshold;
    CGFloat _combinedThresholdSecondChance;
    CGFloat _combinedThresholdLogNearMisses;
    CGFloat _threshold;
    CGFloat _thresholdSecondChance;
    CGFloat _effectiveThreshold;
    BOOL _audioLoggingEnabled;
    CGFloat _thresholdLogNearMisses;
    NSString *_audioFileDir;
    BOOL _secondPassAudioLoggingEnabled;
    BOOL _audioCaptureRequested;
    NSString *_languageCode;
    NSString *_configPath;
    NSString *_configData;
    NSString *_configLanguageCode;
    NSString *_configVersion;
    NSString *_resourcePath;
    CGFloat _triggerThreshold;
    unsigned int _extraSamplesAtStart;
    CGFloat _secondPassTrailingTime;
    BOOL _isRunningSATEnrollment;
    BOOL _isRunningSATDetection;
    CGFloat _thresholdSAT;
    BOOL _implicitlyTrained;
    NSString *_lastImplicitlyTrainedAudioFile;
    NSUInteger _retrainNumExplicitUtt;
    NSUInteger _retrainNumImplicitUtt;
    NSString *_retrainSamplingPolicy;
    CGFloat _retrainThresholdTrigger;
    CGFloat _retrainThresholdSAT;
    VTAudioCircularBuffer *_audioBuffer;
    NSDateFormatter *_formatter;
    BOOL _doSuperVectorSecondaryTest;
    CGFloat _thresholdPreSuperVector;
    BOOL _isSuperVectorNeeded;
    unsigned int _samplecount;
    unsigned int _samplecountAtLastTriggerStart;
    unsigned int _samplecountAtLastTriggerEnd;
    unsigned int _samplecountAtRealTriggerStart;
    unsigned int _sampleCountAtFirstChance;
    unsigned int _lastEventEnd;
    int _nearMissLogPreDelayTimer;
    BOOL _nearMissLogPending;
    BOOL _firstChanceDetected;
    CGFloat _firstChanceDetectionTime;
    BOOL _isSecondChanceEffective;
    CGFloat _lastUptime;
    CGFloat _lastDowntime;
    BOOL _earlyDetected;
    CGFloat _earlyDetectTime;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSObject<OS_dispatch_queue> *_ndetectQueue;
    int _heartbeatCounter;
    int _languageCodeChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_assetChangedQueue;
    BOOL _registeredForPhraseSpotterNotification;
    BOOL _phraseSpotterEnabled;
    BOOL _registeredforVoiceTriggerEnabledNotification;
    BOOL _voiceTriggerEnabled;
    BOOL _phraseSpotterBypassed;
    BOOL _isSecondPass;
    int _secondPassResetTimer;
    BOOL _secondPassAccepted;
    CGFloat _secondPassBestScore;
    BOOL _didWakeAP;
    BOOL _secondPassTriggered;
    BOOL _secondPassStopSent;
    id *_assetChangedCallback;
    VTSiriNotifications *siriNotifications;
    NSObject<OS_dispatch_queue> *_desQueue;
    BOOL _useRecognizer;
    BOOL _isRunningRecognizer;
    BOOL _isRecognitionResultPending;
    BOOL _firstRecognitionResultReceived;
    BOOL _useFallbackThresholdUponTimeout;
    BOOL _useKeywordSpotting;
    NSString *_recognizerConfigName;
    CGFloat _recognizerThresholdOffset;
    CGFloat _recognizerWaitTime;
    CGFloat _recognizerScore;
    CGFloat _recognizerScoreScaleFactor;
    NSString *_triggerTokens;
    VTTranscriber *_transcriber;
    VTTextDependentSpeakerRecognizer *_satDetectionTdSr;
    NSObject<OS_dispatch_semaphore> *_satDetectionTdSrSemaphore;
    CGFloat _tdSpeakerRecognizerSATThreshold;
    CGFloat _lastCombinedTdSpeakerRecognizerSATScore;
    CGFloat _tdSpeakerRecognizerCombinationWeight;
    NSMutableArray *_nonceTriggerEvents;
    VTCorruptDetector *_corruptDetector;
    NSUInteger _earlyDetecFiredMachTime;
    NSUInteger _triggerStartMachTime;
    NSUInteger _triggerFireMachTime;
    BOOL _deviceHandheld;
    CGFloat _handHeldDetectedTime;
    CGFloat _firstPassScore;
    VTPhraseSpotterEnabledPolicy *_policy;
    *OpaqueAudioConverter _deinterleaver;
    NSUInteger _numChannels;
    *AudioBufferList _deinterleavedABL;
    VTAudioFileReader *_audioFileReader;
    NSUInteger _audioInjectionIndex;
    NSString *_injectedAudioFilePath;
    BOOL _externalPhraseSpotterRunning;
    NSDictionary *_lastVoiceTriggerEventInfo;
    VTBiometricMatchMonitor *_biometricMonitor;
    CGFloat _lastPHSRejectedTime;
    CGFloat _consecutivePHSRejects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSData *firstChanceAudioBuffer; // ivar: _firstChanceAudioBuffer
@property (readonly) NSDate *firstChanceTriggeredDate; // ivar: _firstChanceTriggeredDate
@property (readonly) NSDictionary *firstChanceVTEventInfo; // ivar: _firstChanceVTEventInfo
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat lastScore; // ivar: _lastScore
@property (readonly) CGFloat lastSupervecScore; // ivar: _lastSupervecScore
@property (readonly) unsigned char lastTriggerType; // ivar: _lastTriggerType
@property (readonly) NSUInteger sampleCount;
@property (readonly) NSUInteger sampleCountAtEndOfTrigger;
@property (readonly) NSUInteger sampleCountAtStartOfTrigger;
@property (readonly) NSUInteger samplerate; // ivar: _samplerate
@property (readonly) Class superclass;
@property (readonly) NSInteger triggerCount; // ivar: _triggerCount


+(id)currentSpotter;
+(void)initialize;
-(BOOL)_configureWithConfig:(id)arg0 resourcePath:(id)arg1 ;
-(BOOL)_configureWithDefaults;
-(BOOL)_getSecondChanceEffective;
-(BOOL)_isDeviceHandheld;
-(BOOL)_shouldCreateAudioBuffer;
-(BOOL)_shouldPerformRetrainingWithAnalyzerNDAPI:(id)arg0 resourcePath:(id)arg1 ;
-(CGFloat)_computeSATScore:(struct _ndresult *)arg0 ;
-(NSInteger)_getNumberOfAudioFilesInDirectory:(id)arg0 ;
-(NSInteger)isFollowedBySpeech;
-(NSUInteger)_addExtraTime:(CGFloat)arg0 to:(NSUInteger)arg1 ;
-(NSUInteger)_applyExtraTime:(CGFloat)arg0 to:(NSUInteger)arg1 ;
-(NSUInteger)_getBiometricMatchResult;
-(NSUInteger)_sampleLengthFrom:(unsigned int)arg0 To:(unsigned int)arg1 ;
-(NSUInteger)getAdjustedDeviceStartTime:(NSUInteger)arg0 ;
-(id)_analyzeEvents:(struct _ndresult *)arg0 ;
-(id)_analyzeMakeResult:(struct _ndresult *)arg0 eventKind:(unsigned char)arg1 satScore:(CGFloat)arg2 ;
-(id)_capturePathWithPrefix:(id)arg0 eventKind:(unsigned char)arg1 ;
-(id)_createVTEventInfoString:(id)arg0 ;
-(id)_desRecordFromTriggerData:(struct _ndresult *)arg0 sampleCount:(*NSUInteger)arg1 ;
-(id)_handleTriggerEvent:(struct _ndresult *)arg0 num_new_samples:(unsigned int)arg1 satScore:(CGFloat)arg2 ;
-(id)_randomSubset:(id)arg0 numSelected:(unsigned int)arg1 ;
-(id)_sampleFromSortedArray:(id)arg0 numSelected:(NSUInteger)arg1 ;
-(id)_storeTrainingAudioAndMetaInfo;
-(id)analyze:(struct AudioBuffer )arg0 ;
-(id)analyzeBufferList:(struct AudioBufferList *)arg0 ;
-(id)assetDictionary;
-(id)getAudioBuffer;
-(id)getCorealisRTModel;
-(id)getLanguageCode;
-(id)getSATDirectory;
-(id)init;
-(id)initWithConfig:(id)arg0 assetDir:(id)arg1 runMode:(NSUInteger)arg2 ;
-(id)initWithConfig:(id)arg0 resourcePath:(id)arg1 ;
-(id)initWithHardwareSampleRate:(CGFloat)arg0 ;
-(id)initWithHardwareSampleRate:(CGFloat)arg0 readyCompletion:(id)arg1 ;
-(id)initWithLanguageCodeForSATEnrollment:(id)arg0 ;
-(id)lastVoiceTriggerEventInfo;
-(void)VTAssetMonitor:(id)arg0 didReceiveNewAssetAvailable:(BOOL)arg1 ;
-(void)VTAudioRouteChangeMonitorDidChangeAudioRoute:(id)arg0 ;
-(void)VTLanguageCodeUpdateMonitor:(id)arg0 didReceiveLanguageCodeChanged:(id)arg1 ;
-(void)_analyzeResetWithOption:(unsigned char)arg0 ;
-(void)_cancelSecondChance;
-(void)_clearDeviceHandHeld;
-(void)_commonInit;
-(void)_createFirstChanceMeta:(struct _ndresult *)arg0 ;
-(void)_firstUnlockedAndSpringBoardStarted;
-(void)_handleAssetChangeForLanguageCode:(id)arg0 ;
-(void)_initDetector;
-(void)_logCorruptAudio;
-(void)_logDESRecord:(struct _ndresult *)arg0 result:(id)arg1 ;
-(void)_logDESRecord:(struct _ndresult *)arg0 result:(id)arg1 isActualTrigger:(BOOL)arg2 ;
-(void)_logDESTriggerRecord:(struct _ndresult *)arg0 result:(id)arg1 ;
-(void)_logMetaData:(id)arg0 ;
-(void)_logPHSDESRecord:(struct _ndsupervec *)arg0 ;
-(void)_logPrepareProperty:(id)arg0 ;
-(void)_notifyAssetChangedCallback;
-(void)_performReadyCompletion;
-(void)_phraseSpotterEnabledDidChange;
-(void)_resetCounters;
-(void)_resetVoiceTriggerDueToRTSTrigger;
-(void)_safeConfigureWithAnalyzer:(id)arg0 path:(id)arg1 data:(id)arg2 resourcePath:(id)arg3 ;
-(void)_safeReconfig;
-(void)_setDeviceHandHeld;
-(void)_setSecondChance;
-(void)_storeFirstChanceAudio;
-(void)_voiceTriggerEnabledDidChange;
-(void)clearTriggerCount;
-(void)dealloc;
-(void)didReceiveSiriSessionCancellation:(id)arg0 ;
-(void)didReceiveSleepGesture;
-(void)didReceiveWakeGesture;
-(void)looseTriggerThreshold;
-(void)notifyAssetChangeWithCallback:(id)arg0 ;
-(void)prepareWithProperty:(id)arg0 readyCompletion:(id)arg1 ;
-(void)requestFoceTrigger;
-(void)requestSecondChance;
-(void)setBypass:(BOOL)arg0 ;
-(void)setStartSampleHostTime:(NSUInteger)arg0 ;
-(void)startAudioCapture;
-(void)stopAudioCapture;
-(void)textDependentSpeakerRecognizer:(id)arg0 failedWithError:(id)arg1 ;
-(void)textDependentSpeakerRecognizer:(id)arg0 hasSatScore:(float)arg1 ;


@end


#endif