// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYSQLITESCHEMA_H
#define WBSHISTORYSQLITESCHEMA_H

@class WBSSQLiteDatabase, NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "WBSHistoryCrypto.h"

@interface WBSHistorySQLiteSchema : NSObject {
    WBSSQLiteDatabase *_database;
    WBSHistoryCrypto *_crypto;
    NSDate *_migrateVisitsAfterDate;
}


@property (readonly, nonatomic) NSDictionary *legacyDatabase;


-(BOOL)migrateLegacyDatabaseCreatingRedirectChains:(id)arg0 urlsToItemAndLastVisitID:(id)arg1 visitsToUseForRedirectChains:(id)arg2 ;
-(NSInteger)_migrateLegacyItem:(id)arg0 dailyVisitCounts:(*void)arg1 weeklyVisitCounts:(*void)arg2 ;
-(NSInteger)_migrateLegacyVisitWithItemID:(NSInteger)arg0 visitTime:(CGFloat)arg1 title:(id)arg2 score:(NSUInteger)arg3 loadSuccessful:(BOOL)arg4 httpNonGet:(BOOL)arg5 synthesized:(BOOL)arg6 ;
-(id)_migrateLegacyDatabaseCreatingItemsAndVisits:(id)arg0 outVisitsToUseForRedirectChains:(id)arg1 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 crypto:(id)arg1 migrateVisitsAfterDate:(id)arg2 ;
-(int)_migrateToSchemaVersion:(int)arg0 ;
-(int)_migrateToSchemaVersion_10;
-(int)_migrateToSchemaVersion_11;
-(int)_migrateToSchemaVersion_12;
-(int)_migrateToSchemaVersion_13;
-(int)_migrateToSchemaVersion_14;
-(int)_migrateToSchemaVersion_15;
-(int)_migrateToSchemaVersion_16;
-(int)_migrateToSchemaVersion_2;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(int)_migrateToSchemaVersion_5;
-(int)_migrateToSchemaVersion_6;
-(int)_migrateToSchemaVersion_7;
-(int)_migrateToSchemaVersion_8;
-(int)_migrateToSchemaVersion_9;
-(int)_setDatabaseSchemaVersion:(int)arg0 ;
-(int)migrateToCurrentSchemaVersionIfNeeded;
-(void)_migrateLegacyDatabase;
-(void)_removeLegacyHistoryDatabaseIfNeeded;


@end


#endif