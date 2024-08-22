// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADCALENDARITEMOPERATIONGROUP_H
#define CADCALENDARITEMOPERATIONGROUP_H

@protocol CADCalendarItemInterface;


#import "CADOperationGroup.h"

@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>





+(BOOL)requiresEventAccess;
-(void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg0 ;
-(void)CADDatabaseExportICSForCalendarItemWithID:(id)arg0 occurrenceDate:(id)arg1 options:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg0 entityType:(int)arg1 fetchIdentifier:(int)arg2 synchronous:(BOOL)arg3 reply:(id)arg4 ;
-(void)CADDatabaseGetAlarmWithExternalID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetCalendarItemWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetCalendarItemsWithUUIDs:(id)arg0 inCalendars:(id)arg1 propertiesToLoad:(id)arg2 reply:(id)arg3 ;
-(void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg0 inCalendar:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseiTIPImport:(id)arg0 intoCalendarID:(id)arg1 reply:(id)arg2 ;


@end


#endif