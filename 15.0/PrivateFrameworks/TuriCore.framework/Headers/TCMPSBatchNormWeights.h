// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSBATCHNORMWEIGHTS_H
#define TCMPSBATCHNORMWEIGHTS_H

@class MPSVectorDescriptor, MPSNNOptimizerAdam, MPSNNOptimizerStochasticGradientDescent, MPSVector, NSString, MPSCNNNormalizationGammaAndBetaState, MPSCNNNormalizationMeanAndVarianceState;
@protocol MPSCNNBatchNormalizationDataSource, MTLDevice, MTLCommandQueue, MTLBuffer, TCMPSConvolutionWeightsOptimizing;

#import <Foundation/Foundation.h>


@interface TCMPSBatchNormWeights : NSObject <MPSCNNBatchNormalizationDataSource>

 {
    NSUInteger _channels;
    *float _betaPointer;
    *float _gammaPointer;
    *float _betaMomentumPointer;
    *float _betaVelocityPointer;
    *float _gammaVelocityPointer;
    *float _gammaMomentumPointer;
    *float _movingVariancePointer;
    *float _movingMeanPointer;
    OptimizerOptions _optimizerOptions;
    float t;
    float _batchNormEpsilon;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _kernelParamsBinaryName;
    MPSVectorDescriptor *vDesc;
    MPSNNOptimizerAdam *adamGamma;
    MPSNNOptimizerAdam *adamBeta;
    MPSNNOptimizerStochasticGradientDescent *sgdGamma;
    MPSNNOptimizerStochasticGradientDescent *sgdBeta;
    MPSNNOptimizerStochasticGradientDescent *mov_avg_updater;
    MPSNNOptimizerStochasticGradientDescent *mov_var_updater;
    id<MTLDevice> *dev;
    id<MTLCommandQueue> *cq;
    BOOL use_sgd_opt;
    id<MTLBuffer> *gammaMomentumBuffer;
    id<MTLBuffer> *betaMomentumBuffer;
    id<MTLBuffer> *gammaVelocityBuffer;
    id<MTLBuffer> *betaVelocityBuffer;
    id<MTLBuffer> *gammaBuffer;
    id<MTLBuffer> *betaBuffer;
    id<MTLBuffer> *movingVarianceBuffer;
    id<MTLBuffer> *movingMeanBuffer;
}


@property (readonly, nonatomic) MPSVector *betaMomentumVector; // ivar: _betaMomentumVector
@property (readonly, nonatomic) MPSVector *betaVelocityVector; // ivar: _betaVelocityVector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MPSCNNNormalizationGammaAndBetaState *gammaBetaState; // ivar: _gammaBetaState
@property (readonly, nonatomic) MPSVector *gammaMomentumVector; // ivar: _gammaMomentumVector
@property (readonly, nonatomic) MPSVector *gammaVelocityVector; // ivar: _gammaVelocityVector
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *internalLabel; // ivar: _label
@property (readonly, nonatomic) MPSCNNNormalizationMeanAndVarianceState *meanVarianceState; // ivar: _meanVarianceState
@property (readonly, nonatomic) MPSVector *movingMeanVector; // ivar: _movingMeanVector
@property (readonly, nonatomic) MPSVector *movingVarianceVector; // ivar: _movingVarianceVector
@property (readonly, nonatomic) NSObject<TCMPSConvolutionWeightsOptimizing> *optimizer; // ivar: _optimizer
@property (readonly) Class superclass;


-(*float)beta;
-(*float)gamma;
-(*float)mean;
-(*float)variance;
-(BOOL)load;
-(BOOL)updateGammaAndBetaWithBatchNormalizationState:(id)arg0 ;
-(NSUInteger)numberOfFeatureChannels;
-(float)epsilon;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithChannels:(NSUInteger)arg0 kernelParamsBinaryName:(char *)arg1 device:(id)arg2 cmd_queue:(id)arg3 gamma:(*float)arg4 beta:(*float)arg5 moving_avg:(*float)arg6 moving_var:(*float)arg7 optimizerOptions:(struct OptimizerOptions )arg8 batchNormEpsilon:(float)arg9 ;
-(id)label;
-(id)updateGammaAndBetaWithCommandBuffer:(id)arg0 batchNormalizationState:(id)arg1 ;
-(void)checkpointWithCommandQueue:(id)arg0 ;
-(void)loadBeta:(*float)arg0 ;
-(void)loadGamma:(*float)arg0 ;
-(void)loadMovingAvg:(*float)arg0 ;
-(void)loadMovingVar:(*float)arg0 ;
-(void)purge;
-(void)setLearningRate:(float)arg0 ;
-(void)set_cq:(id)arg0 ;


@end


#endif