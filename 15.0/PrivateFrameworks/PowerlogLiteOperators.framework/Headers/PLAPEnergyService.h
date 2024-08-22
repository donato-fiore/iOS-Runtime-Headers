// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLAPENERGYSERVICE_H
#define PLAPENERGYSERVICE_H

@class PLService, PLEntryNotificationOperatorComposition;


#import "PLIOReportStats.h"

@interface PLAPEnergyService : PLService

@property (retain) PLEntryNotificationOperatorComposition *canSleepEntryNotification; // ivar: _canSleepEntryNotification
@property NSUInteger currentEvent; // ivar: _currentEvent
@property NSUInteger currentState; // ivar: _currentState
@property (retain) PLIOReportStats *deviceStatsIOReport; // ivar: _deviceStatsIOReport
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification; // ivar: _displayOffNotification
@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification; // ivar: _displayOnNotification
@property (retain) PLIOReportStats *energyModelIOReport; // ivar: _energyModelIOReport
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification; // ivar: _wakeEntryNotification


+(id)entryEventIntervalDefinitionCPUEnergyStats;
+(id)entryEventIntervalDefinitions;
+(void)load;
-(NSUInteger)getEventStateForEndEvent:(NSUInteger)arg0 withBeginEvent:(NSUInteger)arg1 ;
-(id)init;
-(id)updateDutyCycleMetrics;
-(id)updateEnergyMetrics;
-(void)handleEventNotification:(NSUInteger)arg0 ;
-(void)initTaskOperatorDependancies;
-(void)logPLEnergies:(id)arg0 withCpuDutyCycle:(id)arg1 andDuration:(id)arg2 ;


@end


#endif