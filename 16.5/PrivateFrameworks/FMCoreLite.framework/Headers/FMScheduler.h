// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMSCHEDULER_H
#define FMSCHEDULER_H


#import <Foundation/Foundation.h>


@interface FMScheduler : NSObject



+(id)globalAsyncScheduler;
+(id)immediateScheduler;
+(id)mainThreadScheduler;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(NSInteger)arg0 ;
+(id)schedulerWithDispatchQueue:(id)arg0 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg0 ;


@end


#endif