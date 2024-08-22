// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDHISTORYSTORE_H
#define WBSCLOUDHISTORYSTORE_H

@class NSOperationQueue, CKDatabase, CKRecordZoneID, CKRecordZone;
@protocol WBSCloudHistoryDataStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSCloudHistoryConfiguration.h"

@interface WBSCloudHistoryStore : NSObject <WBSCloudHistoryDataStore>

 {
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSOperationQueue *_cloudKitOperationQueue;
    CKDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    CKRecordZone *_recordZone;
    WBSCloudHistoryConfiguration *_configuration;
    BOOL _useManateeContainer;
}




-(BOOL)_shouldTryToResetRecordZoneForError:(id)arg0 ;
-(id)_dictionaryForRecordData:(id)arg0 ;
-(id)_prepareRecordZoneWithoutCachingWithError:(*id)arg0 ;
-(id)_recordDataForDictionary:(id)arg0 ;
-(id)_recordWithCloudHistoryVisits:(id)arg0 ;
-(id)_recordWithHistoryTombstones:(id)arg0 version:(NSUInteger)arg1 ;
-(id)_recordWithType:(id)arg0 version:(NSUInteger)arg1 dataDictionary:(id)arg2 ;
-(id)_recordsWithCloudHistoryVisits:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 useManateeContainer:(BOOL)arg1 ;
-(void)_appendRecord:(id)arg0 toResult:(id)arg1 ;
// -(void)_batchSaveRecords:(id)arg0 useLongLivedOperation:(BOOL)arg1 longLivedOperationPersistenceCompletion:(id)arg2 completion:(unk)arg3  ;
-(void)_configureFetchChangesOperation:(id)arg0 ;
-(void)_fetchRecordsWithServerChangeToken:(id)arg0 numberOfFetchRecordsOperationsPerformedSoFar:(NSUInteger)arg1 result:(id)arg2 completion:(id)arg3 ;
-(void)_prepareRecordZoneWithCompletion:(id)arg0 ;
-(void)_resetRecordZone;
// -(void)_saveCloudHistoryVisits:(id)arg0 tombstones:(id)arg1 longLivedOperationPersistenceCompletion:(id)arg2 completion:(unk)arg3  ;
-(void)_saveRecords:(id)arg0 withCompletion:(id)arg1 ;
-(void)_scheduleOperation:(id)arg0 ;
-(void)deleteHistoryZoneWithCompletion:(id)arg0 ;
-(void)fetchNumberOfDevicesInSyncCircleWithCompletion:(id)arg0 ;
-(void)fetchRecordsWithServerChangeTokenData:(id)arg0 completion:(id)arg1 ;
-(void)initializePushNotifications:(id)arg0 ;
-(void)replayPersistedLongLivedSaveOperationWithID:(id)arg0 completion:(id)arg1 ;
// -(void)saveCloudHistoryVisits:(id)arg0 tombstones:(id)arg1 longLivedOperationPersistenceCompletion:(id)arg2 completion:(unk)arg3  ;


@end


#endif