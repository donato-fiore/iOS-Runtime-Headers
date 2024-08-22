// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADALARMENGINEOPERATIONGROUP_H
#define CADALARMENGINEOPERATIONGROUP_H

@protocol CADAlarmEngineInterface;


#import "CADOperationGroup.h"

@interface CADAlarmEngineOperationGroup : CADOperationGroup <CADAlarmEngineInterface>





+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(id)whitelistedBundles;
-(BOOL)_hasAccessToAlarmsOnCalendar:(*void)arg0 ;
-(void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg0 toEnd:(id)arg1 inCalendars:(id)arg2 reply:(id)arg3 ;
-(void)CADDatabaseGetAlarmWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetLocationBasedAlarmsWithReply:(id)arg0 ;
-(void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(id)arg0 ;


@end


#endif