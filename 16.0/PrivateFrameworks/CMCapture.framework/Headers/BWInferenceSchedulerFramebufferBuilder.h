// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)initWithInferenceRequirements:(id)arg0 dependencyProvider:(id)arg1 formatProvider:(id)arg2 ;
-(id)newFramebuffer;
-(void)dealloc;


@end


#endif