// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSCHEDULER_H
#define CNSCHEDULER_H


#import <Foundation/Foundation.h>


@interface CNScheduler : NSObject



+(id)globalAsyncScheduler;
+(id)immediateScheduler;
+(id)inlineScheduler;
+(id)mainThreadScheduler;
+(id)offMainThreadScheduler;
+(id)offMainThreadSchedulerWithBackgroundScheduler:(id)arg0 ;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(NSInteger)arg0 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg0 ;
+(id)synchronousSerialDispatchQueueWithName:(id)arg0 ;


@end


#endif