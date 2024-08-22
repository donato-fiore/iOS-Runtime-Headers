// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALMIGRATIONTOOLCALENDARMIGRATIONDEFAULTSPROVIDER_H
#define CALMIGRATIONTOOLCALENDARMIGRATIONDEFAULTSPROVIDER_H

@class NSString, CalMigrationToolOptions;
@protocol CalCalendarMigrationDefaultsProvider;

#import <Foundation/Foundation.h>


@interface CalMigrationToolCalendarMigrationDefaultsProvider : NSObject <CalCalendarMigrationDefaultsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<CalCalendarMigrationDefaultsProvider> *defaultProvider; // ivar: _defaultProvider
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHolidayCalendarEnabled;
@property (readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions; // ivar: _toolOptions


-(BOOL)needsMigrationCleanupWithDestinationDirectory:(id)arg0 ;
-(BOOL)shouldPerformMigrationWithDestinationDirectory:(id)arg0 ;
-(id)initWithToolOptions:(id)arg0 defaultProvider:(id)arg1 ;
-(void)clearLegacyDefaults;
-(void)migrateLegacyDefaults;
-(void)recordMigrationDidBeginWithDestinationDirectory:(id)arg0 ;
-(void)recordMigrationDidEndWithReason:(NSUInteger)arg0 ;
-(void)setDefaultAllDayAlarmOffset:(id)arg0 ;
-(void)setDefaultTimedAlarmOffset:(id)arg0 ;


@end


#endif