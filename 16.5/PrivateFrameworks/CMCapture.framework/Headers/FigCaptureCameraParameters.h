// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURECAMERAPARAMETERS_H
#define FIGCAPTURECAMERAPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FigCaptureCameraParameters : NSObject {
    NSDictionary *_commonDistortionCorrectionParameters;
    NSDictionary *_meteorParameters;
    NSDictionary *_stereoDisparityParameters;
    NSDictionary *_depthProcessingParameters;
    NSDictionary *_landmarksParameters;
    NSDictionary *_learnedMattingParameters;
    NSDictionary *_personSemanticsParameters;
    NSDictionary *_coreImagePortraitFilterParameters;
    NSDictionary *_commonDeepZoomParameters;
    NSDictionary *photoParameters;
}


@property (readonly, nonatomic) int _cameraFeatureVersion;
@property (readonly, nonatomic) NSDictionary *cameraParameters; // ivar: _cameraParameters
@property (readonly, nonatomic) NSDictionary *cameraTuningParameters;
@property (readonly, nonatomic) NSDictionary *commonNRFParameters; // ivar: _commonNRFParameters
@property (readonly, nonatomic) NSDictionary *commonVideoGreenGhostMitigationParameters; // ivar: _commonVideoGreenGhostMitigationParameters
@property (readonly, nonatomic) int deepZoomVersion;
@property (readonly, nonatomic) int distortionCorrectionVersion;
@property (readonly, nonatomic) int meteorHeadroomProcessingType;
@property (readonly, nonatomic) NSDictionary *motionAttachmentsParameters; // ivar: _motionAttachmentsParameters
@property (readonly, nonatomic) int nrfVersion;
@property (readonly, nonatomic) NSDictionary *photoEncoderParameters; // ivar: _photoEncoderParameters
@property (readonly, nonatomic) NSDictionary *stereoDisparityParameters;
@property (readonly, nonatomic) int videoGreenGhostMitigationVersion;
@property (readonly, nonatomic) NSDictionary *videoStabilizationParameters; // ivar: _videoStabilizationParameters
@property (readonly, nonatomic) NSDictionary *videoStabilizationSTFParameters;


+(id)sdofTuningParametersForSensorIDDictionary:(id)arg0 zoomFactor:(float)arg1 ;
+(id)sensorIDStringFromMetadata:(id)arg0 ;
+(id)sensorIDStringFromModuleInfo:(id)arg0 ;
+(id)sharedInstance;
+(int)movieFileMaxLossyCompressionLevelForPixelFormat:(unsigned int)arg0 ;
+(int)previewMaxLossyCompressionLevel;
+(int)stillImageMaxLossyCompressionLevel;
+(int)videoDataMaxLossyCompressionLevel;
+(unsigned int)sensorIDFromSensorIDString:(id)arg0 ;
+(void)initialize;
-(BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(BOOL)chromaticDefringingEnabledForVideoForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
-(BOOL)panoramaRequiresLTMLockingForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(BOOL)portraitPreviewForegroundBlurEnabledForPortType:(id)arg0 sensorIDString:(id)arg1 zoomFactor:(float)arg2 ;
-(id)actionCameraSceneMonitoringParametersForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)cameraSettingParametersForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)chromaticDefringingParametersForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)focalLengthCharacterizationForStream:(id)arg0 ;
-(id)init;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithModelSpecificName:(id)arg0 ;
-(id)portraitSceneMonitoringParametersForPortType:(id)arg0 sensorIDString:(id)arg1 zoomFactor:(float)arg2 ;
-(id)quadraSubPixelSwitchingParametersForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)sensorIDDictionaryForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)sensorIDDictionaryForStream:(id)arg0 ;
-(int)coreImagePortraitFilterVersion;
-(int)depthProcessorVersion;
-(int)disparityRefinementTypeForPortType:(id)arg0 sensorIDString:(id)arg1 zoomFactor:(float)arg2 ;
-(int)disparityVersion;
-(int)disparityVersionForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)focusPixelDisparityVersionForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)fsdNetStereoImagesAlignmentForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)learnedMattingVersion;
-(int)mattingVersionForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)personSemanticsVersion;
-(int)portraitSceneMonitorVersionForPortType:(id)arg0 sensorIDString:(id)arg1 zoomFactor:(float)arg2 ;
-(int)sdofRenderingVersionForPortType:(id)arg0 sensorIDString:(id)arg1 zoomFactor:(float)arg2 ;
-(int)videoStabilizationProcessorVersion;
-(struct ? )landmarksVersionForInferenceType:(int)arg0 ;
-(unsigned int)landmarksConstellationPointCountForInferenceType:(int)arg0 ;
-(void)dealloc;


@end


#endif