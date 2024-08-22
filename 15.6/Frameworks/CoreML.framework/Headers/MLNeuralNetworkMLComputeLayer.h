// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLNEURALNETWORKMLCOMPUTELAYER_H
#define MLNEURALNETWORKMLCOMPUTELAYER_H


#import <Foundation/Foundation.h>


@interface MLNeuralNetworkMLComputeLayer : NSObject



+(id)adamOptimizerWithLearningRate:(CGFloat)arg0 beta1:(CGFloat)arg1 beta2:(CGFloat)arg2 epsilon:(CGFloat)arg3 timeStep:(NSUInteger)arg4 ;
+(id)batchNormLayerWithFeatureChannels:(NSUInteger)arg0 varianceEpsilon:(float)arg1 gamma:(id)arg2 beta:(id)arg3 mean:(id)arg4 variance:(id)arg5 ;
+(id)categoricalCrossEntropyLossWithNumberOfClasses:(NSUInteger)arg0 ;
+(id)concatNDLayerWithAxis:(NSUInteger)arg0 ;
+(id)convolutionalLayerWithKernelHeight:(NSUInteger)arg0 kernelWidth:(NSUInteger)arg1 inputChannels:(NSUInteger)arg2 outputChannels:(NSUInteger)arg3 strideInX:(NSUInteger)arg4 strideInY:(NSUInteger)arg5 dilationRateInX:(NSUInteger)arg6 dilationRateInY:(NSUInteger)arg7 nGroups:(NSUInteger)arg8 weight:(id)arg9 bias:(id)arg10 paddingPolicy:(int)arg11 ;
+(id)fullyConnectedLayerWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputChannels:(NSUInteger)arg2 outputChannels:(NSUInteger)arg3 weight:(id)arg4 bias:(id)arg5 ;
+(id)leakyRelu;
+(id)matMulLayerWithTransposesX:(BOOL)arg0 transposesY:(BOOL)arg1 ;
+(id)meanSquaredErrorLoss;
+(id)poolingLayerWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 strideInX:(NSUInteger)arg2 strideInY:(NSUInteger)arg3 paddingPolicy:(int)arg4 poolingType:(int)arg5 ;
+(id)relu;
+(id)reluNLayerWithAlpha:(float)arg0 beta:(float)arg1 ;
+(id)reshapeLayerWithChannelFirstOrderingAndTargetShape:(id)arg0 ;
+(id)sgdOptimizerWithLearningRate:(CGFloat)arg0 momentum:(CGFloat)arg1 ;
+(id)sigmoid;
+(id)softmax;
+(id)transposeLayerWithAxes:(id)arg0 ;
+(id)uniDirectionalLSTMLayerWithInputSize:(NSUInteger)arg0 outputSize:(NSUInteger)arg1 inputWeightsData:(id)arg2 recursionWeightsData:(id)arg3 hasBias:(BOOL)arg4 biasTermsData:(id)arg5 sequenceOutput:(BOOL)arg6 inputGateActivation:(id)arg7 cellGateActivation:(id)arg8 hiddenOutputActivation:(id)arg9 ;


@end


#endif