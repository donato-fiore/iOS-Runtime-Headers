// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNOPTIMIZERADAM_H
#define MPSNNOPTIMIZERADAM_H

@protocol OS_dispatch_semaphore;


#import "MPSNNOptimizer.h"

@interface MPSNNOptimizerAdam : MPSNNOptimizer {
    NSObject<OS_dispatch_semaphore> *_timeStepSemaphore;
}


@property (readonly, nonatomic) CGFloat beta1; // ivar: _beta1
@property (readonly, nonatomic) CGFloat beta2; // ivar: _beta2
@property (readonly, nonatomic) float epsilon; // ivar: _epsilon
@property (nonatomic) NSUInteger timeStep; // ivar: _timeStep


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 beta1:(CGFloat)arg1 beta2:(CGFloat)arg2 epsilon:(float)arg3 timeStep:(NSUInteger)arg4 optimizerDescriptor:(id)arg5 ;
-(id)initWithDevice:(id)arg0 learningRate:(float)arg1 ;
-(id)initWithDevice:(id)arg0 optimizerDescriptor:(id)arg1 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 batchNormalizationGradientState:(id)arg1 batchNormalizationSourceState:(id)arg2 inputMomentumVectors:(id)arg3 inputVelocityVectors:(id)arg4 maximumVelocityVectors:(id)arg5 resultState:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg0 batchNormalizationGradientState:(id)arg1 batchNormalizationSourceState:(id)arg2 inputMomentumVectors:(id)arg3 inputVelocityVectors:(id)arg4 resultState:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 batchNormalizationState:(id)arg1 inputMomentumVectors:(id)arg2 inputVelocityVectors:(id)arg3 maximumVelocityVectors:(id)arg4 resultState:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 batchNormalizationState:(id)arg1 inputMomentumVectors:(id)arg2 inputVelocityVectors:(id)arg3 resultState:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 convolutionGradientState:(id)arg1 convolutionSourceState:(id)arg2 inputMomentumVectors:(id)arg3 inputVelocityVectors:(id)arg4 maximumVelocityVectors:(id)arg5 resultState:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg0 convolutionGradientState:(id)arg1 convolutionSourceState:(id)arg2 inputMomentumVectors:(id)arg3 inputVelocityVectors:(id)arg4 resultState:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientMatrix:(id)arg1 inputValuesMatrix:(id)arg2 inputMomentumMatrix:(id)arg3 inputVelocityMatrix:(id)arg4 maximumVelocityMatrix:(id)arg5 resultValuesMatrix:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientMatrix:(id)arg1 inputValuesMatrix:(id)arg2 inputMomentumMatrix:(id)arg3 inputVelocityMatrix:(id)arg4 resultValuesMatrix:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientVector:(id)arg1 inputValuesVector:(id)arg2 inputMomentumVector:(id)arg3 inputVelocityVector:(id)arg4 maximumVelocityVector:(id)arg5 resultValuesVector:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientVector:(id)arg1 inputValuesVector:(id)arg2 inputMomentumVector:(id)arg3 inputVelocityVector:(id)arg4 resultValuesVector:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif