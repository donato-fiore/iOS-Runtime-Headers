// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESTILLIMAGEUNIFIEDBRACKETINGSINKPIPELINECONFIGURATION_H
#define FIGCAPTURESTILLIMAGEUNIFIEDBRACKETINGSINKPIPELINECONFIGURATION_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "FigCaptureBaseStillImageSinkPipelineConfiguration.h"

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration <NSSecureCoding>

 {
    int swfrVersion;
}


@property (nonatomic) BOOL adjustablePortraitLightingEffectStrengthSupported; // ivar: _adjustablePortraitLightingEffectStrengthSupported
@property (retain, nonatomic) NSDictionary *baseZoomFactorsByPortType; // ivar: _baseZoomFactorsByPortType
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: _cameraInfoByPortType
@property (nonatomic) BOOL captureTimePhotosCurationSupported; // ivar: _captureTimePhotosCurationSupported
@property (nonatomic) int dcProcessorVersion; // ivar: _dcProcessorVersion
@property (nonatomic) ? deepFusionEnhancedResolutionDimensions; // ivar: _deepFusionEnhancedResolutionDimensions
@property (nonatomic) BOOL deepFusionSupported; // ivar: _deepFusionSupported
@property (nonatomic) int deepZoomVersion; // ivar: _deepZoomVersion
@property (nonatomic) BOOL deferredProcessingSupported; // ivar: _deferredProcessingSupported
@property (nonatomic) unsigned int demosaicedRawPixelFormat; // ivar: _demosaicedRawPixelFormat
@property (nonatomic) int depthDataType; // ivar: _depthDataType
@property (nonatomic) BOOL deviceHasFlash; // ivar: _deviceHasFlash
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs; // ivar: _enabledSemanticSegmentationMatteURNs
@property (nonatomic) BOOL fastCapturePrioritizationEnabled; // ivar: _fastCapturePrioritizationEnabled
@property (nonatomic) float gainMapMainImageDownscalingFactor; // ivar: _gainMapMainImageDownscalingFactor
@property (nonatomic) ? gdcInDCProcessorOutputCropDimensions; // ivar: _gdcInDCProcessorOutputCropDimensions
@property (nonatomic) BOOL gdcInDCProcessorSupported; // ivar: _gdcInDCProcessorSupported
@property (nonatomic) int greenGhostMitigationVersion; // ivar: _greenGhostMitigationVersion
@property (nonatomic) BOOL highQualityPhotoCaptureForVideoFormatEnabled; // ivar: _highQualityPhotoCaptureForVideoFormatEnabled
@property (nonatomic) unsigned int inferencePriority; // ivar: _inferencePriority
@property (nonatomic) BOOL learnedNRSupported; // ivar: _learnedNRSupported
@property (nonatomic) int maxLossyCompressionLevel; // ivar: _maxLossyCompressionLevel
@property (nonatomic) ? outputStillImageDimensions; // ivar: _outputStillImageDimensions
@property (nonatomic) int pearlModuleType; // ivar: _pearlModuleType
@property (nonatomic) unsigned int pipelineStagePriority; // ivar: _pipelineStagePriority
@property (retain, nonatomic) NSArray *portTypesWithGeometricDistortionCorrectionEnabled; // ivar: _portTypesWithGeometricDistortionCorrectionEnabled
@property (retain, nonatomic) NSArray *portTypesWithIntelligentDistortionCorrectionEnabled; // ivar: _portTypesWithIntelligentDistortionCorrectionEnabled
@property (nonatomic) BOOL quadraProcessingSupportEnabled; // ivar: _quadraProcessingSupportEnabled
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType; // ivar: _rawColorCalibrationsByPortType
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType; // ivar: _rawLensShadingCorrectionCoefficientsByPortType
@property (nonatomic) ? rawSensorDimensions; // ivar: _rawSensorDimensions
@property (nonatomic) int redEyeReductionVersion; // ivar: _redEyeReductionVersion
@property (nonatomic) BOOL responsiveShutterSupported; // ivar: _responsiveShutterSupported
@property (nonatomic) int semanticDevelopmentVersion; // ivar: _semanticDevelopmentVersion
@property (nonatomic) int semanticRenderingVersion; // ivar: _semanticRenderingVersion
@property (nonatomic) BOOL semanticStyleRenderingEnabled; // ivar: _semanticStyleRenderingEnabled
@property (retain, nonatomic) NSDictionary *sensorIDStringsByPortType; // ivar: _sensorIDStringsByPortType
@property (nonatomic) unsigned int sensorRawPixelFormat; // ivar: _sensorRawPixelFormat
@property (nonatomic) BOOL sifrStillImageCaptureEnabledIfAvailable; // ivar: _sifrStillImageCaptureEnabledIfAvailable
@property (nonatomic) BOOL softISPSupported; // ivar: _softISPSupported
@property (nonatomic) int stillImageSinkPipelineProcessingMode; // ivar: _stillImageSinkPipelineProcessingMode
@property (retain, nonatomic) NSArray *supportedSemanticSegmentationMatteURNs; // ivar: _supportedSemanticSegmentationMatteURNs
@property (nonatomic) int swfrVersion; // ivar: _swfrVersion
@property (nonatomic) float ubInferenceMainImageDownscalingFactor; // ivar: _ubInferenceMainImageDownscalingFactor
@property (nonatomic) BOOL ultraHighResolutionProcessingEnabled; // ivar: _ultraHighResolutionProcessingEnabled
@property (nonatomic) ? ultraHighResolutionSensorRawDimensions; // ivar: _ultraHighResolutionSensorRawDimensions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif