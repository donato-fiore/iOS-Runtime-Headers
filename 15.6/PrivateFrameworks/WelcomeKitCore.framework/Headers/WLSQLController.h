// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLSQLCONTROLLER_H
#define WLSQLCONTROLLER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLSQLController : NSObject {
    *sqlite3 _database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}


@property (copy, nonatomic) NSString *databasePath; // ivar: _databasePath


+(NSInteger)persistentValueForDate:(id)arg0 ;
-(BOOL)_foundHandleIDs:(id)arg0 representSameGroupMessageAsHandleIDs:(id)arg1 handleIDsAreComplete:(BOOL)arg2 ;
-(BOOL)deleteAccountsAndSummariesForMigrator:(id)arg0 device:(id)arg1 ;
-(NSInteger)_performQuery:(id)arg0 rowHandler:(id)arg1 ;
-(NSInteger)_schemaVersion;
-(NSUInteger)_totalSummarySegmentCountForAccounts:(id)arg0 migrationStateComparisonOperator:(id)arg1 migrationState:(NSInteger)arg2 ;
-(NSUInteger)insertAccount:(id)arg0 migrator:(id)arg1 device:(id)arg2 ;
-(NSUInteger)insertRecordSummary:(id)arg0 account:(id)arg1 ;
-(NSUInteger)totalSummaryDownloadSegmentCountForAccounts:(id)arg0 ;
-(NSUInteger)totalSummaryDownloadedSegmentCountForAccounts:(id)arg0 ;
-(id)_migratableAppsForDevice:(id)arg0 ;
-(id)_sqlite3_column_NSDateForStatement:(struct sqlite3_stmt *)arg0 column:(int)arg1 ;
-(id)accountsForMigrator:(id)arg0 device:(id)arg1 ;
-(id)dataForSummary:(id)arg0 ;
-(id)groupMessageInfoMatchingSortedHandleIDs:(id)arg0 handleIDsAreComplete:(BOOL)arg1 didMatchExactly:(*BOOL)arg2 ;
-(id)groupMessageInfoMatchingSourceThreadID:(id)arg0 ;
-(id)init;
-(id)messagePhoneNumberIccForCcAcNumber:(id)arg0 ;
-(id)migratableAppsForAllDevices;
-(id)migrationErrors;
-(id)migrationMetadataForSourceDevice:(id)arg0 strictMatch:(BOOL)arg1 ;
-(id)statisticsForContentType:(id)arg0 ;
-(id)summariesForAccount:(id)arg0 ;
-(id)summariesForAccounts:(id)arg0 sortedByModifiedDate:(BOOL)arg1 ;
-(int)_sqlite3_bind_NSDate:(id)arg0 forStatement:(struct sqlite3_stmt *)arg1 position:(int)arg2 ;
-(void)_deleteAccounts;
-(void)_deleteSummaries;
-(void)_ensureCorrectSchema;
-(void)_insertStatistics_onDatabaseQueue:(id)arg0 ;
-(void)_onDatabaseQueue_updateMigrationState:(int)arg0 forSummary:(id)arg1 removeData:(BOOL)arg2 ;
-(void)_openDatabase;
-(void)closeDatabase;
-(void)dealloc;
-(void)deleteAccountsAndSummariesForAllDevices;
-(void)deleteGroupMessageInfoForAllDevices;
-(void)deleteMessagePhoneNumbersForAllDevices;
-(void)deleteMetadataForAllDevices;
-(void)deleteMigratableAppsForAllDevices;
-(void)deleteStatisticsForAllDevices;
-(void)deleteSuggestedAppBundleIDsForAllDevices;
-(void)deleteSummaryDataForAllDevices;
-(void)insertGroupMessageInfoWithSortedHandleIDs:(id)arg0 handleIDsAreComplete:(BOOL)arg1 roomName:(id)arg2 groupID:(id)arg3 ;
-(void)insertGroupMessageInfoWithSourceThreadID:(id)arg0 roomName:(id)arg1 groupID:(id)arg2 ;
-(void)insertMessagePhoneNumberWithIcc:(id)arg0 ccAcNumber:(id)arg1 ;
-(void)insertMetadata:(id)arg0 forSourceDevice:(id)arg1 ;
-(void)insertMigratableApp:(id)arg0 forDevice:(id)arg1 ;
-(void)removeDataAndSetDidImportForSummary:(id)arg0 ;
-(void)setData:(id)arg0 forSummary:(id)arg1 ;
-(void)setDidDownloadForSummary:(id)arg0 forSourceDevice:(id)arg1 ;
-(void)setMetadata:(id)arg0 forSourceDevice:(id)arg1 ;
-(void)setMigrationError:(id)arg0 forSummary:(id)arg1 ;
-(void)setWillImportForSummary:(id)arg0 ;
-(void)totalSummaryItemSizeForAccounts:(id)arg0 addOverhead:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateModifiedDateForSummary:(id)arg0 ;
-(void)updateStatistics:(id)arg0 ;


@end


#endif