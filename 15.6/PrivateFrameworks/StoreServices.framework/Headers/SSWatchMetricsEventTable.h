// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSWATCHMETRICSEVENTTABLE_H
#define SSWATCHMETRICSEVENTTABLE_H



#import "SSEventsTableBase.h"

@interface SSWatchMetricsEventTable : SSEventsTableBase



+(id)databasePath;
-(BOOL)_migrateToVersion1;
-(BOOL)_migrateToVersion2;
-(BOOL)_migrateToVersion3;
-(BOOL)_migrateToVersion4;
-(BOOL)_migrateToVersion5;
-(BOOL)_migrateToVersion6;
-(BOOL)_migrateToVersion7;
-(BOOL)_setupDatabase;


@end


#endif