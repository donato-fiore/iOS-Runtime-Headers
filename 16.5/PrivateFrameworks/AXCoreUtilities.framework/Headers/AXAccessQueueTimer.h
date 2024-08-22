// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXACCESSQUEUETIMER_H
#define AXACCESSQUEUETIMER_H

@class NSString;
@protocol AXAccessQueueTimer, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AXAccessQueue.h"

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer>



@property (retain, nonatomic) AXAccessQueue *accessQueue; // ivar: _accessQueue
@property (nonatomic) BOOL accessQueueIsExternal; // ivar: _accessQueueIsExternal
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // ivar: _automaticallyCancelPendingBlockUponSchedulingNewBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // ivar: _dispatchTimer
@property (readonly) NSUInteger hash;
@property (copy) NSString *label; // ivar: _label
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;


+(id)timerTargettingMainAccessQueue;
-(id)init;
-(id)initWithTargetAccessQueue:(id)arg0 ;
// -(void)_afterDelay:(CGFloat)arg0 processBlock:(id)arg1 shouldTreatAsWritingBlock:(unk)arg2  ;
-(void)_didFinishProcessingBlock;
// -(void)_performEnqueuedWritingBlock:(id)arg0 asynchronousExecutionWarningHandler:(unk)arg1  ;
-(void)_reallyCancel;
-(void)_warnAboutAsynchronousCancelling;
-(void)_warnAboutAsynchronousScheduling;
-(void)afterDelay:(CGFloat)arg0 processBlock:(id)arg1 ;
-(void)afterDelay:(CGFloat)arg0 processReadingBlock:(id)arg1 ;
-(void)afterDelay:(CGFloat)arg0 processWritingBlock:(id)arg1 ;
-(void)cancel;
-(void)dealloc;


@end


#endif