// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCLSTMLAYER_H
#define MLCLSTMLAYER_H

@class NSArray;


#import "MLCLayer.h"
#import "MLCLSTMDescriptor.h"
#import "MLCActivationDescriptor.h"

@interface MLCLSTMLayer : MLCLayer

@property (readonly, retain, nonatomic) NSArray *biases; // ivar: _biases
@property (readonly, retain, nonatomic) NSArray *biasesParameters; // ivar: _biasesParameters
@property (readonly, copy, nonatomic) MLCLSTMDescriptor *descriptor; // ivar: _descriptor
@property (readonly, copy, nonatomic) NSArray *gateActivations; // ivar: _gateActivations
@property (readonly, retain, nonatomic) NSArray *hiddenWeights; // ivar: _hiddenWeights
@property (readonly, retain, nonatomic) NSArray *hiddenWeightsParameters; // ivar: _hiddenWeightsParameters
@property (readonly, retain, nonatomic) NSArray *inputWeights; // ivar: _inputWeights
@property (readonly, retain, nonatomic) NSArray *inputWeightsParameters; // ivar: _inputWeightsParameters
@property (readonly, copy, nonatomic) MLCActivationDescriptor *outputResultActivation; // ivar: _outputResultActivation
@property (readonly, retain, nonatomic) NSArray *peepholeWeights; // ivar: _peepholeWeights
@property (readonly, retain, nonatomic) NSArray *peepholeWeightsParameters; // ivar: _peepholeWeightsParameters


+(id)layerWithDescriptor:(id)arg0 inputWeights:(id)arg1 hiddenWeights:(id)arg2 biases:(id)arg3 ;
+(id)layerWithDescriptor:(id)arg0 inputWeights:(id)arg1 hiddenWeights:(id)arg2 peepholeWeights:(id)arg3 biases:(id)arg4 ;
+(id)layerWithDescriptor:(id)arg0 inputWeights:(id)arg1 hiddenWeights:(id)arg2 peepholeWeights:(id)arg3 biases:(id)arg4 gateActivations:(id)arg5 outputResultActivation:(id)arg6 ;
-(BOOL)allocateDataForOptimizer:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(NSUInteger)allocatedDataSizeForTraining:(BOOL)arg0 optimizer:(id)arg1 ;
-(NSUInteger)parametersCount;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithDescriptor:(id)arg0 inputWeights:(id)arg1 hiddenWeights:(id)arg2 peepholeWeights:(id)arg3 biases:(id)arg4 gateActivations:(id)arg5 outputResultActivation:(id)arg6 ;
-(id)resultStateTensorWithSources:(id)arg0 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;
-(void)allocateGradientsForParameters;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;


@end


#endif