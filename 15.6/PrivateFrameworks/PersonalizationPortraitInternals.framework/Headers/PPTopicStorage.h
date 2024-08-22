// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTOPICSTORAGE_H
#define PPTOPICSTORAGE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PPSQLDatabase.h"
#import "PPDKStorage.h"
#import "PPRecordStorageHelper.h"
#import "PPSourceStorage.h"
#import "PPTrialWrapper.h"

@interface PPTopicStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id *_deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}


@property (readonly, nonatomic) NSString *parentDirectory;


-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)decayFeedbackCountsWithDecayRate:(CGFloat)arg0 shouldContinueBlock:(id)arg1 ;
-(BOOL)deleteAllTopicFeedbackCountRecordsOlderThanDate:(id)arg0 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 algorithm:(NSUInteger)arg1 atLeastOneTopicRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 atLeastOneTopicRemoved:(*BOOL)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 algorithm:(NSUInteger)arg2 atLeastOneTopicRemoved:(*BOOL)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 atLeastOneTopicRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 algorithm:(NSUInteger)arg3 atLeastOneTopicRemoved:(*BOOL)arg4 deletedCount:(*NSUInteger)arg5 error:(*id)arg6 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 atLeastOneTopicRemoved:(*BOOL)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 algorithm:(NSUInteger)arg2 atLeastOneTopicRemoved:(*BOOL)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 atLeastOneTopicRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllTopicsOlderThanDate:(id)arg0 atLeastOneTopicRemoved:(*BOOL)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg0 algorithm:(NSUInteger)arg1 atLeastOneTopicRemoved:(*BOOL)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg0 atLeastOneTopicRemoved:(*BOOL)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)donateTopicFeedback:(id)arg0 ;
-(BOOL)donateTopics:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 decayRate:(CGFloat)arg4 sentimentScore:(CGFloat)arg5 exactMatchesInSourceText:(id)arg6 error:(*id)arg7 ;
-(BOOL)iterTopicRecordsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)pruneOrphanedTopicFeedbackCountRecordsWithLimit:(NSInteger)arg0 rowOffset:(NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 isComplete:(*BOOL)arg3 ;
-(CGFloat)duetWriteBatchInterval;
-(id)clusterIdentifiersExistingBeforeDate:(id)arg0 ;
-(id)decayedFeedbackCountsForClusterIdentifier:(id)arg0 ;
-(id)firstDonationSourceCountsWithShouldContinueBlock:(id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 maxRecords:(unsigned int)arg1 dkStorage:(id)arg2 loadEmptyDatabaseFromDK:(BOOL)arg3 trialWrapper:(id)arg4 ;
-(id)lastDonationTimeForSourcesBeforeDate:(id)arg0 ;
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
-(void)importRemotelyGeneratedTopicDKEventsWithLimit:(unsigned int)arg0 isComplete:(*BOOL)arg1 shouldContinueBlock:(id)arg2 ;
-(void)processNewDKEventDeletions;


@end


#endif