// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPNAMEDENTITYSTORAGE_H
#define PPNAMEDENTITYSTORAGE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PPSQLDatabase.h"
#import "PPDKStorage.h"
#import "PPRecordStorageHelper.h"
#import "PPSourceStorage.h"
#import "PPTrialWrapper.h"

@interface PPNamedEntityStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id *_deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}




-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)decayFeedbackCountsWithDecayRate:(CGFloat)arg0 shouldContinueBlock:(id)arg1 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 atLeastOneNamedEntityRemoved:(*BOOL)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 atLeastOneNamedEntityRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 atLeastOneNamedEntityRemoved:(*BOOL)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 atLeastOneNamedEntityRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllNamedEntitiesOlderThanDate:(id)arg0 atLeastOneNamedEntityRemoved:(*BOOL)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllNamedEntityFeedbackCountRecordsOlderThanDate:(id)arg0 ;
-(BOOL)deleteNamedEntitiesMatchingRowIds:(id)arg0 atLeastOneNamedEntityRemoved:(*BOOL)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)donateNamedEntities:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 decayRate:(CGFloat)arg4 sentimentScore:(CGFloat)arg5 error:(*id)arg6 ;
-(BOOL)donateNamedEntityFeedback:(id)arg0 ;
-(BOOL)iterNamedEntityRecordsAndIdsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterNamedEntityRecordsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)pruneOrphanedNamedEntityFeedbackCountRecordsWithLimit:(NSUInteger)arg0 rowOffset:(NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 isComplete:(*BOOL)arg3 ;
-(BOOL)setNamedEntityFilterLastRecordDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)setNamedEntityFilterLastRunDate:(id)arg0 error:(*id)arg1 ;
-(CGFloat)duetWriteBatchInterval;
-(id)clusterIdentifiersExistingBeforeDate:(id)arg0 ;
-(id)decayedFeedbackCountsForClusterIdentifier:(id)arg0 ;
-(id)firstDonationSourceCountsWithShouldContinueBlock:(id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 maxRecords:(unsigned int)arg1 dkStorage:(id)arg2 loadEmptyDatabaseFromDK:(BOOL)arg3 trialWrapper:(id)arg4 ;
-(id)lastDonationTimeForSourcesBeforeDate:(id)arg0 ;
-(id)namedEntityFilterLastRecordDate;
-(id)namedEntityFilterLastRunDateWithError:(*id)arg0 ;
-(id)sourceStats:(NSUInteger)arg0 withExcludedAlgorithms:(id)arg1 ;
-(id)tempViewForSourceIdsExcludedAlgorithms:(id)arg0 txnWitness:(id)arg1 ;
-(id)thirdPartyBundleIdsFromToday;
-(unsigned int)duetReadBatchSize;
-(unsigned int)duetWriteBatchSize;
-(unsigned int)uniqueClusterIdentifierCount;
-(void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(id)arg0 ;
-(void)dealloc;
-(void)disableSyncForBundleIds:(id)arg0 ;
-(void)exportRecordsToDKWithShouldContinueBlock:(id)arg0 ;
-(void)fixupDKEventsMetadataWithShouldContinueBlock:(id)arg0 ;
-(void)fixupDKEventsWithShouldContinueBlock:(id)arg0 ;
-(void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned int)arg0 isComplete:(*BOOL)arg1 shouldContinueBlock:(id)arg2 ;
-(void)processNewDKEventDeletions;


@end


#endif