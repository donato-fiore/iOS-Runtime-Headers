// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXTHREADTIMER_H
#define AXTHREADTIMER_H

@class NSThread, NSString;
@protocol AXAccessQueueTimer;

#import <Foundation/Foundation.h>

#import "AXThreadTimerTask.h"

@interface AXThreadTimer : NSObject <AXAccessQueueTimer>

 {
    NSThread *_thread;
    id *_cancelBlock;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // ivar: _automaticallyCancelPendingBlockUponSchedulingNewBlock
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (readonly) Class superclass;
@property (retain, nonatomic) AXThreadTimerTask *task; // ivar: _task


-(id)initWithThread:(id)arg0 ;
-(void)_runAfterDelay:(id)arg0 ;
-(void)afterDelay:(CGFloat)arg0 processBlock:(id)arg1 ;
// -(void)afterDelay:(CGFloat)arg0 processBlock:(id)arg1 cancelBlock:(unk)arg2  ;
-(void)cancel;


@end


#endif