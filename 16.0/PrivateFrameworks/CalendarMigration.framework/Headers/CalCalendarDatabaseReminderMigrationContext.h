// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCALENDARDATABASEREMINDERMIGRATIONCONTEXT_H
#define CALCALENDARDATABASEREMINDERMIGRATIONCONTEXT_H

@class NSMutableArray, NSArray, NSString;
@protocol CalPrivacySafePathProvider;


#import "CalReminderMigrationContext.h"

@interface CalCalendarDatabaseReminderMigrationContext : CalReminderMigrationContext <CalPrivacySafePathProvider>

 {
    NSMutableArray *_storesToDisableReminders;
    NSMutableArray *_storesToDelete;
    NSMutableArray *_storesToSetWasMigrated;
    NSMutableArray *_calendarsToDisableReminders;
    NSMutableArray *_calendarsToClearSyncToken;
    NSMutableArray *_calendarsToDelete;
}


@property (readonly, nonatomic) NSArray *calendarsToClearSyncToken;
@property (readonly, nonatomic) NSArray *calendarsToDelete;
@property (readonly, nonatomic) NSArray *calendarsToDisableReminders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *storesToDelete;
@property (readonly, nonatomic) NSArray *storesToDisableReminders;
@property (readonly, nonatomic) NSArray *storesToSetWasMigrated;
@property (readonly) Class superclass;


+(id)reminderMigrationContextWithReminderKitProvider:(id)arg0 ;
-(BOOL)_isCalendarOwnedByExistingStoreToDelete:(*void)arg0 ;
-(id)privacySafePathForURLInCalendarDirectory:(id)arg0 ;
-(void)_removeCalendarsToDeleteInStore:(*void)arg0 ;
-(void)addCalendarToClearSyncToken:(*void)arg0 ;
-(void)addCalendarToDelete:(*void)arg0 ;
-(void)addCalendarToDisableReminders:(*void)arg0 ;
-(void)addStoreToDelete:(*void)arg0 ;
-(void)addStoreToDisableReminders:(*void)arg0 ;
-(void)addStoreToSetWasMigrated:(*void)arg0 ;


@end


#endif