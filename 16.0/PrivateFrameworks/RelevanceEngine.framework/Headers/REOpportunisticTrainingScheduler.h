// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REOPPORTUNISTICTRAININGSCHEDULER_H
#define REOPPORTUNISTICTRAININGSCHEDULER_H

@class NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_queue;


#import "RETrainingScheduler.h"

@interface REOpportunisticTrainingScheduler : RETrainingScheduler {
    NSObject<OS_xpc_object> *_criteria;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_blocks;
    BOOL _scheduled;
}




-(id)init;
-(void)_performAllTasks;
-(void)_queue_unschedule;
-(void)cancelPendindTasks;
-(void)dealloc;
-(void)performTask:(id)arg0 ;


@end


#endif