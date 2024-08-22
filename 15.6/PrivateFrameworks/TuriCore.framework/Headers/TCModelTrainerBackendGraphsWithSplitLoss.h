// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCMODELTRAINERBACKENDGRAPHSWITHSPLITLOSS_H
#define TCMODELTRAINERBACKENDGRAPHSWITHSPLITLOSS_H

@class MLCTrainingGraph, NSDictionary;


#import "TCModelTrainerBackendGraphs.h"

@interface TCModelTrainerBackendGraphsWithSplitLoss : TCModelTrainerBackendGraphs

@property (retain, nonatomic) MLCTrainingGraph *lossGraph; // ivar: _lossGraph
@property (retain, nonatomic) NSDictionary *lossGraphInputs; // ivar: _lossGraphInputs
@property (retain, nonatomic) NSDictionary *lossGraphOutputs; // ivar: _lossGraphOutputs




@end


#endif