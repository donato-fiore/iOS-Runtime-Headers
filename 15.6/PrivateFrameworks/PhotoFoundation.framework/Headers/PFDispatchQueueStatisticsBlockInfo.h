// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFDISPATCHQUEUESTATISTICSBLOCKINFO_H
#define PFDISPATCHQUEUESTATISTICSBLOCKINFO_H


#import <Foundation/Foundation.h>


@interface PFDispatchQueueStatisticsBlockInfo : NSObject

@property (readonly) NSUInteger completionTimestamp; // ivar: _completionTimestamp
@property (readonly) NSUInteger dequeueTimestamp; // ivar: _dequeueTimestamp
@property (readonly) NSUInteger enqueueTimestamp; // ivar: _enqueueTimestamp
@property (readonly) NSUInteger executionTimestamp; // ivar: _executionTimestamp
@property (readonly) NSUInteger receivedTimestamp; // ivar: _receivedTimestamp
@property BOOL skippedExecuting; // ivar: _skippedExecuting


+(void)initialize;
-(NSUInteger)currentAbsoluteTime;
-(NSUInteger)executionLatency;
-(NSUInteger)executionTime;
-(NSUInteger)nsecBetween:(NSUInteger)arg0 and:(NSUInteger)arg1 ;
-(id)init;
-(void)blockCompleted;
-(void)blockDequeued;
-(void)blockEnqueued;
-(void)blockWillStart;


@end


#endif