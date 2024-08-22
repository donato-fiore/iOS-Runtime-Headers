// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADALARMENGINEOPERATIONGROUP_H
#define CADALARMENGINEOPERATIONGROUP_H

@protocol CADAlarmEngineInterface;


#import "CADOperationGroup.h"

@interface CADAlarmEngineOperationGroup : CADOperationGroup <CADAlarmEngineInterface>





+(BOOL)requiresEventAccess;
+(id)whitelistedBundles;
-(?)_getAlarmOccurrencesInRangeFromStart:(?)arg0 toEnd:(?)arg1 inCalendars:(?)arg2 forDatabase:(?)arg3 databaseID:(?)arg4 calendarIDsForThisDatabaseaccessLogger;
-(void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg0 toEnd:(id)arg1 inCalendars:(id)arg2 reply:(id)arg3 ;
-(void)CADDatabaseGetAlarmWithUUID:(id)arg0 reply:(id)arg1 ;


@end


#endif