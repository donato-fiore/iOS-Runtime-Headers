// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWVISNODE_H
#define BWVISNODE_H

@class NSArray, NSDictionary, NSNumber, NSString, NSMutableArray, NSData;
@protocol BWVISProcessorDelegate, BWNodeBackPressureSource, BWVISProcessorController, OS_dispatch_semaphore;


#import "BWNode.h"
#import "BWVISProcessorControllerConfiguration.h"
#import "BWFigCaptureISPProcessingSession.h"
#import "BWVideoFormatRequirements.h"
#import "BWIrisStillImageMovieMetadataCache.h"
#import "BWLimitedGMErrorLogger.h"
#import "BWStats.h"

@interface BWVISNode : BWNode <BWVISProcessorDelegate, BWNodeBackPressureSource>

 {
    int _stabilizationMethod;
    int _stabilizationType;
    BWVISProcessorControllerConfiguration *_processorControllerConfiguration;
    id<BWVISProcessorController> *_processorController;
    int _processorType;
    BOOL _flushingProcessor;
    BWFigCaptureISPProcessingSession *_ispProcessingSession;
    *opaqueCMFormatDescription _outputFormatDescription;
    NSArray *_supportedInputPixelFormats;
    NSArray *_supportedOutputPixelFormats;
    BOOL _logStripProcessingTiming;
    int _maxLossyCompressionLevel;
    ? _outputDimensions;
    int _gpuPriority;
    BOOL _sphereVideoEnabled;
    BOOL _onlyGeneratingTransforms;
    BOOL _stabilizeMetadata;
    BOOL _flipHorizontalExcludingIris;
    BOOL _liveFlipHorizontal;
    int _pipelineTraceID;
    BOOL _videoSTFEnabled;
    BOOL _fillExtendedRowsOfOutputBuffer;
    BOOL _usingExtendedCVISLivePhotoStabilization;
    BOOL _stabilizeForLongPressVideo;
    int _visExecutionMode;
    NSDictionary *_offlineCameraInfoByPortType;
    float _videoStabilizationOverscanOverride;
    BOOL _generatesDroppedSampleMarkerBuffers;
    BWVideoFormatRequirements *_visOutputFormatRequirements;
    NSObject<OS_dispatch_semaphore> *_emitSampleBufferSemaphore;
    int _numberOfTimesWaited;
    int _numberOfBuffersEmitted;
    BWIrisStillImageMovieMetadataCache *_irisStillImageMovieMetadataCache;
    NSNumber *_cachedLivePhotoKeyFrame;
    NSString *_cachedStillImageKeyFrameSettingsID;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    BWVISMotionTensors _frameMotionTensorsRingBuffer;
    unsigned int _frameMotionTensorsRingBufferWriteIndex;
    int _outputColorSpaceProperties;
    NSMutableArray *_sbufsBeingProcessed;
    os_unfair_lock_s _sbufsBeingProcessedLock;
    BWStats *_ioSurfaceCompressionRatioStats;
    int _pixelBufferCompressionType;
    NSUInteger _totalCompressedDataSize;
    NSUInteger _totalUncompressedDataSize;
    ? _lastEmittedPTS;
    BOOL _frameRateConversionEnabled;
    BOOL _stabilizeDepthAttachments;
    ? _outputDepthDimensions;
    BOOL _personSegmentationRenderingEnabled;
    NSData *_foregroundColorCube;
    NSData *_backgroundColorCube;
}


@property (readonly) int cinematicLookAheadFrameCount; // ivar: _cinematicLookAheadFrameCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)flipHorizontalExcludingIris;
-(BOOL)frameRateConversionEnabled;
-(BOOL)generatesDroppedSampleMarkerBuffers;
-(BOOL)gpuPriority;
-(BOOL)personSegmentationRenderingEnabled;
-(BOOL)sphereVideoEnabled;
-(BOOL)stabilizeDepthAttachments;
-(BOOL)videoSTFEnabled;
-(id)_cinematographyFrameForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithSensorIDDict:(id)arg0 stabilizationMethod:(int)arg1 stabilizationType:(int)arg2 ispProcessingSession:(id)arg3 maxSupportedFrameRate:(float)arg4 activeMaxFrameRate:(float)arg5 gpuPriority:(int)arg6 motionAttachmentsSource:(int)arg7 fillExtendedRowsOfOutputBuffer:(BOOL)arg8 overCaptureEnabled:(BOOL)arg9 videoStabilizationOverscanOverride:(float)arg10 motionMetadataPreloadingEnabled:(BOOL)arg11 visExecutionMode:(int)arg12 livePhotoCleanOutputRect:(struct CGRect )arg13 cameraInfoByPortType:(id)arg14 cvisExtendedLookAheadDuration:(float)arg15 distortionCompensationEnabledPortTypes:(id)arg16 minDistanceForBravoParallaxShift:(float)arg17 ;
-(id)irisStillImageMovieMetadataCache;
-(id)nodeSubType;
-(id)nodeType;
-(int)_asynchronouslyStripProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 withStabilizationParameters:(id)arg1 ;
-(int)_attachHarvestedStabilizationMetadataToCinematographyFrame:(id)arg0 ;
-(int)_findBestMotionTensorsInRingBufferWithKey:(id)arg0 pts:(struct ? )arg1 ;
-(int)_harvestMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)_setupVISProcessorController;
-(int)_stabilizeCinematographyMetadataInCinematographyFrame:(id)arg0 ;
-(int)_stabilizeMetadataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)_tranformRectanglesInMetadata:(id)arg0 pts:(struct ? )arg1 ;
-(int)maxLossyCompressionLevel;
-(int)outputColorSpaceProperties;
-(int)pipelineTraceID;
-(struct ? )_droppedSamplePTSFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(struct ? )outputDepthDimensions;
-(struct ? )outputDimensions;
-(struct __CVBuffer *)_newOutputPixelBuffer;
-(void)_addMotionTensorsToRingBuffer:(id)arg0 pts:(struct ? )arg1 ;
-(void)_addVISDigitalZoomToMetadata:(struct __CFDictionary *)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_didStripProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_ensureSemaphoreIsBalanced;
-(void)_flushBuffers;
-(void)_handleIrisKeyFrameCachingForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_logAndEmitDropsForSampleBuffersStuckInISPProcessingSession;
-(void)_prepareISPProcessingSession;
-(void)_reportIOSurfaceCompressionCoreAnalyticsData;
-(void)_tallyAndEmitDroppedSample:(id)arg0 ;
-(void)_tallyAndEmitSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_tallyCompressedIOSurfaceStatsForSBuf:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_updateInputRequirements;
-(void)_updateOutputRequirements;
-(void)_updateSupportedPixelFormats;
-(void)_willStripProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer *)arg0 withStatus:(int)arg1 ;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setFlipHorizontalExcludingIris:(BOOL)arg0 ;
-(void)setFrameRateConversionEnabled:(BOOL)arg0 ;
-(void)setGeneratesDroppedSampleMarkerBuffers:(BOOL)arg0 ;
-(void)setGpuPriority:(int)arg0 ;
-(void)setIrisStillImageMovieMetadataCache:(id)arg0 ;
-(void)setMaxLossyCompressionLevel:(int)arg0 ;
-(void)setOutputColorSpaceProperties:(int)arg0 ;
-(void)setOutputDepthDimensions:(struct ? )arg0 ;
-(void)setOutputDimensions:(struct ? )arg0 ;
-(void)setPersonSegmentationRenderingEnabled:(BOOL)arg0 ;
-(void)setPipelineTraceID:(int)arg0 ;
-(void)setSphereVideoEnabled:(BOOL)arg0 ;
-(void)setStabilizeDepthAttachments:(BOOL)arg0 ;
-(void)setVideoSTFEnabled:(BOOL)arg0 ;


@end


#endif