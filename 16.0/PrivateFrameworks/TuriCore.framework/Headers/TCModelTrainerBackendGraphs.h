// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCMODELTRAINERBACKENDGRAPHS_H
#define TCMODELTRAINERBACKENDGRAPHS_H

@class MLCInferenceGraph, NSDictionary, MLCTrainingGraph;

#import <Foundation/Foundation.h>


@interface TCModelTrainerBackendGraphs : NSObject

@property (retain, nonatomic) MLCInferenceGraph *inferenceGraph; // ivar: _inferenceGraph
@property (retain, nonatomic) NSDictionary *inferenceInputs; // ivar: _inferenceInputs
@property (retain, nonatomic) NSDictionary *inferenceOutputs; // ivar: _inferenceOutputs
@property (retain, nonatomic) NSDictionary *layerWeights; // ivar: _layerWeights
@property (retain, nonatomic) MLCTrainingGraph *trainingGraph; // ivar: _trainingGraph
@property (retain, nonatomic) NSDictionary *trainingInputs; // ivar: _trainingInputs
@property (retain, nonatomic) NSDictionary *trainingLossLabelWeights; // ivar: _trainingLossLabelWeights
@property (retain, nonatomic) NSDictionary *trainingLossLabels; // ivar: _trainingLossLabels
@property (retain, nonatomic) NSDictionary *trainingOutputs; // ivar: _trainingOutputs




@end


#endif