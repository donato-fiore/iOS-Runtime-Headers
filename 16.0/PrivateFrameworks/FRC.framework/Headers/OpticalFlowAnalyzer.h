// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTICALFLOWANALYZER_H
#define OPTICALFLOWANALYZER_H

@class NSArray;
@protocol MTLComputePipelineState, OS_os_log;


#import "FRCMetalBase.h"
#import "FRCScaler.h"

@interface OpticalFlowAnalyzer : FRCMetalBase {
    id<MTLComputePipelineState> *_flowStatisticsKernel;
    id<MTLComputePipelineState> *_crossFlowStatisticsKernel;
    id<MTLComputePipelineState> *_motionHistogramsKernel;
    NSObject<OS_os_log> *_logger;
    NSUInteger _framesToInterpolate;
    ? _timeGap;
    NSArray *_firstFaceHandLegRectangles;
    NSArray *_secondFaceHandLegRectangles;
    float _consistentFlowRandomness;
    float _signErrFlowRandomness;
    float _signAreaFlowRandomness;
    float _zigzagFlowRandomness;
    float _flowDeformation;
    float _flowDeformationSum;
    float _prevFlowRandomnessErr;
    float _prevFlowRandomnessArea;
    BOOL _prevFlowDeformation;
    BOOL _isLargeRandomnessErr;
    ? _safeToInterpolate;
    float jsonConsistencyAreaThreshold;
    float jsonConsistencyAreaPercentageThreshold;
    float jsonConsistencySafeThresholdsForDownsampled;
    float jsonConsistencySafeThresholdsForNonDownsampled;
    float jsonConsistencySafeThresholdsForDownsampledDelta;
    float jsonConsistencySafeThresholdsForNonDownsampledDelta;
    float jsonConsistencySafeThresholdsForDownsampledSloMo;
    float jsonConsistencySafeThresholdsForNonDownsampledSloMo;
    float consistencySafeThresholdsScale;
    float consistencySafeThresholdsScaleForLargeRandomnessErr;
    float jsonRandomnessScoreThreshold;
    float jsonRandomnessScoreThresholdLow;
    float jsonRandomnessAreaThreshold;
    float jsonRandomnessAreaPercentageThresholdHigh;
    float jsonRandomnessAreaPercentageThresholdLow;
    float jsonRandomnessErrThreshold;
    float jsonRandomnessAreaScale;
    float randomnessAreaScale;
    float jsonRandomnessErrorChangeRatioThreshold;
    float jsonRandomnessAreaChangeRatioThreshold;
    float jsonRandomnessErrorChangeRatioThresholdForCameraMotion;
    float jsonRandomnessAreaChangeRatioThresholdForCameraMotion;
    float jsonRandomnessErrorChangeRatioThresholdForStatic;
    float jsonRandomnessAreaChangeRatioThresholdForStatic;
    float randomnessErrorChangeRatioThreshold;
    float randomnessAreaChangeRatioThreshold;
    float jsonConsistentRandomFlowThreshold;
    float jsonConsistentRandomFlowResetAreaChangeRatio;
    float jsonZigzagRandomFlowThreshold;
    float jsonDeformationFlowThreshold;
    float jsonDeformationFlowSumThreshold;
    float jsonHistogramsAnalysisLargeObjectSizeThreshold;
    float jsonHistogramsAnalysisSmallObjectSizeThreshold;
    float jsonSideMotionDominanceThreshold;
    unsigned int jsonSideMotionPixelCountThreshold;
    BOOL _hasCameraMotion;
    BOOL _hasDominantMovingLargeObjects;
    BOOL _hasDominantMovingSmallObjects;
    BOOL _hasStaticBackground;
    ? _motionHistogramsAnalysis;
    ? _prevMotionHistogramsAnalysis;
    ? _motionHistograms;
    NSUInteger _size;
}


@property (nonatomic) BOOL bodyDetectionEnabled; // ivar: _bodyDetectionEnabled
@property (nonatomic) char * deformationBinaryMap; // ivar: _deformationBinaryMap
@property (nonatomic) *int deformationBlockRanges; // ivar: _deformationBlockRanges
@property (readonly, nonatomic) float flowConsistencyFrameScore; // ivar: _flowConsistencyFrameScore
@property (readonly, nonatomic) float flowConsistencyRegionScore; // ivar: _flowConsistencyRegionScore
@property (readonly, nonatomic) NSUInteger gatingCause;
@property (nonatomic) BOOL handDetectionEnabled; // ivar: _handDetectionEnabled
@property (nonatomic) BOOL humanDetectionEnabled; // ivar: _humanDetectionEnabled
@property (nonatomic) NSInteger inputRotation; // ivar: _inputRotation
@property (nonatomic) BOOL inputScaling; // ivar: _inputScaling
@property (nonatomic) BOOL isContinuousDrops; // ivar: _isContinuousDrops
@property (readonly, nonatomic) BOOL isSafeToInterpolate;
@property (nonatomic) BOOL isSmallDrops; // ivar: _isSmallDrops
@property (nonatomic) NSInteger retimingRecipe; // ivar: _retimingRecipe
@property (weak, nonatomic) FRCScaler *scaler; // ivar: _scaler
@property (nonatomic) BOOL shouldRunCrossFlowAnalysis; // ivar: _shouldRunCrossFlowAnalysis
@property (nonatomic) BOOL shouldRunDetection; // ivar: _shouldRunDetection
@property (nonatomic) BOOL shouldRunFlowAnalysis; // ivar: _shouldRunFlowAnalysis
@property (nonatomic) unsigned char timesDidRunDetection; // ivar: _timesDidRunDetection
@property (nonatomic) NSInteger usage; // ivar: _usage
@property (nonatomic) NSUInteger useCase; // ivar: _useCase
@property (nonatomic) BOOL visualizationEnabled; // ivar: _visualizationEnabled


-(BOOL)checkSafetyByBlockConsistency:(struct ? *)arg0 ;
-(BOOL)checkSafetyByScoreAndArea:(struct ? *)arg0 ;
-(BOOL)checkSafetyByStripConsistency:(struct ? *)arg0 ;
-(BOOL)detectCameraRotation;
-(BOOL)detectStaticBackground;
-(NSInteger)detectSpecialMotion;
-(id)extractFaceHandLegInfoFromBuffer:(struct __CVBuffer *)arg0 ;
-(id)findFaceHandLegBlocksFromRectangles:(id)arg0 blockWidth:(NSUInteger)arg1 blockHeight:(NSUInteger)arg2 ;
-(id)init;
-(int)detectDominantDirectionInRegion:(*unsigned int)arg0 ;
-(struct ? )analyzeFlowRandomnessWithPrevFlowBackward:(struct __CVBuffer *)arg0 forward:(struct __CVBuffer *)arg1 lastFrameDuration:(struct ? )arg2 lastNumberOfFrames:(NSUInteger)arg3 flowResFrame:(struct __CVBuffer *)arg4 ;
-(struct ? )analyzeOpticalFlowForward:(struct __CVBuffer *)arg0 backward:(struct __CVBuffer *)arg1 flowResFrame:(struct __CVBuffer *)arg2 ;
-(struct ? )calcCrossFlowStatisticsPrevBackwardFlowTexture:(id)arg0 forwardFlowTexture:(id)arg1 frameTexture:(id)arg2 flowScaleBuffer:(id)arg3 ;
-(struct ? )calcFlowStatisticsForwardFlowTexture:(id)arg0 backwardFlowTexture:(id)arg1 faceHandLegRectangles:(id)arg2 frameTexture:(id)arg3 ;
-(struct ? )processGPUOutputs:(struct ? *)arg0 blockWidth:(NSUInteger)arg1 blockHeight:(NSUInteger)arg2 faceHandLegBoundingBoxBlocks:(id)arg3 ;
-(struct ? )processGPUOutputsRandomness:(struct ? *)arg0 blockWidth:(NSUInteger)arg1 blockHeight:(NSUInteger)arg2 ;
-(struct ? )safeThresholdWithtimeGap:(struct ? )arg0 isDownsampled:(BOOL)arg1 ;
-(unsigned int)averageMagnitude:(*unsigned int)arg0 ;
-(void)analyzeAggregatedStatistics:(struct ? *)arg0 ;
-(void)analyzeDeformation;
-(void)analyzeMotionHistograms;
-(void)calcMotionHistogramForwardFlowTexture:(id)arg0 frameTexture:(id)arg1 ;
-(void)calcStripConsistency:(*float)arg0 stripSize:(NSUInteger)arg1 numStrips:(unsigned int)arg2 ;
-(void)convertOctantDirectionHistogram:(*int)arg0 toPerpendicularQuadrantHistogram:(*unsigned int)arg1 ;
-(void)detectDominantDirection;
-(void)isSafeToInterpolateForConsistencyGatingWithFlowForward:(struct __CVBuffer *)arg0 flowBackward:(struct __CVBuffer *)arg1 flowResFrame:(struct __CVBuffer *)arg2 ;
-(void)isSafeToInterpolateForRandomnessGatingWithPrevFlowBackward:(struct __CVBuffer *)arg0 flowForward:(struct __CVBuffer *)arg1 lastFrameDuration:(struct ? )arg2 lastNumberOfFrames:(NSUInteger)arg3 flowResFrame:(struct __CVBuffer *)arg4 ;
-(void)modulateGatingParametersFromMotionHistogramsAnalysis;
-(void)modulateGatingParametersWithFlowForward:(struct __CVBuffer *)arg0 flowResFrame:(struct __CVBuffer *)arg1 ;
-(void)prepareGatingFrameDropDetector:(id)arg0 numberOfFrames:(NSUInteger)arg1 timeGap:(struct ? )arg2 isContinuousDrops:(BOOL)arg3 enableFlowAnalysis:(BOOL)arg4 enableCrossFlowAnalysis:(BOOL)arg5 ;
-(void)printFaceHandLegRectangles:(id)arg0 ;
-(void)printSideHistograms;
-(void)printStripScores:(struct ? *)arg0 ;
-(void)processGPUOutputsHistograms:(struct ? *)arg0 blockWidth:(NSUInteger)arg1 blockHeight:(NSUInteger)arg2 ;
-(void)processGPUOutputsHistogramsForDeformation:(struct ? *)arg0 blockWidth:(NSUInteger)arg1 blockHeight:(NSUInteger)arg2 ;
-(void)reset;
-(void)runDetectionFromFirstBuffer:(struct __CVBuffer *)arg0 secondBuffer:(struct __CVBuffer *)arg1 ;
-(void)runGatingWithPrevFlowBackward:(struct __CVBuffer *)arg0 flowForward:(struct __CVBuffer *)arg1 flowBackward:(struct __CVBuffer *)arg2 lastFrameDuration:(struct ? )arg3 lastNumberOfFrames:(NSUInteger)arg4 flowResFrame:(struct __CVBuffer *)arg5 ;
-(void)setDetectorsFromDefaults;
-(void)setupMetal;
-(void)updateGatingStats;


@end


#endif