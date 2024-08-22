// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSCHEDULER_H
#define NUSCHEDULER_H

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NUJobQueue.h"
#import "NUScheduledQueue.h"

@interface NUScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NUJobQueue *_prepareQueue;
    NUJobQueue *_renderQueue;
    NUJobQueue *_completeQueue;
    NSMutableSet *_scheduledContextWakeups;
    NUScheduledQueue *_rateLimiterQueue;
    NSString *_name;
}




+(id)sharedScheduler;
-(BOOL)_coalesceJobs:(id)arg0 ;
-(BOOL)_prepareNewJob:(id)arg0 at:(NSUInteger)arg1 ;
-(id)_queueForStage:(NSInteger)arg0 ;
-(id)debugDescription;
-(id)initWithName:(id)arg0 ;
-(void)_enqueueDependentJobsForRenderJob:(id)arg0 ;
-(void)_enqueueJobsForRequests:(id)arg0 withGroup:(id)arg1 ;
-(void)_enqueueRenderJob:(id)arg0 toStage:(NSInteger)arg1 ;
-(void)_observeRenderJob:(id)arg0 withGroup:(id)arg1 ;
-(void)_resumeRenderJob:(id)arg0 ;
-(void)_scheduleRateLimitWakeupForContext:(id)arg0 ;
-(void)_wakeupRateLimitJobForContext:(id)arg0 ;
-(void)cancelJobsForRenderContext:(id)arg0 ;
-(void)submitRequests:(id)arg0 withGroup:(id)arg1 ;


@end


#endif