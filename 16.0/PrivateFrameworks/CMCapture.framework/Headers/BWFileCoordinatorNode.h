// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWFILECOORDINATORNODE_H
#define BWFILECOORDINATORNODE_H

@class NSArray, NSMutableArray, NSDictionary, NSString;
@protocol BWAudioSourceRecordingReadinessDelegate, BWNodeFileCoordinatorStatusDelegate;


#import "BWNode.h"
#import "FigCaptureRecordingSettings.h"
#import "BWNodeInput.h"
#import "BWMotionDataTimeMachine.h"

@interface BWFileCoordinatorNode : BWNode {
    NSArray *_stagingQueues;
    NSMutableArray *_pendingIrisRequestMarkerBuffers;
    FigCaptureRecordingSettings *_settings;
    NSInteger _currSettingsID;
    BOOL _currSettingsPrefersNoInterruptionsByRingtonesAndAlerts;
    BOOL _currSettingsIsIris;
    BOOL _currSettingsIsIrisMovieRecording;
    NSDictionary *_videoSettings;
    float _maxFrameRate;
    int _recordingState;
    BWNodeInput *_masterInput;
    ? _inputOffset;
    ? _lastMasterPTS;
    ? _lastMasterDuration;
    ? _lastMasterEndingPTS;
    ? _masterStartingPTS;
    ? _largestStagedSupportingAudioVideoStagedPTS;
    ? _largestAudioPTS;
    ? _largestMetadataPTS;
    ? _masterStoppingPTS;
    ? _stopRecordingPTS;
    ? _stopRecordingAudioOffset;
    ? _stopRecordingObservedLastVideoPTS;
    ? _focusWaitTimeStart;
    ? _torchWaitTimeStart;
    CGFloat _focusWaitTime;
    CGFloat _torchWaitTime;
    CGFloat _maxFocusWaitTime;
    int _firstFrameFocusingMethod;
    int _firstFrameAFStatus;
    int _numberOfFocusWaitBuffersDropped;
    int _numberOfTorchWaitBuffersDropped;
    BOOL _focusWaitTimedOut;
    BOOL _sendFlushMarkerWhenStopping;
    BOOL _haveSeenAudioWhenStarting;
    BOOL _lowLatencyCanTransitionEarlyToRecording;
    BOOL _lowLatencyCanTossExtraVideoWhenStopping;
    BOOL _firstAudioHasBeenProcessed;
    int _terminationErrorCode;
    *OpaqueCMBlockBuffer _emptyMetadataSampleData;
    ? _formatDescriptionsForInputs;
    *OpaqueFigSimpleMutex _stateMutex;
    NSUInteger _numInputs;
    NSUInteger _numOutputs;
    NSUInteger _numVideoInputs;
    NSUInteger _numAudioInputs;
    NSUInteger _numMetadataInputs;
    NSUInteger _numActionOnlyOutputs;
    NSUInteger _masterInputIndex;
    NSUInteger _firstAudioInputIndex;
    NSMutableArray *_idleInputIndicesWaitingForFlush;
    BOOL _lowLatencyModeEnabled;
    BOOL _flagsLastFrameForVideoCompressor;
    BOOL _overCaptureEnabled;
    BOOL _overCaptureIsRequested;
    BOOL _overCaptureActiveSlaveStreamForcedOff;
    BOOL _attachOverCaptureActiveSlaveStreamForcedOffMarkerBuffer;
    ? _firstAudioPTSReadyForRecording;
    id<BWAudioSourceRecordingReadinessDelegate> *_audioSourceDelegate;
    id<BWNodeFileCoordinatorStatusDelegate> *_fileCoordiatorStatusDelegate;
    BWMotionDataTimeMachine *_motionDataTimeMachine;
    NSMutableArray *_videoSampleBuffersWaitingForMetadata;
    NSUInteger _cinematicLookAheadFrameCount;
    NSUInteger _pendingMotionDataSerialNumber;
    NSUInteger _largestEmittedLookAheadMotionDataSerialNumber;
    BOOL _lookAheadMotionDataPreloadHasBeenAttached;
    BOOL _receivedFinalEnqueuedIrisReferenceRequest;
    NSUInteger _droppedFramesCountDueToISP;
    NSString *_lastPortType;
}




+(void)initialize;
-(BOOL)flagsLastFrameForVideoCompressor;
-(BOOL)updateStopPTS:(struct ? )arg0 audioOffset:(struct ? )arg1 previousStopPTS:(struct ? *)arg2 previousAudioOffset:(struct ? *)arg3 ;
-(id)audioSourceDelegate;
-(id)fileCoordiatorStatusDelegate;
-(id)init;
-(id)initWithNumberOfVideoInputs:(NSUInteger)arg0 numberOfAudioInputs:(NSUInteger)arg1 numberOfMetadataInputs:(NSUInteger)arg2 numberOfActionOnlyOutputs:(NSUInteger)arg3 overCaptureEnabled:(BOOL)arg4 allowLowLatencyWhenPossible:(BOOL)arg5 motionDataTimeMachine:(id)arg6 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)cinematicLookAheadFrameCount;
-(int)startRecordingWithSettings:(id)arg0 videoSettings:(id)arg1 maxFrameRate:(float)arg2 stopAtPTS:(struct ? )arg3 ;
-(void)cancelStartRecordingWithSettings:(id)arg0 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)pauseRecording;
-(void)recordingTerminated:(NSInteger)arg0 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)resumeRecording;
-(void)setAudioSourceDelegate:(id)arg0 ;
-(void)setCinematicLookAheadFrameCount:(int)arg0 ;
-(void)setFileCoordiatorStatusDelegate:(id)arg0 ;
-(void)setFlagsLastFrameForVideoCompressor:(BOOL)arg0 ;
-(void)stopRecordingWithErrorCode:(int)arg0 ;
-(void)tryToEmitFramesWaitingForMotion;


@end


#endif