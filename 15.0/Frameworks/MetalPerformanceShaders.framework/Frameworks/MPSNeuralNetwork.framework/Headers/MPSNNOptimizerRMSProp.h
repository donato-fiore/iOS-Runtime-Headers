// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNOPTIMIZERRMSPROP_H
#define MPSNNOPTIMIZERRMSPROP_H



#import "MPSNNOptimizer.h"

@interface MPSNNOptimizerRMSProp : MPSNNOptimizer

@property (readonly, nonatomic) BOOL centered; // ivar: _centered
@property (readonly, nonatomic) CGFloat decay; // ivar: _decay
@property (readonly, nonatomic) float epsilon; // ivar: _epsilon
@property (readonly, nonatomic) CGFloat momentumScale; // ivar: _momentumScale


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 decay:(CGFloat)arg1 epsilon:(float)arg2 momentumScale:(CGFloat)arg3 centered:(BOOL)arg4 optimizerDescriptor:(id)arg5 ;
-(id)initWithDevice:(id)arg0 decay:(CGFloat)arg1 epsilon:(float)arg2 optimizerDescriptor:(id)arg3 ;
-(id)initWithDevice:(id)arg0 learningRate:(float)arg1 ;
-(id)initWithDevice:(id)arg0 optimizerDescriptor:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 batchNormalizationGradientState:(id)arg1 batchNormalizationSourceState:(id)arg2 inputSumOfSquaresVectors:(id)arg3 resultState:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 batchNormalizationState:(id)arg1 inputSumOfSquaresVectors:(id)arg2 resultState:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 convolutionGradientState:(id)arg1 convolutionSourceState:(id)arg2 inputSumOfSquaresVectors:(id)arg3 resultState:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientMatrix:(id)arg1 inputValuesMatrix:(id)arg2 inputSumOfSquaresMatrix:(id)arg3 inputWeightedSumMatrix:(id)arg4 inputMomentumMatrix:(id)arg5 resultValuesMatrix:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientMatrix:(id)arg1 inputValuesMatrix:(id)arg2 inputSumOfSquaresMatrix:(id)arg3 resultValuesMatrix:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientVector:(id)arg1 inputValuesVector:(id)arg2 inputSumOfSquaresVector:(id)arg3 inputWeightedSumVector:(id)arg4 inputMomentumVector:(id)arg5 resultValuesVector:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientVector:(id)arg1 inputValuesVector:(id)arg2 inputSumOfSquaresVector:(id)arg3 resultValuesVector:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif