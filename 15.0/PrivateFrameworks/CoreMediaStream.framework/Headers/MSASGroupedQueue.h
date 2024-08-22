// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSASGROUPEDQUEUE_H
#define MSASGROUPEDQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSTimerGate.h"
#import "MSASServerSideModel.h"

@interface MSASGroupedQueue : NSObject

@property (retain, nonatomic) MSTimerGate *idleTimerGate; // ivar: _idleTimerGate
@property (readonly, nonatomic) BOOL isAssertingBusyAssertion; // ivar: _isAssertingBusyAssertion
@property (nonatomic) BOOL isShuttingDown; // ivar: _isShuttingDown
@property (nonatomic) int maxGroupedCallbackEventBatchCount; // ivar: _maxGroupedCallbackEventBatchCount
@property (nonatomic) CGFloat maxGroupedCallbackEventIdleInterval; // ivar: _maxGroupedCallbackEventIdleInterval
@property (nonatomic) CGFloat maxGroupedCallbackEventStaleness; // ivar: _maxGroupedCallbackEventStaleness
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (weak, nonatomic) MSASServerSideModel *model; // ivar: _model
@property (retain, nonatomic) MSTimerGate *stalenessTimerGate; // ivar: _stalenessTimerGate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)hasEnqueuedItems;
-(id)init;
-(void)assertBusyAssertion;
-(void)deassertBusyAssertion;
-(void)flushQueueCompletionBlock:(id)arg0 ;
-(void)memberQueueSetIsAssertingBusyAssertion:(BOOL)arg0 ;
-(void)shutDownFlush:(BOOL)arg0 completionBlock:(id)arg1 ;


@end


#endif