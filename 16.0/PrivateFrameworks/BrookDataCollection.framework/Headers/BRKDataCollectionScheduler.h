// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRKDATACOLLECTIONSCHEDULER_H
#define BRKDATACOLLECTIONSCHEDULER_H

@class NSBackgroundActivityScheduler;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRKDataCollectionScheduler : NSObject {
    NSBackgroundActivityScheduler *_scheduler;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)_queue_schedule:(id)arg0 ;
-(void)_queue_setSchedulerCriteria;
-(void)schedule:(id)arg0 ;


@end


#endif