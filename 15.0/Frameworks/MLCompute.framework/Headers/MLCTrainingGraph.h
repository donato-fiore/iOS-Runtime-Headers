// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCTRAININGGRAPH_H
#define MLCTRAININGGRAPH_H

@class MLCLayer<MLCLayerCompiling>, NSMutableArray, NSSet;


#import "MLCGraph.h"
#import "MLCLayer.h"
#import "MLCOptimizer.h"

@interface MLCTrainingGraph : MLCGraph

@property (nonatomic) BOOL allocateOptimizerData; // ivar: _allocateOptimizerData
@property (nonatomic) BOOL allocateResultGradientTensors; // ivar: _allocateResultGradientTensors
@property (readonly, nonatomic) NSUInteger deviceMemorySize;
@property (readonly, nonatomic) MLCLayer *dummyLayer; // ivar: _dummyLayer
@property (nonatomic) NSUInteger firstTrainableLayerIndex; // ivar: _firstTrainableLayerIndex
@property (retain, nonatomic) MLCLayer<MLCLayerCompiling> *lossLayer; // ivar: _lossLayer
@property (retain, nonatomic) NSMutableArray *lossLayersInTrainingGraph; // ivar: _lossLayersInTrainingGraph
@property (retain, nonatomic) MLCOptimizer *optimizer; // ivar: _optimizer
@property (retain, nonatomic) NSMutableArray *optimizerParameterList; // ivar: _optimizerParameterList
@property (retain, nonatomic) NSSet *optimizerUpdateDeviceList; // ivar: _optimizerUpdateDeviceList
@property (retain, nonatomic) NSMutableArray *optimizerUpdateLayerList; // ivar: _optimizerUpdateLayerList
@property (retain, nonatomic) NSMutableArray *rootSourceGradientTensor; // ivar: _rootSourceGradientTensor
@property (retain, nonatomic) NSMutableArray *stopGradientTensorList; // ivar: _stopGradientTensorList
@property (nonatomic) BOOL updateOptimizerTimeStep; // ivar: _updateOptimizerTimeStep


+(id)graphWithGraphObjects:(id)arg0 lossLayer:(id)arg1 optimizer:(id)arg2 ;
-(BOOL)addInputs:(id)arg0 lossLabels:(id)arg1 ;
-(BOOL)addInputs:(id)arg0 lossLabels:(id)arg1 lossLabelWeights:(id)arg2 ;
-(BOOL)addOutputs:(id)arg0 ;
-(BOOL)allocateGradientTensorsForMultipleChildrenOfLayer:(id)arg0 gradientTensorsAreTemporary:(BOOL)arg1 device:(id)arg2 ;
-(BOOL)allocateGradientTensorsForMultipleChildrenOfSplitLayer:(id)arg0 tensor:(id)arg1 gradientTensorsAreTemporary:(BOOL)arg2 device:(id)arg3 ;
-(BOOL)allocateRootSourceGradientTensors:(id)arg0 ;
-(BOOL)bindOptimizerData:(id)arg0 deviceData:(id)arg1 withTensor:(id)arg2 ;
-(BOOL)checkAndSumIfSharedParameterUpdateForNormalizationLayerTensor:(id)arg0 layer:(id)arg1 device:(id)arg2 isBetaTensor:(BOOL)arg3 ;
-(BOOL)compileAndAllocateGradientTensorsForGraph:(BOOL)arg0 ;
-(BOOL)compileOptimizer:(id)arg0 ;
-(BOOL)compileWithOptions:(NSUInteger)arg0 device:(id)arg1 ;
-(BOOL)compileWithOptions:(NSUInteger)arg0 device:(id)arg1 inputTensors:(id)arg2 inputTensorsData:(id)arg3 ;
-(BOOL)executeForwardWithBatchSize:(NSUInteger)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(BOOL)executeForwardWithBatchSize:(NSUInteger)arg0 options:(NSUInteger)arg1 outputsData:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)executeGradientWithBatchSize:(NSUInteger)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(BOOL)executeGradientWithBatchSize:(NSUInteger)arg0 options:(NSUInteger)arg1 outputsData:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)executeOptimizerUpdateWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(BOOL)executeWithInputsData:(id)arg0 lossLabelsData:(id)arg1 lossLabelWeightsData:(id)arg2 batchSize:(NSUInteger)arg3 options:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(BOOL)executeWithInputsData:(id)arg0 lossLabelsData:(id)arg1 lossLabelWeightsData:(id)arg2 outputsData:(id)arg3 batchSize:(NSUInteger)arg4 options:(NSUInteger)arg5 completionHandler:(id)arg6 ;
-(BOOL)isSourceTensorSharableWithResultGradientTensor:(id)arg0 layer:(id)arg1 ;
-(BOOL)linkWithGraphs:(id)arg0 ;
-(BOOL)recompileWithOptions:(NSUInteger)arg0 ;
-(BOOL)setTrainingTensorParameters:(id)arg0 ;
-(BOOL)stopGradientForTensors:(id)arg0 ;
-(NSUInteger)deviceMemorySizeWithDevice:(id)arg0 ;
-(NSUInteger)layerIndexToStoreSummedGradientsForTensor:(id)arg0 ;
-(id)allocateUserGradientForTensor:(id)arg0 ;
-(id)description;
-(id)gradientDataForParameter:(id)arg0 layer:(id)arg1 ;
-(id)gradientTensorForInput:(id)arg0 ;
-(id)init;
-(id)initWithGraphObjects:(id)arg0 lossLayer:(id)arg1 optimizer:(id)arg2 ;
-(id)resultGradientTensorToUseByExecuteGradientForLayer:(id)arg0 sourceIndex:(NSUInteger)arg1 incrementIntermediateIndex:(BOOL)arg2 ;
-(id)resultGradientTensorsForLayer:(id)arg0 ;
-(id)resultGradientTensorsForLayer:(id)arg0 summedGradientForInputTensors:(BOOL)arg1 ;
-(id)resultTensorsForLayer:(id)arg0 ;
-(id)sourceGradientTensorsForLayer:(id)arg0 ;
-(id)sourceTensorsForLayer:(id)arg0 ;
-(void)allocateGradientTensorsForLayersInGraph:(BOOL)arg0 ;
-(void)dealloc;
-(void)executeForwardToLayerIndex:(NSUInteger)arg0 resultTensor:(id)arg1 resultStateIsTemporary:(BOOL)arg2 batchSize:(NSUInteger)arg3 forTraining:(BOOL)arg4 executionOptions:(NSUInteger)arg5 ;
-(void)executeGradientFromLayerIndex:(NSUInteger)arg0 resultStateIsTemporary:(BOOL)arg1 batchSize:(NSUInteger)arg2 executionOptions:(NSUInteger)arg3 ;
-(void)executeOptimizerUpdateWithExecutionOptions:(NSUInteger)arg0 ;
-(void)linkRelatedGradientTensorsForConcatLayer:(id)arg0 device:(id)arg1 ;
-(void)markLayersAsTrainable;
-(void)sumAllRootSourceGradientTensors:(id)arg0 ;
-(void)sumIntermediateGradientTensorsForLayer:(id)arg0 ;
-(void)sumRootSourceGradientTensor:(id)arg0 device:(id)arg1 ;
-(void)synchronizeUpdates;
-(void)updateIsTrainableForLayerWithStopGradientTensor:(id)arg0 checkChildLayers:(BOOL)arg1 ;
-(void)updateTrainableLayerList:(BOOL)arg0 ;


@end


#endif