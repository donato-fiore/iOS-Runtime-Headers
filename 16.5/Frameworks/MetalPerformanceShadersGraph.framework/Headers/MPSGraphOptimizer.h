// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHOPTIMIZER_H
#define MPSGRAPHOPTIMIZER_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "MPSGraph.h"
#import "MPSGraphTensor.h"

@interface MPSGraphOptimizer : NSObject {
    MPSGraph *_graph;
    NSArray *_trainableVariables;
    NSString *_name;
}


@property (readonly, nonatomic) MPSGraphTensor *learningRateTensor; // ivar: _learningRateTensor
@property (readonly, nonatomic) NSArray *updateOperations;
@property (readonly, nonatomic) NSDictionary *variablesToGradientTensorMap; // ivar: _variablesToGradientTensorMap
@property (readonly, nonatomic) NSDictionary *variablesToUpdateOpMap; // ivar: _variablesToUpdateOpMap


-(id)initWithGraph:(id)arg0 learningRateTensor:(id)arg1 trainableVariables:(id)arg2 variablesToGradientTensorMap:(id)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 lossTensor:(id)arg1 learningRateTensor:(id)arg2 trainableVariables:(id)arg3 name:(id)arg4 ;


@end


#endif