// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSMARTSIRIVOLUME_H
#define CSSMARTSIRIVOLUME_H

@class NSUserDefaults, CSAsset, NSString;
@protocol CSMediaPlayingMonitorDelegate, CSAudioStreamProvidingDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSSmartSiriVolumeProcessor, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CSSmartSiriVolumeEnablePolicy.h"
#import "CSAudioStream.h"

@interface CSSmartSiriVolume : NSObject <CSMediaPlayingMonitorDelegate, CSAudioStreamProvidingDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSSmartSiriVolumeProcessor>

 {
    NSObject<OS_dispatch_queue> *_queue;
    unique_ptr<SmartSiriVolume, std::default_delete<SmartSiriVolume>> _smartSiriVolumeNoiseLevel;
    unique_ptr<SmartSiriVolume, std::default_delete<SmartSiriVolume>> _smartSiriVolumeLKFS;
    vector<float, std::allocator<float>> _floatBuffer;
    NSUserDefaults *_defaults;
    CSSmartSiriVolumeEnablePolicy *_ssvEnablePolicy;
    NSUInteger _startAnalyzeSampleCount;
    NSUInteger _samplesFed;
    NSUInteger _processedSampleCount;
    BOOL _isStartSampleCountMarked;
    BOOL _isListenPollingStarting;
    BOOL _shouldPauseSSVProcess;
    BOOL _shouldPauseLKFSProcess;
    BOOL _alarmSoundIsFiring;
    BOOL _timerSoundIsFiring;
    BOOL _mediaIsPlaying;
    CSAsset *_currentAsset;
    float _musicVolumeDB;
    float _alarmVolume;
    NSUInteger _noiseLevelChannelBitset;
    NSUInteger _LKFSChannelBitset;
    unsigned int _energyBufferSize;
    unsigned int _noiseLowerPercentile;
    unsigned int _noiseUpperPercentile;
    unsigned int _LKFSLowerPercentile;
    unsigned int _LKFSUpperPercentile;
    float _noiseTimeConstant;
    float _noiseMicSensitivityOffset;
    float _noiseMicSensitivityOffsetDeviceSimple;
    float _LKFSTimeConstant;
    float _LKFSMicSensitivityOffset;
    float _noiseTTSMappingInputRangeLow;
    float _noiseTTSMappingInputRangeHigh;
    float _noiseTTSMappingOutputRangeLow;
    float _noiseTTSMappingOutputRangeHigh;
    float _LKFSTTSMappingInputRangeLow;
    float _LKFSTTSMappingInputRangeHigh;
    float _LKFSTTSMappingOutputRangeLow;
    float _LKFSTTSMappingOutputRangeHigh;
    float _userOffsetInputRangeLow;
    float _userOffsetInputRangeHigh;
    float _userOffsetOutputRangeLow;
    float _userOffsetOutputRangeHigh;
    float _TTSVolumeLowerLimitDB;
    float _TTSVolumeUpperLimitDB;
    float _noiseWeight;
}


@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // ivar: _listenPollingTimer
@property (nonatomic) NSInteger listenPollingTimerCount; // ivar: _listenPollingTimerCount
@property (readonly) Class superclass;


-(*float)_getFloatBufferData:(id)arg0 ;
-(float)_combineResultsWithOptimalFromNoise:(float)arg0 andOptimalFromLkfs:(float)arg1 withUserOffset:(float)arg2 ;
-(float)_convertDB2Mag:(float)arg0 ;
-(float)_deviceSpecificDBToLinearVolumeMappingCSSSVDeviceSimple:(float)arg0 ;
-(float)_deviceSpecificLinearVolumeToDBMappingCSSSVDeviceSimple:(float)arg0 ;
-(float)_estimatedTTSVolume:(float)arg0 lowerLimit:(float)arg1 upperLimit:(float)arg2 TTSmappingInputRangeLow:(float)arg3 TTSmappingInputRangeHigh:(float)arg4 TTSmappingOutputRangeLow:(float)arg5 TTSmappingOutputRangeHigh:(float)arg6 ;
-(float)_getDeviceSimpleOutputLinearVolumeFordBFSValue:(float)arg0 ;
-(float)_getDeviceSimpledBFSForOutputLinearVolume:(float)arg0 ;
-(float)_getDevicedBFSForInputLinearVolume:(float)arg0 ;
-(float)_getMusicVolumeDBCSSSVDeviceDefault:(float)arg0 ;
-(float)_getMusicVolumeDBCSSSVDeviceSimple:(float)arg0 ;
-(float)_getUserOffsetFromMusicVolumeDB:(float)arg0 ;
-(float)_scaleInputWithInRangeOutRange:(float)arg0 minIn:(float)arg1 maxIn:(float)arg2 minOut:(float)arg3 maxOut:(float)arg4 ;
-(float)estimateSoundLevelbySoundType:(NSInteger)arg0 ;
-(float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg0 LKFS:(float)arg1 ;
-(id)getVolumeForTTSType:(NSUInteger)arg0 withOverrideMediaVolume:(id)arg1 WithRequestTime:(NSUInteger)arg2 ;
-(id)initWithSamplingRate:(float)arg0 asset:(id)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)CSMediaPlayingMonitor:(id)arg0 didReceiveMediaPlayingChanged:(NSInteger)arg1 ;
-(void)CSSiriEnabledMonitor:(id)arg0 didReceiveEnabled:(BOOL)arg1 ;
-(void)_pauseSSVProcessing;
-(void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg0 soundType:(NSInteger)arg1 ;
-(void)_processAudioChunk:(id)arg0 soundType:(NSInteger)arg1 ;
-(void)_reset;
-(void)_resetStartAnalyzeTime;
-(void)_resumeSSVProcessing;
-(void)_setAsset:(id)arg0 ;
-(void)_setDefaultParameters;
-(void)_setStartAnalyzeTime:(NSUInteger)arg0 ;
-(void)_startListenPolling;
-(void)_startListenPollingWithInterval:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_startListenWithCompletion:(id)arg0 ;
-(void)_stopListening;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)didDetectKeywordWithResult:(id)arg0 ;
-(void)didReceiveAlarmChanged:(NSInteger)arg0 ;
-(void)didReceiveAlarmVolumeChanged:(float)arg0 ;
-(void)didReceiveMusicVolumeChanged:(float)arg0 ;
-(void)didReceiveTimerChanged:(NSInteger)arg0 ;
-(void)fetchInitSystemVolumes;
-(void)initializeAlarmState;
-(void)initializeMediaPlayingState;
-(void)initializeTimerState;
-(void)prepareSoundLevelBufferFromSamples:(id)arg0 soundType:(NSInteger)arg1 firedVoiceTriggerEvent:(BOOL)arg2 triggerStartTimeSampleOffset:(NSUInteger)arg3 triggerEndTimeSampleOffset:(NSUInteger)arg4 ;
-(void)reset;
-(void)setAsset:(id)arg0 ;
-(void)setPermanentVolumeOffsetWithDirection:(BOOL)arg0 ;
-(void)setSmartSiriVolumeDirection:(BOOL)arg0 ;
-(void)setSmartSiriVolumePercentage:(float)arg0 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 withEventUUID:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)startSmartSiriVolume;


@end


#endif