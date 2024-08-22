// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCNORMALIZATIONGPUDEVICEOPS_H
#define MLCNORMALIZATIONGPUDEVICEOPS_H

@class NSArray;


#import "MLCGPUDeviceOps.h"

@interface MLCNormalizationGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) id *batchNormBetaGammaDeltaKernel; // ivar: _batchNormBetaGammaDeltaKernel
@property (retain, nonatomic) id *batchNormMeanKernel; // ivar: _batchNormMeanKernel
@property (retain, nonatomic) id *batchNormVarianceKernel; // ivar: _batchNormVarianceKernel
@property (nonatomic) NSUInteger groupCount; // ivar: _groupCount
@property (retain, nonatomic) id *instanceNormMovingMeanVarianceKernel; // ivar: _instanceNormMovingMeanVarianceKernel
@property (nonatomic) BOOL isFusedWithArithmeticLayer; // ivar: _isFusedWithArithmeticLayer
@property (nonatomic) float momentum; // ivar: _momentum
@property (retain, nonatomic) id *normalizationBetaGradient; // ivar: _normalizationBetaGradient
@property (retain, nonatomic) id *normalizationComputedMean; // ivar: _normalizationComputedMean
@property (retain, nonatomic) id *normalizationComputedVariance; // ivar: _normalizationComputedVariance
@property (retain, nonatomic) id *normalizationGammaGradient; // ivar: _normalizationGammaGradient
@property (retain, nonatomic) id *normalizationInputNormalized; // ivar: _normalizationInputNormalized
@property (retain, nonatomic) id *normalizationInverseSqrtVariance; // ivar: _normalizationInverseSqrtVariance
@property (retain, nonatomic) id *normalizationMultiGPUChildOps; // ivar: _normalizationMultiGPUChildOps
@property (retain, nonatomic) id *normalizationRecomputeResultKernel; // ivar: _normalizationRecomputeResultKernel
@property (retain, nonatomic) id *normalizationSumBetaGammaDeltaKernel; // ivar: _normalizationSumBetaGammaDeltaKernel
@property (retain, nonatomic) NSArray *normalizedShape; // ivar: _normalizedShape
@property (nonatomic) float varianceEpsilon; // ivar: _varianceEpsilon


+(id)deviceOpsWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;
-(id)initWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;


@end


#endif