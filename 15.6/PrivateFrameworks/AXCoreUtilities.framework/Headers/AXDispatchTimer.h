// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDISPATCHTIMER_H
#define AXDISPATCHTIMER_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AXDispatchTimer : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // ivar: _automaticallyCancelPendingBlockUponSchedulingNewBlock
@property (copy) id *cancelBlock; // ivar: _cancelBlock
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // ivar: _dispatchTimer
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic, getter=isPending) BOOL pending; // ivar: _pending
@property (copy) id *processBlock; // ivar: _processBlock
@property (nonatomic) BOOL useWallTime; // ivar: _useWallTime


-(id)description;
-(id)init;
-(id)initWithTargetSerialQueue:(id)arg0 ;
// -(void)_afterDelay:(CGFloat)arg0 processBlock:(id)arg1 cancelBlock:(unk)arg2  ;
-(void)_reallyCancel;
-(void)afterDelay:(CGFloat)arg0 processBlock:(id)arg1 ;
// -(void)afterDelay:(CGFloat)arg0 processBlock:(id)arg1 cancelBlock:(unk)arg2  ;
-(void)cancel;
-(void)dealloc;


@end


#endif