// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLNEURALNETWORKMLCOMPUTEGRAPH_H
#define MLNEURALNETWORKMLCOMPUTEGRAPH_H

@class MLCDevice, NSString, MLCGraph, MLCInferenceGraph, NSDictionary, MLCTrainingGraph;

#import <Foundation/Foundation.h>

#import "MLModelDescription.h"

@interface MLNeuralNetworkMLComputeGraph : NSObject

@property (nonatomic) BOOL classifierOutputIsSigmoidOutput; // ivar: _classifierOutputIsSigmoidOutput
@property (retain, nonatomic) MLCDevice *device; // ivar: _device
@property (nonatomic) NSUInteger executionOptions; // ivar: _executionOptions
@property (retain, nonatomic) NSString *fusedLayerInputName; // ivar: _fusedLayerInputName
@property (retain, nonatomic) MLCGraph *graph; // ivar: _graph
@property (retain, nonatomic) MLCInferenceGraph *inferenceGraph; // ivar: _inferenceGraph
@property (nonatomic) BOOL layerFusedToLoss; // ivar: _layerFusedToLoss
@property (retain, nonatomic) NSDictionary *layersMap; // ivar: _layersMap
@property (retain, nonatomic) NSDictionary *mlcInputs; // ivar: _mlcInputs
@property (retain, nonatomic) NSDictionary *mlcLabels; // ivar: _mlcLabels
@property (retain, nonatomic) MLModelDescription *modelDescription; // ivar: _modelDescription
@property (readonly, nonatomic) NSDictionary *outputNameToLayerMap; // ivar: _outputNameToLayerMap
@property (retain, nonatomic) MLCTrainingGraph *trainingGraph; // ivar: _trainingGraph


+(id)graphFromCompiledArchive:(*void)arg0 modelDescription:(id)arg1 batchSize:(NSUInteger)arg2 numberOfClasses:(NSUInteger)arg3 computeUnits:(NSInteger)arg4 error:(*id)arg5 ;
-(BOOL)buildGraphsFor:(*void)arg0 batchSize:(NSUInteger)arg1 numberOfClasses:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)copyWeightsFrom:(id)arg0 to:(*void)arg1 error:(*id)arg2 ;
-(BOOL)saveUpdatedWeightsTo:(*void)arg0 error:(*id)arg1 ;
-(id)buildInferenceGraph:(id)arg0 updateParams:(*void)arg1 layers:(*void)arg2 mlcTensorByName:(id)arg3 outputNameToLayerMap:(id)arg4 error:(*id)arg5 ;
-(id)buildMLComputeTensorDescriptorWith:(id)arg0 featureName:(id)arg1 batchSize:(NSUInteger)arg2 numberOfClasses:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)buildTrainingGraphFrom:(id)arg0 updateParams:(*void)arg1 numberOfClasses:(NSUInteger)arg2 mlcTensorByName:(id)arg3 error:(*id)arg4 ;
-(id)createMultiArrayFromTensor:(id)arg0 error:(*id)arg1 ;
-(id)getBiasesForLayerNamed:(id)arg0 error:(*id)arg1 ;
-(id)getWeightsForLayerNamed:(id)arg0 error:(*id)arg1 ;
-(id)initWithCompiledArchive:(*void)arg0 modelDescription:(id)arg1 batchSize:(NSUInteger)arg2 numberOfClasses:(NSUInteger)arg3 computeUnits:(NSInteger)arg4 error:(*id)arg5 ;
-(id)inputTensorMapWithBatchSize:(NSUInteger)arg0 numberOfClasses:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)labelTensorMapWithBatchSize:(NSUInteger)arg0 numberOfClasses:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)lossInputsFromUpdateParams:(*void)arg0 ;
-(int)mlcDeviceTypeForComputeUnit:(NSInteger)arg0 ;


@end


#endif