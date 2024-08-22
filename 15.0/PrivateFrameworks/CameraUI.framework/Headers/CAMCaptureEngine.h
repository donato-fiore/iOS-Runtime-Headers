// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCAPTUREENGINE_H
#define CAMCAPTUREENGINE_H

@class AVCaptureDevice, AVCaptureDeviceInput, AVCapturePhotoOutput, AVCaptureMetadataOutput, AVCaptureVideoDataOutput, AVCaptureVideoThumbnailOutput, AVCaptureSession, NSMutableSet, NSHashTable, CIContext, AVSpatialOverCaptureVideoPreviewLayer, NSURL, NSMutableDictionary, NSMutableArray, AVCaptureVideoPreviewLayer, NSString;
@protocol CAMPanoramaProcessorDelegate, AVCaptureVideoThumbnailContentsDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "CAMCaptureMovieFileOutput.h"
#import "CAMPanoramaOutput.h"
#import "CAMMemoizationCache.h"
#import "CAMPanoramaProcessor.h"
#import "CAMPowerController.h"

@interface CAMCaptureEngine : NSObject <CAMPanoramaProcessorDelegate, AVCaptureVideoThumbnailContentsDelegate>

 {
    AVCaptureDevice *_audioCameraDevice;
    AVCaptureDeviceInput *_audioCaptureDeviceInput;
    AVCapturePhotoOutput *_stillImageOutput;
    CAMCaptureMovieFileOutput *_movieFileOutput;
    CAMPanoramaOutput *_panoramaVideoDataOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureVideoDataOutput *_effectsPreviewVideoDataOutput;
    AVCaptureVideoThumbnailOutput *_videoThumbnailOutput;
}


@property (readonly, nonatomic) CAMMemoizationCache *_captureEngineDeviceCache; // ivar: __captureEngineDeviceCache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureResultsQueue; // ivar: __captureResultsQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureServicesQueue; // ivar: __captureServicesQueue
@property (readonly, nonatomic) AVCaptureSession *_captureSession; // ivar: __captureSession
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureSessionQueue; // ivar: __captureSessionQueue
@property (readonly, nonatomic) NSMutableSet *_didEmitCaptureIntervalStartedSignpostsForUniqueID; // ivar: __didEmitCaptureIntervalStartedSignpostsForUniqueID
@property (readonly, nonatomic) NSHashTable *_effectsPreviewSampleBufferDelegates; // ivar: __effectsPreviewSampleBufferDelegates
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_effectsPreviewSampleBufferQueue; // ivar: __effectsPreviewSampleBufferQueue
@property (readonly, nonatomic) CIContext *_effectsPreviewSurfaceFilteringContext; // ivar: __effectsPreviewSurfaceFilteringContext
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_effectsPreviewSurfaceFilteringQueue; // ivar: __effectsPreviewSurfaceFilteringQueue
@property (readonly, nonatomic) NSInteger _engineOptions; // ivar: __engineOptions
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_metadataObjectsQueue; // ivar: __metadataObjectsQueue
@property (nonatomic, setter=_setNumberOfRecoveryAttempts:) NSUInteger _numberOfRecoveryAttempts; // ivar: __numberOfRecoveryAttempts
@property (readonly, nonatomic) AVSpatialOverCaptureVideoPreviewLayer *_overCaptureVideoPreviewLayer; // ivar: __overCaptureVideoPreviewLayer
@property (nonatomic, setter=_setPanoramaAssertionIdentifier:) unsigned int _panoramaAssertionIdentifier; // ivar: __panoramaAssertionIdentifier
@property (retain, nonatomic, setter=_setPanoramaFirstImageQueueUpdateSemaphore:) NSObject<OS_dispatch_semaphore> *_panoramaFirstImageQueueUpdateSemaphore; // ivar: __panoramaFirstImageQueueUpdateSemaphore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaFirstImageQueueUpdateSemaphoreQueue; // ivar: __panoramaFirstImageQueueUpdateSemaphoreQueue
@property (nonatomic, setter=_setPanoramaImageQueue:) *_CAImageQueue _panoramaImageQueue; // ivar: __panoramaImageQueue
@property (retain, nonatomic, setter=_setPanoramaProcessor:) CAMPanoramaProcessor *_panoramaProcessor; // ivar: __panoramaProcessor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaSampleBufferQueue; // ivar: __panoramaSampleBufferQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaSubgraphQueue; // ivar: __panoramaSubgraphQueue
@property (nonatomic, getter=_isPerformingRecovery, setter=_setPerformingRecovery:) BOOL _performingRecovery; // ivar: __performingRecovery
@property (readonly, nonatomic) CAMPowerController *_powerController; // ivar: __powerController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_recoveryMutexQueue; // ivar: __recoveryMutexQueue
@property (retain, nonatomic, setter=_setResultsQueueLastCompletedVideoURL:) NSURL *_resultsQueueLastCompletedVideoURL; // ivar: __resultsQueueLastCompletedVideoURL
@property (nonatomic, setter=_setResultsQueueLastCompletedVideoZoomFactor:) CGFloat _resultsQueueLastCompletedVideoZoomFactor; // ivar: __resultsQueueLastCompletedVideoZoomFactor
@property (readonly, nonatomic) NSMutableDictionary *_resultsQueueRegisteredStillImageRequests; // ivar: __resultsQueueRegisteredStillImageRequests
@property (readonly, nonatomic) NSMutableSet *_resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue; // ivar: __resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue
@property (readonly, nonatomic) NSMutableDictionary *_resultsQueueRequestsBeingRecorded; // ivar: __resultsQueueRequestsBeingRecorded
@property (readonly, nonatomic) NSMutableArray *_servicesQueueCaptureServices; // ivar: __servicesQueueCaptureServices
@property (readonly, nonatomic) NSMutableDictionary *_sessionQueueCachedPhotoInitiationSettings; // ivar: __sessionQueueCachedPhotoInitiationSettings
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_signpostMutexQueue; // ivar: __signpostMutexQueue
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *_videoPreviewLayer; // ivar: __videoPreviewLayer
@property (readonly, nonatomic) NSHashTable *_videoThumbnailContentsDelegates; // ivar: __videoThumbnailContentsDelegates
@property (retain, nonatomic) AVCaptureDevice *currentCameraDevice; // ivar: _currentCameraDevice
@property (retain, nonatomic) AVCapturePhotoOutput *currentStillImageOutput; // ivar: _currentStillImageOutput
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInterrupted, setter=_setInterrupted:) BOOL interrupted; // ivar: _interrupted
@property (nonatomic, getter=areManagedDevicesLockedForConfiguration) BOOL managedDevicesLockedForConfiguration; // ivar: _managedDevicesLockedForConfiguration
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;


+(id)_cacheKeyForDeviceType:(id)arg0 position:(NSInteger)arg1 ;
+(void)preheatCaptureResources;
-(BOOL)_isSessionModificationRequiredByCommand:(id)arg0 logReason:(*id)arg1 minimumExecutionTime:(*CGFloat)arg2 ;
-(BOOL)_lockAllEngineManagedDevices;
-(BOOL)_lockManagedCapturedDevice:(id)arg0 ;
-(BOOL)_shouldStartSessionOnConfigurationChanges;
-(BOOL)_updatePanoramaSubgraphForEnteringBackground:(BOOL)arg0 ;
-(CGFloat)_delayForRecoveryAttempt:(NSUInteger)arg0 ;
-(NSInteger)_notificationForError:(struct __CFString *)arg0 ;
-(id)_accumulatedUserInfoFromCommand:(id)arg0 ;
-(id)_captureEngineDeviceForDeviceType:(id)arg0 position:(NSInteger)arg1 ;
-(id)_coordinationInfoForCTMVideoRequest:(id)arg0 videoOutputURL:(id)arg1 resolvedMomentCaptureMovieSettings:(id)arg2 ;
-(id)_coordinationInfoForRequest:(id)arg0 photo:(id)arg1 ;
-(id)_coordinationInfoForRequest:(id)arg0 resolvedSettings:(id)arg1 videoComplementURL:(id)arg2 isFiltered:(BOOL)arg3 ;
-(id)_expectedResultSpecifiersForResolvedMomentCaptureMovieSettings:(id)arg0 ;
-(id)_expectedResultSpecifiersForResolvedPhotoSettings:(id)arg0 ;
-(id)_photoOutputFromSession:(id)arg0 ;
-(id)_previewFiltersForFilterSet:(struct ? )arg0 ;
-(id)_validateVideoAtURL:(id)arg0 withCaptureID:(NSInteger)arg1 withCaptureError:(id)arg2 isVideoComplement:(BOOL)arg3 stillImageDisplayTime:(struct ? )arg4 reportedDuration:(struct ? )arg5 outActualDuration:(struct ? *)arg6 outVideoRecordingStoppedReason:(*NSInteger)arg7 ;
-(id)_videoDeviceInputFromSession:(id)arg0 ;
-(id)audioCaptureDevice;
-(id)audioCaptureDeviceInput;
-(id)backCameraDevice;
-(id)backDualCameraDevice;
-(id)backSuperWideCameraDevice;
-(id)backTelephotoCameraDevice;
-(id)backTripleCameraDevice;
-(id)backWideDualCameraDevice;
-(id)cachedMomentCaptureSettingsForIdentifier:(id)arg0 ;
-(id)effectsPreviewVideoDataOutput;
-(id)frontCameraDevice;
-(id)frontPearlCameraDevice;
-(id)frontSuperWideCameraDevice;
-(id)initWithPowerController:(id)arg0 options:(NSInteger)arg1 ;
-(id)metadataOutput;
-(id)movieFileOutput;
-(id)overCaptureVideoPreviewLayer;
-(id)panoramaVideoDataOutput;
-(id)prewarmedAudioDeviceInput:(id)arg0 device:(id)arg1 ;
-(id)prewarmedCaptureSession;
-(id)prewarmedVideoDeviceInput:(id)arg0 position:(NSInteger)arg1 device:(id)arg2 ;
-(id)stillImageOutput;
-(id)videoThumbnailOutput;
-(struct ? )_previewFilterSetForRequest:(id)arg0 photo:(id)arg1 ;
-(struct ? )_previewFilterSetForRequest:(id)arg0 previewSize:(struct CGSize )arg1 ;
-(struct __CVBuffer *)_createOutputPixelBufferWithSize:(struct CGSize )arg0 matchingInputPixelBuffer:(struct __CVBuffer *)arg1 ;
-(struct __CVBuffer *)_newFilteredPixelBufferFromPixelBuffer:(struct __CVBuffer *)arg0 metadata:(id)arg1 filters:(id)arg2 ;
-(void)_beginSessionConfigurationIfRequiredByCommand:(id)arg0 withContext:(id)arg1 logReason:(*id)arg2 minimumExecutionTime:(*CGFloat)arg3 ;
-(void)_cancelDelayedSessionNonstartRecovery;
-(void)_captureOutput:(id)arg0 didFinishRecordingToOutputFileAtURL:(id)arg1 fromConnections:(id)arg2 forVideoCaptureRequest:(id)arg3 videoZoomFactor:(CGFloat)arg4 error:(id)arg5 ;
-(void)_checkCallbacksForUniqueID:(NSInteger)arg0 afterDelay:(CGFloat)arg1 startTime:(CGFloat)arg2 ;
-(void)_commitSessionConfigurationIfNecessaryWithLogReason:(id)arg0 ;
-(void)_didFinishStillImageCaptureForUniqueID:(NSInteger)arg0 error:(id)arg1 ;
-(void)_enumerateCaptureServicesUsingBlock:(id)arg0 ;
// -(void)_enumerateCaptureServicesUsingBlock:(id)arg0 completion:(unk)arg1  ;
-(void)_executeCommand:(id)arg0 withContext:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg0 ;
-(void)_handleApplicationWillEnterForeground:(id)arg0 ;
-(void)_handleCaptureOutputDidFinishCapturingPhoto:(id)arg0 deferredPhotoProxy:(id)arg1 error:(id)arg2 ;
-(void)_handleFailedSessionRecoveryAttemptAfterDelay:(BOOL)arg0 ;
-(void)_handleSessionDidStartRunning:(id)arg0 ;
-(void)_handleSessionDidStopRunning:(id)arg0 ;
-(void)_handleSessionInterruption:(id)arg0 ;
-(void)_handleSessionInterruptionEnded:(id)arg0 ;
-(void)_handleSessionRuntimeError:(id)arg0 ;
-(void)_notifyServicesOfPanoramaConfigurationChangeWithImageQueue:(struct _CAImageQueue *)arg0 direction:(NSInteger)arg1 ;
-(void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessaryInterrupted:(BOOL)arg0 ;
-(void)_performSessionNonstartRecoveryIfNeeded;
-(void)_performSessionRuntimeRecovery:(id)arg0 ;
-(void)_recoverFromSessionRuntimeError;
-(void)_resetPerformingRecoveryState;
-(void)_resultsQueue_logReceivedCallbacksForID:(NSInteger)arg0 withIntroString:(id)arg1 ;
-(void)_resultsQueue_performPostprocessingForPreviewBuffer:(struct __CVBuffer *)arg0 metadata:(id)arg1 filters:(struct ? )arg2 stillImageCaptureRequestKey:(id)arg3 completionHandler:(id)arg4 ;
-(void)_scheduleDelayedRecoveryCheckIfNecessary;
-(void)_scheduleDelayedSessionNonstartRecovery;
-(void)_sessionQueuePanoramaSetup;
-(void)_sessionQueuePanoramaTeardown;
-(void)_sessionQueue_startWithRetryCount:(NSUInteger)arg0 retryInterval:(CGFloat)arg1 logReason:(id)arg2 completion:(id)arg3 ;
-(void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
-(void)_subgraphQueueCreatePanoramaProcessorIfNecessaryWithEncodingBehavior:(NSInteger)arg0 ;
-(void)_subgraphQueueHandlePanoramaErrorNotification:(struct __CFString *)arg0 ;
-(void)_subgraphQueueHandlePanoramaStatusNotification:(struct __CFString *)arg0 ;
-(void)_subgraphQueueHandlePanoramaWarningNotification:(struct __CFString *)arg0 ;
-(void)_unlockAllEngineManagedDevices;
-(void)_unlockManagedCaptureDevice:(id)arg0 ;
-(void)_updateContext:(id)arg0 ;
-(void)_updateCurrentlyConfiguredObjects;
-(void)_updateEffectsSubgraph;
-(void)_updateVideoThumbnailSubgraph;
-(void)_validateSessionRecovery;
-(void)cacheMomentCaptureSettings:(id)arg0 forIdentifier:(id)arg1 ;
-(void)cancelAutoResumeAfterDate:(id)arg0 ;
-(void)captureOutput:(id)arg0 didBeginMovieCaptureForResolvedSettings:(id)arg1 ;
-(void)captureOutput:(id)arg0 didCapturePhotoForResolvedSettings:(id)arg1 ;
-(void)captureOutput:(id)arg0 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishCaptureForResolvedSettings:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishCapturingDeferredPhotoProxy:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishMovieCaptureForResolvedSettings:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg1 duration:(struct ? )arg2 photoDisplayTime:(struct ? )arg3 resolvedSettings:(id)arg4 error:(id)arg5 ;
-(void)captureOutput:(id)arg0 didFinishProcessingPhoto:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg1 resolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishRecordingMovie:(id)arg1 ;
-(void)captureOutput:(id)arg0 didFinishRecordingToOutputFileAtURL:(id)arg1 fromConnections:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg0 didFinishWritingMovie:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 forMetadataObjectTypes:(id)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didStartRecordingToOutputFileAtURL:(id)arg1 fromConnections:(id)arg2 ;
-(void)captureOutput:(id)arg0 willBeginCaptureBeforeResolvingSettingsForUniqueID:(NSInteger)arg1 ;
-(void)captureOutput:(id)arg0 willBeginCaptureForResolvedSettings:(id)arg1 ;
-(void)captureOutput:(id)arg0 willCapturePhotoForResolvedSettings:(id)arg1 ;
-(void)changePanoramaEncodingBehaviorIfNeeded:(NSInteger)arg0 ;
-(void)changeToPanoramaDirection:(NSInteger)arg0 ;
-(void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg0 ;
-(void)currentInflightCapturesStringWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)enqueueCommand:(id)arg0 ;
-(void)enqueueCommands:(id)arg0 ;
-(void)panoramaProcessor:(id)arg0 didProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withStatus:(int)arg2 forRequest:(id)arg3 ;
-(void)registerCaptureService:(id)arg0 ;
-(void)registerEffectsPreviewSampleBufferDelegate:(id)arg0 ;
-(void)registerStillImageCaptureRequest:(id)arg0 withSettings:(id)arg1 ;
-(void)registerVideoCaptureRequest:(id)arg0 ;
-(void)registerVideoEndZoomFactor:(CGFloat)arg0 ;
-(void)registerVideoThumbnailContentsDelegate:(id)arg0 ;
-(void)startPanoramaCaptureWithRequest:(id)arg0 ;
-(void)startWithRetryCount:(NSUInteger)arg0 retryInterval:(CGFloat)arg1 logReason:(id)arg2 completion:(id)arg3 ;
-(void)stopPanoramaCaptureInterrupted:(BOOL)arg0 ;
-(void)stopRecording;
-(void)stopWithCompletion:(id)arg0 ;
-(void)unregisterCaptureService:(id)arg0 ;
-(void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg0 ;
-(void)unregisterVideoThumbnailContentsDelegate:(id)arg0 ;
-(void)videoThumbnailOutput:(id)arg0 willBeginRenderingThumbnailsWithContents:(id)arg1 ;
-(void)videoThumbnailOutputWillEndRenderingThumbnails:(id)arg0 ;


@end


#endif