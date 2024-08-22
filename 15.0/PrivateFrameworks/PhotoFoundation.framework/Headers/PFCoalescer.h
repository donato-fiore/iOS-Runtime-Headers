// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCOALESCER_H
#define PFCOALESCER_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "PFCoalescerContext.h"

@interface PFCoalescer : NSObject {
    NSInteger _resetSequenceNumber;
    NSInteger _lastUpdateResetSequenceNumber;
}


@property (copy) id *action; // ivar: _action
@property (retain) id *buffer; // ivar: _buffer
@property (retain) PFCoalescerContext *context; // ivar: _context
@property CGFloat initialDelay; // ivar: _initialDelay
@property BOOL initialDelayTimerIsArmed; // ivar: _initialDelayTimerIsArmed
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (retain) NSString *label; // ivar: _label
@property NSInteger queueType; // ivar: _queueType
@property (copy) id *snapshotAndDrainHandler; // ivar: _snapshotAndDrainHandler
@property (retain) NSObject<OS_dispatch_source> *source; // ivar: _source
@property (retain) NSObject<OS_dispatch_queue> *sourceQueue; // ivar: _sourceQueue
@property NSInteger state; // ivar: _state
@property NSUInteger stateCaptureHandlerHandle; // ivar: _stateCaptureHandlerHandle
@property (weak) id *target; // ivar: _target
@property (retain) id *targetQueue; // ivar: _targetQueue
@property (retain) NSObject<OS_os_transaction> *transaction; // ivar: _transaction
@property BOOL usesTarget; // ivar: _usesTarget


+(id)arrayCoalescerWithLabel:(id)arg0 queue:(id)arg1 action:(id)arg2 ;
+(id)arrayCoalescerWithLabel:(id)arg0 target:(id)arg1 queue:(id)arg2 action:(id)arg3 ;
+(id)coalescerWithLabel:(id)arg0 queue:(id)arg1 action:(id)arg2 ;
// +(id)coalescerWithLabel:(id)arg0 target:(id)arg1 buffer:(id)arg2 queue:(id)arg3 bufferDrainer:(id)arg4 action:(unk)arg5  ;
+(id)coalescerWithLabel:(id)arg0 target:(id)arg1 queue:(id)arg2 action:(id)arg3 ;
+(id)dictionaryCoalescerWithLabel:(id)arg0 queue:(id)arg1 action:(id)arg2 ;
+(id)dictionaryCoalescerWithLabel:(id)arg0 target:(id)arg1 queue:(id)arg2 action:(id)arg3 ;
+(id)mutableCollectionBufferDrainer:(SEL)arg0 ;
+(id)mutableContainerCoalescerWithLabel:(id)arg0 container:(id)arg1 queue:(id)arg2 action:(id)arg3 ;
+(id)mutableContainerCoalescerWithLabel:(id)arg0 target:(id)arg1 container:(id)arg2 queue:(id)arg3 action:(id)arg4 ;
+(id)setCoalescerWithLabel:(id)arg0 queue:(id)arg1 action:(id)arg2 ;
+(id)setCoalescerWithLabel:(id)arg0 target:(id)arg1 queue:(id)arg2 action:(id)arg3 ;
-(id)init;
// -(id)initWithLabel:(id)arg0 target:(id)arg1 buffer:(id)arg2 queue:(id)arg3 bufferDrainer:(id)arg4 action:(unk)arg5  ;
-(void)_resetWhileLocked;
-(void)dealloc;
-(void)performEventActionWithTarget:(id)arg0 ;
-(void)reset;
-(void)resetAndShutDown;
-(void)setupStateCaptureHandler;
-(void)update;
-(void)update:(id)arg0 ;


@end


#endif