// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LICACHECLEARSCHEDULER_H
#define LICACHECLEARSCHEDULER_H

@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface LICacheClearScheduler : NSObject

@property (readonly) id *clearHandler; // ivar: _clearHandler
@property CGFloat delay; // ivar: _delay
@property BOOL holdTransaction; // ivar: _holdTransaction
@property (retain) NSObject<OS_dispatch_source> *memoryPreasure; // ivar: _memoryPreasure
@property NSUInteger memoryPreasureState; // ivar: _memoryPreasureState
@property (readonly) id *object; // ivar: _object
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property BOOL timerFired; // ivar: _timerFired
@property (retain) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(id)transactionDescription:(id)arg0 ;
-(id)initWithObject:(id)arg0 delay:(CGFloat)arg1 holdTransaction:(BOOL)arg2 clearHandler:(id)arg3 ;


@end


#endif