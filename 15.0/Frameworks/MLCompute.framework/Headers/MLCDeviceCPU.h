// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCDEVICECPU_H
#define MLCDEVICECPU_H

@class NSString, NSData, NSArray;
@protocol MLCLayerOperations, MLCEngineDispatch, MLComputeEngineOptimizerUpdate, NSCopying, MLComputeEngineControl;

#import <Foundation/Foundation.h>


@interface MLCDeviceCPU : NSObject <MLCLayerOperations, MLCEngineDispatch, MLComputeEngineOptimizerUpdate, NSCopying, MLComputeEngineControl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *deviceHeap; // ivar: _deviceHeap
@property (readonly, nonatomic) NSArray *deviceList; // ivar: _deviceList
@property (readonly, nonatomic) int deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)compileLayerDeviceOps:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)compileLayerDeviceOps:(id)arg0 sourceTensors:(id)arg1 resultTensors:(id)arg2 ;
-(BOOL)needToAllocateDeviceMemoryForTensor:(id)arg0 ;
-(BOOL)setConvolutionLayerOptimizerDataForDeviceOps:(id)arg0 weights:(id)arg1 bias:(id)arg2 ;
-(BOOL)setLSTMLayerOptimizerDataForDeviceOps:(id)arg0 inputWeights:(id)arg1 hiddenWeights:(id)arg2 biasTerms:(id)arg3 ;
-(BOOL)setMHALayerOptimizerDataForDeviceOps:(id)arg0 optimizerDataForWeights:(id)arg1 optimizerDataForBias:(id)arg2 ;
-(BOOL)setNormalizationLayerOptimizerDataForDeviceOps:(id)arg0 beta:(id)arg1 gamma:(id)arg2 ;
-(BOOL)shareDeviceMemoryWithResultTensor:(id)arg0 sourceTensor:(id)arg1 ;
-(BOOL)synchronizeTensor:(id)arg0 ;
-(BOOL)transferTensor:(id)arg0 fromDevice:(id)arg1 ;
-(BOOL)updateDeviceMemoryForTensor:(id)arg0 ;
-(NSUInteger)allocatedDeviceDataSizeForTraining:(BOOL)arg0 layer:(id)arg1 ;
-(NSUInteger)deviceMemorySizeForTensor:(id)arg0 ;
-(NSUInteger)deviceMemorySizeForTensor:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(NSUInteger)numDevices;
-(id)arithmeticLayerWithOperation:(int)arg0 activationDescriptor:(id)arg1 ;
-(id)batchNormalizationLayerWithChannelCount:(NSUInteger)arg0 mean:(id)arg1 variance:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 momentum:(float)arg6 ;
-(id)betaGradients:(id)arg0 ;
-(id)biasesGradients:(id)arg0 ;
-(id)compareLayerWithOperation:(int)arg0 ;
-(id)convolutionLayerWithDescriptor:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 ;
-(id)convolutionTransposeLayerWithDescriptor:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createOptimizerDeviceDataForTensor:(id)arg0 optimizer:(id)arg1 optimizerData:(id)arg2 isVector:(BOOL)arg3 ;
-(id)dropoutLayerWithRate:(float)arg0 seed:(NSUInteger)arg1 ;
-(id)embeddingLayerWithDescriptor:(id)arg0 weights:(id)arg1 inferenceOnly:(BOOL)arg2 ;
-(id)embeddingWeightsGradients:(id)arg0 embeddingCount:(NSUInteger)arg1 embeddingDimension:(NSUInteger)arg2 ;
-(id)fullyConnectedLayerWithDescriptor:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 ;
-(id)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg0 numOfFeatureChannels:(NSUInteger)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
-(id)fusedConvolutionAndNeuronLayerWithDescriptor:(id)arg0 convolutionDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
-(id)fusedConvolutionBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg0 mean:(id)arg1 variance:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 momentum:(float)arg6 neuronDescriptor:(id)arg7 weights:(id)arg8 biasTerms:(id)arg9 ;
-(id)fusedConvolutionGroupNormalizationAndNeuronLayerWithDescriptor:(id)arg0 beta:(id)arg1 gamma:(id)arg2 varianceEpsilon:(float)arg3 momentum:(float)arg4 groupCount:(NSUInteger)arg5 neuronDescriptor:(id)arg6 weights:(id)arg7 biasTerms:(id)arg8 ;
-(id)fusedConvolutionInstanceNormalizationAndNeuronLayerWithDescriptor:(id)arg0 beta:(id)arg1 gamma:(id)arg2 varianceEpsilon:(float)arg3 momentum:(float)arg4 neuronDescriptor:(id)arg5 weights:(id)arg6 biasTerms:(id)arg7 ;
-(id)fusedFullyConnectedAndNeuronLayerWithDescriptor:(id)arg0 convolutionDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
-(id)fusedFullyConnectedAndSoftmaxLayerWithDescriptor:(id)arg0 weights:(id)arg1 biasTerms:(id)arg2 softmaxOp:(int)arg3 ;
-(id)fusedFullyConnectedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg0 mean:(id)arg1 variance:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 momentum:(float)arg6 neuronDescriptor:(id)arg7 weights:(id)arg8 biasTerms:(id)arg9 ;
-(id)fusedGroupNormalizationAndNeuronLayerWithDescriptor:(id)arg0 featureChannelCount:(NSUInteger)arg1 groupCount:(NSUInteger)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 ;
-(id)fusedInstanceNormalizationAndNeuronLayerWithDescriptor:(id)arg0 numOfFeatureChannels:(NSUInteger)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
-(id)fusedLayerNormalizationAndNeuronLayerWithDescriptor:(id)arg0 normalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
-(id)gammaGradients:(id)arg0 ;
-(id)gatherLayerWithDimension:(NSUInteger)arg0 ;
-(id)getHostPointerIfUnifiedDeviceMemory:(id)arg0 ;
-(id)gramMatrixLayerWithScaleFactor:(float)arg0 ;
-(id)groupNormalizationLayerWithFeatureChannelCount:(NSUInteger)arg0 groupCount:(NSUInteger)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
-(id)initWithType:(int)arg0 ;
-(id)instanceNormalizationLayerWithChannelCount:(NSUInteger)arg0 mean:(id)arg1 variance:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 momentum:(float)arg6 ;
-(id)layerNormalizationLayerWithNormalizedShape:(id)arg0 beta:(id)arg1 gamma:(id)arg2 varianceEpsilon:(float)arg3 isFusedWithArithmeticLayer:(BOOL)arg4 ;
-(id)lossLayerWithDescriptor:(id)arg0 ;
-(id)lossYOLOLayerWithDescriptor:(id)arg0 ;
-(id)lstmBiasGradient:(id)arg0 mlcBiasIndex:(NSUInteger)arg1 ;
-(id)lstmHiddenWeightGradient:(id)arg0 mlcWeightIndex:(NSUInteger)arg1 ;
-(id)lstmInputWeightGradient:(id)arg0 mlcWeightIndex:(NSUInteger)arg1 ;
-(id)lstmLayerWithDescriptor:(id)arg0 inputWeights:(id)arg1 hiddenWeights:(id)arg2 peepholeWeights:(id)arg3 biasTerms:(id)arg4 gateActivations:(id)arg5 outputResultActivation:(id)arg6 inferenceOnly:(BOOL)arg7 ;
-(id)matMulLayerWithDescriptor:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 inferenceOnly:(BOOL)arg3 ;
-(id)mhaAttnBiasGradient:(id)arg0 withSize:(NSUInteger)arg1 index:(NSUInteger)arg2 ;
-(id)mhaBiasGradient:(id)arg0 withSize:(NSUInteger)arg1 index:(NSUInteger)arg2 ;
-(id)mhaWeightGradient:(id)arg0 withSize:(NSUInteger)arg1 index:(NSUInteger)arg2 ;
-(id)multiheadAttentionLayerWithDescriptor:(id)arg0 weights:(id)arg1 bias:(id)arg2 attnBias:(id)arg3 inferenceOnly:(BOOL)arg4 ;
-(id)neuronLayerWithDescriptor:(id)arg0 ;
-(id)optimizerAdamWithDescriptor:(id)arg0 beta1:(float)arg1 beta2:(float)arg2 epsilon:(float)arg3 amsgrad:(BOOL)arg4 timeStep:(NSUInteger)arg5 isAdamW:(BOOL)arg6 ;
-(id)optimizerRMSPropWithDescriptor:(id)arg0 momentumScale:(float)arg1 alpha:(float)arg2 epsilon:(float)arg3 centered:(BOOL)arg4 ;
-(id)optimizerSGDWithDescriptor:(id)arg0 momentunScale:(float)arg1 useNesterovMomentum:(BOOL)arg2 ;
-(id)paddingLayerWithPaddingType:(int)arg0 paddingLeft:(NSUInteger)arg1 paddingRight:(NSUInteger)arg2 paddingTop:(NSUInteger)arg3 paddingBottom:(NSUInteger)arg4 constantValue:(float)arg5 dataType:(int)arg6 ;
-(id)poolingLayerWithDescriptor:(id)arg0 paddingSizes:(*NSUInteger)arg1 ;
-(id)readFromDevice:(id)arg0 deviceIndex:(NSUInteger)arg1 allocateData:(BOOL)arg2 batchSize:(NSUInteger)arg3 ;
-(id)readTensor:(id)arg0 ;
-(id)readTensor:(id)arg0 fromDeviceIndex:(NSUInteger)arg1 ;
-(id)readTensor:(id)arg0 fromDeviceIndex:(NSUInteger)arg1 batchSize:(NSUInteger)arg2 ;
-(id)reductionLayerWithReduceType:(int)arg0 dimensions:(id)arg1 sourceShapeCount:(NSUInteger)arg2 ;
-(id)reshapeLayerWithShape:(id)arg0 ;
-(id)scatterLayerWithDimension:(NSUInteger)arg0 reduceType:(int)arg1 ;
-(id)selectLayer;
-(id)sliceLayerWithbegin:(id)arg0 end:(id)arg1 stride:(id)arg2 inferenceOnly:(BOOL)arg3 ;
-(id)softmaxLayerWithOperation:(int)arg0 dimension:(NSUInteger)arg1 sourceShapeCount:(NSUInteger)arg2 ;
-(id)splitLayerWithDimension:(NSUInteger)arg0 ;
-(id)transposeLayerWithShape:(id)arg0 ;
-(id)upsampleLayerWithScaleFactorX:(float)arg0 scaleFactorY:(float)arg1 sampleMode:(int)arg2 alignCorners:(BOOL)arg3 ;
-(id)weightsGradients:(id)arg0 ;
-(struct ? )getGateDesc:(NSUInteger)arg0 lstmParams:(struct ? *)arg1 ;
-(void)accumulateParams:(**void)arg0 gradients:(**void)arg1 accumulators:(**void)arg2 numOfParameters:(NSUInteger)arg3 inArrayOfParams:(id)arg4 ;
-(void)allocateDeviceDataForGlobalNormClippingWithOptimizer:(id)arg0 updatableParameterCount:(NSUInteger)arg1 ;
-(void)allocateDeviceMemoryForTensor:(id)arg0 ;
-(void)allocateParameterGradientsForDeviceOps:(id)arg0 parameters:(id)arg1 ;
-(void)allocateResultTensor:(id)arg0 ;
-(void)broadcastTensor:(id)arg0 ;
-(void)broadcastTensor:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)commitAndWaitForCompletion:(id)arg0 ;
// -(void)commitAndWaitForCompletion:(id)arg0 enableProfiling:(unk)arg1 graphExecutionTime:(BOOL)arg2 graphResultTensor:(id)arg3  ;
// -(void)commitWithCompletionHandler:(id)arg0 enableProfiling:(unk)arg1 graphExecutionTime:(BOOL)arg2 graphResultTensor:(id)arg3  ;
-(void)commitWithProfiling:(BOOL)arg0 graphExecutionTime:(id)arg1 ;
-(void)convertUpdatesToTensorDataForLayer:(id)arg0 ;
-(void)convertUpdatesToTensorDataForTensorParameters:(id)arg0 ;
-(void)copyBiasFromBNNSToMLCTensor:(id)arg0 biasTensors:(id)arg1 baseGateIndex:(NSUInteger)arg2 lstmDescriptor:(id)arg3 ;
-(void)createBNNSDesc2DForLSTMWeights:(id)arg0 tensorParameters:(id)arg1 deviceOptimizers:(id)arg2 isInputWeight:(BOOL)arg3 ;
-(void)deallocateDeviceMemoryForTensor:(id)arg0 ;
-(void)dispatchBroadcastTensor:(id)arg0 ;
-(void)dispatchBroadcastTensor:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)dispatchForwardAndGradientLossLayer:(id)arg0 sourceTensor:(id)arg1 labelsTensor:(id)arg2 labelsTensorStride:(NSUInteger)arg3 weightsTensor:(id)arg4 resultTensor:(id)arg5 resultGradientTensor:(id)arg6 ;
-(void)dispatchForwardCompareLayer:(id)arg0 sourceTensor:(id)arg1 secondaryTensor:(id)arg2 resultTensor:(id)arg3 compareOp:(int)arg4 forTraining:(BOOL)arg5 ;
-(void)dispatchForwardConcatLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(void)dispatchForwardEmbeddingLayer:(id)arg0 weight:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 ;
-(void)dispatchForwardFullyConnectedLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardFusedArithmeticLayerNormalizationLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardGatherLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 resultStateIsTemporary:(BOOL)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardLayer:(id)arg0 sourceTensor:(id)arg1 secondaryTensor:(id)arg2 tertiaryTensor:(id)arg3 resultTensor:(id)arg4 resultStateIsTemporary:(BOOL)arg5 forTraining:(BOOL)arg6 ;
-(void)dispatchForwardLossLayer:(id)arg0 sourceTensor:(id)arg1 labelsTensor:(id)arg2 labelsTensorStride:(NSUInteger)arg3 weightsTensor:(id)arg4 resultTensor:(id)arg5 resultStateIsTemporary:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchForwardMHALayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 resultStateIsTemporary:(BOOL)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardMatMulLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(void)dispatchForwardReduceLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 reductionType:(int)arg3 reduceDimensions:(id)arg4 forTraining:(BOOL)arg5 ;
-(void)dispatchForwardReshapeLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 resultStateIsTemporary:(BOOL)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardScatterLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardSelectLayer:(id)arg0 conditionTensor:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardSliceLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardSplitLayer:(id)arg0 sourceTensor:(id)arg1 resultTensors:(id)arg2 ;
-(void)dispatchForwardSplitLayer:(id)arg0 sourceTensor:(id)arg1 resultTensors:(id)arg2 forConcat:(BOOL)arg3 ;
-(void)dispatchGradientConcatLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensors:(id)arg2 ;
-(void)dispatchGradientEmbeddingLayer:(id)arg0 sourceGradientTensor:(id)arg1 ;
-(void)dispatchGradientFullyConnectedLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 resultStateIsTemporary:(BOOL)arg3 ;
-(void)dispatchGradientLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 ;
-(void)dispatchGradientLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 secondaryResultGradientTensor:(id)arg3 ;
-(void)dispatchGradientLossLayer:(id)arg0 sourceGradientTensor:(id)arg1 labelsTensor:(id)arg2 labelsTensorStride:(NSUInteger)arg3 weightsTensor:(id)arg4 resultGradientTensor:(id)arg5 ;
-(void)dispatchGradientMHALayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensors:(id)arg2 resultStateIsTemporary:(BOOL)arg3 ;
-(void)dispatchGradientMatMulLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensors:(id)arg2 ;
-(void)dispatchGradientReduceLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 reductionType:(int)arg3 reduceDimensions:(id)arg4 ;
-(void)dispatchGradientReshapeLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 ;
-(void)dispatchGradientSelectLayer:(id)arg0 conditionTensor:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 ;
-(void)dispatchGradientSliceLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 ;
-(void)dispatchGradientSplitLayer:(id)arg0 sourceGradientTensors:(id)arg1 resultGradientTensor:(id)arg2 ;
-(void)dispatchGradientSplitLayer:(id)arg0 sourceGradientTensors:(id)arg1 resultGradientTensor:(id)arg2 forConcat:(BOOL)arg3 ;
-(void)dispatchRNNForwardLayer:(id)arg0 sourceTensors:(id)arg1 resultTensors:(id)arg2 ;
-(void)dispatchRNNForwardLayer:(id)arg0 sourceTensors:(id)arg1 resultTensors:(id)arg2 resultStateIsTemporary:(BOOL)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchRNNGradientLayer:(id)arg0 sourceGradientTensors:(id)arg1 resultGradientTensors:(id)arg2 ;
-(void)dispatchReadTensor:(id)arg0 targetBuffer:(*void)arg1 batchSize:(NSUInteger)arg2 ;
-(void)exportBiasGateOptimizerDataForDeviceOps:(id)arg0 biasTensors:(id)arg1 gateIndex:(NSUInteger)arg2 optimizerDataIndex:(NSUInteger)arg3 ;
-(void)fuseLayersForGraph:(id)arg0 stopGradientTensorList:(id)arg1 startAtLayerIndex:(NSUInteger)arg2 forInference:(BOOL)arg3 ;
-(void)fuseLayersForInferenceGraph:(id)arg0 startAtLayerIndex:(NSUInteger)arg1 ;
-(void)fuseLayersForTrainingGraph:(id)arg0 stopGradientTensorList:(id)arg1 ;
-(void)identifySourceAndOrResultTensorsNeededByGradient:(id)arg0 ;
-(void)incrementReadCountForGradientState:(id)arg0 increment:(NSInteger)arg1 ;
-(void)incrementReadCountForTensorDeviceMemory:(id)arg0 increment:(NSInteger)arg1 ;
-(void)optimizeComputationForTrainingGraph:(id)arg0 ;
-(void)optimizerStepForSingleParameterLSTM:(id)arg0 tensorParameters:(id)arg1 parameterForGateDesc:(struct ? *)arg2 gradientsForGateDesc:(struct ? *)arg3 parameterMomentumDescData:(id)arg4 gateIndex:(NSUInteger)arg5 deviceOptimizers:(id)arg6 isStackedInputWeight:(BOOL)arg7 ;
-(void)readTensor:(id)arg0 fromDeviceIndex:(NSUInteger)arg1 targetBuffer:(*void)arg2 batchSize:(NSUInteger)arg3 ;
-(void)readTensor:(id)arg0 fromDeviceIndex:(NSUInteger)arg1 targetBuffer:(*void)arg2 batchSize:(NSUInteger)arg3 reduceOverBatch:(BOOL)arg4 ;
-(void)readTensor:(id)arg0 targetBuffer:(*void)arg1 ;
-(void)reloadParameterDataFromHostToDeviceMemoryForTensor:(id)arg0 ;
-(void)restoreRNNParamsWithDeviceOps:(id)arg0 optimizer:(id)arg1 inputWeightsParameter:(id)arg2 hiddenWeightsParameter:(id)arg3 biasesParameter:(id)arg4 arrayOfParams:(id)arg5 ;
-(void)saveOrRestoreLSTMBiasesAndAccumulators:(id)arg0 auxParameter:(id)arg1 auxAccumulators:(id)arg2 mlcIndex:(NSUInteger)arg3 auxIndex:(NSUInteger)arg4 saveParameter:(BOOL)arg5 ;
-(void)setConvolutionGradientComputeWeightsAndBiasOnly:(id)arg0 ;
-(void)setDeviceMemoryForTensor:(id)arg0 data:(id)arg1 ;
-(void)setFullyConnectedGradientComputeWeightsAndBiasOnly:(id)arg0 ;
-(void)setOptimizerLearningRate:(id)arg0 learningRate:(float)arg1 ;
-(void)setOptimizerTimeStep:(id)arg0 timeStep:(NSUInteger)arg1 ;
-(void)shareResultTensor:(id)arg0 sourceTensor:(id)arg1 deviceOps:(id)arg2 ;
-(void)signalAllDevicesExcludingDevice:(NSUInteger)arg0 eventValue:(NSUInteger)arg1 ;
-(void)signalNextEvent;
-(void)sumSharedGradientsForConvolutionLayerTensorParameter:(id)arg0 layerIndexForSummedGradients:(NSUInteger)arg1 ;
-(void)sumSharedGradientsForNormalizationLayerTensorParameter:(id)arg0 layerIndexForSummedGradients:(NSUInteger)arg1 isBetaTensor:(BOOL)arg2 ;
-(void)synchronizeOptimizerUpdatesForTensor:(id)arg0 ;
-(void)synchronizeUpdatesForLayer:(id)arg0 ;
-(void)updateAllParametersWithOptimizer:(id)arg0 arrayOfParameters:(id)arg1 ;
-(void)updateBatchNormalizationLayer:(id)arg0 optimizer:(id)arg1 betaParameter:(id)arg2 gammaParameter:(id)arg3 meanTensor:(id)arg4 varianceTensor:(id)arg5 arrayOfParams:(id)arg6 ;
-(void)updateConvolutionLayer:(id)arg0 optimizer:(id)arg1 weightsParameter:(id)arg2 biasesParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateEmbeddingLayer:(id)arg0 weightsParameter:(id)arg1 optimizer:(id)arg2 arrayOfParams:(id)arg3 ;
-(void)updateFullyConnectedLayer:(id)arg0 optimizer:(id)arg1 weightsParameter:(id)arg2 biasesParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateGradientDescriptorsForDeviceOps:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(void)updateGroupNormalizationLayer:(id)arg0 optimizer:(id)arg1 betaParameter:(id)arg2 gammaParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateInstanceNormalizationLayer:(id)arg0 optimizer:(id)arg1 betaParameter:(id)arg2 gammaParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateLayerNormalizationLayer:(id)arg0 optimizer:(id)arg1 betaParameter:(id)arg2 gammaParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateMultiheadAttentionLayer:(id)arg0 optimizer:(id)arg1 weightsParameter:(id)arg2 biasesParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateRNNLayer:(id)arg0 optimizer:(id)arg1 inputWeightsParameter:(id)arg2 hiddenWeightsParameter:(id)arg3 biasesParameter:(id)arg4 arrayOfParams:(id)arg5 ;
-(void)updateTensorParameter:(id)arg0 optimizer:(id)arg1 gradient:(id)arg2 arrayOfParams:(id)arg3 ;
-(void)waitForAllDevicesExcludingDevice:(NSUInteger)arg0 eventValue:(NSUInteger)arg1 ;
-(void)waitForOthers;
-(void)writeToAllDevices:(id)arg0 allocateData:(BOOL)arg1 batchSize:(NSUInteger)arg2 ;
-(void)writeToDevice:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)writeToDevice:(id)arg0 sourceBuffer:(*void)arg1 batchSize:(NSUInteger)arg2 ;


@end


#endif