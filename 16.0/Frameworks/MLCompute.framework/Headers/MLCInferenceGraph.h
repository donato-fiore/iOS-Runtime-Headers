// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCINFERENCEGRAPH_H
#define MLCINFERENCEGRAPH_H



#import "MLCGraph.h"

@interface MLCInferenceGraph : MLCGraph

@property (readonly, nonatomic) NSUInteger deviceMemorySize;
@property (nonatomic) NSUInteger inferenceNodeIndexInGraphLayerList; // ivar: _inferenceNodeIndexInGraphLayerList
@property (nonatomic) NSUInteger inferenceNodeInit; // ivar: _inferenceNodeInit


+(id)graphWithGraphObjects:(id)arg0 ;
-(BOOL)addInputs:(id)arg0 ;
-(BOOL)addInputs:(id)arg0 lossLabels:(id)arg1 ;
-(BOOL)addInputs:(id)arg0 lossLabels:(id)arg1 lossLabelWeights:(id)arg2 ;
-(BOOL)addOutputs:(id)arg0 ;
-(BOOL)compileWithOptions:(NSUInteger)arg0 device:(id)arg1 ;
-(BOOL)compileWithOptions:(NSUInteger)arg0 device:(id)arg1 inputTensors:(id)arg2 inputTensorsData:(id)arg3 ;
-(BOOL)executeWithInputsData:(id)arg0 batchSize:(NSUInteger)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(BOOL)executeWithInputsData:(id)arg0 lossLabelsData:(id)arg1 lossLabelWeightsData:(id)arg2 batchSize:(NSUInteger)arg3 options:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(BOOL)executeWithInputsData:(id)arg0 lossLabelsData:(id)arg1 lossLabelWeightsData:(id)arg2 outputsData:(id)arg3 batchSize:(NSUInteger)arg4 options:(NSUInteger)arg5 completionHandler:(id)arg6 ;
-(BOOL)executeWithInputsData:(id)arg0 outputsData:(id)arg1 batchSize:(NSUInteger)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(BOOL)linkWithGraphs:(id)arg0 ;
-(BOOL)recompileWithOptions:(NSUInteger)arg0 ;
-(id)concatenateWithSources:(id)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithGraphObjects:(id)arg0 ;
-(id)nodeWithLayer:(id)arg0 source:(id)arg1 ;
-(id)nodeWithLayer:(id)arg0 sources:(id)arg1 ;
-(id)reshapeWithShape:(id)arg0 source:(id)arg1 ;
-(id)resultTensorsForLayer:(id)arg0 ;
-(id)sourceTensorsForLayer:(id)arg0 ;
-(id)splitWithSource:(id)arg0 splitCount:(NSUInteger)arg1 dimension:(NSUInteger)arg2 ;
-(id)splitWithSource:(id)arg0 splitSectionLengths:(id)arg1 dimension:(NSUInteger)arg2 ;
-(id)transposeWithDimensions:(id)arg0 source:(id)arg1 ;


@end


#endif