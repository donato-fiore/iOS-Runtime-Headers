// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNOPTIMIZERSTOCHASTICGRADIENTDESCENT_H
#define MPSNNOPTIMIZERSTOCHASTICGRADIENTDESCENT_H



#import "MPSNNOptimizer.h"

@interface MPSNNOptimizerStochasticGradientDescent : MPSNNOptimizer

@property (readonly, nonatomic) float momentumScale; // ivar: _momentumScale
@property (readonly, nonatomic) BOOL useNesterovMomentum; // ivar: _useNesterovMomentum
@property (readonly, nonatomic) BOOL useNestrovMomentum;


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 learningRate:(float)arg1 ;
-(id)initWithDevice:(id)arg0 momentumScale:(float)arg1 useNesterovMomentum:(BOOL)arg2 optimizerDescriptor:(id)arg3 ;
-(id)initWithDevice:(id)arg0 momentumScale:(float)arg1 useNestrovMomentum:(BOOL)arg2 optimizerDescriptor:(id)arg3 ;
-(id)initWithDevice:(id)arg0 optimizerDescriptor:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 batchNormalizationGradientState:(id)arg1 batchNormalizationSourceState:(id)arg2 inputMomentumVectors:(id)arg3 resultState:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 batchNormalizationState:(id)arg1 inputMomentumVectors:(id)arg2 resultState:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 convolutionGradientState:(id)arg1 convolutionSourceState:(id)arg2 inputMomentumVectors:(id)arg3 resultState:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientMatrix:(id)arg1 inputValuesMatrix:(id)arg2 inputMomentumMatrix:(id)arg3 resultValuesMatrix:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientVector:(id)arg1 inputValuesVector:(id)arg2 inputMomentumVector:(id)arg3 resultValuesVector:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif