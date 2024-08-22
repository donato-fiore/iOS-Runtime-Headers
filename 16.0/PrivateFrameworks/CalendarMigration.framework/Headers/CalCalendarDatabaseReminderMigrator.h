// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCALENDARDATABASEREMINDERMIGRATOR_H
#define CALCALENDARDATABASEREMINDERMIGRATOR_H

@class NSString;
@protocol CalMigrator, CalReminderMigrationDefaultsProvider, CalReminderKitProvider;

#import <Foundation/Foundation.h>


@interface CalCalendarDatabaseReminderMigrator : NSObject <CalMigrator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<CalReminderMigrationDefaultsProvider> *defaultsProvider; // ivar: _defaultsProvider
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CalReminderKitProvider> *reminderKitProvider; // ivar: _reminderKitProvider
@property (readonly) Class superclass;


+(?)_removeRemindersDataAfterSuccessfulMigrationFromDatabasewithContext;
+(BOOL)_attemptMigrationForStore:(*void)arg0 withContext:(id)arg1 ;
+(BOOL)_preCheckStoreForPossibleMigrationDisablingRemindersIfNeeded:(*void)arg0 withContext:(id)arg1 accountType:(*NSInteger)arg2 identifier:(*id)arg3 ;
+(BOOL)_shouldMigrateCalendarAsReminderList:(*void)arg0 ;
+(NSInteger)_accountTypeForStore:(*void)arg0 ;
+(id)_attemptAccountMigrationForStore:(*void)arg0 withContext:(id)arg1 accountType:(*NSInteger)arg2 ;
+(id)_colorStringForCalendar:(*void)arg0 ;
+(id)_identifierForCalendar:(*void)arg0 ;
+(id)_identifierForReminder:(*void)arg0 ;
+(id)_identifierForStore:(*void)arg0 ;
+(void)_migrateCalendarAsReminderList:(*void)arg0 withContext:(id)arg1 accountChangeItem:(id)arg2 accountType:(NSInteger)arg3 ;
+(void)_migrateReminder:(*void)arg0 withContext:(id)arg1 listChangeItem:(id)arg2 ;
+(void)_migrateReminderListsInStore:(*void)arg0 withContext:(id)arg1 accountChangeItem:(id)arg2 accountType:(NSInteger)arg3 ;
+(void)_migrateRemindersInCalendar:(*void)arg0 withContext:(id)arg1 listChangeItem:(id)arg2 ;
+(void)_setWasMigratedAndClearSyncTokenInAllCalendarsForStore:(*void)arg0 withContext:(id)arg1 ;
+(void)_visitCalendarForMigrationAsReminderList:(*void)arg0 withContext:(id)arg1 accountChangeItem:(id)arg2 accountType:(NSInteger)arg3 ;
-(?)_attemptMigrationForDatabase:(?)arg0 inCalendarDirectorywithContext;
-(?)_performMigrationForCalendarDatabase:(?)arg0 inCalendarDirectorywithContext;
-(BOOL)_attemptMigrationWithCalendarDatabase:(struct CalDatabase *)arg0 ;
-(BOOL)_attemptMigrationWithHomeDirectory:(id)arg0 ;
-(BOOL)attemptMigrationWithCalendarDatabase:(struct CalDatabase *)arg0 ;
-(BOOL)attemptMigrationWithHomeDirectory:(id)arg0 ;
-(id)initWithReminderKitProvider:(id)arg0 defaultsProvider:(id)arg1 ;
-(void)_performPreMigrationTasksInCalendarDirectory:(id)arg0 withContext:(id)arg1 ;


@end


#endif