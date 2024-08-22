// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURECAMERAPARAMETERS_H
#define FIGCAPTURECAMERAPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FigCaptureCameraParameters : NSObject {
    NSDictionary *_meteorParameters;
    NSDictionary *_stereoDisparityParameters;
    NSDictionary *_depthProcessingParameters;
    NSDictionary *_landmarksParameters;
    NSDictionary *_learnedMattingParameters;
    NSDictionary *_personSemanticsParameters;
    NSDictionary *_coreImagePortraitFilterParameters;
}


@property (readonly, nonatomic) NSDictionary *cameraParameters; // ivar: _cameraParameters
@property (readonly, nonatomic) NSDictionary *cameraTuningParameters;
@property (readonly, nonatomic) NSDictionary *commonNRFParameters; // ivar: _commonNRFParameters
@property (readonly, nonatomic) int meteorHeadroomProcessingType;
@property (readonly, nonatomic) NSDictionary *motionAttachmentsParameters; // ivar: _motionAttachmentsParameters
@property (readonly, nonatomic) NSDictionary *stereoDisparityParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationParameters; // ivar: _videoStabilizationParameters
@property (readonly, nonatomic) NSDictionary *videoStabilizationSTFParameters;


+(float)movieFileLossyCompressionFootPrintMultiplierFor422SubSampling:(BOOL)arg0 isTenBit:(BOOL)arg1 ;
+(float)previewLossyCompressionFootPrintMultiplierFor422SubSampling:(BOOL)arg0 isTenBit:(BOOL)arg1 ;
+(float)stillImageLossyCompressionFootPrintMultiplierFor422SubSampling:(BOOL)arg0 isTenBit:(BOOL)arg1 ;
+(float)videoDataLossyCompressionFootPrintMultiplierFor422SubSampling:(BOOL)arg0 isTenBit:(BOOL)arg1 ;
+(id)sensorIDStringFromMetadata:(id)arg0 ;
+(id)sensorIDStringFromModuleInfo:(id)arg0 ;
+(id)sharedInstance;
+(int)movieFileMaxLossyCompressionLevelFor422PixelFormat:(BOOL)arg0 isTenBit:(BOOL)arg1 ;
+(int)previewMaxLossyCompressionLevel;
+(int)stillImageMaxLossyCompressionLevel;
+(int)videoDataMaxLossyCompressionLevel;
+(void)initialize;
-(BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(BOOL)chromaticDefringingEnabledForVideoForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
-(BOOL)panoramaRequiresLTMLockingForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)chromaticDefringingParametersForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)deepZoomParametersForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)focalLengthCharacterizationForStream:(id)arg0 ;
-(id)init;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithModelSpecificName:(id)arg0 ;
-(id)portraitSceneMonitoringParametersForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)sensorIDDictionaryForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(id)sensorIDDictionaryForStream:(id)arg0 ;
-(int)coreImagePortraitFilterVersion;
-(int)depthProcessorVersion;
-(int)disparityRefinementTypeForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)disparityVersion;
-(int)disparityVersionForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)focusPixelDisparityVersionForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)fsdNetStereoImagesAlignmentForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)learnedMattingVersion;
-(int)mattingVersionForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)personSemanticsVersion;
-(int)portraitSceneMonitorVersionForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)sdofRenderingVersionForPortType:(id)arg0 sensorIDString:(id)arg1 ;
-(int)videoStabilizationProcessorType;
-(int)videoStabilizationProcessorVersion;
-(struct ? )landmarksVersionForInferenceType:(int)arg0 ;
-(unsigned int)landmarksConstellationPointCountForInferenceType:(int)arg0 ;
-(void)dealloc;


@end


#endif