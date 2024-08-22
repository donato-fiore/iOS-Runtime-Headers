// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUDELAYTIMER_H
#define OITSUDELAYTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface OITSUDelayTimer : NSObject

@property (nonatomic, getter=_isCancelled, setter=_setCancelled:) BOOL _cancelled; // ivar: _cancelled
@property (retain, nonatomic, setter=_setDispatchQueue:) NSObject<OS_dispatch_queue> *_dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic, setter=_setDispatchTimer:) NSObject<OS_dispatch_source> *_dispatchTimer; // ivar: _dispatchTimer
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // ivar: _automaticallyCancelPendingBlockUponSchedulingNewBlock


-(id)init;
-(id)initWithTargetSerialQueue:(id)arg0 ;
-(void)_reallyCancel;
-(void)afterDelay:(CGFloat)arg0 processBlock:(id)arg1 ;
-(void)cancel;
-(void)dealloc;


@end


#endif