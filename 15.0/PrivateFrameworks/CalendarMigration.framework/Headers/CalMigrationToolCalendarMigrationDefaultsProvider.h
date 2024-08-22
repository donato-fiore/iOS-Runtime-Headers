// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions; // ivar: _toolOptions


-(id)initWithToolOptions:(id)arg0 defaultProvider:(id)arg1 ;
-(void)clearLegacyDefaults;


@end


#endif