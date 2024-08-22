// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMONOTONICTIMER_H
#define PLMONOTONICTIMER_H

@class NSMutableSet, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLEntryNotificationOperatorComposition.h"

@interface PLMonotonicTimer : NSObject

@property (copy) id *block; // ivar: _block
@property (retain) NSMutableSet *canceledFireDates; // ivar: _canceledFireDates
@property CGFloat interval; // ivar: _interval
@property (retain, nonatomic) NSDate *monotonicFireDate; // ivar: _monotonicFireDate
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification; // ivar: _wakeEntryNotification


+(BOOL)debugInstance;
+(id)debugScheduledTimerWithMonotonicFireDate:(id)arg0 withInterval:(CGFloat)arg1 withQueue:(id)arg2 withBlock:(id)arg3 ;
+(id)scheduledTimerWithMonotonicFireDate:(id)arg0 withInterval:(CGFloat)arg1 withQueue:(id)arg2 withBlock:(id)arg3 ;
-(id)description;
-(id)initWithMonotonicFireDate:(id)arg0 withInterval:(CGFloat)arg1 withQueue:(id)arg2 withBlock:(id)arg3 ;
-(void)_cancel;
-(void)cancel;
-(void)dealloc;
-(void)fire;
-(void)reschedule;
-(void)schedule;
-(void)timerFiredForMonotonicFireDate:(id)arg0 ;


@end


#endif