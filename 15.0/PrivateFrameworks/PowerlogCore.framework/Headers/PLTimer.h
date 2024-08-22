// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTIMER_H
#define PLTIMER_H

@class NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PLEntryNotificationOperatorComposition.h"

@interface PLTimer : NSObject

@property (copy) id *block; // ivar: _block
@property (retain, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property CGFloat interval; // ivar: _interval
@property (retain) NSDate *lastSleepTime; // ivar: _lastSleepTime
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property BOOL repeats; // ivar: _repeats
@property (retain) PLEntryNotificationOperatorComposition *sleepEntryNotification; // ivar: _sleepEntryNotification
@property (retain) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (nonatomic) BOOL timerActive;
@property CGFloat tolerance; // ivar: _tolerance
@property (retain) id *userInfo; // ivar: _userInfo
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification; // ivar: _wakeEntryNotification


-(id)initWithFireDate:(id)arg0 withInterval:(CGFloat)arg1 withTolerance:(CGFloat)arg2 repeats:(BOOL)arg3 withUserInfo:(id)arg4 withQueue:(id)arg5 withBlock:(id)arg6 ;
-(void)arm;
-(void)dealloc;
-(void)fire;
-(void)handleTimerFire;
-(void)invalidate;


@end


#endif