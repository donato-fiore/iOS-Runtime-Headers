// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUALARMSANDTIMERSACCESSMONITOR_H
#define HUALARMSANDTIMERSACCESSMONITOR_H

@class HMAccessory, COAlarmManager, COTimerManager;

#import <Foundation/Foundation.h>


@interface HUAlarmsAndTimersAccessMonitor : NSObject

@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) COAlarmManager *alarmManager; // ivar: _alarmManager
@property (retain, nonatomic) COTimerManager *timerManager; // ivar: _timerManager


-(id)_canAlarmManagerControlAccessory;
-(id)_canTimerManagerControlAccessory;
-(id)canAccessAccessoryFor:(NSUInteger)arg0 ;
-(id)initWithAccessory:(id)arg0 ;


@end


#endif