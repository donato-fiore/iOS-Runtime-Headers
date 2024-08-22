// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSRNNMATRIXTRAININGLAYER_H
#define MPSRNNMATRIXTRAININGLAYER_H

@class MPSKernel, MPSMatrixMultiplication, NSMutableArray;



@interface MPSRNNMatrixTrainingLayer : MPSKernel {
    int layerType;
    *void layer;
    MPSMatrixMultiplication *gemmKernel;
    MPSMatrixMultiplication *gemmKernel_noAccumulate;
    MPSMatrixMultiplication *gemmKernelNonTranspose;
    MPSMatrixMultiplication *gemmKernelNonTranspose_noAccumulate;
    MPSMatrixMultiplication *gemmKernelTN;
    MPSMatrixMultiplication *gemmKernelTN_accumulate;
    NSMutableArray *weightDescriptors;
}


@property (nonatomic) BOOL accumulateWeightGradients; // ivar: _accumulateWeightGradients
@property (readonly, nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly, nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (nonatomic) BOOL propagateFullRecurrentRows; // ivar: _propagateFullRecurrentRows
@property (nonatomic) BOOL recurrentOutputIsTemporary; // ivar: _recurrentOutputIsTemporary
@property (nonatomic) BOOL storeAllIntermediateStates; // ivar: _storeAllIntermediateStates
@property (nonatomic) BOOL trainingStateIsTemporary; // ivar: _trainingStateIsTemporary


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 rnnDescriptor:(id)arg1 trainableWeights:(id)arg2 ;
-(id)recurrentStateForBatchSize:(NSUInteger)arg0 forGradientPass:(BOOL)arg1 ;
-(id)temporaryRecurrentStateForCommandBuffer:(id)arg0 batchSize:(NSUInteger)arg1 forGradientPass:(BOOL)arg2 ;
-(void)createTemporaryWeightGradientMatrices:(id)arg0 dataType:(unsigned int)arg1 commandBuffer:(id)arg2 ;
-(void)createWeightGradientMatrices:(id)arg0 dataType:(unsigned int)arg1 ;
-(void)createWeightMatrices:(id)arg0 ;
-(void)dealloc;
-(void)encodeCopyWeightsToCommandBuffer:(id)arg0 weights:(id)arg1 matrixId:(NSUInteger)arg2 matrix:(id)arg3 copyFromWeightsToMatrix:(BOOL)arg4 matrixOffset:(struct ? )arg5 ;
-(void)encodeForwardSequenceToCommandBuffer:(id)arg0 sourceMatrices:(id)arg1 destinationMatrices:(id)arg2 trainingStates:(id)arg3 weights:(id)arg4 ;
-(void)encodeForwardSequenceToCommandBuffer:(id)arg0 sourceMatrices:(id)arg1 sourceOffsets:(*NSUInteger)arg2 destinationMatrices:(id)arg3 destinationOffsets:(*NSUInteger)arg4 trainingStates:(id)arg5 recurrentInputState:(id)arg6 recurrentOutputStates:(id)arg7 weights:(id)arg8 ;
-(void)encodeGradientSequenceToCommandBuffer:(id)arg0 forwardSources:(id)arg1 forwardSourceOffsets:(*NSUInteger)arg2 sourceGradients:(id)arg3 sourceGradientOffsets:(*NSUInteger)arg4 destinationGradients:(id)arg5 destinationOffsets:(*NSUInteger)arg6 weightGradients:(id)arg7 trainingStates:(id)arg8 recurrentInputState:(id)arg9 recurrentOutputStates:(id)arg10 weights:(id)arg11 ;
-(void)encodeGradientSequenceToCommandBuffer:(id)arg0 forwardSources:(id)arg1 sourceGradients:(id)arg2 destinationGradients:(id)arg3 weightGradients:(id)arg4 trainingStates:(id)arg5 weights:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif