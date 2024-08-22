// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALMIGRATIONTOOLREMINDERMIGRATIONDEFAULTSPROVIDER_H
#define CALMIGRATIONTOOLREMINDERMIGRATIONDEFAULTSPROVIDER_H

@class NSString, CalMigrationToolOptions;
@protocol CalReminderMigrationDefaultsProvider, CalCalendarMigrationDefaultsProvider, CalMigrationController;

#import <Foundation/Foundation.h>


@interface CalMigrationToolReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>



@property (readonly, nonatomic) NSObject<CalCalendarMigrationDefaultsProvider> *calendarDefaultsProvider; // ivar: _calendarDefaultsProvider
@property (readonly, nonatomic) NSObject<CalMigrationController> *calendarMigrationController; // ivar: _calendarMigrationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL havePerformedReminderMigrationCleanup;
@property (readonly, nonatomic) NSObject<CalReminderMigrationDefaultsProvider> *reminderDefaultsProvider; // ivar: _reminderDefaultsProvider
@property (readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions; // ivar: _toolOptions


-(id)initWithToolOptions:(id)arg0 reminderDefaultsProvider:(id)arg1 calendarDefaultsProvider:(id)arg2 calendarMigrationController:(id)arg3 ;


@end


#endif