// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHADAMOPTIMIZER_H
#define MPSGRAPHADAMOPTIMIZER_H



#import "MPSGraphOptimizer.h"
#import "MPSGraphTensor.h"
#import "MPSGraphVariableOp.h"

@interface MPSGraphAdamOptimizer : MPSGraphOptimizer {
    MPSGraphTensor *_beta1Tensor;
    MPSGraphTensor *_beta2Tensor;
    MPSGraphTensor *_epsilonTensor;
    MPSGraphVariableOp *_iterationsVariable;
}




-(id)initWithGraph:(id)arg0 learningRateTensor:(id)arg1 momentumTensors:(id)arg2 velocityTensors:(id)arg3 maximumVelocityTensors:(id)arg4 beta1:(float)arg5 beta2:(float)arg6 epsilon:(float)arg7 iterations:(NSUInteger)arg8 trainableVariables:(id)arg9 variablesToGradientTensorMap:(id)arg10 name:(id)arg11 ;
-(id)initWithGraph:(id)arg0 learningRateTensor:(id)arg1 trainableVariables:(id)arg2 variablesToGradientTensorMap:(id)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 lossTensor:(id)arg1 learningRateTensor:(id)arg2 beta1:(float)arg3 beta2:(float)arg4 epsilon:(float)arg5 iterations:(NSUInteger)arg6 trainableVariables:(id)arg7 name:(id)arg8 ;
-(id)initWithGraph:(id)arg0 lossTensor:(id)arg1 learningRateTensor:(id)arg2 momentumTensors:(id)arg3 velocityTensors:(id)arg4 maximumVelocityTensors:(id)arg5 beta1:(float)arg6 beta2:(float)arg7 epsilon:(float)arg8 iterations:(NSUInteger)arg9 trainableVariables:(id)arg10 name:(id)arg11 ;
-(id)initWithGraph:(id)arg0 lossTensor:(id)arg1 learningRateTensor:(id)arg2 trainableVariables:(id)arg3 name:(id)arg4 ;


@end


#endif