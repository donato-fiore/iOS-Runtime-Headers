// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCDEVICEGPU_H
#define MLCDEVICEGPU_H

@class NSString, NSArray, NSMutableArray;
@protocol MLCLayerOperations, MLCEngineDispatch, NSCopying, MLComputeEngineControl;

#import <Foundation/Foundation.h>


@interface MLCDeviceGPU : NSObject <MLCLayerOperations, MLCEngineDispatch, NSCopying, MLComputeEngineControl>



@property (readonly, nonatomic) *NSUInteger currentEventValue; // ivar: _currentEventValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *deviceList; // ivar: _deviceList
@property (readonly, nonatomic) int deviceType; // ivar: _deviceType
@property (readonly, nonatomic) *CGFloat executionTimeInterval; // ivar: _executionTimeInterval
@property (readonly, nonatomic) NSMutableArray *gpuCommandBufferList; // ivar: _gpuCommandBufferList
@property (readonly, nonatomic) NSMutableArray *gpuCommandQueueList; // ivar: _gpuCommandQueueList
@property (retain, nonatomic) NSMutableArray *gpuConcurrentEncoderFence; // ivar: _gpuConcurrentEncoderFence
@property (retain, nonatomic) NSMutableArray *gpuHeapTemporaryResourceAllocator; // ivar: _gpuHeapTemporaryResourceAllocator
@property (readonly, nonatomic) NSMutableArray *gpuLibrary; // ivar: _gpuLibrary
@property (retain, nonatomic) NSArray *gpuLocalEventList; // ivar: _gpuLocalEventList
@property (readonly, nonatomic) NSMutableArray *gpuMPSCommandBufferList; // ivar: _gpuMPSCommandBufferList
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesArithmeticBinaryForward; // ivar: _gpuPipelineStatesArithmeticBinaryForward
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesArithmeticBinaryGradient; // ivar: _gpuPipelineStatesArithmeticBinaryGradient
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesArithmeticReduceGradientAll; // ivar: _gpuPipelineStatesArithmeticReduceGradientAll
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesArithmeticReduceGradientAny; // ivar: _gpuPipelineStatesArithmeticReduceGradientAny
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesArithmeticUnaryForward; // ivar: _gpuPipelineStatesArithmeticUnaryForward
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesArithmeticUnaryGradient; // ivar: _gpuPipelineStatesArithmeticUnaryGradient
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesCompareLogicalOpForward; // ivar: _gpuPipelineStatesCompareLogicalOpForward
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesCompareRelationalOpForward; // ivar: _gpuPipelineStatesCompareRelationalOpForward
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesConcatBool; // ivar: _gpuPipelineStatesConcatBool
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesConcatFloat; // ivar: _gpuPipelineStatesConcatFloat
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesEmbeddingForward; // ivar: _gpuPipelineStatesEmbeddingForward
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesEmbeddingGradient; // ivar: _gpuPipelineStatesEmbeddingGradient
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesEmbeddingRenormalizeWeights; // ivar: _gpuPipelineStatesEmbeddingRenormalizeWeights
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesForwardConcat2D; // ivar: _gpuPipelineStatesForwardConcat2D
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesForwardConcat2DArray; // ivar: _gpuPipelineStatesForwardConcat2DArray
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesMemCopy; // ivar: _gpuPipelineStatesMemCopy
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesMemFillFloat; // ivar: _gpuPipelineStatesMemFillFloat
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesPad2D; // ivar: _gpuPipelineStatesPad2D
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesPad2DArray; // ivar: _gpuPipelineStatesPad2DArray
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesReduceAcrossBatch; // ivar: _gpuPipelineStatesReduceAcrossBatch
@property (retain, nonatomic) NSMutableArray *gpuPipelineStatesReduceAcrossChannel; // ivar: _gpuPipelineStatesReduceAcrossChannel
@property (readonly, nonatomic) NSMutableArray *gpuReadTensorKernelList; // ivar: _gpuReadTensorKernelList
@property (retain, nonatomic) NSArray *gpuSharedEventList; // ivar: _gpuSharedEventList
@property (readonly, nonatomic) NSMutableArray *gpuWriteTensorKernelList; // ivar: _gpuWriteTensorKernelList
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAppleSoCGPU; // ivar: _isAppleSoCGPU
@property (nonatomic) os_unfair_lock_s l; // ivar: _l
@property (nonatomic) NSUInteger numDevicesToUse; // ivar: _numDevicesToUse
@property (nonatomic) NSUInteger numDevicesUsedWithFirstBatch; // ivar: _numDevicesUsedWithFirstBatch
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)multiGPUNotSupportedInFilteredGPUList:(id)arg0 ;
+(NSUInteger)calculateImageSizeForTensor:(id)arg0 ;
+(id)filteredGPUListIncludingLowPoweredBuiltin:(BOOL)arg0 ;
-(BOOL)canFuseConvolutionLayerForInference:(id)arg0 ;
-(BOOL)canFuseFullyConnectedLayerForInference:(id)arg0 ;
-(BOOL)checkToConvertTensor:(id)arg0 inLayer:(id)arg1 ;
-(BOOL)compileLayerDeviceOps:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)compileLayerDeviceOps:(id)arg0 sourceTensors:(id)arg1 resultTensors:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isResultTensorUsedForGradientComputationByLayer:(id)arg0 ;
-(BOOL)needToAllocateDeviceMemoryForTensor:(id)arg0 ;
-(BOOL)needToAllocateDeviceMemoryForTensor:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(BOOL)setConvolutionLayerOptimizerDataForDeviceOps:(id)arg0 weights:(id)arg1 bias:(id)arg2 ;
-(BOOL)setMHALayerOptimizerDataForDeviceOps:(id)arg0 optimizerDataForWeights:(id)arg1 optimizerDataForBias:(id)arg2 ;
-(BOOL)setNormalizationLayerOptimizerDataForDeviceOps:(id)arg0 beta:(id)arg1 gamma:(id)arg2 ;
-(BOOL)shareDeviceMemoryWithResultTensor:(id)arg0 sourceTensor:(id)arg1 ;
-(BOOL)synchronizeTensor:(id)arg0 ;
-(BOOL)synchronizeTensorOnHost:(id)arg0 ;
-(BOOL)transferTensor:(id)arg0 fromDevice:(id)arg1 ;
-(BOOL)updateDeviceMemoryForTensor:(id)arg0 ;
-(NSUInteger)allocatedDeviceDataSizeForTraining:(BOOL)arg0 layer:(id)arg1 ;
-(NSUInteger)deviceMemorySizeForTensor:(id)arg0 ;
-(NSUInteger)numDevices;
-(id)allocateDeviceMemoryForTensor:(id)arg0 device:(id)arg1 count:(NSUInteger)arg2 ;
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
-(id)fusedFullyConnectedAndNeuronLayerWithDescriptor:(id)arg0 convolutionDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 ;
-(id)fusedInstanceNormalizationAndNeuronLayerWithDescriptor:(id)arg0 numOfFeatureChannels:(NSUInteger)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
-(id)gammaGradients:(id)arg0 ;
-(id)gatherLayerWithDimension:(NSUInteger)arg0 ;
-(id)getGradientBufferForNormalizationState:(id)arg0 layer:(id)arg1 isBetaTensor:(BOOL)arg2 ;
-(id)getHostPointerIfUnifiedDeviceMemory:(id)arg0 ;
-(id)gramMatrixLayerWithScaleFactor:(float)arg0 ;
-(id)groupNormalizationLayerWithFeatureChannelCount:(NSUInteger)arg0 groupCount:(NSUInteger)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
-(id)initWithDeviceList:(id)arg0 ;
-(id)initWithType:(int)arg0 gpuDeviceList:(id)arg1 gpuLocalEventList:(id)arg2 gpuSharedEventList:(id)arg3 currentEventValue:(*NSUInteger)arg4 gpuCommandQueueList:(id)arg5 gpuCommandBufferList:(id)arg6 gpuMPSCommandBufferList:(id)arg7 ;
-(id)initWithType:(int)arg0 selectsMultipleComputeDevices:(BOOL)arg1 ;
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
-(id)readTensor:(id)arg0 ;
-(id)readTensor:(id)arg0 fromDeviceIndex:(NSUInteger)arg1 ;
-(id)readTensor:(id)arg0 fromDeviceIndex:(NSUInteger)arg1 batchSize:(NSUInteger)arg2 ;
-(id)reductionLayerWithReduceType:(int)arg0 dimensions:(id)arg1 sourceShapeCount:(NSUInteger)arg2 ;
-(id)reshapeLayerWithShape:(id)arg0 ;
-(id)scatterLayerWithDimension:(NSUInteger)arg0 reduceType:(int)arg1 ;
-(id)sliceLayerWithbegin:(id)arg0 end:(id)arg1 stride:(id)arg2 inferenceOnly:(BOOL)arg3 ;
-(id)softmaxLayerWithOperation:(int)arg0 dimension:(NSUInteger)arg1 sourceShapeCount:(NSUInteger)arg2 ;
-(id)splitLayerWithDimension:(NSUInteger)arg0 ;
-(id)transposeLayerWithShape:(id)arg0 ;
-(id)upsampleLayerWithScaleFactorX:(float)arg0 scaleFactorY:(float)arg1 sampleMode:(int)arg2 alignCorners:(BOOL)arg3 ;
-(id)weightsGradients:(id)arg0 ;
-(void)allReduceOverXGMI:(id)arg0 deviceIndex:(NSUInteger)arg1 stateBuffers:(id)arg2 ;
-(void)allocateCommandBufferForDeviceAtIndex:(NSUInteger)arg0 ;
-(void)allocateDeviceDataForGlobalNormClippingWithOptimizer:(id)arg0 updatableParameterCount:(NSUInteger)arg1 ;
-(void)allocateDeviceHeapForGraph:(id)arg0 forInference:(BOOL)arg1 ;
-(void)allocateDeviceMemoryForTensor:(id)arg0 ;
-(void)allocateDeviceMemoryForTensor:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)allocateParameterGradientsForDeviceOps:(id)arg0 parameters:(id)arg1 ;
-(void)allocateResultTensor:(id)arg0 ;
-(void)broadcastTensor:(id)arg0 ;
-(void)broadcastTensor:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)commitAndWaitForCompletion:(id)arg0 ;
// -(void)commitAndWaitForCompletion:(id)arg0 enableProfiling:(unk)arg1 graphExecutionTime:(BOOL)arg2 graphResultTensor:(id)arg3  ;
-(void)commitDeviceAtIndex:(NSUInteger)arg0 ;
// -(void)commitWithCompletionHandler:(id)arg0 enableProfiling:(unk)arg1 graphExecutionTime:(BOOL)arg2 graphResultTensor:(id)arg3  ;
-(void)commitWithProfiling:(BOOL)arg0 graphExecutionTime:(id)arg1 ;
-(void)convertUpdatesToTensorDataForLayer:(id)arg0 ;
-(void)convertUpdatesToTensorDataForTensorParameters:(id)arg0 ;
-(void)copyMTLBuffer:(id)arg0 toBytes:(*void)arg1 length:(NSUInteger)arg2 ;
-(void)copyMTLBuffer:(id)arg0 toNSData:(id)arg1 ;
-(void)deallocateDeviceMemoryForTensor:(id)arg0 ;
-(void)dispatchBroadcastTensor:(id)arg0 ;
-(void)dispatchBroadcastTensor:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)dispatchFillTensor:(id)arg0 deviceIndex:(NSUInteger)arg1 ;
-(void)dispatchForwardActivationsKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchForwardAndGradientLossLayer:(id)arg0 sourceTensor:(id)arg1 labelsTensor:(id)arg2 labelsTensorStride:(NSUInteger)arg3 weightsTensor:(id)arg4 resultTensor:(id)arg5 resultGradientTensor:(id)arg6 ;
-(void)dispatchForwardArithmeticBinaryKernel:(id)arg0 sourceTensor:(id)arg1 sourceSecondaryTensor:(id)arg2 resultTensor:(id)arg3 deviceIndex:(NSUInteger)arg4 ;
-(void)dispatchForwardArithmeticTertiaryKernel:(id)arg0 sourceTensor:(id)arg1 sourceSecondaryTensor:(id)arg2 sourceTertiaryTensor:(id)arg3 resultTensor:(id)arg4 deviceIndex:(NSUInteger)arg5 ;
-(void)dispatchForwardArithmeticUnaryKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchForwardBatchNormalizationKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardCompareLayer:(id)arg0 sourceTensor:(id)arg1 secondaryTensor:(id)arg2 resultTensor:(id)arg3 compareOp:(int)arg4 forTraining:(BOOL)arg5 ;
-(void)dispatchForwardConcatLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(void)dispatchForwardEmbeddingLayer:(id)arg0 weight:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 ;
-(void)dispatchForwardFullyConnectedLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardFusedArithmeticLayerNormalizationLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardGatherLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardGramMatrixKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardGroupNormalizationKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardInstanceNormalizationKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 resultStateIsTemporary:(BOOL)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardLayer:(id)arg0 sourceTensor:(id)arg1 secondaryTensor:(id)arg2 tertiaryTensor:(id)arg3 resultTensor:(id)arg4 resultStateIsTemporary:(BOOL)arg5 forTraining:(BOOL)arg6 ;
-(void)dispatchForwardLayerNormalizationKernel:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardLossLayer:(id)arg0 sourceTensor:(id)arg1 labelsTensor:(id)arg2 labelsTensorStride:(NSUInteger)arg3 weightsTensor:(id)arg4 resultTensor:(id)arg5 resultStateIsTemporary:(BOOL)arg6 forTraining:(BOOL)arg7 ;
-(void)dispatchForwardMHALayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 resultStateIsTemporary:(BOOL)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardMPSGraphWithDeviceOps:(id)arg0 sourceBuffer:(id)arg1 resultBuffer:(id)arg2 deviceIndex:(NSUInteger)arg3 dataType:(unsigned int)arg4 ;
-(void)dispatchForwardMatMulLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(void)dispatchForwardPaddingKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchForwardPoolingKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardReduceLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 reductionType:(int)arg3 reduceDimensions:(id)arg4 forTraining:(BOOL)arg5 ;
-(void)dispatchForwardReshapeLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 resultStateIsTemporary:(BOOL)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardResizeKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchForwardScatterLayer:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardSelectLayer:(id)arg0 conditionTensor:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchForwardSliceLayer:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 forTraining:(BOOL)arg3 ;
-(void)dispatchForwardSoftmaxKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchForwardSplitLayer:(id)arg0 sourceTensor:(id)arg1 resultTensors:(id)arg2 ;
-(void)dispatchForwardSplitLayer:(id)arg0 sourceTensor:(id)arg1 resultTensors:(id)arg2 forConcat:(BOOL)arg3 ;
-(void)dispatchGradientActivationsKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientArithmeticBinaryKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 secondaryResultGradientTensor:(id)arg3 deviceIndex:(NSUInteger)arg4 ;
-(void)dispatchGradientArithmeticUnaryKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientBatchNormalizationKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientConcatLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensors:(id)arg2 ;
-(void)dispatchGradientEmbeddingLayer:(id)arg0 sourceGradientTensor:(id)arg1 ;
-(void)dispatchGradientFullyConnectedLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 resultStateIsTemporary:(BOOL)arg3 ;
-(void)dispatchGradientGramMatrixKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientGroupNormalizationKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientInstanceNormalizationKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 ;
-(void)dispatchGradientLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 secondaryResultGradientTensor:(id)arg3 ;
-(void)dispatchGradientLayerNormalizationKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientLossLayer:(id)arg0 sourceGradientTensor:(id)arg1 labelsTensor:(id)arg2 labelsTensorStride:(NSUInteger)arg3 weightsTensor:(id)arg4 resultGradientTensor:(id)arg5 ;
-(void)dispatchGradientMHALayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensors:(id)arg2 resultStateIsTemporary:(BOOL)arg3 ;
-(void)dispatchGradientMPSGraphWithDeviceOps:(id)arg0 sourceBuffer:(id)arg1 souceGradientBuffer:(id)arg2 resultGradientBuffer:(id)arg3 deviceIndex:(NSUInteger)arg4 dataType:(unsigned int)arg5 ;
-(void)dispatchGradientMatMulLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensors:(id)arg2 ;
-(void)dispatchGradientPaddingKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientPoolingKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientReduceLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 reductionType:(int)arg3 reduceDimensions:(id)arg4 ;
-(void)dispatchGradientReshapeLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 ;
-(void)dispatchGradientResizeKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientSelectLayer:(id)arg0 conditionTensor:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 ;
-(void)dispatchGradientSliceLayer:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 ;
-(void)dispatchGradientSoftmaxKernel:(id)arg0 sourceGradientTensor:(id)arg1 resultGradientTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchGradientSplitLayer:(id)arg0 sourceGradientTensors:(id)arg1 resultGradientTensor:(id)arg2 ;
-(void)dispatchGradientSplitLayer:(id)arg0 sourceGradientTensors:(id)arg1 resultGradientTensor:(id)arg2 forConcat:(BOOL)arg3 ;
-(void)dispatchPadChannelsKernel:(id)arg0 sourceImageBatch:(id)arg1 resultImageBatch:(id)arg2 deviceIndex:(NSUInteger)arg3 ;
-(void)dispatchRNNForwardLayer:(id)arg0 sourceTensors:(id)arg1 resultTensors:(id)arg2 ;
-(void)dispatchRNNForwardLayer:(id)arg0 sourceTensors:(id)arg1 resultTensors:(id)arg2 resultStateIsTemporary:(BOOL)arg3 forTraining:(BOOL)arg4 ;
-(void)dispatchRNNGradientLayer:(id)arg0 sourceGradientTensors:(id)arg1 resultGradientTensors:(id)arg2 ;
-(void)dispatchReadTensor:(id)arg0 targetBuffer:(*void)arg1 batchSize:(NSUInteger)arg2 ;
-(void)dispatchReadTensorFromAllDevices:(id)arg0 targetBuffer:(*void)arg1 batchSize:(NSUInteger)arg2 ;
-(void)dispatchTransposeKernel:(id)arg0 sourceTensor:(id)arg1 resultTensor:(id)arg2 deviceIndex:(NSUInteger)arg3 forward:(BOOL)arg4 ;
-(void)encodePrimitiveToCommandBuffer:(id)arg0 gpuDeviceOps:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 tertiaryTensor:(id)arg4 resultTensor:(id)arg5 params:(struct CompareParams *)arg6 sizeOfParams:(NSUInteger)arg7 pipelineState:(id)arg8 deviceIndex:(NSUInteger)arg9 ;
-(void)fuseLayersForGraph:(id)arg0 stopGradientTensorList:(id)arg1 startAtLayerIndex:(NSUInteger)arg2 forInference:(BOOL)arg3 ;
-(void)fuseLayersForInferenceGraph:(id)arg0 startAtLayerIndex:(NSUInteger)arg1 ;
-(void)fuseLayersForTrainingGraph:(id)arg0 stopGradientTensorList:(id)arg1 ;
-(void)incrementReadCountForGradientState:(id)arg0 increment:(NSInteger)arg1 ;
-(void)incrementReadCountForTensorDeviceMemory:(id)arg0 increment:(NSInteger)arg1 ;
-(void)multiDeviceTensorReduction:(id)arg0 sourceBuffer:(*void)arg1 targetBuffer:(*void)arg2 ;
-(void)optimizeComputationForTrainingGraph:(id)arg0 ;
-(void)readTensor:(id)arg0 fromDeviceIndex:(NSUInteger)arg1 targetBuffer:(*void)arg2 batchSize:(NSUInteger)arg3 ;
-(void)readTensor:(id)arg0 fromDeviceIndex:(NSUInteger)arg1 targetBuffer:(*void)arg2 batchSize:(NSUInteger)arg3 reduceOverBatch:(BOOL)arg4 ;
-(void)readTensor:(id)arg0 targetBuffer:(*void)arg1 ;
-(void)reduceAcrossBatchForSource:(id)arg0 result:(id)arg1 batchSize:(NSUInteger)arg2 batchStride:(NSUInteger)arg3 numEntries:(NSUInteger)arg4 deviceIndex:(NSUInteger)arg5 commandBuffer:(id)arg6 ;
-(void)reloadLSTMParameters:(id)arg0 rnnGPUDeviceOps:(id)arg1 mlcParameterIndex:(NSUInteger)arg2 tensor:(id)arg3 isInputWeight:(BOOL)arg4 isHiddenWeight:(BOOL)arg5 isBias:(BOOL)arg6 deviceNumber:(NSUInteger)arg7 ;
-(void)reloadParameterDataFromHostToDeviceMemoryForTensor:(id)arg0 ;
-(void)restoreConvolutionParamsWithDeviceOps:(id)arg0 ;
-(void)restoreRNNParamsWithDeviceOps:(id)arg0 optimizer:(id)arg1 inputWeightsParameter:(id)arg2 hiddenWeightsParameter:(id)arg3 biasesParameter:(id)arg4 arrayOfParams:(id)arg5 ;
-(void)rotateAndCopyMTLBuffer:(id)arg0 toNSData:(id)arg1 withTensorDescriptor:(id)arg2 ;
-(void)saveOrRestoreTempMatrixDisableUpdates:(id)arg0 commandBuffer:(id)arg1 auxiliaryWeightsMemory:(id)arg2 auxiliaryMomentumMemory:(id)arg3 auxiliaryVelocityMemory:(id)arg4 auxiliaryCenterWeightMemory:(id)arg5 deviceNumber:(NSUInteger)arg6 kernelNumber:(NSUInteger)arg7 mlcIndex:(NSUInteger)arg8 auxIndex:(NSUInteger)arg9 numOptimizerData:(NSUInteger)arg10 saveToAux:(BOOL)arg11 isInputWeight:(BOOL)arg12 isHiddenWeight:(BOOL)arg13 isBias:(BOOL)arg14 ;
-(void)selectDevicesWithBatchSize:(NSUInteger)arg0 ;
-(void)selectDevicesWithBatchSize:(NSUInteger)arg0 calledfromBindAndWrite:(BOOL)arg1 ;
-(void)setConvolutionGradientComputeWeightsAndBiasOnly:(id)arg0 ;
-(void)setDeviceMemoryForTensor:(id)arg0 data:(id)arg1 ;
-(void)setFullyConnectedGradientComputeWeightsAndBiasOnly:(id)arg0 ;
-(void)setOptimizerLearningRate:(id)arg0 learningRate:(float)arg1 ;
-(void)setOptimizerTimeStep:(id)arg0 timeStep:(NSUInteger)arg1 ;
-(void)signalAllDevicesExcludingDevice:(NSUInteger)arg0 eventValue:(NSUInteger)arg1 ;
-(void)sumSharedGradientsForConvolutionLayerTensorParameter:(id)arg0 layerIndexForSummedGradients:(NSUInteger)arg1 ;
-(void)sumSharedGradientsForNormalizationLayerTensorParameter:(id)arg0 layerIndexForSummedGradients:(NSUInteger)arg1 isBetaTensor:(BOOL)arg2 ;
-(void)synchronizeOptimizerBuffers:(id)arg0 commandBuffer:(id)arg1 ;
-(void)synchronizeOptimizerUpdatesForTensor:(id)arg0 ;
-(void)synchronizeUpdatesForLayer:(id)arg0 ;
-(void)synchronizeWeightMatrixForRNNLayer:(id)arg0 matrixId:(NSUInteger)arg1 parameterType:(NSUInteger)arg2 accumulatorIndex:(NSUInteger)arg3 forLSTMNum:(NSUInteger)arg4 forDeviceNum:(NSUInteger)arg5 forGate:(NSUInteger)arg6 ;
-(void)unsafe_signalAllDevicesExcludingDevice:(NSUInteger)arg0 eventValue:(NSUInteger)arg1 ;
-(void)updateAllParametersWithOptimizer:(id)arg0 arrayOfParameters:(id)arg1 ;
-(void)updateBatchNormalizationLayer:(id)arg0 optimizer:(id)arg1 betaParameter:(id)arg2 gammaParameter:(id)arg3 meanTensor:(id)arg4 varianceTensor:(id)arg5 arrayOfParams:(id)arg6 ;
-(void)updateConvolutionLayer:(id)arg0 optimizer:(id)arg1 weightsParameter:(id)arg2 biasesParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateEmbeddingLayer:(id)arg0 weightsParameter:(id)arg1 optimizer:(id)arg2 arrayOfParams:(id)arg3 ;
-(void)updateFullyConnectedLayer:(id)arg0 optimizer:(id)arg1 weightsParameter:(id)arg2 biasesParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateGraphExecutionTime:(id)arg0 atIndex:(int)arg1 gpuTime:(CGFloat)arg2 ;
-(void)updateGroupNormalizationLayer:(id)arg0 optimizer:(id)arg1 betaParameter:(id)arg2 gammaParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateInstanceNormalizationLayer:(id)arg0 optimizer:(id)arg1 betaParameter:(id)arg2 gammaParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateLayerNormalizationLayer:(id)arg0 optimizer:(id)arg1 betaParameter:(id)arg2 gammaParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateMultiheadAttentionLayer:(id)arg0 optimizer:(id)arg1 weightsParameter:(id)arg2 biasesParameter:(id)arg3 arrayOfParams:(id)arg4 ;
-(void)updateRNNLayer:(id)arg0 optimizer:(id)arg1 inputWeightsParameter:(id)arg2 hiddenWeightsParameter:(id)arg3 biasesParameter:(id)arg4 arrayOfParams:(id)arg5 ;
-(void)updateTensorParameter:(id)arg0 optimizer:(id)arg1 gradient:(id)arg2 arrayOfParams:(id)arg3 ;
-(void)updateTensorsForFMAFusedLayers:(id)arg0 layerNext:(id)arg1 ;
-(void)updateTensorsForFusedArithmeticAndLayerNormalizationLayer:(id)arg0 layerNext:(id)arg1 ;
-(void)updateWithAdamOptimizer:(id)arg0 encoder:(id)arg1 deviceParameter:(id)arg2 source:(id)arg3 gradient:(id)arg4 result:(id)arg5 momentumIndex:(NSUInteger)arg6 ;
-(void)updateWithOptimizer:(id)arg0 arrayOfParams:(id)arg1 commandBuffer:(id)arg2 deviceParameter:(id)arg3 source:(id)arg4 gradient:(id)arg5 result:(id)arg6 momentumIndex:(NSUInteger)arg7 ;
-(void)updateWithRMSPropOptimizer:(id)arg0 encoder:(id)arg1 deviceParameter:(id)arg2 source:(id)arg3 gradient:(id)arg4 result:(id)arg5 momentumIndex:(NSUInteger)arg6 ;
-(void)updateWithSGDOptimizer:(id)arg0 encoder:(id)arg1 deviceParameter:(id)arg2 source:(id)arg3 gradient:(id)arg4 result:(id)arg5 momentumIndex:(NSUInteger)arg6 ;
-(void)waitForAllDevicesExcludingDevice:(NSUInteger)arg0 eventValue:(NSUInteger)arg1 ;
-(void)waitForOthers;


@end


#endif