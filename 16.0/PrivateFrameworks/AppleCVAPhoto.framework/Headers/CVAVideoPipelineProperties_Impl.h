// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVAVIDEOPIPELINEPROPERTIES_IMPL_H
#define CVAVIDEOPIPELINEPROPERTIES_IMPL_H

@class NSString, NSDictionary, NSArray;
@protocol CVAVideoPipelinePropertiesSPI;

#import <Foundation/Foundation.h>


@interface CVAVideoPipelineProperties_Impl : NSObject <CVAVideoPipelinePropertiesSPI>



@property float alphaCoeffFilterColorStd; // ivar: _alphaCoeffFilterColorStd
@property float alphaCoeffFilterColorStdFast; // ivar: _alphaCoeffFilterColorStdFast
@property float alphaContrastExponent; // ivar: _alphaContrastExponent
@property float alphaGammaExponent; // ivar: _alphaGammaExponent
@property NSUInteger alphaMattePixelBufferHeight; // ivar: _alphaMattePixelBufferHeight
@property (readonly) unsigned int alphaMattePixelBufferPixelFormat; // ivar: _alphaMattePixelBufferPixelFormat
@property NSUInteger alphaMattePixelBufferWidth; // ivar: _alphaMattePixelBufferWidth
@property float alphaMaxLaplacian; // ivar: _alphaMaxLaplacian
@property int backgroundDisparityStatsWindowSize; // ivar: _backgroundDisparityStatsWindowSize
@property float backgroundDisparityUpdateRate; // ivar: _backgroundDisparityUpdateRate
@property float backgroundSeparationLikelihoodHigh; // ivar: _backgroundSeparationLikelihoodHigh
@property float backgroundSeparationLikelihoodLow; // ivar: _backgroundSeparationLikelihoodLow
@property BOOL canSkipDisparityHoleFillingAndTemporalRejection; // ivar: _canSkipDisparityHoleFillingAndTemporalRejection
@property float centerDeltaCanonicalDisparity; // ivar: _centerDeltaCanonicalDisparity
@property float closeDisparityPercentile; // ivar: _closeDisparityPercentile
@property float colorPixelBufferFocalLength_mm; // ivar: _colorPixelBufferFocalLength_mm
@property float colorPixelBufferFocalRatio; // ivar: _colorPixelBufferFocalRatio
@property NSUInteger colorPixelBufferHeight; // ivar: _colorPixelBufferHeight
@property float colorPixelBufferPixelSize_um; // ivar: _colorPixelBufferPixelSize_um
@property NSUInteger colorPixelBufferWidth; // ivar: _colorPixelBufferWidth
@property (readonly, copy) NSString *debugDescription;
@property float deltaCanonicalDisparity; // ivar: _deltaCanonicalDisparity
@property float deltaDepth; // ivar: _deltaDepth
@property int depthErosionRadius; // ivar: _depthErosionRadius
@property float depthPixelBufferMaxLeftOcclusionDisparityChange; // ivar: _depthPixelBufferMaxLeftOcclusionDisparityChange
@property float depthPixelBufferMaxRightOcclusionDisparityChange; // ivar: _depthPixelBufferMaxRightOcclusionDisparityChange
@property float depthPixelBufferOffset; // ivar: _depthPixelBufferOffset
@property float depthPixelBufferScale; // ivar: _depthPixelBufferScale
@property int depthPixelBufferXPadding; // ivar: _depthPixelBufferXPadding
@property int depthPixelBufferXReplication; // ivar: _depthPixelBufferXReplication
@property int depthPixelBufferYPadding; // ivar: _depthPixelBufferYPadding
@property int depthPixelBufferYReplication; // ivar: _depthPixelBufferYReplication
@property float depthQualityMetricFocalPlaneOffsetMeters; // ivar: _depthQualityMetricFocalPlaneOffsetMeters
@property (readonly, copy) NSString *description;
@property float disparityFilterColorStd; // ivar: _disparityFilterColorStd
@property float disparityFilterUpdateRate; // ivar: _disparityFilterUpdateRate
@property int disparityPushingBackgroundToForegroundDisparityDifference; // ivar: _disparityPushingBackgroundToForegroundDisparityDifference
@property float disparityStereoBaselineMeters; // ivar: _disparityStereoBaselineMeters
@property float disparityStereoFocalLengthPixels; // ivar: _disparityStereoFocalLengthPixels
@property float dsCanonicalHighScale; // ivar: _dsCanonicalHighScale
@property float dsCanonicalHighThld; // ivar: _dsCanonicalHighThld
@property float dsCanonicalLowScale; // ivar: _dsCanonicalLowScale
@property float dsCanonicalLowThld; // ivar: _dsCanonicalLowThld
@property float fNumberMultiplier; // ivar: _fNumberMultiplier
@property (retain) NSDictionary *faceKitProcessOutputOverride; // ivar: _faceKitProcessOutputOverride
@property float faceSizeRatioInFocus; // ivar: _faceSizeRatioInFocus
@property float focusDistanceOverride; // ivar: _focusDistanceOverride
@property NSUInteger focusStatisticsXTileCount; // ivar: _focusStatisticsXTileCount
@property NSUInteger focusStatisticsYTileCount; // ivar: _focusStatisticsYTileCount
@property float focusThresholdHardness; // ivar: _focusThresholdHardness
@property float focusUpdateRateFast; // ivar: _focusUpdateRateFast
@property float focusUpdateRateSlow; // ivar: _focusUpdateRateSlow
@property float foregroundMaskDilationRadius; // ivar: _foregroundMaskDilationRadius
@property float foregroundPercentile; // ivar: _foregroundPercentile
@property float gainMultiplierNoiseBitCalculation; // ivar: _gainMultiplierNoiseBitCalculation
@property int guidedFilterHeight; // ivar: _guidedFilterHeight
@property float guidedFilterMinDistToDeweight; // ivar: _guidedFilterMinDistToDeweight
@property float guidedFilterUnconfidentWeight; // ivar: _guidedFilterUnconfidentWeight
@property int guidedFilterWidth; // ivar: _guidedFilterWidth
@property (readonly) NSUInteger hash;
@property float infConvolutionDownsampling; // ivar: _infConvolutionDownsampling
@property NSUInteger inputDisparityPixelBufferHeight; // ivar: _inputDisparityPixelBufferHeight
@property unsigned int inputDisparityPixelBufferPixelFormat; // ivar: _inputDisparityPixelBufferPixelFormat
@property NSUInteger inputDisparityPixelBufferWidth; // ivar: _inputDisparityPixelBufferWidth
@property NSUInteger inputToOutputDisparityPixelBufferRotation; // ivar: _inputToOutputDisparityPixelBufferRotation
@property int invalidDisparityRatioStatsWindowSize; // ivar: _invalidDisparityRatioStatsWindowSize
@property float invalidDisparityRatioUpdateRate; // ivar: _invalidDisparityRatioUpdateRate
@property float laplacianLimitingBlurSize; // ivar: _laplacianLimitingBlurSize
@property float laplacianLimitingDownsampling; // ivar: _laplacianLimitingDownsampling
@property float linearDeltaDepthMultiplier; // ivar: _linearDeltaDepthMultiplier
@property float linearDeltaDepthOffset; // ivar: _linearDeltaDepthOffset
@property float luxMultiplierNoiseBitCalculation; // ivar: _luxMultiplierNoiseBitCalculation
@property float mattingUpdateRate; // ivar: _mattingUpdateRate
@property float mattingUpdateRateFast; // ivar: _mattingUpdateRateFast
@property float maxDeltaCanonicalDisparity; // ivar: _maxDeltaCanonicalDisparity
@property float maxDisparityFillingDistFromForeground; // ivar: _maxDisparityFillingDistFromForeground
@property float maxDisparityFillingInconsistency; // ivar: _maxDisparityFillingInconsistency
@property int maxDistToPushDisparityEdgesFwd; // ivar: _maxDistToPushDisparityEdgesFwd
@property int maxDistToPushDisparityEdgesRev; // ivar: _maxDistToPushDisparityEdgesRev
@property int maxFramesWithoutFace; // ivar: _maxFramesWithoutFace
@property float maximumSimilarityToKeepDisparity; // ivar: _maximumSimilarityToKeepDisparity
@property float minDeltaCanonicalDisparity; // ivar: _minDeltaCanonicalDisparity
@property float minimumConfidenceToKeepDisparity; // ivar: _minimumConfidenceToKeepDisparity
@property BOOL modulateFocalRatio; // ivar: _modulateFocalRatio
@property float offsetNoiseBitCalculation; // ivar: _offsetNoiseBitCalculation
@property float outputDisparityOffset; // ivar: _outputDisparityOffset
@property NSUInteger outputDisparityPixelBufferHeight; // ivar: _outputDisparityPixelBufferHeight
@property (readonly) unsigned int outputDisparityPixelBufferPixelFormat; // ivar: _outputDisparityPixelBufferPixelFormat
@property NSUInteger outputDisparityPixelBufferWidth; // ivar: _outputDisparityPixelBufferWidth
@property float portraitStyleStrengthOverride; // ivar: _portraitStyleStrengthOverride
@property NSUInteger proxyToFaceEffectLerpNumFrames; // ivar: _proxyToFaceEffectLerpNumFrames
@property int rawShiftInvalidThreshold; // ivar: _rawShiftInvalidThreshold
@property float referenceDisparity; // ivar: _referenceDisparity
@property int relightDisplayMode; // ivar: _relightDisplayMode
@property float relightEffectStrength; // ivar: _relightEffectStrength
@property float renderingDisparityBlurRadius; // ivar: _renderingDisparityBlurRadius
@property float renderingDisparityUpdateRate; // ivar: _renderingDisparityUpdateRate
@property float renderingLensFocalLength; // ivar: _renderingLensFocalLength
@property float sdofStateMachineIntensityIncrement; // ivar: _sdofStateMachineIntensityIncrement
@property CGFloat sdofStateMachineMaxOrientationDifference; // ivar: _sdofStateMachineMaxOrientationDifference
@property int segmentationBinarizationThreshold; // ivar: _segmentationBinarizationThreshold
@property float stableBackgroundDisparitySumVariance; // ivar: _stableBackgroundDisparitySumVariance
@property float stableInvalidDisparityRatio; // ivar: _stableInvalidDisparityRatio
@property CGFloat stageLightStageMachineMaxOrientationDifference; // ivar: _stageLightStageMachineMaxOrientationDifference
@property float stageLightStateMachineIntensityIncrement; // ivar: _stageLightStateMachineIntensityIncrement
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedColorPixelBufferPixelFormats; // ivar: _supportedColorPixelBufferPixelFormats
@property (readonly) NSArray *supportedInputSegmentationPixelBufferPixelFormats; // ivar: _supportedInputSegmentationPixelBufferPixelFormats
@property BOOL supportsForegroundBlur; // ivar: _supportsForegroundBlur
@property float unstableBackgroundDisparitySumVariance; // ivar: _unstableBackgroundDisparitySumVariance
@property float unstableInvalidDisparityRatio; // ivar: _unstableInvalidDisparityRatio
@property (readonly) NSUInteger videoPipelineDevice; // ivar: _videoPipelineDevice


-(BOOL)validateWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForVideoPipelineDevice:(NSUInteger)arg0 ;


@end


#endif