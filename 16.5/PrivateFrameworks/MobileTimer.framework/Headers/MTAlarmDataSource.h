// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTALARMDATASOURCE_H
#define MTALARMDATASOURCE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MTAlarmManager.h"
#import "MTObserverStore.h"
#import "MTAlarm.h"

@interface MTAlarmDataSource : NSObject

@property (retain, nonatomic) MTAlarmManager *alarmManager; // ivar: _alarmManager
@property (retain, nonatomic) NSMutableArray *alarms; // ivar: _alarms
@property (retain, nonatomic) MTObserverStore *observers; // ivar: _observers
@property (retain, nonatomic) MTAlarm *sleepAlarm; // ivar: _sleepAlarm
@property (retain, nonatomic) NSMutableArray *sleepAlarms; // ivar: _sleepAlarms


-(BOOL)hasSleepAlarmMatchingAlarmIDString:(id)arg0 ;
-(NSUInteger)numberOfAlarms;
-(NSUInteger)rowForAlarm:(id)arg0 ;
-(NSUInteger)rowForAlarmWithID:(id)arg0 ;
-(id)addAlarm:(id)arg0 ;
-(id)alarmAtRow:(NSUInteger)arg0 ;
-(id)initWithAlarmManager:(id)arg0 ;
-(id)reloadAlarms;
-(id)reloadAlarmsNotifyObservers:(BOOL)arg0 ;
-(id)removeAlarm:(id)arg0 ;
-(id)updateAlarm:(id)arg0 ;
-(id)updateAlarm:(id)arg0 reload:(BOOL)arg1 ;
-(void)_handleAlarmNotification:(id)arg0 block:(id)arg1 ;
-(void)_iterateObserversWithBlock:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_stateReset;
-(void)dealloc;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif