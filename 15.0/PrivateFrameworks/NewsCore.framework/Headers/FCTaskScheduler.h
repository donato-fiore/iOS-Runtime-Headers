// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCTASKSCHEDULER_H
#define FCTASKSCHEDULER_H


#import <Foundation/Foundation.h>


@interface FCTaskScheduler : NSObject



+(id)backgroundDownloadOperationQueue;
+(id)lowPriorityOperationQueue;
+(id)lowPriorityQueue;
+(void)disableOptionalPrefetching;
+(void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+(void)executeOptionalPrefetchBlock:(id)arg0 ;
+(void)popHighPriorityTaskInFlight;
+(void)pushHighPriorityTaskInFlight;
+(void)scheduleLowPriorityBlock:(id)arg0 ;
+(void)scheduleLowPriorityBlockForMainThread:(id)arg0 ;
+(void)scheduleLowPriorityOperation:(id)arg0 ;
+(void)scheduleOptionalPrefetchBlock:(id)arg0 ;


@end


#endif