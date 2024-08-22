// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWQUICKTIMEMOVIEFILESINKNODE_H
#define BWQUICKTIMEMOVIEFILESINKNODE_H

@class NSArray, NSMutableArray, NSDictionary, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "BWFileSinkNode.h"
#import "FigCaptureMovieFileRecordingSettings.h"
#import "BWIrisMovieInfo.h"
#import "BWIrisMovieGenerator.h"
#import "BWInferenceResultRingBuffers.h"
#import "BWObjectRingBuffer.h"
#import "BWObjectRingBufferThreadSafe.h"
#import "BWVideoQualityMetrics.h"
#import "BWIrisStillImageMovieMetadataCache.h"
#import "BWVideoOrientationTimeMachine.h"
#import "BWMovingWindowStats.h"
#import "BWStats.h"
#import "BWLimitedGMErrorLogger.h"
#import "BWMovieFileOutputAnalyticsPayload.h"
#import "BWVideoStabilizationAnalyticsPayload.h"

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
    BWObjectRingBuffer *_irisStabilizedTrajectoryHomographyRingBuffer;
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
    BWVideoStabilizationAnalyticsPayload *_videoStabilizationAnalyticsPayLoad;
    BOOL _videoStabilizationAnalyticsExtracted;
    *OpaqueFigVirtualCaptureCard _virtualCaptureCard;
    NSMutableDictionary *_previousMetadataPTSValuesByInputIndex;
}


@property (nonatomic) BOOL cinematicVideoEnabled; // ivar: _cinematicVideoEnabled
@property (nonatomic) BOOL irisMovieProcessingSuspended;
@property (copy, nonatomic) NSArray *movieLevelMetadata;
@property (copy, nonatomic) NSArray *structuralDependentTrackReferenceListForMetadataInputs;
@property (copy, nonatomic) NSArray *taggedMediaCharacteristicsForInputs;
@property (copy, nonatomic) NSArray *trackReferenceListForMetadataInputs;
@property (copy, nonatomic) NSArray *trackReferenceListForVideoInputs;


+(void)initialize;
-(BOOL)irisSampleReferenceMoviesEnabled;
-(NSUInteger)lastFileSize;
-(id)clientApplicationID;
-(id)initWithNumberOfVideoInputs:(NSUInteger)arg0 numberOfAuxiliaryPictureInputs:(NSUInteger)arg1 numberOfAudioInputs:(NSUInteger)arg2 numberOfMetadataInputs:(NSUInteger)arg3 cameraInfoByPortType:(id)arg4 pipelineIndex:(NSUInteger)arg5 sinkID:(id)arg6 ;
-(id)initWithSinkID:(id)arg0 ;
-(id)irisMotionAnalysisRingBuffer;
-(id)irisStillImageMovieMetadataCache;
-(id)nodeSubType;
-(id)videoOrientationTimeMachine;
-(int)pipelineTraceID;
-(struct ? )lastFileDuration;
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
-(void)setupRingBufferForStabilizedTrajectoryHomographies:(int)arg0 ;


@end


#endif