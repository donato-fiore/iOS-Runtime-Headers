// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKDISPATCHTIMER_H
#define CRKDISPATCHTIMER_H

@protocol CRKCancelable, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CRKDispatchTimer : NSObject <CRKCancelable>



@property (copy, nonatomic) id *fireHandler; // ivar: _fireHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (readonly, nonatomic) CGFloat timeInterval; // ivar: _timeInterval
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // ivar: _timerSource


+(id)scheduledTimerWithTimerInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)initWithTimeInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)resume;
-(void)timerDidFire;


@end


#endif