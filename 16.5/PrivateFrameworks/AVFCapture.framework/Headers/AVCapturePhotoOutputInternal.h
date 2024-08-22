// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREPHOTOOUTPUTINTERNAL_H
#define AVCAPTUREPHOTOOUTPUTINTERNAL_H

@class AVWeakReference, NSArray, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "AVCapturePhotoSettings.h"
#import "AVMomentCaptureSettings.h"

@interface AVCapturePhotoOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSInteger lastSettingsUniqueID;
    NSArray *availablePhotoPixelFormatTypes;
    NSArray *availablePhotoCodecTypes;
    NSDictionary *availableRawPhotoPixelFormatTypes;
    NSArray *availablePhotoFileTypes;
    NSArray *availableRawPhotoFileTypes;
    BOOL appleProRAWSupported;
    BOOL appleProRAWEnabled;
    NSInteger maxPhotoQualityPrioritization;
    BOOL maxPhotoQualityPrioritizationHasBeenSetByClient;
    BOOL stillImageStabilizationSupported;
    BOOL virtualDeviceFusionSupported;
    BOOL virtualDeviceConstituentPhotoDeliverySupported;
    BOOL virtualDeviceConstituentPhotoDeliveryEnabled;
    BOOL dualCameraDualPhotoDeliverySupported;
    BOOL dualCameraDualPhotoDeliveryEnabled;
    BOOL cameraCalibrationDataDeliverySupported;
    NSArray *supportedHDRModes;
    BOOL EV0PhotoDeliverySupported;
    NSArray *supportedFlashModes;
    NSArray *supportedDigitalFlashModes;
    BOOL digitalFlashCaptureEnabled;
    BOOL autoRedEyeReductionSupported;
    BOOL highResolutionCaptureEnabled;
    NSUInteger maxBracketedCapturePhotoCount;
    BOOL lensStabilizationDuringBracketedCaptureSupported;
    BOOL livePhotoCaptureSupported;
    BOOL livePhotoCaptureEnabled;
    BOOL livePhotoAutoTrimmingEnabled;
    NSArray *availableLivePhotoVideoCodecTypes;
    ? livePhotoMovieDuration;
    ? livePhotoMovieVideoFrameDuration;
    ? livePhotoMovieDimensions;
    BOOL livePhotoCaptureSuspended;
    BOOL preservesLivePhotoCaptureSuspendedOnSessionStop;
    BOOL depthDataDeliverySupported;
    BOOL depthDataDeliveryEnabled;
    BOOL portraitEffectsMatteDeliverySupported;
    BOOL portraitEffectsMatteDeliveryEnabled;
    NSArray *availableSemanticSegmentationTypes;
    NSArray *enabledSemanticSegmentationTypes;
    BOOL filterRenderingEnabled;
    BOOL imageOptimizationForOfflineVideoStabilizationSupported;
    BOOL optimizesImagesForOfflineVideoStabilization;
    ? optimizedImageDimensionsForOfflineStabilization;
    float timeLapseCaptureRate;
    BOOL timeLapseCaptureRateNeedsUpdate;
    BOOL livePhotoMovieProcessingSuspended;
    BOOL videoCaptureSupported;
    BOOL videoCaptureEnabled;
    BOOL resumeLivePhotoMovieCaptureAfterVideoCaptureEnds;
    NSObject<OS_dispatch_queue> *sceneDetectionObserversDispatchQueue;
    int flashSceneObserverCount;
    int HDRSceneObserverCount;
    int stillImageStabilizationSceneObserverCount;
    BOOL isFlashScene;
    BOOL isHDRScene;
    BOOL isStillImageStabilizationScene;
    int digitalFlashStatusObserverCount;
    NSInteger digitalFlashStatus;
    int digitalFlashExposureTimesObserverCount;
    NSDictionary *digitalFlashExposureTimes;
    AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
    *OpaqueFigSimpleMutex requestsLock;
    NSMutableArray *photoRequests;
    NSMutableArray *prepareRequests;
    NSMutableArray *movieRequests;
    NSObject<OS_dispatch_queue> *beginEndIrisMovieCaptureHostTimeQueue;
    NSObject<OS_dispatch_group> *beginEndIrisMovieCaptureHostTimeDispatchGroup;
    NSString *sourceDeviceType;
    *ct_green_tea_logger_s greenTeaLogger;
    BOOL movieRecordingSupported;
    BOOL movieRecordingEnabled;
    BOOL spatialOverCaptureSupported;
    BOOL spatialOverCaptureEnabled;
    AVMomentCaptureSettings *momentCaptureInFlight;
    NSInteger lastMomentSettingsUniqueID;
    BOOL deferredProcessingSupported;
    BOOL deferredProcessingEnabled;
    BOOL processedPhotoZoomWithoutUpscalingSupported;
    BOOL contentAwareDistortionCorrectionSupported;
    BOOL contentAwareDistortionCorrectionEnabled;
    BOOL previewQualityAdjustedPhotoFilterRenderingSupported;
    BOOL previewQualityAdjustedPhotoFilterRenderingEnabled;
    BOOL fastCapturePrioritizationSupported;
    BOOL fastCapturePrioritizationEnabled;
    BOOL highPhotoQualitySupported;
    BOOL semanticStyleRenderingSupported;
    BOOL semanticStyleRenderingEnabled;
    ? maxPhotoDimensions;
    BOOL privatePhotoDimensionsEnabled;
}






@end


#endif