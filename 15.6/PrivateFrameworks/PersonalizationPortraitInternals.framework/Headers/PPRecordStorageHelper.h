// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPRECORDSTORAGEHELPER_H
#define PPRECORDSTORAGEHELPER_H

@class NSString, _DKEventStream;

#import <Foundation/Foundation.h>

#import "PPDKStorage.h"
#import "PPSourceStorage.h"

@interface PPRecordStorageHelper : NSObject {
    NSString *_table;
    NSString *_feedbackTable;
    NSString *_clusterIdentifierColumn;
    unsigned int _maxRecords;
    PPDKStorage *_duetStorage;
    _DKEventStream *_duetStream;
    NSString *_lastDuetImportDateKey;
    NSString *_lastDuetDeletionDateKey;
    PPSourceStorage *_sourceStorage;
}




-(BOOL)clearWithDatabase:(id)arg0 client:(unsigned char)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 clearExternalTableReferences:(id)arg4 ;
-(BOOL)decayFeedbackWithDatabase:(id)arg0 client:(unsigned char)arg1 decayRate:(CGFloat)arg2 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg0 algorithm:(unsigned int)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(*BOOL)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg0 documentIds:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(*BOOL)arg4 deletedCount:(*NSUInteger)arg5 error:(*id)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg0 documentIds:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(*BOOL)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 algorithm:(unsigned int)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(*BOOL)arg5 deletedCount:(*NSUInteger)arg6 error:(*id)arg7 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(*BOOL)arg4 deletedCount:(*NSUInteger)arg5 error:(*id)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg0 groupIds:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(*BOOL)arg4 deletedCount:(*NSUInteger)arg5 error:(*id)arg6 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg0 groupIds:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(*BOOL)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg0 txnWitness:(id)arg1 atLeastOneRecordClusterRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllRecordsWithClusterIdentifier:(id)arg0 algorithm:(unsigned int)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(*BOOL)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllRecordsWithClusterIdentifier:(id)arg0 txnWitness:(id)arg1 atLeastOneRecordClusterRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllRecordsWithName:(id)arg0 algorithm:(unsigned int)arg1 bundleId:(id)arg2 groupId:(id)arg3 category:(unsigned int)arg4 beforeDate:(id)arg5 txnWitness:(id)arg6 atLeastOneRecordClusterRemoved:(*BOOL)arg7 deletedCount:(*NSUInteger)arg8 error:(*id)arg9 ;
-(BOOL)deleteFeedbackCountRecordsOlderThanDate:(id)arg0 txnWitness:(id)arg1 ;
// -(BOOL)fixupDKEventsWithDatabase:(id)arg0 fixup49995922Table:(id)arg1 batchSize:(unsigned int)arg2 shouldContinueBlock:(id)arg3 createRecordWithStatement:(unk)arg4 eventForRecord:(id)arg5  ;
-(BOOL)pruneOrphanedFeedbackCountRecordsWithLimit:(NSUInteger)arg0 rowOffset:(NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 txnWitness:(id)arg3 isComplete:(*BOOL)arg4 ;
-(BOOL)storeFeedback:(id)arg0 database:(id)arg1 client:(unsigned char)arg2 lowercaseItemStrings:(BOOL)arg3 limit:(unsigned int)arg4 ;
-(id)blobFromUUID:(id)arg0 ;
-(id)clusterIdentifiersExistingInDatabaseBeforeDate:(id)arg0 client:(unsigned char)arg1 date:(id)arg2 ;
-(id)createTempRowIdTableForRecordsOlderThanDate:(id)arg0 txnWitness:(id)arg1 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg0 documentIds:(id)arg1 txnWitness:(id)arg2 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 txnWitness:(id)arg3 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg0 groupIds:(id)arg1 txnWitness:(id)arg2 ;
-(id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg0 txnWitness:(id)arg1 ;
-(id)createTempRowIdTableForRecordsToDropMakingRoomForCount:(unsigned int)arg0 txnWitness:(id)arg1 ;
-(id)decayedFeedbackCountsForItemString:(id)arg0 database:(id)arg1 client:(unsigned char)arg2 ;
-(id)duetEventDeletionProcessingBlockWithDatabase:(SEL)arg0 client:(id)arg1 ;
-(id)firstDonationSourceCountsForDatabase:(id)arg0 client:(unsigned char)arg1 shouldContinueBlock:(id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg0 table:(id)arg1 clusterIdentifierColumn:(id)arg2 maxRecords:(unsigned int)arg3 duetStorage:(id)arg4 duetStream:(id)arg5 sourceStorage:(id)arg6 ;
-(id)lastDonationTimeForSourcesInDatabase:(id)arg0 client:(unsigned char)arg1 before:(id)arg2 ;
-(id)thirdPartyBundleIdsFromTodayInDatabase:(id)arg0 client:(unsigned char)arg1 ;
-(id)uuidForStatement:(id)arg0 columnName:(char *)arg1 tableName:(char *)arg2 ;
-(unsigned int)distinctClusterCountInDatabase:(id)arg0 client:(unsigned char)arg1 ;
-(void)deleteAllRemoteRecordsMissingInDuetFromDatabase:(id)arg0 client:(unsigned char)arg1 shouldContinueBlock:(id)arg2 ;
-(void)deleteRecordsForRowIds:(id)arg0 txnWitness:(id)arg1 atLeastOneClusterRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 ;
-(void)deleteRecordsWithRowIdsFromTableWithName:(id)arg0 txnWitness:(id)arg1 atLeastOneRecordClusterRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 ;
-(void)disableSyncForBundleIds:(id)arg0 txnWitness:(id)arg1 ;
// -(void)fixupDKEventsMetadataWithShouldContinueBlock:(id)arg0 database:(unk)arg1 client:(id)arg2  ;
// -(void)importDuetEventsWithLimit:(unsigned int)arg0 database:(id)arg1 client:(unsigned char)arg2 remoteEventsOnly:(BOOL)arg3 isComplete:(*BOOL)arg4 shouldContinueBlock:(id)arg5 eventImportBlock:(unk)arg6  ;
-(void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg0 txnWitness:(id)arg1 ;


@end


#endif