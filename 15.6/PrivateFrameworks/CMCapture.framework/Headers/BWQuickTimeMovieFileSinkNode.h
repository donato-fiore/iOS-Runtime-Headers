// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWQUICKTIMEMOVIEFILESINKNODE_H
#define BWQUICKTIMEMOVIEFILESINKNODE_H

@class NSArray, NSMutableArray, NSDictionary, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "BWFileSinkNode.h"
#import "FigCaptureMovieFileRecordingSettings.h"
#import "BWIrisMovieInfo.h"
#import "BWIrisMovieGenerator.h"
#import "BWInferenceResultRingBuffers.h"
#import "BWObjectRingBufferThreadSafe.h"
#import "BWVideoQualityMetrics.h"
#import "BWIrisStillImageMovieMetadataCache.h"
#import "BWVideoOrientationTimeMachine.h"
#import "BWMovingWindowStats.h"
#import "BWStats.h"
#import "BWLimitedGMErrorLogger.h"
#import "BWMovieFileOutputAnalyticsPayload.h"

@interface BWQuickTimeMovieFileSinkNode : BWFileSinkNode {
    NSUInteger _currFileSize;
    NSUInteger _maxFileSize;
    NSUInteger _totalNANDReadBytesBeforeRecording;
    NSUInteger _totalNANDWriteBytesBeforeRecording;
    NSInteger _estimatedMovieSizeOverhead;
    NSUInteger _minFreeDiskSpaceLimit;
    NSUInteger _fileSizeAtPreviousCheck;
    ? _currFileDuration;
    ? _checkDiskSpaceAtThisDuration;
    ? _logStatsAtThisDuration;
    ? _maxFileDuration;
    ? _adjustedMaxFileDuration;
    ? _nextTimeToReturnFileSize;
    int _masterInputTimeScale;
    float _maxVideoFrameRate;
    NSArray *_stagingQueues;
    FigCaptureMovieFileRecordingSettings *_settings;
    char * _parentPath;
    ? _startingPTS;
    *? _smallestWrittenPTSs;
    *? _largestWrittenPTSs;
    *? _largestWrittenVideoDTSs;
    *? _secondLargestWrittenAudioVideoPTSs;
    *? _lastWrittenAudioVideoDurations;
    NSArray *_movieLevelMetadata;
    NSArray *_trackReferenceListForMetadataInputs;
    NSArray *_structuralDependentTrackReferenceListForMetadataInputs;
    NSArray *_trackReferenceListForVideoInputs;
    NSArray *_taggedMediaCharacteristicsForInputs;
    NSUInteger _numInputs;
    NSObject<OS_dispatch_queue> *_thumbnailGenerationDispatchQueue;
    *__IOSurface _thumbnailSurface;
    int _recordingState;
    *OpaqueFigFormatWriter _formatWriter;
    *OpaqueCMByteStream _byteStream;
    *int _trackIDs;
    *BOOL _expectingToSeeSamplesForInput;
    *BOOL _haveSeenSamplesForTrack;
    *BOOL _finalDurationNeedsToBeWrittenForTrack;
    BWIrisMovieInfo *_firstIrisMovieInfo;
    NSMutableArray *_pendingIrisRefMovieRequests;
    BWIrisMovieGenerator *_irisMovieGenerator;
    NSMutableArray *_flushingIrisMovieGenerators;
    NSObject<OS_dispatch_queue> *_irisMovieGenerationQueue;
    int _irisStillImageTimeTrackID;
    int _irisStillImageTimeTrackTimeScale;
    BOOL _recordingIsForFrontCamera;
    NSUInteger _masterInputIndex;
    BOOL _didBeginSession;
    BOOL _didBeginWriting;
    BOOL _needToDeMoof;
    BOOL _atLeastOneFragmentIsWritten;
    BOOL _vitalInputStreamHasBeenForcedOff;
    int _streamForcedOffErrorCode;
    int _formatWriterErrorCode;
    NSUInteger _numVideoTracks;
    BOOL _ignoreFileSizeLimit;
    BOOL _debugAudio;
    BOOL _haveDebugASBD;
    NSUInteger _numAudioTracks;
    AudioStreamBasicDescription _debugASBD;
    *AudioBufferList _debugABL;
    ? _debugDurationForFailOfDiskSpaceTest;
    *OpaqueFigSimpleMutex _propertyMutex;
    BOOL _irisSampleReferenceMoviesEnabled;
    BWInferenceResultRingBuffers *_irisMotionAnalysisRingBuffer;
    BWObjectRingBufferThreadSafe *_overCaptureQualityMetadataRingBuffer;
    BWVideoQualityMetrics *_overCaptureQualityMetrics;
    CGFloat _maxTotalZoomFactor;
    CGFloat _pointlessOverCaptureMaxZoomThreshold;
    BWIrisStillImageMovieMetadataCache *_irisStillImageMovieMetadataCache;
    ? _videoDimensions;
    BOOL _irisMovieProcessingSuspended;
    NSUInteger _totalNumberOfFramesDropped;
    NSUInteger _numberOfFramesDroppedDueToFormatWriterQueueFull;
    BOOL _reportErrorForFrameDrops;
    NSDictionary *_temporalScalabilityProperties;
    BWVideoOrientationTimeMachine *_videoOrientationTimeMachine;
    NSUInteger _pipelineIndex;
    int _pipelineTraceID;
    BWMovingWindowStats *_capturePipelineLatencyStats;
    BWStats *_irisVideoLatencyStats;
    BWMovingWindowStats *_recentIrisVideoLatencyStats;
    BWStats *_videoLatencyStats;
    NSString *_gmLoggingPreamble;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    NSString *_clientApplicationID;
    NSInteger _numVideoFramesPortTypeFront;
    NSInteger _numVideoFramesPortTypeFrontSuperWide;
    NSInteger _numVideoFramesPortTypeBack;
    NSInteger _numVideoFramesPortTypeTelephoto;
    NSInteger _numVideoFramesPortTypeSuperWide;
    BWMovieFileOutputAnalyticsPayload *_analyticsPayload;
    BWCoreAnalyticsMovieRecordingSphereAFStatistics _sphereAFStatistics;
    NSMutableDictionary *_sphereModeByPortType;
    NSMutableDictionary *_APSModeByPortType;
    BOOL _afDriverShortOccurred;
    NSInteger _accumulatedSystemPressureLevel;
    NSInteger _timeOfLastSystemPressureChange;
    int _currentSystemPressureLevel;
    NSInteger _recordingStartTime;
    NSInteger _timeToCriticalSystemPressureInMS;
    unsigned int _factorsContributingToMaxSystemPressureLevel;
    int _maxSystemPressureLevel;
    NSMutableDictionary *_vfrStatistics;
    NSMutableDictionary *_vfrFrameRateChangeReasonCount;
    int _prevReason;
    NSMutableDictionary *_cameraSwitchStatistics;
    int _videoSTFAppliedFrameCount;
    int _videoSTFTotalFrameCount;
    int _videoSTFCancelReason;
    BWCoreAnalyticsMovieRecordingVideoSTFStatistics _videoSTFStats;
    BWCoreAnalyticsMovieRecordingCinematicVideoStatistics _cinematicVideoMovieRecordingStats;
}


@property (nonatomic) BOOL cinematicVideoEnabled; // ivar: _cinematicVideoEnabled
@property (nonatomic) BOOL irisMovieProcessingSuspended;
@property (copy, nonatomic) NSArray *movieLevelMetadata;
@property (copy, nonatomic) NSArray *structuralDependentTrackReferenceListForMetadataInputs;
@property (copy, nonatomic) NSArray *taggedMediaCharacteristicsForInputs;
@property (copy, nonatomic) NSArray *trackReferenceListForMetadataInputs;
@property (copy, nonatomic) NSArray *trackReferenceListForVideoInputs;


+(void)initialize;
-(?)_findStartMarkersWithMatchedStagedSettingsensorVideoPort;
-(BOOL)_driveStateMachineWithBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg2 ;
-(BOOL)_driveStateMachineWithPauseMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 inputStagingQueue:(id)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(BOOL)_driveStateMachineWithResumeMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 inputStagingQueue:(id)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(BOOL)_driveStateMachineWithStartMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 inputStagingQueue:(id)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(BOOL)_driveStateMachineWithStopOrFlushMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 requiredAction:(struct __CFString *)arg1 forInputIndex:(NSUInteger)arg2 inputStagingQueue:(id)arg3 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg4 ;
-(BOOL)_irisIsExpected:(id)arg0 ;
-(BOOL)irisSampleReferenceMoviesEnabled;
-(NSInteger)_adjustedMinFreeDiskSpaceLimitForEstimatedMovieSizeOverhead:(NSInteger)arg0 ;
-(NSUInteger)_getCurrentFileSize:(BOOL)arg0 currentHostTime:(struct ? )arg1 ;
-(NSUInteger)lastFileSize;
-(id)_validTrackReferencesForReferenceInputIndexes:(id)arg0 ;
-(id)_validateTaggedMediaCharacteristicsForInputIndexes:(id)arg0 ;
-(id)clientApplicationID;
-(id)initWithNumberOfVideoInputs:(NSUInteger)arg0 numberOfAuxiliaryPictureInputs:(NSUInteger)arg1 numberOfAudioInputs:(NSUInteger)arg2 numberOfMetadataInputs:(NSUInteger)arg3 cameraInfoByPortType:(id)arg4 pipelineIndex:(NSUInteger)arg5 sinkID:(id)arg6 ;
-(id)initWithSinkID:(id)arg0 ;
-(id)irisMotionAnalysisRingBuffer;
-(id)irisStillImageMovieMetadataCache;
-(id)nodeSubType;
-(id)videoOrientationTimeMachine;
-(int)_adjustMaxFileDurationForMovieTimeScale:(int)arg0 ;
-(int)_checkFreeSpaceForEstimatedMovieSizeOverhead:(NSInteger)arg0 ;
-(int)_doStartRecordingAtTime:(struct ? )arg0 withSettings:(id)arg1 sensorVideoPort:(struct __CFString *)arg2 ;
-(int)_setTrackMatrixProperty:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 fileSettings:(id)arg2 metadata:(id)arg3 ;
-(int)_startUpFormatWriterAtTime:(struct ? )arg0 withSettings:(id)arg1 ;
-(int)_verifyMovieTiming:(id)arg0 ;
-(int)_writeStillImageTimeMetadataSampleForCaptureTime:(struct ? )arg0 stillImageTransformData:(id)arg1 referenceDimensions:(struct ? )arg2 toTrackWithID:(int)arg3 usingTrackTimeScale:(int)arg4 ;
-(int)pipelineTraceID;
-(struct ? )_endingPTSForTrack:(NSUInteger)arg0 endingPTS:(struct ? )arg1 writtenEndingPTS:(struct ? )arg2 validatedEndingPTS:(struct ? )arg3 isIrisMasterMovie:(BOOL)arg4 ;
-(struct ? )_finalizeAudioVideoDurationsAndFindWrittenEndingPTSFromEndingPTS:(struct ? )arg0 ;
-(struct ? )_findMarkers:(struct __CFString *)arg0 ;
-(struct ? )_findWrittenStartingPTS;
-(struct ? )_validatedEndingPTSFromEndingPTS:(struct ? )arg0 ;
-(struct ? )lastFileDuration;
-(void)_buildIrisRefMovieGeneratorAndWriteFirstIrisAsRefMovie;
-(void)_collectCoreAnalyticsData:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_collectVideoSTFAnalyticsFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_computeMovieRecordingVideoSTFStatistics;
-(void)_debugAudioUsingSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_determineWhichInputsWeExpectToSeeSamplesFor;
-(void)_doEndRecordingAtTime:(struct ? )arg0 earlyTerminationErrCode:(int)arg1 ;
-(void)_driveStateMachineWithMediaBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 inputStagingQueue:(id)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3 ;
-(void)_finishIrisMovieGeneration;
-(void)_fixVitalityScoreWithMotionAnalysis:(id)arg0 ;
-(void)_forceEarlyTerminationWithErrorCode:(int)arg0 ;
-(void)_generateThumbnailSurfaceFromPixelBuffer:(struct __CVBuffer *)arg0 physicallyMirroredHorizontallyUpstream:(BOOL)arg1 ;
-(void)_handleFormatWriterDidWriteFragmentNotification;
-(void)_handleFormatWriterErrorOccurredCallback:(id)arg0 userInfo:(id)arg1 ;
-(void)_handleIrisMovieRequest:(id)arg0 ;
-(void)_handleStreamForcedOffMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_moveOrDeleteTemporaryIrisMovie:(id)arg0 recordingSucceeded:(BOOL)arg1 ;
-(void)_preprocessingForFirstAudioBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 ;
-(void)_preprocessingForFirstAuxiliaryBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 ;
-(void)_preprocessingForFirstMetadataBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 ;
-(void)_preprocessingForFirstVideoBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 ;
-(void)_printBufferEvent:(struct opaqueCMSampleBuffer *)arg0 forNodeInputIndex:(NSUInteger)arg1 eventName:(id)arg2 ;
-(void)_processIrisRequest:(id)arg0 ;
-(void)_resetVideoSTFAnalytics;
-(void)_setRecordingState:(int)arg0 ;
-(void)_submitMovieFileCoreAnalyticsEvent;
-(void)_writeBuffer:(struct opaqueCMSampleBuffer *)arg0 forInputIndex:(NSUInteger)arg1 ;
-(void)_writeIrisRefMovieWithInfo:(id)arg0 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setClientApplicationID:(id)arg0 ;
-(void)setIrisMotionAnalysisRingBuffer:(id)arg0 ;
-(void)setIrisSampleReferenceMoviesEnabled:(BOOL)arg0 ;
-(void)setIrisStillImageMovieMetadataCache:(id)arg0 ;
-(void)setPipelineTraceID:(int)arg0 ;
-(void)setVideoOrientationTimeMachine:(id)arg0 ;
-(void)setupOverCaptureQualityMetricsForLivePhotoHistory:(int)arg0 ;


@end


#endif