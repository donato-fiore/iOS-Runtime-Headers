// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREPHOTOOUTPUT_H
#define AVCAPTUREPHOTOOUTPUT_H

@class NSArray;


#import "AVCaptureOutput.h"
#import "AVCapturePhotoOutputInternal.h"
#import "AVCapturePhotoSettings.h"

@interface AVCapturePhotoOutput : AVCaptureOutput {
    AVCapturePhotoOutputInternal *_internal;
}


@property (nonatomic, getter=isAppleProRAWEnabled) BOOL appleProRAWEnabled;
@property (readonly, nonatomic, getter=isAppleProRAWSupported) BOOL appleProRAWSupported;
@property (readonly, nonatomic, getter=isAutoRedEyeReductionSupported) BOOL autoRedEyeReductionSupported;
@property (readonly, nonatomic) NSArray *availableLivePhotoVideoCodecTypes;
@property (readonly, nonatomic) NSArray *availablePhotoCodecTypes;
@property (readonly, nonatomic) NSArray *availablePhotoFileTypes;
@property (readonly, nonatomic) NSArray *availablePhotoPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableRawPhotoFileTypes;
@property (readonly, nonatomic) NSArray *availableRawPhotoPixelFormatTypes;
@property (readonly, nonatomic, getter=isCameraCalibrationDataDeliverySupported) BOOL cameraCalibrationDataDeliverySupported;
@property (nonatomic, getter=isContentAwareDistortionCorrectionEnabled) BOOL contentAwareDistortionCorrectionEnabled;
@property (readonly, nonatomic, getter=isContentAwareDistortionCorrectionSupported) BOOL contentAwareDistortionCorrectionSupported;
@property (nonatomic, getter=isDualCameraDualPhotoDeliveryEnabled) BOOL dualCameraDualPhotoDeliveryEnabled;
@property (readonly, nonatomic, getter=isDualCameraDualPhotoDeliverySupported) BOOL dualCameraDualPhotoDeliverySupported;
@property (readonly, nonatomic, getter=isDualCameraFusionSupported) BOOL dualCameraFusionSupported;
@property (nonatomic, getter=isHighResolutionCaptureEnabled) BOOL highResolutionCaptureEnabled;
@property (readonly, nonatomic) BOOL isFlashScene;
@property (readonly, nonatomic) BOOL isStillImageStabilizationScene;
@property (readonly, nonatomic, getter=isLensStabilizationDuringBracketedCaptureSupported) BOOL lensStabilizationDuringBracketedCaptureSupported;
@property (nonatomic, getter=isLivePhotoAutoTrimmingEnabled) BOOL livePhotoAutoTrimmingEnabled;
@property (nonatomic, getter=isLivePhotoCaptureEnabled) BOOL livePhotoCaptureEnabled;
@property (readonly, nonatomic, getter=isLivePhotoCaptureSupported) BOOL livePhotoCaptureSupported;
@property (nonatomic, getter=isLivePhotoCaptureSuspended) BOOL livePhotoCaptureSuspended;
@property (readonly, nonatomic) NSUInteger maxBracketedCapturePhotoCount;
@property (nonatomic) NSInteger maxPhotoQualityPrioritization;
@property (copy, nonatomic) AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
@property (readonly, nonatomic) NSArray *preparedPhotoSettingsArray;
@property (readonly, nonatomic, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (readonly, nonatomic) NSArray *supportedFlashModes;
@property (nonatomic, getter=isVirtualDeviceConstituentPhotoDeliveryEnabled) BOOL virtualDeviceConstituentPhotoDeliveryEnabled;
@property (readonly, nonatomic, getter=isVirtualDeviceConstituentPhotoDeliverySupported) BOOL virtualDeviceConstituentPhotoDeliverySupported;
@property (readonly, nonatomic, getter=isVirtualDeviceFusionSupported) BOOL virtualDeviceFusionSupported;


+(BOOL)isAppleProRAWPixelFormat:(unsigned int)arg0 ;
+(BOOL)isBayerRAWPixelFormat:(unsigned int)arg0 ;
+(BOOL)isBayerRawPixelFormat:(unsigned int)arg0 ;
+(BOOL)isDemosaicedRawPixelFormat:(unsigned int)arg0 ;
+(NSUInteger)maxLivePhotoDataSize;
+(id)DNGPhotoDataRepresentationForRawSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
+(id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
+(id)new;
+(id)validMetadataTopLevelCGImagePropertiesKeys;
+(struct ? )maxLivePhotoMovieDimensions;
+(struct __CFDictionary *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
+(void)initialize;
-(BOOL)_HEVCAndHEIFAreAvailableForSourceDevice:(id)arg0 ;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)isDeferredProcessingEnabled;
-(BOOL)isDeferredProcessingSupported;
-(BOOL)isDemosaicedRawEnabled;
-(BOOL)isDemosaicedRawSupported;
-(BOOL)isDepthDataDeliveryEnabled;
-(BOOL)isDepthDataDeliverySupported;
-(BOOL)isDigitalFlashCaptureEnabled;
-(BOOL)isEV0PhotoDeliverySupported;
-(BOOL)isFastCapturePrioritizationEnabled;
-(BOOL)isFastCapturePrioritizationSupported;
-(BOOL)isFilterRenderingEnabled;
-(BOOL)isHDRScene;
-(BOOL)isImageOptimizationForOfflineVideoStabilizationSupported;
-(BOOL)isLivePhotoMovieProcessingSuspended;
-(BOOL)isMovieRecordingEnabled;
-(BOOL)isMovieRecordingSupported;
-(BOOL)isPortraitEffectsMatteDeliveryEnabled;
-(BOOL)isPortraitEffectsMatteDeliverySupported;
-(BOOL)isPreviewQualityAdjustedPhotoFilterRenderingEnabled;
-(BOOL)isPreviewQualityAdjustedPhotoFilterRenderingSupported;
-(BOOL)isProcessedPhotoZoomWithoutUpscalingSupported;
-(BOOL)isSemanticStyleRenderingEnabled;
-(BOOL)isSemanticStyleRenderingSupported;
-(BOOL)isSpatialOverCaptureEnabled;
-(BOOL)isSpatialOverCaptureSupported;
-(BOOL)isVideoCaptureEnabled;
-(BOOL)isVideoCaptureSupported;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(NSInteger)digitalFlashStatus;
-(float)timeLapseCaptureRate;
-(id)_avErrorUserInfoDictionaryForError:(int)arg0 movieRequest:(id)arg1 payload:(id)arg2 isSpatialOverCaptureMovie:(BOOL)arg3 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg0 photoRequest:(id)arg1 payload:(id)arg2 isOriginalMovie:(BOOL)arg3 ;
-(id)_errorForFigCaptureSessionNotificationPayloadErrorStatus:(int)arg0 userInfo:(id)arg1 ;
-(id)_figCaptureIrisPreparedSettingsForRequest:(id)arg0 ;
-(id)_figCaptureIrisStillImageSettingsForAVCapturePhotoSettings:(id)arg0 delegate:(id)arg1 connections:(id)arg2 ;
-(id)_figCaptureMovieFileRecordingSettingsForAVMomentCaptureMovieRecordingSettings:(id)arg0 momentCaptureSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(id)_movieRequestForUniqueID:(NSInteger)arg0 ;
-(id)_photoRequestForUniqueID:(NSInteger)arg0 ;
-(id)_sanitizedSettingsForSettings:(id)arg0 ;
-(id)addConnection:(id)arg0 error:(*id)arg1 ;
-(id)availableSemanticSegmentationMatteTypes;
-(id)connectionMediaTypes;
-(id)digitalFlashExposureTimes;
-(id)enabledSemanticSegmentationMatteTypes;
-(id)figCaptureIrisPreparedSettings;
-(id)init;
-(id)supportedDigitalFlashModes;
-(id)supportedHDRModes;
-(id)supportedPhotoCodecTypesForFileType:(id)arg0 ;
-(id)supportedPhotoPixelFormatTypesForFileType:(id)arg0 ;
-(id)supportedRawPhotoPixelFormatTypesForFileType:(id)arg0 ;
-(struct ? )livePhotoMovieDimensions;
-(struct ? )livePhotoMovieDuration;
-(struct ? )livePhotoMovieVideoFrameDuration;
-(struct ? )optimizedImageDimensionsForOfflineStabilization;
-(unsigned int)_internalRawFormatFromRawFormat:(unsigned int)arg0 ;
-(void)_decrementObserverCountForKeyPath:(id)arg0 ;
-(void)_dispatchFailureCallbacks:(unsigned int)arg0 forMovieRequest:(id)arg1 withError:(id)arg2 cleanupRequest:(BOOL)arg3 ;
-(void)_dispatchFailureCallbacks:(unsigned int)arg0 forPhotoRequest:(id)arg1 withError:(id)arg2 cleanupRequest:(BOOL)arg3 ;
-(void)_dispatchFailureCallbacksForMovieRecordingSettings:(id)arg0 momentCaptureSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3 ;
-(void)_dispatchFailureCallbacksForPhotoSettings:(id)arg0 toDelegate:(id)arg1 withError:(id)arg2 ;
-(void)_handleDidBeginRecordingMomentCaptureMovieNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleDidFinishCaptureNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleDidFinishMovieCaptureMovieNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleDidFinishRecordingMomentCaptureMovieNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleDidFinishRecordingVideoNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleDidFinishWritingMomentCaptureMovieNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleDidRecordIrisMovieNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_handlePreparationCompleteNotificationWithPayload:(id)arg0 settingsID:(NSInteger)arg1 ;
-(void)_handleStillImageCompleteNotification:(id)arg0 withPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleWillBeginCaptureBeforeResolvingSettingsNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleWillBeginCaptureNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg0 forRequest:(id)arg1 ;
-(void)_incrementObserverCountForKeyPath:(id)arg0 ;
-(void)_resetLivePhotoMovieProcessingSuspended;
-(void)_resetTimeLapseCaptureRate;
-(void)_setDigitalFlashScene:(id)arg0 fireStatusKVO:(BOOL)arg1 fireExposureTimesKVO:(BOOL)arg2 ;
-(void)_setIsHDRScene:(BOOL)arg0 firingKVO:(BOOL)arg1 ;
-(void)_updateAppleProRAWSupportedForDevice:(id)arg0 ;
-(void)_updateAutoRedReductionSupportedForSourceDevice:(id)arg0 ;
-(void)_updateAvailableLivePhotoVideoCodecTypesForSourceDevice:(id)arg0 ;
-(void)_updateAvailablePhotoCodecTypesForSourceDevice:(id)arg0 ;
-(void)_updateAvailablePhotoFileTypesForSourceDevice:(id)arg0 ;
-(void)_updateAvailablePhotoPixelFormatTypesForSourceDevice:(id)arg0 ;
-(void)_updateAvailableRawPhotoFileTypesForSourceDevice:(id)arg0 ;
-(void)_updateAvailableRawPhotoPixelFormatTypesForSourceDevice:(id)arg0 ;
-(void)_updateCameraCalibrationDataDeliverySupportedForSourceDevice:(id)arg0 ;
-(void)_updateContentAwareDistortionCorrectionSupportedForDevice:(id)arg0 ;
-(void)_updateDeferredProcessingSupportedForSourceDevice:(id)arg0 ;
-(void)_updateDepthDataDeliverySupportedForSourceDevice:(id)arg0 ;
-(void)_updateDualCameraDualPhotoDeliverySupportedForSourceDevice:(id)arg0 ;
-(void)_updateFastCapturePrioritizationSupportedForDevice:(id)arg0 ;
-(void)_updateHighPhotoQualitySupportedForDevice:(id)arg0 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForSourceDevice:(id)arg0 ;
-(void)_updateLivePhotoCaptureSupportedForSourceDevice:(id)arg0 ;
-(void)_updateLivePhotoMovieDimensionsForSourceDevice:(id)arg0 ;
-(void)_updateMaxBracketedCapturePhotoCountForSourceDevice:(id)arg0 ;
-(void)_updateMovieRecordingSupportedForSourceDevice:(id)arg0 ;
-(void)_updateOfflineVISSupportedForSourceDevice:(id)arg0 ;
-(void)_updatePreviewQualityAdjustedPhotoFilterRenderingSupportedForDevice:(id)arg0 ;
-(void)_updateProcessedPhotoZoomWithoutUpscalingSupportedForSourceDevice:(id)arg0 ;
-(void)_updateSceneMonitoringForSourceDevice:(id)arg0 ;
-(void)_updateSemanticStyleRenderingSupportedForDevice:(id)arg0 ;
-(void)_updateSpatialOverCaptureSupportedForSourceDevice:(id)arg0 ;
-(void)_updateStillImageStabilizationSupportedForSourceDevice:(id)arg0 ;
-(void)_updateSupportedDigitalFlashModesForSourceDevice:(id)arg0 ;
-(void)_updateSupportedFlashModesForSourceDevice:(id)arg0 ;
-(void)_updateSupportedHDRModesForSourceDevice:(id)arg0 ;
-(void)_updateSupportedPropertiesForSourceDevice:(id)arg0 ;
-(void)_updateTimeLapseCaptureRate;
-(void)_updateVirtualDeviceConstituentPhotoDeliverySupportedForSourceDevice:(id)arg0 ;
-(void)_updateVirtualDeviceFusionSupportedForSourceDevice:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)beginMomentCaptureWithSettings:(id)arg0 ;
-(void)cancelMomentCaptureWithUniqueID:(NSInteger)arg0 ;
-(void)capturePhotoWithSettings:(id)arg0 delegate:(id)arg1 ;
-(void)commitCaptureWithSettings:(id)arg0 delegate:(id)arg1 ;
-(void)commitMomentCaptureWithUniqueID:(NSInteger)arg0 toMovieRecordingWithSettings:(id)arg1 delegate:(id)arg2 ;
-(void)commitMomentCaptureWithUniqueID:(NSInteger)arg0 toPhotoCaptureWithSettings:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)endCaptureWithUniqueID:(NSInteger)arg0 ;
-(void)endMomentCaptureWithUniqueID:(NSInteger)arg0 ;
-(void)handleBackgroundBlurActiveChangedForDevice:(id)arg0 ;
-(void)handleCenterStageActiveChangedForDevice:(id)arg0 ;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)initiateCaptureWithSettings:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeConnection:(id)arg0 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)setDeferredProcessingEnabled:(BOOL)arg0 ;
-(void)setDemosaicedRawEnabled:(BOOL)arg0 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg0 ;
-(void)setDigitalFlashCaptureEnabled:(BOOL)arg0 ;
-(void)setEnabledSemanticSegmentationMatteTypes:(id)arg0 ;
-(void)setFastCapturePrioritizationEnabled:(BOOL)arg0 ;
-(void)setFigCaptureSessionSectionProperty:(struct __CFString *)arg0 withHostTime:(struct ? )arg1 settingStateVariableToNoOnFailure:(*BOOL)arg2 ;
-(void)setFilterRenderingEnabled:(BOOL)arg0 ;
-(void)setLivePhotoMovieProcessingSuspended:(BOOL)arg0 ;
-(void)setMovieRecordingEnabled:(BOOL)arg0 ;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg0 ;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg0 ;
-(void)setPreviewQualityAdjustedPhotoFilterRenderingEnabled:(BOOL)arg0 ;
-(void)setSemanticStyleRenderingEnabled:(BOOL)arg0 ;
-(void)setSession:(id)arg0 ;
-(void)setSpatialOverCaptureEnabled:(BOOL)arg0 ;
-(void)setTimeLapseCaptureRate:(float)arg0 ;
-(void)setVideoCaptureEnabled:(BOOL)arg0 ;
-(void)userInitiatedCaptureRequestAtTime:(NSUInteger)arg0 ;


@end


#endif