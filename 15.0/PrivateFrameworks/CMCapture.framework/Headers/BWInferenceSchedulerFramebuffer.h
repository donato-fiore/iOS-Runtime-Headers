// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCESCHEDULERFRAMEBUFFER_H
#define BWINFERENCESCHEDULERFRAMEBUFFER_H


#import <Foundation/Foundation.h>

#import "BWInferenceSchedulerGraph.h"
#import "BWInferenceSchedulerJobList.h"

@interface BWInferenceSchedulerFramebuffer : NSObject {
    os_unfair_lock_s framebufferLock;
    uint8_t failedJobStatus;
}


@property (readonly, nonatomic) BWInferenceSchedulerGraph *graph; // ivar: _graph
@property (readonly, nonatomic) BWInferenceSchedulerJobList *jobs; // ivar: _jobs


-(id)initWithGraph:(id)arg0 jobList:(id)arg1 ;
-(void)dealloc;
-(void)resetJobStatesWithPreventionBlock:(id)arg0 ;


@end


#endif