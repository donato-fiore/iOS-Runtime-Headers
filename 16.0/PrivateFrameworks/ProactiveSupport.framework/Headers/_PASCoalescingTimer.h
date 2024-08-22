// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASCOALESCINGTIMER_H
#define _PASCOALESCINGTIMER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PASLock.h"

@interface _PASCoalescingTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _leewaySeconds;
    id *_coalesceData;
    id *_operation;
    _PASLock *_lock;
}




// -(id)initWithQueue:(id)arg0 coalesceData:(id)arg1 operation:(unk)arg2  ;
// -(id)initWithQueue:(id)arg0 leewaySeconds:(CGFloat)arg1 coalesceData:(id)arg2 operation:(unk)arg3  ;
-(void)_replaceCoalescingTimerUsingLockWitness:(id)arg0 ;
-(void)cancelPendingOperations;
-(void)immediatelyProcessData:(id)arg0 ;
-(void)processData:(id)arg0 afterDelaySeconds:(CGFloat)arg1 coalescingBehavior:(unsigned char)arg2 ;
-(void)processData:(id)arg0 afterStrictDelaySeconds:(CGFloat)arg1 ;


@end


#endif