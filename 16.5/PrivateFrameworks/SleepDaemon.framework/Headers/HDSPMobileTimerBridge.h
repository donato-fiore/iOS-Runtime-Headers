// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPMOBILETIMERBRIDGE_H
#define HDSPMOBILETIMERBRIDGE_H

@class MTAlarmManager, NAFuture;

#import <Foundation/Foundation.h>


@interface HDSPMobileTimerBridge : NSObject

@property (readonly, nonatomic) MTAlarmManager *alarmManager; // ivar: _alarmManager
@property (readonly, nonatomic) NAFuture *alarmServerReady; // ivar: _alarmServerReady


+(BOOL)sleepAlarm:(id)arg0 matchesSleepScheduleModel:(id)arg1 ;
+(id)sleepScheduleModelFromSleepAlarm:(id)arg0 ;
-(id)init;
-(id)initWithAlarmManager:(id)arg0 ;
-(id)sleepAlarmsFuture;
-(id)sleepAlarmsFutureIgnoringCache:(BOOL)arg0 ;
-(void)_checkAlarmServer;
-(void)resetSleepAlarmSnoozeState;
-(void)updateSleepAlarms;


@end


#endif