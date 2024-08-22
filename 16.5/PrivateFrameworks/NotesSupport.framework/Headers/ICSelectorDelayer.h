// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSELECTORDELAYER_H
#define ICSELECTORDELAYER_H

@class NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICSelectorDelayer : NSObject

@property (nonatomic) BOOL callOnMainThread; // ivar: _callOnMainThread
@property CGFloat delay; // ivar: _delay
@property (copy, nonatomic) id *fireBlock; // ivar: _fireBlock
@property (readonly, nonatomic) BOOL isScheduledToFire;
@property CGFloat maximumDelay; // ivar: _maximumDelay
@property (retain, nonatomic) NSDate *requestFireDate; // ivar: _requestFireDate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (nonatomic) SEL selector; // ivar: _selector
@property (weak, nonatomic) id *target; // ivar: _target
@property (nonatomic) BOOL waitToFireUntilRequestsStop; // ivar: _waitToFireUntilRequestsStop


-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 delay:(CGFloat)arg2 maximumDelay:(CGFloat)arg3 callOnMainThread:(BOOL)arg4 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 delay:(CGFloat)arg2 maximumDelay:(CGFloat)arg3 waitToFireUntilRequestsStop:(BOOL)arg4 callOnMainThread:(BOOL)arg5 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 delay:(CGFloat)arg2 waitToFireUntilRequestsStop:(BOOL)arg3 callOnMainThread:(BOOL)arg4 ;
-(void)_cancelFireRequests;
-(void)callTargetSelector;
-(void)cancelPreviousFireRequests;
-(void)dealloc;
-(void)fireImmediately;
-(void)requestFire;


@end


#endif