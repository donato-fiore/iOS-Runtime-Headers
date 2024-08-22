// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURECAMERASOURCEPIPELINECONFIGURATION_H
#define FIGCAPTURECAMERASOURCEPIPELINECONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FigCaptureSourceConfiguration.h"
#import "FigVideoCaptureConnectionConfiguration.h"
#import "FigDepthDataCaptureConnectionConfiguration.h"

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject {
    int _motionAttachmentsSource;
    int _videoStabilizationType;
    int _depthType;
    ? _depthDimensionsOverride;
    BOOL _strictDepthModePreferred;
    unsigned int _RGBIRStereoFusionMinDepthThresholdMM;
    BOOL _RGBIRStereoFusionEnabled;
    ? _maxExposureDurationClientOverride;
    ? _maxExposureDurationFrameworkOverride;
    BOOL _forceCNRDisabled;
    BOOL _coreMediaFaceTrackingEnabled;
    BOOL _ispFaceTrackingEnabled;
    BOOL _stillImageGeometricDistortionCorrectionEnabled;
    BOOL _streamingGeometricDistortionCorrectionEnabled;
    BOOL _fullGeometricDistortionCorrectionRequired;
    BOOL _stillImageGeometricDistortionCorrectionExpansionCoversOverscan;
    BOOL _stillImageLocalHistogramClippingDataMetadataEnabled;
    BOOL _offlineVISEnabled;
    BOOL _zeroShutterLagEnabled;
    BOOL _configureForZeroShutterLagSupport;
    BOOL _configureForSIFRStillImageCaptureIfAvailable;
    BOOL _enableStillImageSensorOverscanIfAvailable;
    float _overCapturePercentage;
    BOOL _configureForSpatialOverCaptureSupport;
    BOOL _configureForDigitalFlashSupport;
    BOOL _clockSynchronizationEnabled;
    BOOL _depthConversionEnabled;
    BOOL _midFrameSynchronizationEnabled;
    int _stillImageFocusPixelDataRetainedBufferCount;
    int _stillImageSashimiRawRetainedBufferCount;
    int _stillImageSensorInterfaceRawRetainedBufferCount;
    int _stillImageOutputRetainedBufferCountOverride;
    BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
    BOOL _streamingForegroundSegmentationEnabled;
    BOOL _streamingCameraCalibrationDataDeliveryEnabled;
    int _autoImageControlMode;
    FigCaptureSourceConfiguration *_cameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    NSArray *_previewDerivedConnectionConfigurations;
    NSArray *_videoCaptureConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    NSArray *_visionDataConnectionConfigurations;
    NSArray *_metadataObjectConnectionConfigurations;
    NSArray *_movieFileDetectedObjectMetadataConnectionConfigurations;
    NSArray *_pointCloudDataConnectionConfigurations;
    BOOL _clientIsCameraOrDerivative;
    BOOL _videoHDRImageStatisticsEnabled;
    float _additionalVISOverscanWhenRecording;
    BOOL _videoSTFMetadataEnabled;
    int _previewMaxLossyCompressionLevel;
    int _videoDataMaxLossyCompressionLevel;
    int _movieFileMaxLossyCompressionLevel;
    int _stillImageMaxLossyCompressionLevel;
    BOOL _depthOutputEnabled;
    int _originalVideoStabilizationTypeForOfflineVIS;
}




-(void)dealloc;


@end


#endif