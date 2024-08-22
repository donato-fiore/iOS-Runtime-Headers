// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADCALENDARITEMOPERATIONGROUP_H
#define CADCALENDARITEMOPERATIONGROUP_H

@protocol CADCalendarItemInterface;


#import "CADOperationGroup.h"

@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>





+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(id)_resultsFilteredForJunkEvents:(id)arg0 ;
-(id)_resultsFilteredForTCCAccess:(id)arg0 ;
-(void)CADDatabaseAddContactWithIdentifier:(id)arg0 forCalendarItem:(id)arg1 withReply:(id)arg2 ;
-(void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg0 ;
-(void)CADDatabaseCountEntitiesOfType:(int)arg0 withContactIdentifier:(id)arg1 withReply:(id)arg2 ;
-(void)CADDatabaseExportCalendarItemAsICS:(id)arg0 withOptions:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg0 entityType:(int)arg1 fetchIdentifier:(int)arg2 reply:(id)arg3 ;
-(void)CADDatabaseFetchEntitiesOfType:(int)arg0 withContactIdentifier:(id)arg1 withReply:(id)arg2 ;
-(void)CADDatabaseGetAlarmWithExternalID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetCalendarItemWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg0 inCalendar:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseGetContactIdentifierForCalendarItem:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseRemoveContactIdentifier:(id)arg0 forCalendarItem:(id)arg1 withReply:(id)arg2 ;
-(void)CADDatabaseiTIPImport:(id)arg0 intoCalendarID:(id)arg1 reply:(id)arg2 ;


@end


#endif