// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWIRISSTAGINGNODE_H
#define BWIRISSTAGINGNODE_H

@class NSURL, NSMutableArray, NSDictionary, NSString;
@protocol BWIrisStagingNodeIrisRequestDelegate, OS_dispatch_group;


#import "BWNode.h"
#import "FigIrisAutoTrimmer.h"
#import "BWMotionDataPreserver.h"
#import "BWIrisSequenceAdjuster.h"
#import "BWMotionDataTimeMachine.h"
#import "BWIntermediateJPEGCompressor.h"
#import "BWStats.h"
#import "BWLimitedGMErrorLogger.h"
#import "BWSubjectRelightingCalculator.h"
#import "BWSubjectRelightingCalculatorResult.h"

@interface BWIrisStagingNode : BWNode {
    ? _bufferingTime;
    ? _targetFrameDuration;
    ? _beginIrisMovieCaptureTime;
    ? _endIrisMovieCaptureTime;
    BOOL _compressSynchronizedSlaveAttachedMedia;
    ? _frameGovernorNextFrameThreshold;
    ? _frameGovernorReferenceTime;
    ? _readyToEmitPTS;
    ? _lastProcessedVideoPTS;
    ? _masterMovieStartPTS;
    NSURL *_temporaryMovieDirectoryURL;
    NSURL *_masterMovieURL;
    NSURL *_spatialOverCaptureMasterMovieURL;
    NSMutableArray *_stagingQueues;
    NSMutableArray *_lastEmittedBuffers;
    BOOL _valveOpen;
    BOOL _finishingAllEnqueuedRequests;
    BOOL _valveDraining;
    BOOL _emittedFirstAudio;
    BOOL _valveOpenForMomentCaptureMovieRecording;
    ? _valveDiscontinuitySearchLimit;
    NSInteger _valveOpenerSettingsID;
    NSMutableArray *_irisRequestsInFlight;
    NSMutableArray *_irisRequestsSoonToBeEmitted;
    int _emittedIrisRequestCount;
    *OpaqueFigSimpleMutex _stateMutex;
    *? _firstEmittedPTSArray;
    *OpaqueCMClock _masterClock;
    int _trimMethod;
    BOOL _vitalityScoringEnabled;
    ? _vitalityScoringSmartCameraPipelineVersion;
    FigIrisAutoTrimmer *_trimmer;
    ? _firstTrimStartPTS;
    BOOL _trimLivePhotoMovieAtWideAndSuperWideAutoSwitching;
    NSUInteger _inferencesInputIndex;
    BWMotionDataPreserver *_motionDataPreserver;
    BWIrisSequenceAdjuster *_sequenceAdjusterBackingStore;
    BWIrisSequenceAdjuster *_sequenceAdjuster;
    BWMotionDataTimeMachine *_motionDataTimeMachine;
    int _visMotionMetadataPreloadingMode;
    int _numEODMessagesReceived;
    id<BWIrisStagingNodeIrisRequestDelegate> *_delegate;
    NSUInteger _compressedBufferPoolAllocationTimeoutMS;
    float _intermediateJPEGCompressionQuality;
    float _intermediateJPEGCompressionRate;
    int _intermediateJPEGDownstreamRetainedBufferCount;
    int _intermediateJPEGSurfaceLocalRetainedBufferCount;
    int _additionalCompressedBufferCount;
    BWIntermediateJPEGCompressor *_intermediateJPEGCompressor;
    BWIntermediateJPEGCompressor *_synchronizedSlaveJPEGCompressor;
    BOOL _doingJPEGCompression;
    NSDictionary *_cameraInfoByPortType;
    *NSUInteger _emissionMap;
    BOOL _haveSeenFirstAudioSampleBuffer;
    BOOL _haveSeenFirstVideoSampleBuffer;
    BOOL _readyToReceiveRequests;
    NSObject<OS_dispatch_group> *_readyToReceiveRequestsGroup;
    float _videoStabilizationOverscanOverride;
    BOOL _captureDeviceHasOverCaptureEnabled;
    float _spatialOverCapturePercentageToApply;
    NSString *_recommendedMasterPortType;
    int _lastRecommendedMasterSelectionReason;
    ? _lastReceivedVideoTime;
    BWStats *_overallVideoFrameReceptionStats;
    BWStats *_valveActiveVideoFrameReceptionStats;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    BOOL _subjectRelightingEnabled;
    BWSubjectRelightingCalculator *_subjectRelightingCalculator;
    BWSubjectRelightingCalculatorResult *_subjectRelightingResult;
}


@property ? beginIrisMovieCaptureTime;
@property ? endIrisMovieCaptureTime;
@property (readonly) BWMotionDataTimeMachine *motionDataTimeMachine;
@property (readonly) NSURL *temporaryMovieDirectoryURL;


+(void)initialize;
-(BOOL)_fillInRefMovieStartAndTrimTimesForStillImageTimesBeforeTime:(struct ? )arg0 ;
-(BOOL)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg0 ;
-(BOOL)_haveEnoughVideoStagedToStartFirstIrisRecording:(id)arg0 currentTime:(struct ? )arg1 ;
-(BOOL)_momentCaptureMovieRecordingInProgress;
-(BOOL)_spatialOverCaptureRecordingInProgress;
-(BOOL)valveIsOpen;
-(BOOL)waitUntilReadyToReceiveRequestsWithTimeout:(float)arg0 ;
-(NSUInteger)_emittingInputsCount;
-(NSUInteger)_indexOfBufferBeforeOrEqualToHostPTS:(struct ? )arg0 inputIndex:(NSUInteger)arg1 tolerance:(struct ? )arg2 ;
-(NSUInteger)_indexOfBufferBeforeOrEqualToPTS:(struct ? )arg0 inputIndex:(NSUInteger)arg1 applyFrameDropsMitigation:(BOOL)arg2 ;
-(float)_appliedZoomFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)_temporaryURLForIrisWithSettingsID:(NSInteger)arg0 isOriginalRecording:(BOOL)arg1 ;
-(id)initWithNumberOfVideoInputs:(NSUInteger)arg0 numberOfAudioInputs:(NSUInteger)arg1 numberOfMetadataInputs:(NSUInteger)arg2 autoTrimMethod:(int)arg3 vitalityScoringEnabled:(BOOL)arg4 captureDeviceHasOverCaptureEnabled:(BOOL)arg5 overCaptureEnabled:(BOOL)arg6 depthEnabled:(BOOL)arg7 videoStabilizationOverscanOverride:(float)arg8 sequenceAdjusterEnabled:(BOOL)arg9 visMotionMetadataPreloadingMode:(int)arg10 frameReconstructionEnabled:(BOOL)arg11 subjectRelightingEnabled:(BOOL)arg12 intermediateJPEGCompressionQuality:(float)arg13 intermediateJPEGCompressionRate:(float)arg14 maxLossyCompressionLevel:(int)arg15 temporaryMovieDirectoryURL:(id)arg16 cameraInfoByPortType:(id)arg17 irisRequestDelegate:(id)arg18 ;
-(int)_emissionStatusForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)_emitBuffersThroughPTS:(struct ? )arg0 forInputIndex:(NSUInteger)arg1 inOutBufferIndex:(*NSUInteger)arg2 bufferCount:(NSUInteger)arg3 ;
-(int)enqueueIrisRequest:(id)arg0 ;
-(int)intermediateJPEGDownstreamRetainedBufferCount;
-(int)openValveWithIrisRequest:(id)arg0 ;
-(struct ? )_adjustedStartTimeForTrimmedStartTime:(struct ? )arg0 ensuringAtLeast3FramesBeforeStillTime:(struct ? )arg1 ensuringFrameIsAfterTrimmedStartTime:(BOOL)arg2 butNotEarlierThanOriginalStartTime:(struct ? )arg3 ;
-(struct ? )_earliestAllowedStillHostPTS;
-(struct ? )_hostPTSForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(struct ? )_maxPTSForIrisRequest:(id)arg0 ;
-(struct ? )_mostRecentCuttingBufferPTSBeforePTS:(struct ? )arg0 ;
-(struct ? )bufferingTime;
-(struct ? )movieStopPTSForIrisRequest:(id)arg0 ;
-(struct ? )targetFrameDuration;
-(struct ? )vitalityScoringSmartCameraPipelineVersion;
-(struct OpaqueCMClock *)masterClock;
-(void)_emitBuffersThroughPTS:(struct ? )arg0 ;
-(void)_emitIrisMovieRequestWithInfo:(id)arg0 ;
-(void)_emitIrisRequest:(id)arg0 withEndTime:(struct ? )arg1 ;
-(void)_emitIrisRequestsOlderThanTime:(struct ? )arg0 withEndTime:(struct ? )arg1 ;
-(void)_emitSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 ;
-(void)_enqueueIrisRequest:(id)arg0 ;
-(void)_feedTrimmerWithInferencesSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_feedTrimmerWithVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_findAndMarkCuttingBufferForVideoSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_informDelegateOfSoonToBeEmittedIrisRequestsForTime:(struct ? )arg0 ;
-(void)_prepareToEmitFramesFromStartTime:(struct ? )arg0 throughEndTime:(struct ? )arg1 ;
-(void)_processQueuedVideoFrames;
-(void)_serviceIrisRequestsForCurrentTime:(struct ? )arg0 emitBuffers:(BOOL)arg1 ensureStillImageTimesAreStaged:(BOOL)arg2 ;
-(void)_setupDepthMediaConfigurationForInput:(id)arg0 attachedMediaKey:(id)arg1 ;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg0 attachedMediaKey:(id)arg1 ;
-(void)_tagStillImageVISKeyFrames;
-(void)_trimQueueForInputIndex:(NSUInteger)arg0 ;
-(void)_updateRetainedBufferCount;
-(void)closeValve;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)prepareToFinishAllEnqueuedIrisRequestsWithEndTime:(struct ? )arg0 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setBufferingTime:(struct ? )arg0 ;
-(void)setIntermediateJPEGDownstreamRetainedBufferCount:(int)arg0 ;
-(void)setMasterClock:(struct OpaqueCMClock *)arg0 ;
-(void)setMomentCaptureMovieRecordingMasterEndTime:(struct ? )arg0 forRequestWithSettingsID:(NSInteger)arg1 ;
-(void)setStagingQueues:(id)arg0 ;
-(void)setTargetFrameDuration:(struct ? )arg0 ;
-(void)setVitalityScoringSmartCameraPipelineVersion:(struct ? )arg0 ;


@end


#endif