// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCMULTIHEADATTENTIONLAYER_H
#define MLCMULTIHEADATTENTIONLAYER_H

@class NSArray;


#import "MLCLayer.h"
#import "MLCMultiheadAttentionDescriptor.h"

@interface MLCMultiheadAttentionLayer : MLCLayer

@property (readonly, retain, nonatomic) NSArray *attentionBiases; // ivar: _attentionBiases
@property (readonly, retain, nonatomic) NSArray *biases; // ivar: _biases
@property (readonly, retain, nonatomic) NSArray *biasesParameters; // ivar: _biasesParameters
@property (readonly, copy, nonatomic) MLCMultiheadAttentionDescriptor *descriptor; // ivar: _descriptor
@property (readonly, retain, nonatomic) NSArray *weights; // ivar: _weights
@property (readonly, retain, nonatomic) NSArray *weightsParameters; // ivar: _weightsParameters


+(id)layerWithDescriptor:(id)arg0 weights:(id)arg1 biases:(id)arg2 attentionBiases:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)allocatedDataSizeForTraining:(BOOL)arg0 optimizer:(id)arg1 ;
-(NSUInteger)parametersCount;
-(id)description;
-(id)initWithDescriptor:(id)arg0 weights:(id)arg1 bias:(id)arg2 attentionBias:(id)arg3 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;
-(void)allocateGradientsForParameters;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;


@end


#endif