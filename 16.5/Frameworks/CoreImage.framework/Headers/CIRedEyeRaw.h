// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIREDEYERAW_H
#define CIREDEYERAW_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIRedEyeRaw : CIFilter

@property (retain, nonatomic) NSNumber *inputAbortDensityDiff; // ivar: inputAbortDensityDiff
@property (retain, nonatomic) NSNumber *inputAbortDensityLo; // ivar: inputAbortDensityLo
@property (retain, nonatomic) CIVector *inputAxisLongLeft; // ivar: inputAxisLongLeft
@property (retain, nonatomic) CIVector *inputAxisLongRight; // ivar: inputAxisLongRight
@property (retain, nonatomic) CIVector *inputAxisShortLeft; // ivar: inputAxisShortLeft
@property (retain, nonatomic) CIVector *inputAxisShortRight; // ivar: inputAxisShortRight
@property (retain, nonatomic) NSNumber *inputCenterSpecRad; // ivar: inputCenterSpecRad
@property (retain, nonatomic) NSNumber *inputCentroidGamma; // ivar: inputCentroidGamma
@property (retain, nonatomic) NSNumber *inputCentroidIterations; // ivar: inputCentroidIterations
@property (retain, nonatomic) NSNumber *inputCentroidRadius; // ivar: inputCentroidRadius
@property (retain, nonatomic) NSNumber *inputCentroidRadiusSmall; // ivar: inputCentroidRadiusSmall
@property (retain, nonatomic) NSNumber *inputCircularity; // ivar: inputCircularity
@property (retain, nonatomic) NSNumber *inputClipMin; // ivar: inputClipMin
@property (retain, nonatomic) NSNumber *inputClosingDilation; // ivar: inputClosingDilation
@property (retain, nonatomic) NSNumber *inputClosingErosion; // ivar: inputClosingErosion
@property (retain, nonatomic) NSNumber *inputCutoff; // ivar: inputCutoff
@property (retain, nonatomic) NSNumber *inputDetectRed; // ivar: inputDetectRed
@property (retain, nonatomic) NSNumber *inputDetectWhite; // ivar: inputDetectWhite
@property (retain, nonatomic) NSNumber *inputDetectionThresholdIrisLarge; // ivar: inputDetectionThresholdIrisLarge
@property (retain, nonatomic) NSNumber *inputDetectionThresholdIrisMedium; // ivar: inputDetectionThresholdIrisMedium
@property (retain, nonatomic) NSNumber *inputDetectionThresholdIrisSmall; // ivar: inputDetectionThresholdIrisSmall
@property (retain, nonatomic) NSNumber *inputDetectionThresholdScleraLarge; // ivar: inputDetectionThresholdScleraLarge
@property (retain, nonatomic) NSNumber *inputDetectionThresholdScleraMedium; // ivar: inputDetectionThresholdScleraMedium
@property (retain, nonatomic) NSNumber *inputDetectionThresholdScleraSmall; // ivar: inputDetectionThresholdScleraSmall
@property (retain, nonatomic) NSNumber *inputDetectionThresholdSkinLarge; // ivar: inputDetectionThresholdSkinLarge
@property (retain, nonatomic) NSNumber *inputDetectionThresholdSkinMedium; // ivar: inputDetectionThresholdSkinMedium
@property (retain, nonatomic) NSNumber *inputDetectionThresholdSkinSmall; // ivar: inputDetectionThresholdSkinSmall
@property (retain, nonatomic) NSNumber *inputFSmooth; // ivar: inputFSmooth
@property (retain, nonatomic) NSNumber *inputFalloffDensity; // ivar: inputFalloffDensity
@property (retain, nonatomic) NSNumber *inputFalloffRepair; // ivar: inputFalloffRepair
@property (retain, nonatomic) NSNumber *inputFalloffSpecular; // ivar: inputFalloffSpecular
@property (retain, nonatomic) NSNumber *inputFeathering; // ivar: inputFeathering
@property (retain, nonatomic) NSNumber *inputFlooding; // ivar: inputFlooding
@property (retain, nonatomic) NSNumber *inputGamma; // ivar: inputGamma
@property (retain, nonatomic) NSNumber *inputGlintThreshold; // ivar: inputGlintThreshold
@property (retain, nonatomic) NSNumber *inputInterPeakMin; // ivar: inputInterPeakMin
@property (retain, nonatomic) NSNumber *inputIntersect; // ivar: inputIntersect
@property (retain, nonatomic) CIImage *inputIrisMask; // ivar: inputIrisMask
@property (retain, nonatomic) NSNumber *inputMaxInterDispersion; // ivar: inputMaxInterDispersion
@property (retain, nonatomic) NSNumber *inputMidSpectrumWhiteOffsetsX; // ivar: inputMidSpectrumWhiteOffsetsX
@property (retain, nonatomic) NSNumber *inputMidSpectrumWhiteOffsetsY; // ivar: inputMidSpectrumWhiteOffsetsY
@property (retain, nonatomic) NSNumber *inputMinInterDispersion; // ivar: inputMinInterDispersion
@property (retain, nonatomic) NSNumber *inputMinMaskDiff; // ivar: inputMinMaskDiff
@property (retain, nonatomic) NSNumber *inputOrientationHint; // ivar: inputOrientationHint
@property (retain, nonatomic) NSNumber *inputOrientationScale; // ivar: inputOrientationScale
@property (retain, nonatomic) CIVector *inputOriginLeft; // ivar: inputOriginLeft
@property (retain, nonatomic) CIVector *inputOriginRight; // ivar: inputOriginRight
@property (retain, nonatomic) NSNumber *inputParam; // ivar: inputParam
@property (retain, nonatomic) NSNumber *inputParam2; // ivar: inputParam2
@property (retain, nonatomic) NSNumber *inputParam3; // ivar: inputParam3
@property (retain, nonatomic) NSNumber *inputParam4; // ivar: inputParam4
@property (retain, nonatomic) CIImage *inputPrimary; // ivar: inputPrimary
@property (retain, nonatomic) CIVector *inputPupilCenterLeft; // ivar: inputPupilCenterLeft
@property (retain, nonatomic) CIVector *inputPupilCenterRight; // ivar: inputPupilCenterRight
@property (retain, nonatomic) NSNumber *inputRadiusDensity; // ivar: inputRadiusDensity
@property (retain, nonatomic) NSNumber *inputRadiusRepair; // ivar: inputRadiusRepair
@property (retain, nonatomic) NSNumber *inputRadiusSpecular; // ivar: inputRadiusSpecular
@property (retain, nonatomic) NSNumber *inputRecover; // ivar: inputRecover
@property (retain, nonatomic) NSNumber *inputRefilterRange; // ivar: inputRefilterRange
@property (retain, nonatomic) NSNumber *inputRefilterSpace; // ivar: inputRefilterSpace
@property (retain, nonatomic) NSNumber *inputRepairChroma; // ivar: inputRepairChroma
@property (retain, nonatomic) NSNumber *inputRepairDarken; // ivar: inputRepairDarken
@property (retain, nonatomic) NSNumber *inputRepairDither; // ivar: inputRepairDither
@property (retain, nonatomic) NSNumber *inputRepairPercent; // ivar: inputRepairPercent
@property (retain, nonatomic) NSNumber *inputRepairPercentile; // ivar: inputRepairPercentile
@property (retain, nonatomic) NSNumber *inputRepairSource; // ivar: inputRepairSource
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (retain, nonatomic) CIImage *inputScleraMask; // ivar: inputScleraMask
@property (retain, nonatomic) NSNumber *inputScleraProtectionThresholdIrisLarge; // ivar: inputScleraProtectionThresholdIrisLarge
@property (retain, nonatomic) NSNumber *inputScleraProtectionThresholdIrisMedium; // ivar: inputScleraProtectionThresholdIrisMedium
@property (retain, nonatomic) NSNumber *inputScleraProtectionThresholdIrisSmall; // ivar: inputScleraProtectionThresholdIrisSmall
@property (retain, nonatomic) NSNumber *inputScleraProtectionThresholdScleraLarge; // ivar: inputScleraProtectionThresholdScleraLarge
@property (retain, nonatomic) NSNumber *inputScleraProtectionThresholdScleraMedium; // ivar: inputScleraProtectionThresholdScleraMedium
@property (retain, nonatomic) NSNumber *inputScleraProtectionThresholdScleraSmall; // ivar: inputScleraProtectionThresholdScleraSmall
@property (retain, nonatomic) NSNumber *inputScleraProtectionThresholdSkinLarge; // ivar: inputScleraProtectionThresholdSkinLarge
@property (retain, nonatomic) NSNumber *inputScleraProtectionThresholdSkinMedium; // ivar: inputScleraProtectionThresholdSkinMedium
@property (retain, nonatomic) NSNumber *inputScleraProtectionThresholdSkinSmall; // ivar: inputScleraProtectionThresholdSkinSmall
@property (retain, nonatomic) NSNumber *inputScleraThreshold; // ivar: inputScleraThreshold
@property (retain, nonatomic) NSNumber *inputSearchLong; // ivar: inputSearchLong
@property (retain, nonatomic) NSNumber *inputSearchShort; // ivar: inputSearchShort
@property (retain, nonatomic) CIImage *inputSecondary; // ivar: inputSecondary
@property (retain, nonatomic) NSNumber *inputShowMask; // ivar: inputShowMask
@property (retain, nonatomic) CIVector *inputSize; // ivar: inputSize
@property (retain, nonatomic) CIImage *inputSkinMask; // ivar: inputSkinMask
@property (retain, nonatomic) NSNumber *inputSkinProtectionThresholdLarge; // ivar: inputSkinProtectionThresholdLarge
@property (retain, nonatomic) NSNumber *inputSkinProtectionThresholdMedium; // ivar: inputSkinProtectionThresholdMedium
@property (retain, nonatomic) NSNumber *inputSkinProtectionThresholdSmall; // ivar: inputSkinProtectionThresholdSmall
@property (retain, nonatomic) NSNumber *inputSkinThreshold; // ivar: inputSkinThreshold
@property (retain, nonatomic) NSNumber *inputSkinThresholdMed; // ivar: inputSkinThresholdMed
@property (retain, nonatomic) NSNumber *inputSpecArea; // ivar: inputSpecArea
@property (retain, nonatomic) NSNumber *inputSpecAreaScale; // ivar: inputSpecAreaScale
@property (retain, nonatomic) NSNumber *inputSpecIntensity; // ivar: inputSpecIntensity
@property (retain, nonatomic) NSNumber *inputSpecMax; // ivar: inputSpecMax
@property (retain, nonatomic) NSNumber *inputSpecMin; // ivar: inputSpecMin
@property (retain, nonatomic) NSNumber *inputSpecular; // ivar: inputSpecular
@property (retain, nonatomic) NSNumber *inputSpecularCutoff; // ivar: inputSpecularCutoff
@property (retain, nonatomic) NSNumber *inputSplat; // ivar: inputSplat
@property (retain, nonatomic) NSNumber *inputTargetClosing; // ivar: inputTargetClosing
@property (retain, nonatomic) NSNumber *inputUseFaceSegmentationMask; // ivar: inputUseFaceSegmentationMask
@property (retain, nonatomic) NSNumber *inputWhiteCutoff; // ivar: inputWhiteCutoff


-(id)irisProtectionMaskWithThresholdIris:(float)arg0 thresholdSclera:(float)arg1 thresholdSkin:(float)arg2 ;
-(id)outputImage;
-(id)skinProtectionMaskWithThreshold:(float)arg0 ;


@end


#endif