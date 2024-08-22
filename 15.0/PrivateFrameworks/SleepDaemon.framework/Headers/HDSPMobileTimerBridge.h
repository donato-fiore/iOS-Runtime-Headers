// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPMOBILETIMERBRIDGE_H
#define HDSPMOBILETIMERBRIDGE_H

@class MTAlarmManager, NAFuture, NSString, NSArray;
@protocol HDSPSleepAlarmProvider;

#import <Foundation/Foundation.h>


@interface HDSPMobileTimerBridge : NSObject <HDSPSleepAlarmProvider>



@property (readonly, nonatomic) MTAlarmManager *alarmManager; // ivar: _alarmManager
@property (readonly, nonatomic) NAFuture *alarmServerReady; // ivar: _alarmServerReady
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sleepAlarms;
@property (readonly, nonatomic) NAFuture *sleepAlarmsFuture;
@property (readonly) Class superclass;


+(BOOL)sleepAlarm:(id)arg0 matchesSleepScheduleModel:(id)arg1 ;
+(id)sleepScheduleModelFromSleepAlarm:(id)arg0 ;
-(id)init;
-(id)initWithAlarmManager:(id)arg0 ;
-(id)sleepAlarmsIgnoringCache:(BOOL)arg0 ;
-(void)_checkAlarmServer;
-(void)resetSleepAlarmSnoozeState;
-(void)updateSleepAlarms;


@end


#endif