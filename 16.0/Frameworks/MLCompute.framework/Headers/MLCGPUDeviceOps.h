// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCGPUDEVICEOPS_H
#define MLCGPUDEVICEOPS_H

@class NSArray, NSMutableArray;


#import "MLCDeviceOps.h"
#import "_MLCGPULayer.h"
#import "MLCActivationDescriptor.h"

@interface MLCGPUDeviceOps : MLCDeviceOps

@property (nonatomic) int arithmeticOp; // ivar: _arithmeticOp
@property (copy, nonatomic) NSArray *begin; // ivar: _begin
@property (nonatomic) int biasesDataType; // ivar: _biasesDataType
@property (retain, nonatomic) NSArray *centerWeightVectors; // ivar: _centerWeightVectors
@property (retain, nonatomic) id *combinedForwardAndGradientLossKernel; // ivar: _combinedForwardAndGradientLossKernel
@property (nonatomic) BOOL computeWeightsAndBiasOnly; // ivar: _computeWeightsAndBiasOnly
@property (nonatomic) int constantArithmeticSourcesFlags; // ivar: _constantArithmeticSourcesFlags
@property (nonatomic) BOOL countIncludesPadding; // ivar: _countIncludesPadding
@property (nonatomic) NSUInteger dilationRateInX; // ivar: _dilationRateInX
@property (nonatomic) NSUInteger dilationRateInY; // ivar: _dilationRateInY
@property (copy, nonatomic) NSArray *end; // ivar: _end
@property (retain, nonatomic) id *exportableState; // ivar: _exportableState
@property (readonly, retain, nonatomic) id *forwardKernel; // ivar: _forwardKernel
@property (retain, nonatomic) id *forwardStatisticsKernel; // ivar: _forwardStatisticsKernel
@property (readonly, retain, nonatomic) id *gradientKernel; // ivar: _gradientKernel
@property (retain, nonatomic) id *gradientState; // ivar: _gradientState
@property (retain, nonatomic) id *gradientStatisticsKernel; // ivar: _gradientStatisticsKernel
@property (nonatomic) float gramMatrixScale; // ivar: _gramMatrixScale
@property (nonatomic) BOOL isMPSGraph; // ivar: _isMPSGraph
@property (nonatomic) BOOL isMPSKernel; // ivar: _isMPSKernel
@property (nonatomic) NSUInteger kernelSizeInX; // ivar: _kernelSizeInX
@property (nonatomic) NSUInteger kernelSizeInY; // ivar: _kernelSizeInY
@property (retain, nonatomic) _MLCGPULayer *layer; // ivar: _layer
@property (retain, nonatomic) id *lossInitialGradientKernel; // ivar: _lossInitialGradientKernel
@property (nonatomic) int metalKernelType; // ivar: _metalKernelType
@property (retain, nonatomic) NSArray *momentumVectors; // ivar: _momentumVectors
@property (retain, nonatomic) id *movingState; // ivar: _movingState
@property (retain, nonatomic) MLCActivationDescriptor *neuronDescriptor; // ivar: _neuronDescriptor
@property (nonatomic) NSUInteger paddingBottom; // ivar: _paddingBottom
@property (nonatomic) NSUInteger paddingLeft; // ivar: _paddingLeft
@property (nonatomic) NSUInteger paddingRight; // ivar: _paddingRight
@property (nonatomic) NSUInteger paddingTop; // ivar: _paddingTop
@property (retain, nonatomic) id *poolingIndicesBuffer; // ivar: _poolingIndicesBuffer
@property (nonatomic) BOOL recomputeResultTensor; // ivar: _recomputeResultTensor
@property (retain, nonatomic) id *reduceLossKernel; // ivar: _reduceLossKernel
@property (nonatomic) NSUInteger scatterGatherDimension; // ivar: _scatterGatherDimension
@property (nonatomic) int scatterReduceType; // ivar: _scatterReduceType
@property (readonly, retain, nonatomic) id *secondaryGradientKernel; // ivar: _secondaryGradientKernel
@property (nonatomic) NSUInteger softmaxAxis; // ivar: _softmaxAxis
@property (copy, nonatomic) NSArray *source0Shape; // ivar: _source0Shape
@property (copy, nonatomic) NSArray *source1Shape; // ivar: _source1Shape
@property (copy, nonatomic) NSArray *source2Shape; // ivar: _source2Shape
@property (copy, nonatomic) NSArray *stride; // ivar: _stride
@property (nonatomic) NSUInteger strideInX; // ivar: _strideInX
@property (nonatomic) NSUInteger strideInY; // ivar: _strideInY
@property (nonatomic) NSUInteger temporaryHeapIndex; // ivar: _temporaryHeapIndex
@property (nonatomic) NSUInteger totalElementsPerChannel; // ivar: _totalElementsPerChannel
@property (retain, nonatomic) NSMutableArray *transposeGradientShape; // ivar: _transposeGradientShape
@property (retain, nonatomic) NSMutableArray *transposeShape; // ivar: _transposeShape
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForResultGradientTensor; // ivar: _useSourceGradientDeviceMemoryForResultGradientTensor
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForSecondaryResultGradientTensor; // ivar: _useSourceGradientDeviceMemoryForSecondaryResultGradientTensor
@property (retain, nonatomic) NSArray *velocityVectors; // ivar: _velocityVectors
@property (nonatomic) int weightsDataType; // ivar: _weightsDataType


+(id)deviceOps;
+(id)deviceOpsWithForwardKernel:(id)arg0 ;
+(id)deviceOpsWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;
+(id)deviceOpsWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 secondaryGradientKernel:(id)arg2 ;
+(id)deviceOpsWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 secondaryGradientKernel:(id)arg2 forwardStatistics:(id)arg3 gradientStatistics:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;
-(id)initWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 secondaryGradientKernel:(id)arg2 forwardStatistics:(id)arg3 gradientStatistics:(id)arg4 ;


@end


#endif