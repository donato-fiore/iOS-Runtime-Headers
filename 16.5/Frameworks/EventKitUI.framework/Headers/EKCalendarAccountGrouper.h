// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARACCOUNTGROUPER_H
#define EKCALENDARACCOUNTGROUPER_H


#import <Foundation/Foundation.h>


@interface EKCalendarAccountGrouper : NSObject



+(id)_groupForCustomGroupType:(NSUInteger)arg0 inMap:(id)arg1 ;
+(id)_groupForSource:(id)arg0 inMap:(id)arg1 ;
+(id)calendarsLimitedToSource:(id)arg0 writability:(NSInteger)arg1 onlyUnmanagedAccounts:(BOOL)arg2 forEvent:(id)arg3 entityType:(NSUInteger)arg4 inEventStore:(id)arg5 ;
+(id)calendarsLimitedToSource:(id)arg0 writability:(NSInteger)arg1 onlyUnmanagedAccounts:(BOOL)arg2 forEvents:(id)arg3 entityType:(NSUInteger)arg4 inEventStore:(id)arg5 ;
+(id)generateGroupsForCalendars:(id)arg0 eventStore:(id)arg1 entityType:(NSUInteger)arg2 forMode:(int)arg3 usingBackgroundColor:(id)arg4 includingAccountsWithoutCalendars:(BOOL)arg5 filterByFocus:(BOOL)arg6 usingUnselectedCalendars:(id)arg7 foundRefreshableCalendar:(*BOOL)arg8 anyGroupsHiddenByFocus:(*BOOL)arg9 numberOfCalendarsHiddenByFocus:(*int)arg10 ;
+(void)_insertStore:(id)arg0 intoByGroupArray:(id)arg1 ;
+(void)_populateGroups:(id)arg0 forNonDelegateSources:(id)arg1 ;


@end


#endif