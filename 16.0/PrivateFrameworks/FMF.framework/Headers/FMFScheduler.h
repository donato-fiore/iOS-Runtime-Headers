// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFSCHEDULER_H
#define FMFSCHEDULER_H

@class NSArray, FMXPCTimer;
@protocol FMFSchedulerDelegate;

#import <Foundation/Foundation.h>


@interface FMFScheduler : NSObject

@property (readonly, nonatomic) NSArray *currentSchedules;
@property (readonly, nonatomic) NSObject<FMFSchedulerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *schedules; // ivar: _schedules
@property (retain, nonatomic) FMXPCTimer *timer; // ivar: _timer


+(id)_nextStartOrEndDateFrom:(id)arg0 forSchedules:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_registerForSignificantTimeChangeNotifications;
-(void)_significantTimeChange:(id)arg0 ;
-(void)_updateScheduleTimer;
-(void)scheduleTimerFired;


@end


#endif