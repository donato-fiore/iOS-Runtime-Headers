// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLTIMECOERCIBLEDISPATCHSILO_H
#define CLTIMECOERCIBLEDISPATCHSILO_H

@class NSMutableArray;


#import "CLDispatchSilo.h"

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo

@property (readonly, nonatomic) NSMutableArray *timerHolders; // ivar: _timerHolders


-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithUnderlyingQueue:(id)arg0 ;
-(id)newTimer;
-(void)afterInterval:(CGFloat)arg0 async:(id)arg1 ;
-(void)heartBeat:(id)arg0 ;
-(void)prepareAndRunBlock:(id)arg0 ;
-(void)setLatchedAbsoluteTimestamp:(CGFloat)arg0 ;


@end


#endif