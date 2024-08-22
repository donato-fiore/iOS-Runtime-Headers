// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWAUDIOSOURCENODE_H
#define BWAUDIOSOURCENODE_H

@class NSDictionary, NSArray, NSString;
@protocol BWAudioSourceRecordingReadinessDelegate, BWZoomCompletionDelegate, OS_dispatch_queue, OS_dispatch_source;


#import "BWSourceNode.h"

@interface BWAudioSourceNode : BWSourceNode <BWAudioSourceRecordingReadinessDelegate, BWZoomCompletionDelegate>

 {
    BWNodeOutput" _outputsByMicSourcePosition;
    NSDictionary *_sourceRequirements;
    *opaqueCMSession _CMSession;
    *__CFString _CMSessionAudioMode;
    BOOL _useDecoupledIO;
    BOOL _prefersNoInterruptionsByRingtonesAndAlerts;
    NSObject<OS_dispatch_queue> *_cmSessionSetRecordingRelatedPropertyQueue;
    BOOL _doEndInterruption;
    BOOL _isAppAudioSession;
    BOOL _configuresSession;
    CGFloat _sessionRequiredSampleRate;
    ? _clientAuditToken;
    int _clientPID;
    *OpaqueCMClock _clock;
    *opaqueCMFormatDescription _auOutputFormatDescription;
    unsigned int _pullDuration;
    *OpaqueAudioComponentInstance _audioUnit;
    unsigned int _auSubType;
    *opaqueCMSimpleQueue _renderProcErrorQueue;
    *opaqueCMSimpleQueue _inactiveBuffersQueue;
    *opaqueCMSimpleQueue _activeBuffersQueue;
    NSUInteger _nextExpectedHostTime;
    ? _nextExpectedSampleTime;
    ? _ioprocTimeStampDeltaLimit;
    ? _prevPTS;
    unsigned int _prevNumFrames;
    NSObject<OS_dispatch_queue> *_generateSamplesDispatchQueue;
    BOOL _streamStarted;
    BOOL _levelMeteringEnabled;
    int _audioLevelUnits;
    ? _latencyOffset;
    NSObject<OS_dispatch_source> *_silenceTimer;
    NSInteger _auRenderCount;
    NSInteger _silenceFramesGeneratedSinceLastAURenderProc;
    TimestampedAudioBufferList _currentSilenceBuffer;
    NSObject<OS_dispatch_queue> *_preparedToRecordHandlerCallbackQueue;
    BOOL _livePhotoCaptureEnabled;
    BOOL _stereoAudioCaptureEnabled;
    BOOL _videoRecordingEnabled;
    BOOL _isMultiCamSession;
    BOOL _flipStereoAudioCaptureChannels;
    float _stereoAudioCapturePairedCameraBaseFieldOfView;
    float _stereoAudioCapturePairedCameraZoomFactor;
    NSObject<OS_dispatch_queue> *_zoomHandlerQueue;
    NSInteger _maxZoomFrequencyNanos;
    NSInteger _nextZoomTime;
    NSObject<OS_dispatch_source> *_zoomTimer;
    float _nextZoomFactor;
    os_unfair_lock_s _zoomLock;
}


@property (readonly, nonatomic) NSArray *audioLevels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didBeginInterruption; // ivar: _didBeginInterruption
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interrupted; // ivar: _streamInterrupted
@property (readonly) Class superclass;


+(id)audioSourceNodeWithAttributes:(id)arg0 sessionPreset:(id)arg1 clock:(struct OpaqueCMClock *)arg2 doConfigureAudio:(BOOL)arg3 CMSession:(struct opaqueCMSession *)arg4 doEndInterruption:(BOOL)arg5 clientAuditToken:(struct ? )arg6 clientOSVersionSupportsDecoupledIO:(BOOL)arg7 audioCaptureConnectionConfigurations:(id)arg8 isMultiCamSession:(BOOL)arg9 ;
+(void)initialize;
-(BOOL)flipStereoAudioCaptureChannels;
-(BOOL)hasNonLiveConfigurationChanges;
-(BOOL)levelMeteringEnabled;
-(BOOL)livePhotoCaptureEnabled;
-(BOOL)start:(*id)arg0 ;
-(BOOL)stereoAudioCaptureEnabled;
-(BOOL)stop:(*id)arg0 ;
-(BOOL)videoRecordingEnabled;
-(float)stereoAudioCapturePairedCameraBaseFieldOfView;
-(float)stereoAudioCapturePairedCameraZoomFactor;
-(id)nodeSubType;
-(id)outputForMicSourcePosition:(int)arg0 ;
-(struct OpaqueCMClock *)clock;
-(void)dealloc;
-(void)makeCurrentConfigurationLive;
-(void)makeOutputsLiveIfNeeded;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)prepareToStartRecordingWithOrientation:(int)arg0 recordingSettingsID:(NSInteger)arg1 prefersNoInterruptionsByRingtonesAndAlerts:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)setFlipStereoAudioCaptureChannels:(BOOL)arg0 ;
-(void)setLevelMeteringEnabled:(BOOL)arg0 ;
-(void)setLivePhotoCaptureEnabled:(BOOL)arg0 ;
-(void)setStereoAudioCaptureEnabled:(BOOL)arg0 ;
-(void)setStereoAudioCapturePairedCameraBaseFieldOfView:(float)arg0 ;
-(void)setStereoAudioCapturePairedCameraZoomFactor:(float)arg0 ;
-(void)setVideoRecordingEnabled:(BOOL)arg0 ;
-(void)unprepareForRecording;
-(void)zoomCommandHandler:(id)arg0 didApplyZoomFactor:(float)arg1 zoomFactorWithoutFudge:(float)arg2 rampComplete:(BOOL)arg3 rampCommandID:(int)arg4 ;


@end


#endif