// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWUBNODECONFIGURATION_H
#define BWUBNODECONFIGURATION_H

@class NSDictionary, NSArray;
@protocol BWStillImageProcessingStatusDelegate;


#import "BWStillImageNodeConfiguration.h"
#import "BWSensorConfiguration.h"

@interface BWUBNodeConfiguration : BWStillImageNodeConfiguration {
    int _stillImageFusionScheme;
    NSDictionary *_sensorConfigurationsByPortType;
    NSArray *_sensorConfigurations;
    BWSensorConfiguration *_jasperSensorConfiguration;
    unsigned int _figThreadPriority;
    BOOL _alwaysAllowModifyingInputBuffers;
    BOOL _inputIs10Bit;
    int _retainedBufferCount;
    int _outputBufferCount;
    int _minimumOutputBufferCount;
    int _maxNumberOfBurstCapturesAllowedInFlight;
    BOOL _outputPoolBackPressureEnabled;
    id<BWStillImageProcessingStatusDelegate> *_referenceFrameSelectionDelegate;
    BOOL _deferredProcessingSupportEnabled;
    BOOL _deferredPhotoProcessorEnabled;
    BOOL _softISPSupportEnabled;
    BOOL _quadraProcessingSupportEnabled;
    unsigned int _sensorRawPixelFormat;
    ? _rawSensorDimensions;
    ? _ultraHighResolutionSensorRawDimensions;
    BOOL _ultraHighResolutionProcessingEnabled;
    BOOL _fusionSupportEnabled;
    BOOL _digitalFlashSupportEnabled;
    BOOL _deepFusionSyntheticsInNRSupportEnabled;
    BOOL _deepFusionWaitForPreprocessingToFinish;
    BOOL _deepFusionSupportEnabled;
    ? _deepFusionEnhancedResolutionDimensions;
    int _maxDeepFusionOutputCount;
    int _learnedNRMode;
    int _deepZoomVersion;
    float _gainMapMainImageDownscalingFactor;
    float _inferenceMainImageDownscalingFactor;
    NSDictionary *_providedInferenceAttachedMediaByMode;
    int _swfrVersion;
    BOOL _redEyeReductionEnabled;
    int _semanticRenderingVersion;
    int _semanticDevelopmentVersion;
    int _personSemanticsVersion;
    BOOL _semanticStyleRenderingEnabled;
    ? _outputDimensions;
    NSArray *_portTypesWithGeometricDistortionCorrectionEnabled;
    ? _geometricDistortionCorrectionExpandedImageDimensions;
    NSArray *_portTypesWithIntelligentDistortionCorrectionEnabled;
    int _intelligentDistortionCorrectionVersion;
    BOOL _intelligentDistortionCorrectionAppliesFinalDimensions;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    int _greenGhostMitigationVersion;
    ? _disparityOutputDimensions;
    int _fsdNetStereoImagesAlignment;
    BOOL _demosaicedRawEnabled;
    unsigned int _demosaicedRawPixelFormat;
    NSDictionary *_rawColorCalibrationsByPortType;
    NSDictionary *_rawLensShadingCorrectionCoefficientsByPortType;
    BOOL _depthDataDeliveryEnabled;
    BOOL _generateLiDARDepth;
}




-(void)dealloc;


@end


#endif