// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNDSPGRAPHCUSTOMMODEL_H
#define SNDSPGRAPHCUSTOMMODEL_H

@class MLModelDescription, MLMultiArrayConstraint, MLMultiArray;

#import <Foundation/Foundation.h>


@interface SNDSPGraphCustomModel : NSObject {
    MLModelDescription *_modelDescription;
    MLMultiArrayConstraint *_inputConstraint;
    MLMultiArrayConstraint *_outputConstraint;
    unique_ptr<DSPGraph::Graph, std::default_delete<DSPGraph::Graph>> _graph;
    vector<float, std::allocator<float>> _scratchFloatSpace;
    MLMultiArray *_modelOutput;
    id *_preProcessCallback;
}




-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif