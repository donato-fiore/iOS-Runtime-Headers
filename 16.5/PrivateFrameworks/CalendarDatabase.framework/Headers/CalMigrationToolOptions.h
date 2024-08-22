// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALMIGRATIONTOOLOPTIONS_H
#define CALMIGRATIONTOOLOPTIONS_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CalMigrationToolOptions : NSObject

@property (readonly, nonatomic) NSURL *accountsChangesFile; // ivar: _accountsChangesFile
@property (readonly, nonatomic) NSURL *accountsDatabaseFile; // ivar: _accountsDatabaseFile
@property (readonly, nonatomic) NSInteger backupBeforeCalendarMigration; // ivar: _backupBeforeCalendarMigration
@property (readonly, nonatomic) NSInteger backupBeforeReminderMigration; // ivar: _backupBeforeReminderMigration
@property (readonly, nonatomic) NSInteger deleteMigratedData; // ivar: _deleteMigratedData
@property (readonly, nonatomic) NSURL *destinationDirectory; // ivar: _destinationDirectory
@property (readonly, nonatomic) NSURL *homeDirectory; // ivar: _homeDirectory
@property (readonly, nonatomic) BOOL migrateUsingCalendarDaemon; // ivar: _migrateUsingCalendarDaemon
@property (readonly, nonatomic) NSInteger performCalendarMigration; // ivar: _performCalendarMigration
@property (readonly, nonatomic) NSInteger performCleanup; // ivar: _performCleanup
@property (readonly, nonatomic) NSInteger performReminderMigration; // ivar: _performReminderMigration
@property (readonly, nonatomic) NSURL *sourceCalendarDirectory; // ivar: _sourceCalendarDirectory
@property (readonly, nonatomic) BOOL waitForRemindersOnly; // ivar: _waitForRemindersOnly


+(id)_stringForTriStateOption:(NSInteger)arg0 ;
-(id)_initWithHomeDirectory:(id)arg0 sourceCalendarDirectory:(id)arg1 destinationDirectory:(id)arg2 migrateUsingCalendarDaemon:(BOOL)arg3 waitForRemindersOnly:(BOOL)arg4 performCalendarMigration:(NSInteger)arg5 performReminderMigration:(NSInteger)arg6 performCleanup:(NSInteger)arg7 deleteMigratedData:(NSInteger)arg8 backupBeforeCalendarMigration:(NSInteger)arg9 backupBeforeReminderMigration:(NSInteger)arg10 saveAccountsChangesToFile:(id)arg11 accountsDatabaseFile:(id)arg12 ;
-(id)description;
-(id)initUsingCalendarDaemon;
-(id)initUsingCalendarDaemonWaitingForRemindersOnly;
-(id)initWithHomeDirectory:(id)arg0 ;
-(id)initWithHomeDirectory:(id)arg0 destinationDirectory:(id)arg1 performCalendarMigration:(NSInteger)arg2 performReminderMigration:(NSInteger)arg3 performCleanup:(NSInteger)arg4 deleteMigratedData:(NSInteger)arg5 backupBeforeCalendarMigration:(NSInteger)arg6 backupBeforeReminderMigration:(NSInteger)arg7 saveAccountsChangesToFile:(id)arg8 accountsDatabaseFile:(id)arg9 ;
-(id)initWithSourceCalendarDirectory:(id)arg0 destinationDirectory:(id)arg1 performCalendarMigration:(NSInteger)arg2 performReminderMigration:(NSInteger)arg3 performCleanup:(NSInteger)arg4 deleteMigratedData:(NSInteger)arg5 backupBeforeCalendarMigration:(NSInteger)arg6 backupBeforeReminderMigration:(NSInteger)arg7 saveAccountsChangesToFile:(id)arg8 accountsDatabaseFile:(id)arg9 ;


@end


#endif