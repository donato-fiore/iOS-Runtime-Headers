// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCGRAPH_H
#define MLCGRAPH_H

@class NSDictionary, NSMutableArray, NSArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "MLCDevice.h"

@interface MLCGraph : NSObject

@property (retain, nonatomic) NSDictionary *allInputs; // ivar: _allInputs
@property (retain, nonatomic) NSDictionary *allLossLabelWeights; // ivar: _allLossLabelWeights
@property (retain, nonatomic) NSDictionary *allLossLabels; // ivar: _allLossLabels
@property (retain, nonatomic) NSDictionary *allOutputs; // ivar: _allOutputs
@property (nonatomic) BOOL allocateDeviceMemoryForTensorsInGraph; // ivar: _allocateDeviceMemoryForTensorsInGraph
@property (nonatomic) NSUInteger compilerOptions; // ivar: _compilerOptions
@property (retain, nonatomic) MLCDevice *device; // ivar: _device
@property (retain, nonatomic) NSMutableArray *freeResourceList; // ivar: _freeResourceList
@property (retain, nonatomic) NSMutableArray *graphLayerList; // ivar: _graphLayerList
@property (readonly, retain, nonatomic) NSArray *graphObjects; // ivar: _graphObjects
@property (retain, nonatomic) NSMutableDictionary *layerChildMap; // ivar: _layerChildMap
@property (retain, nonatomic) NSMutableDictionary *layerParentMap; // ivar: _layerParentMap
@property (readonly, nonatomic) NSArray *layers;
@property (retain, nonatomic) NSMutableArray *lstmLayerIndexList; // ivar: _lstmLayerIndexList
@property (nonatomic) NSUInteger nextLayerID; // ivar: _nextLayerID
@property (nonatomic) BOOL readyForExecution; // ivar: _readyForExecution
@property (nonatomic) BOOL recompileAfterLinking; // ivar: _recompileAfterLinking
@property (retain, nonatomic) NSMutableArray *rootLevelTensorNodes; // ivar: _rootLevelTensorNodes
@property (nonatomic) BOOL staticBatchSizeInGraph; // ivar: _staticBatchSizeInGraph
@property (readonly, nonatomic) NSString *summarizedDOTDescription;


+(id)graph;
+(id)graphWithGraphObjects:(id)arg0 ;
-(BOOL)addInputs:(id)arg0 lossLabels:(id)arg1 ;
-(BOOL)addInputs:(id)arg0 lossLabels:(id)arg1 lossLabelWeights:(id)arg2 ;
-(BOOL)addOutputs:(id)arg0 ;
-(BOOL)bindAndWriteData:(id)arg0 forInputs:(id)arg1 toDevice:(id)arg2 batchSize:(NSUInteger)arg3 synchronous:(BOOL)arg4 ;
-(BOOL)bindAndWriteData:(id)arg0 forInputs:(id)arg1 toDevice:(id)arg2 batchSize:(NSUInteger)arg3 synchronous:(BOOL)arg4 skipWrite:(BOOL)arg5 ;
-(BOOL)bindAndWriteData:(id)arg0 forInputs:(id)arg1 toDevice:(id)arg2 synchronous:(BOOL)arg3 ;
-(BOOL)checkPageAlignmentAndSizeForOutputs:(id)arg0 ;
-(BOOL)checksBeforeAddLayerInGraph:(id)arg0 sources:(id)arg1 forTraining:(BOOL)arg2 ;
-(BOOL)dispatchReadsForMultipleTensorOutputs:(id)arg0 finalTensorInGraph:(id)arg1 finalResultTensor:(id)arg2 batchSize:(NSUInteger)arg3 ;
-(BOOL)isLayerInGraphLayerList:(id)arg0 graphLayerList:(id)arg1 ;
-(id)concatenateWithSources:(id)arg0 dimension:(NSUInteger)arg1 ;
-(id)conditionalWithPredicate:(id)arg0 trueBranch:(id)arg1 falseBranch:(id)arg2 ;
-(id)createGradientSourceTensorWith:(id)arg0 source:(id)arg1 ;
-(id)createLossGradientSourceTensorWith:(id)arg0 source:(id)arg1 batchSize:(id)arg2 ;
-(id)createTensorWith:(id)arg0 sources:(id)arg1 ;
-(id)description;
-(id)gatherWithDimension:(NSUInteger)arg0 source:(id)arg1 indices:(id)arg2 ;
-(id)init;
-(id)initWithGraphObjects:(id)arg0 ;
-(id)nodeWithLayer:(id)arg0 source:(id)arg1 ;
-(id)nodeWithLayer:(id)arg0 sources:(id)arg1 ;
-(id)nodeWithLayer:(id)arg0 sources:(id)arg1 disableUpdate:(BOOL)arg2 ;
-(id)nodeWithLayer:(id)arg0 sources:(id)arg1 forTraining:(BOOL)arg2 ;
-(id)nodeWithLayer:(id)arg0 sources:(id)arg1 lossLabels:(id)arg2 ;
-(id)nodeWithMultiOutputLayer:(id)arg0 source:(id)arg1 forTraining:(BOOL)arg2 ;
-(id)reshapeWithShape:(id)arg0 source:(id)arg1 ;
-(id)resultTensorsForLayer:(id)arg0 ;
-(id)resultTensorsForLayer:(id)arg0 graphLayerList:(id)arg1 ;
-(id)scatterWithDimension:(NSUInteger)arg0 source:(id)arg1 indices:(id)arg2 copyFrom:(id)arg3 reductionType:(int)arg4 ;
-(id)selectWithSources:(id)arg0 condition:(id)arg1 ;
-(id)sourceTensorsForLayer:(id)arg0 ;
-(id)sourceTensorsForLayer:(id)arg0 graphLayerList:(id)arg1 ;
-(id)splitWithSource:(id)arg0 splitCount:(NSUInteger)arg1 dimension:(NSUInteger)arg2 ;
-(id)splitWithSource:(id)arg0 splitSectionLengths:(id)arg1 dimension:(NSUInteger)arg2 ;
-(id)transposeWithDimensions:(id)arg0 source:(id)arg1 ;
-(void)addGraphNodes:(id)arg0 withControlTreeNode:(id)arg1 ;
-(void)allocateDeviceMemoryForTensor:(id)arg0 device:(id)arg1 ;
-(void)checkAndResetTensorsAssociatedWithLayer:(id)arg0 sources:(id)arg1 ;
-(void)createVariableLengthSequenceTensorsForLayer:(id)arg0 withVariableSequenceLength:(id)arg1 ;
-(void)dealloc;
-(void)enumerateInputsUsingBlock:(id)arg0 ;
-(void)enumerateLayersUsingBlock:(id)arg0 ;
-(void)enumerateOutputsUsingBlock:(id)arg0 ;
-(void)flattenConditionalLayer:(id)arg0 ;
-(void)freeDeviceMemoryForTensorIfSafe:(id)arg0 device:(id)arg1 ;
-(void)insertPhis:(id)arg0 ;
-(void)linkRelatedTensorsForConcatLayer:(id)arg0 device:(id)arg1 ;
-(void)linkSourceTensorsWithLayer:(id)arg0 sources:(id)arg1 ;
-(void)updateDeviceMemoryReadCountForGradientWithLayer:(id)arg0 tensor:(id)arg1 checkIfSourceNeeded:(BOOL)arg2 checkIfResultNeeded:(BOOL)arg3 ;
-(void)updateDeviceMemoryReadCountForTensor:(id)arg0 ;
-(void)updateLSTMLayersForVariableSequenceLengthInGraph:(id)arg0 withInputData:(id)arg1 ;
-(void)updateOutputTensorsDeviceMemoryWithData:(id)arg0 ;
-(void)writeAsyncToDevice:(id)arg0 dataForTensors:(id)arg1 ;


@end


#endif