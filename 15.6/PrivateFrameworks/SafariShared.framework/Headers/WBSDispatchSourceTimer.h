// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSDISPATCHSOURCETIMER_H
#define WBSDISPATCHSOURCETIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface WBSDispatchSourceTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}


@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (readonly, nonatomic) BOOL repeats; // ivar: _repeats
@property (readonly, nonatomic) CGFloat startDelay; // ivar: _startDelay
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)scheduledRepeatingTimerWithStartDelay:(CGFloat)arg0 interval:(CGFloat)arg1 handler:(id)arg2 ;
+(id)scheduledTimerWithInterval:(CGFloat)arg0 repeats:(BOOL)arg1 handler:(id)arg2 ;
-(id)_initWithStartDelay:(CGFloat)arg0 interval:(CGFloat)arg1 repeats:(BOOL)arg2 handler:(id)arg3 ;
-(void)_scheduleTimer;
-(void)dealloc;
-(void)invalidate;
-(void)resetFireDate;
-(void)schedule;


@end


#endif