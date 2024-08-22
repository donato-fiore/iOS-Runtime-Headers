// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSMETRICSEVENTTABLE_H
#define SSMETRICSEVENTTABLE_H



#import "SSEventsTableBase.h"

@interface SSMetricsEventTable : SSEventsTableBase



+(id)_eventsTableName;
+(id)databasePath;
-(BOOL)_migrateToVersion1;
-(BOOL)_migrateToVersion2;
-(BOOL)_migrateToVersion3;
-(BOOL)_setupDatabase;
-(id)_pragmaValueForName:(id)arg0 ;
-(void)performTransactionWithBlock:(id)arg0 ;


@end


#endif