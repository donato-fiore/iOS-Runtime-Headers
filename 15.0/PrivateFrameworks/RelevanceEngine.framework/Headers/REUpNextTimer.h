// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUPNEXTTIMER_H
#define REUPNEXTTIMER_H

@class NSDate, NSDateInterval;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface REUpNextTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastFireDate;
}


@property (readonly, nonatomic) id *block; // ivar: _block
@property (retain) NSObject<OS_dispatch_source> *dispatch_timer; // ivar: _dispatch_timer
@property (readonly, nonatomic) NSDateInterval *fireInterval; // ivar: _fireInterval
@property (readonly, nonatomic) CGFloat rate; // ivar: _rate
@property (readonly, getter=isValid) BOOL valid;


+(id)timerWithFireDate:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
+(id)timerWithFireInterval:(id)arg0 atRate:(CGFloat)arg1 queue:(id)arg2 block:(id)arg3 ;
+(id)timerWithInterval:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
-(BOOL)_isNowRepeatingTimerWithCurrentDate:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 rate:(CGFloat)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)_handleTimer;
-(void)_rescheduleTimer;
-(void)_scheduleTimerWithInterval:(id)arg0 rate:(CGFloat)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif