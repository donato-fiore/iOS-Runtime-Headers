// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNCONVOLUTIONWEIGHTSANDBIASESSTATE_H
#define MPSCNNCONVOLUTIONWEIGHTSANDBIASESSTATE_H

@class MPSState;
@protocol MTLBuffer;



@interface MPSCNNConvolutionWeightsAndBiasesState : MPSState {
    NSUInteger _numberOfWeights;
    NSUInteger _numberOfBiases;
    unsigned int _weightsDataType;
    unsigned int _weightsLayout;
    NSUInteger _weightsOffset;
    NSUInteger _biasesOffset;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *biases;
@property (readonly, nonatomic) NSUInteger biasesOffset;
@property (readonly, nonatomic) NSUInteger numberOfBiases;
@property (readonly, nonatomic) NSUInteger numberOfWeights;
@property (readonly, nonatomic) NSObject<MTLBuffer> *weights;
@property (readonly, nonatomic) unsigned int weightsDataType;
@property (readonly, nonatomic) unsigned int weightsLayout;
@property (readonly, nonatomic) NSUInteger weightsOffset;


+(id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)arg0 cnnConvolutionDescriptor:(id)arg1 ;
+(id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)arg0 cnnConvolutionDescriptor:(id)arg1 weightsDataType:(unsigned int)arg2 ;
+(id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)arg0 cnnConvolutionDescriptor:(id)arg1 weightsDataType:(unsigned int)arg2 weightsLayout:(unsigned int)arg3 ;
-(id)initWithDevice:(id)arg0 cnnConvolutionDescriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 cnnConvolutionDescriptor:(id)arg1 weightsDataType:(unsigned int)arg2 ;
-(id)initWithDevice:(id)arg0 cnnConvolutionDescriptor:(id)arg1 weightsDataType:(unsigned int)arg2 weightsLayout:(unsigned int)arg3 ;
-(id)initWithWeights:(id)arg0 biases:(id)arg1 ;
-(id)initWithWeights:(id)arg0 biases:(id)arg1 weightsDataType:(unsigned int)arg2 ;
-(id)initWithWeights:(id)arg0 biases:(id)arg1 weightsDataType:(unsigned int)arg2 weightsLayout:(unsigned int)arg3 ;
-(id)initWithWeights:(id)arg0 weightsOffset:(NSUInteger)arg1 biases:(id)arg2 biasesOffset:(NSUInteger)arg3 cnnConvolutionDescriptor:(id)arg4 ;
-(id)initWithWeights:(id)arg0 weightsOffset:(NSUInteger)arg1 weightsDataType:(unsigned int)arg2 weightsLayout:(unsigned int)arg3 biases:(id)arg4 biasesOffset:(NSUInteger)arg5 cnnConvolutionDescriptor:(id)arg6 ;
-(void)initializeWithWeightsCount:(NSUInteger)arg0 weightsOffset:(NSUInteger)arg1 weightsDataType:(unsigned int)arg2 weightsLayout:(unsigned int)arg3 biasesCount:(NSUInteger)arg4 biasesOffset:(NSUInteger)arg5 ;


@end


#endif