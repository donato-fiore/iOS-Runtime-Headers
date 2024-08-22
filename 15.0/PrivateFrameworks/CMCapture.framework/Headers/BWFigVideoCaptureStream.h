// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWFIGVIDEOCAPTURESTREAM_H
#define BWFIGVIDEOCAPTURESTREAM_H

@class NSString, NSDictionary, NSArray, NSData, NSMutableArray, NSSet, NSMutableDictionary;
@protocol BWFigCaptureStreamStartStopDelegate, OS_dispatch_queue, OS_dispatch_group, BWFigVideoCaptureStreamDelegate, BWFaceDetector, BWObjectDetector, BWFigVideoCaptureStreamStillImageCaptureDelegate;

#import <Foundation/Foundation.h>

#import "BWSphereModeSelector.h"
#import "BWStillImageTimeMachine.h"
#import "BWStillImageCaptureSettings.h"
#import "BWStillImageCaptureStreamSettings.h"
#import "BWFigCaptureSynchronizedStreamsGroup.h"
#import "BWNoiseReductionAndSharpeningParameters.h"
#import "BWFigCaptureStream.h"

@interface BWFigVideoCaptureStream : NSObject <BWFigCaptureStreamStartStopDelegate>

 {
    BOOL _streamHasBeenSuspended;
    NSString *_portType;
    NSDictionary *_cachedVideoOutputConfigurations;
    NSDictionary *_cachedVideoOutputsEnabled;
    float _minimumFrameRate;
    float _maximumFrameRate;
    float _minimumSupportedFrameRate;
    BOOL _rawBufferCompandingEnabled;
    NSDictionary *_supportedProperties;
    NSArray *_supportedFormats;
    NSInteger _activeFormatIndex;
    NSDictionary *_moduleInfo;
    BOOL _usePinholeCameraFocalLengthInIntrinsicMatrixCalculation;
    BOOL _hasFocus;
    NSDictionary *_sensorIDDictionary;
    float _baseZoomFactor;
    float _baseZoomFactorAfterGDC;
    NSDictionary *_opticalCenterOffset;
    NSDictionary *_opticalCenterOffsetCalibratedForBackWideFieldOfView;
    float _pixelSize;
    float _pixelsPerMicron;
    float _gravityFactor;
    NSDictionary *_focusPositionToLensMakersPFLLinearFit;
    NSData *_cameraViewMatrix;
    NSData *_cameraViewMatrixCalibratedForBackWideFieldOfView;
    NSData *_cameraPoseMatrix;
    NSString *_nonLocalizedName;
    BOOL _isSlave;
    NSData *_ambientViewingEnvironment;
    os_unfair_lock_s _cameraAccessLock;
    BOOL _clientProcessHasAccessToCamera;
    int _clientPID;
    NSString *_applicationID;
    os_unfair_lock_s _sphereLock;
    BOOL _sphereEnabled;
    BOOL _motionDataInvalid;
    BWSphereModeSelector *_sphereModeSelector;
    int _motionDataDeliveryEnabled;
    BOOL _isStationary;
    BOOL _timeMachineEnabled;
    int _timeMachineCapacity;
    BWStillImageTimeMachine *_timeMachine;
    os_unfair_lock_s _stillImageCaptureStateLock;
    BOOL _grabNextFrame;
    BWStillImageCaptureSettings *_activeResolvedStillImageCaptureSettings;
    BWStillImageCaptureStreamSettings *_activeResolvedStillImageCaptureStreamSettings;
    ? _largestStillImagePTS;
    NSMutableArray *_stillFusionBracketFramesMetadata;
    ? _stillCaptureReferenceFramePTS;
    int _skippedFramesCountForAF;
    int _expectedImagesOrErrorsForCaptureStillImageNow;
    int _receivedImagesOrErrorsForCaptureStillImageNow;
    id *_stillImageBufferTimeMachineHandler;
    BOOL _stillImageCaptureEnabled;
    NSObject<OS_dispatch_queue> *_streamNotificationDispatchQueue;
    NSObject<OS_dispatch_group> *_stillImageCaptureDelegateDispatchGroup;
    BOOL _objectDetectionMetadataRequested;
    BOOL _defersObjectDetectionStartup;
    NSDictionary *_faceDetectionConfiguration;
    *OpaqueFigSimpleMutex _objectDetectionConfigurationMutex;
    NSSet *_enabledDetectedObjectTypes;
    BOOL _faceDetectionEnabledSeparately;
    NSMutableDictionary *_currentObjectDetectionConfiguration;
    unsigned int _maxObjects;
    BOOL _synchronizedStreamsEnabled;
    BWFigCaptureSynchronizedStreamsGroup *_synchronizedStreamsGroup;
    int _masterToSlaveFrameRateRatio;
    BOOL _streamingRequiredWhenConfiguredAsSlave;
    NSDictionary *_geometricDistortionCoefficients;
    NSDictionary *_geometricDistortionCoefficientsCalibratedForBackWideFieldOfView;
    BOOL _lumaHistogramMetadataEnabled;
    NSMutableDictionary *_keypointDetectionConfiguration;
    BOOL _keypointDetectionConfigured;
    BOOL _keypointDetectionEnabled;
    BOOL _stillImageKeypointDetectionEnabled;
    BOOL _highlightRecoverySuspended;
    BOOL _highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
    BOOL _highlightRecoveryEnabledWhenConfiguredAsSlave;
    BOOL _videoHDRFusionEnabled;
    BOOL _videoHDRImageStatisticsEnabled;
    BWNoiseReductionAndSharpeningParameters *_stillImageNoiseAndSharpeningParameters;
    BOOL _unifiedBracketingEnabled;
    BOOL _aeStatisticsEnabled;
    BOOL _rawFocusScoresEnabled;
    BOOL _focusBlurMapEnabled;
    BOOL _zeroShutterLagEnabled;
    BOOL _maxExposureDurationHasBeenSet;
    BOOL _variableFrameRateVideoEnabled;
    ? _sensorDimensions;
}


@property (readonly, nonatomic) BOOL activePrefersStillImageShiftedToMatchSpatialOverCapturePreview;
@property (readonly, nonatomic) int activeStillImageCaptureType;
@property (readonly, nonatomic) float activeStillImageScaleFactor;
@property (nonatomic) float aeMaxGain; // ivar: _aeMaxGain
@property (nonatomic) BOOL aeStatisticsEnabled;
@property (readonly, nonatomic) int autoFocusPositionSensorMode; // ivar: _autoFocusPositionSensorMode
@property (nonatomic) BOOL avoidsSphereRecentering;
@property (nonatomic) BOOL backgroundBlurEnabled; // ivar: _backgroundBlurEnabled
@property float baseZoomFactor;
@property float baseZoomFactorAfterGDC;
@property (readonly) NSData *cameraPoseMatrix;
@property (readonly) NSData *cameraViewMatrix;
@property (readonly) NSData *cameraViewMatrixCalibratedForBackWideFieldOfView;
@property (nonatomic) BOOL cinematicVideoEnabled; // ivar: _cinematicVideoEnabled
@property (readonly, nonatomic) ? clientAuditToken; // ivar: _clientAuditToken
@property (readonly, nonatomic) BOOL clientProcessHasAccessToCamera;
@property (readonly, nonatomic) *__CFString currentSphereMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL defersObjectDetectionStartup;
@property (nonatomic) NSObject<BWFigVideoCaptureStreamDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesSphereWhenAvailable;
@property (retain, nonatomic) NSObject<BWFaceDetector> *faceDetector; // ivar: _faceDetector
@property (nonatomic) BOOL firmwareTimeMachineEnabledWhenConfiguredAsSlave; // ivar: _firmwareTimeMachineEnabledWhenConfiguredAsSlave
@property (readonly) float focalLength; // ivar: _focalLength
@property (nonatomic) BOOL focusBlurMapEnabled;
@property (readonly) NSDictionary *focusPositionToLensMakersPFLLinearFit;
@property (readonly) NSDictionary *geometricDistortionCoefficients;
@property (readonly) NSDictionary *geometricDistortionCoefficientsCalibratedForBackWideFieldOfView;
@property (readonly) float gravityFactor;
@property (readonly) BOOL hasFocus;
@property (readonly) BOOL hasSphere;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL highlightRecoveryEnabled; // ivar: _highlightRecoveryEnabled
@property (nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
@property (nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsSlave;
@property (nonatomic) BOOL highlightRecoverySuspended;
@property (nonatomic) BOOL isStationary;
@property (nonatomic) BOOL keypointDetectionEnabled;
@property (readonly, nonatomic) int lastStillImageCaptureType; // ivar: _lastStillImageCaptureType
@property (readonly, nonatomic) ? lastStillImagePTS; // ivar: _lastStillImagePTS
@property (readonly) float lensFNumber; // ivar: _lensFNumber
@property (nonatomic) BOOL lowLightVideoEnabled; // ivar: _lowLightVideoEnabled
@property (nonatomic) int masterToSlaveFrameRateRatio;
@property (readonly, nonatomic) ? maxExposureDuration;
@property (nonatomic) ? maxExposureDurationClientOverride; // ivar: _maxExposureDurationClientOverride
@property (nonatomic) ? maxExposureDurationFrameworkOverride; // ivar: _maxExposureDurationFrameworkOverride
@property (nonatomic) float maximumFrameRate;
@property (nonatomic) float maximumSupportedFrameRate; // ivar: _maximumSupportedFrameRate
@property (nonatomic) float minimumFrameRate;
@property (nonatomic) float minimumSupportedFrameRate;
@property (readonly) NSDictionary *moduleInfo;
@property (nonatomic) float momentCaptureVideoRecordingAEMaxGain; // ivar: _momentCaptureVideoRecordingAEMaxGain
@property (nonatomic) BOOL motionDataDeliveryEnabled;
@property (readonly) BOOL motionDataInvalid;
@property (nonatomic) int multiBandNoiseReductionMode; // ivar: _multiBandNoiseReductionMode
@property (readonly) NSString *nonLocalizedName;
@property (retain, nonatomic) NSObject<BWObjectDetector> *objectDetector; // ivar: _objectDetector
@property (readonly) NSDictionary *opticalCenterOffset;
@property (readonly) NSDictionary *opticalCenterOffsetCalibratedForBackWideFieldOfView;
@property (nonatomic) BOOL overCaptureEnabled;
@property (nonatomic) BOOL pixelFormatIsTenBit; // ivar: _pixelFormatIsTenBit
@property (readonly) float pixelSize;
@property (readonly) float pixelsPerMicron;
@property (readonly) NSString *portType;
@property (readonly, nonatomic) BOOL providesPreBracketedEV0;
@property (readonly, nonatomic) BOOL rawBufferCompandingEnabled;
@property (nonatomic) BOOL rawFocusScoresEnabled;
@property (readonly) NSDictionary *sensorIDDictionary;
@property (readonly) NSString *sensorIDString;
@property (readonly) BOOL sphereEnabled;
@property (nonatomic) int sphereThermalLevel;
@property (nonatomic) BOOL sphereVideoEnabled;
@property (readonly) BOOL sphereVideoSupported;
@property (readonly, nonatomic) BOOL started; // ivar: _started
@property (copy, nonatomic) id *stillImageBufferTimeMachineHandler;
@property (nonatomic) NSObject<BWFigVideoCaptureStreamStillImageCaptureDelegate> *stillImageCaptureDelegate; // ivar: _stillImageCaptureDelegate
@property (nonatomic) BOOL stillImageCaptureEnabled;
@property (nonatomic) BOOL stillImageKeypointDetectionEnabled;
@property (readonly) BWFigCaptureStream *stream; // ivar: _stream
@property (nonatomic) BOOL streamingRequiredWhenConfiguredAsSlave;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedFormats;
@property (readonly, nonatomic) BOOL suspended; // ivar: _suspended
@property (readonly, nonatomic) BOOL suspendingSupported;
@property (readonly, nonatomic, getter=isSynchronizationMaster) BOOL synchronizationMaster; // ivar: _isSynchronizationMaster
@property (readonly) BOOL synchronizedStreamsEnabled;
@property (nonatomic) BOOL timeLapseEnabled; // ivar: _timeLapseEnabled
@property (readonly) int timeMachineCapacity;
@property (nonatomic) BOOL timeMachineEnabled;
@property (nonatomic) BOOL unifiedBracketingEnabled;
@property (readonly) BOOL usePinholeCameraFocalLengthInIntrinsicMatrixCalculation;
@property (nonatomic) BOOL usesStillFusionReferenceFramePTSForDidCaptureCallback; // ivar: _usesStillFusionReferenceFramePTSForDidCaptureCallback
@property (nonatomic) BOOL variableFrameRateVideoEnabled;
@property (nonatomic) ? videoCaptureDimensions; // ivar: _videoCaptureDimensions
@property (nonatomic) BOOL videoHDRFusionEnabled;
@property (nonatomic) BOOL videoHDRImageStatisticsEnabled;
@property (nonatomic) BOOL zeroShutterLagEnabled;


+(void)initialize;
-(NSInteger)activeFormatIndex;
-(id)initWithCaptureStream:(id)arg0 attributes:(id)arg1 sensorIDDictionary:(id)arg2 synchronizedStreamsGroup:(id)arg3 applicationID:(id)arg4 clientAuditToken:(struct ? )arg5 error:(*int)arg6 ;
-(id)noiseReductionAndSharpeningConfigurationForType:(int)arg0 gain:(float)arg1 ;
-(int)setActiveFormatIndex:(NSInteger)arg0 ;
-(int)sourceNodeWillEmitDepthSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)sourceNodeWillEmitPointCloudSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)sourceNodeWillEmitStillImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)sourceNodeWillEmitVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 drivesCameraControls:(BOOL)arg1 deliversStills:(BOOL)arg2 ;
-(int)start;
-(int)stop;
-(struct ? )updateMaxExposureDuration;
-(struct ? )updateMaxExposureDurationClientOverride:(struct ? )arg0 ;
-(void)captureStillImageFromTimeMachineWithStillImageSettings:(id)arg0 ;
-(void)captureStreamDidStart;
-(void)captureStreamDidStop;
-(void)dealloc;
-(void)didBecomeMasterStream;
-(void)didBecomeSlaveStream;
-(void)enableFaceDetection;
-(void)failedToCaptureStillImageFromFirmwareWithError:(int)arg0 ;
-(void)prepareForStillImageCaptureFromFirmwareWithStillImageSettings:(id)arg0 ;
-(void)registerForObjectDetectionMetadata:(id)arg0 ;
-(void)setFaceDetectionConfiguration:(id)arg0 ;
-(void)setVisionDataKeypointDetectionThreshold:(float)arg0 ;
-(void)setVisionDataSuspended:(BOOL)arg0 ;
-(void)sourceNodeDidDropFrameWithPTS:(struct ? )arg0 ;
-(void)sourceNodeDidStartStreaming;
-(void)sourceNodeDidStopStreaming;
-(void)sourceNodeFailedToStartStreaming;
-(void)sourceNodeWillDiscardVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)sourceNodeWillEmitDetectedFacesSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)sourceNodeWillEmitStillImageQuadraBufferProcessingError:(int)arg0 ;
-(void)sourceNodeWillStartStreaming;
-(void)sourceNodeWillStopStreaming;
-(void)startupObjectDetectionIfNeeded;
-(void)triggerVisionDataBurst;
-(void)unregisterForObjectDetectionMetadata;
-(void)updateAETables;
-(void)willBecomeMasterStream;
-(void)willBecomeSlaveStream;
-(void)willCaptureStillImageFromFirmware;


@end


#endif