// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCESCHEDULERFRAMEBUFFERBUILDER_H
#define BWINFERENCESCHEDULERFRAMEBUFFERBUILDER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "BWInferenceSchedulerGraph.h"
#import "BWInferenceSchedulerJobList.h"

@interface BWInferenceSchedulerFramebufferBuilder : NSObject {
    BWInferenceSchedulerGraph *_graph;
    BWInferenceSchedulerJobList *_prototypeJobList;
    NSUInteger _jobCount;
    NSMapTable *_directedEdgesByNode;
    BOOL _didVendFramebuffer;
}




+(void)initialize;
-(BOOL)_validToDeriveFormat:(id)arg0 fromFormat:(id)arg1 vendingProvider:(id)arg2 ;
-(id)_addScalingNodesForNodesExpectingInputs:(id)arg0 nodesProvidingOutput:(id)arg1 dependencyProvider:(id)arg2 nodesForExternalRequirements:(id)arg3 fencedMediaKeys:(id)arg4 iterations:(NSUInteger)arg5 ;
-(id)_connectNodesExpectingInputs:(id)arg0 toNodesProvidingOutput:(id)arg1 dependencyProvider:(id)arg2 nodeForExternalRequirement:(id)arg3 ;
-(id)_newScalingNodesForScalingRequirement:(id)arg0 fencedMedia:(BOOL)arg1 ;
-(id)initWithInferenceRequirements:(id)arg0 dependencyProvider:(id)arg1 formatProvider:(id)arg2 ;
-(id)newFramebuffer;
-(void)_populateJobList:(id)arg0 fromGraphEdges:(id)arg1 withHeadNode:(id)arg2 jobTypes:(id)arg3 ;
-(void)_prepareToConnectNode:(id)arg0 ;
-(void)dealloc;


@end


#endif