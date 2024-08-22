// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HVSCHEDULEDTASKS_H
#define HVSCHEDULEDTASKS_H


#import <Foundation/Foundation.h>


@interface HVScheduledTasks : NSObject {
    atomic_flag _delayedBudgetedTaskScheduled;
}




+(void)delayedBudgetedContentAvailable;
+(void)registerScheduledTasks;
-(id)init;


@end


#endif