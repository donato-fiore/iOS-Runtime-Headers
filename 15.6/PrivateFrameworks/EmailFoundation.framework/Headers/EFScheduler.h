// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSCHEDULER_H
#define EFSCHEDULER_H


#import <Foundation/Foundation.h>


@interface EFScheduler : NSObject



+(id)_globalAsyncSchedulerWithQualityOfService:(NSInteger)arg0 ;
+(id)dispatchQueueSchedulerWithQueue:(id)arg0 ;
+(id)globalAsyncScheduler;
+(id)globalAsyncSchedulerWithQualityOfService:(NSInteger)arg0 ;
+(id)immediateScheduler;
+(id)mainThreadScheduler;
+(id)onScheduler:(id)arg0 performWithObject:(id)arg1 ;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(NSInteger)arg0 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg0 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg0 qualityOfService:(NSInteger)arg1 ;


@end


#endif