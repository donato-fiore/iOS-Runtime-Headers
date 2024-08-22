// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLOCALTOPICSTORE_H
#define PPLOCALTOPICSTORE_H

@class PPTopicStore, _PASLock, NSCache, NSString, NSError;
@protocol PPFeedbackProcessing, OS_dispatch_queue;


#import "PPTrialWrapper.h"
#import "PPTopicBlocklist.h"
#import "PPTopicStorage.h"

@interface PPLocalTopicStore : PPTopicStore <PPFeedbackProcessing>

 {
    _PASLock *_lock;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
    PPTopicBlocklist *_blocklist;
    NSString *_cachePath;
    NSObject<OS_dispatch_queue> *_cacheAsyncUpdateQueue;
    NSObject<OS_dispatch_queue> *_cacheUpdateQueue;
    atomic_flag _cacheUpdateEnqueued;
    NSError *_cacheUpdateError;
}


@property (readonly, nonatomic) PPTopicStorage *storage; // ivar: _storage


+(id)calibrateScoredTopic:(id)arg0 calibrationTrie:(id)arg1 ;
+(id)defaultStore;
+(id)recordsForTopics:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 ;
+(void)sortAndTruncate:(id)arg0 queryLimit:(NSUInteger)arg1 ;
-(BOOL)clearTopicScoresCache:(*id)arg0 ;
-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)cloudSyncWithError:(*id)arg0 ;
-(BOOL)computeAndCacheTopicScores:(*id)arg0 ;
// -(BOOL)computeAndCacheTopicScoresWithShouldContinueBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)deleteAllTopicFeedbackCountsOlderThanDate:(id)arg0 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 algorithm:(NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 algorithm:(NSUInteger)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 algorithm:(NSUInteger)arg2 olderThan:(id)arg3 deletedCount:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThan:(id)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 algorithm:(NSUInteger)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsOlderThanDate:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg0 algorithm:(NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)donateTopics:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 sentimentScore:(CGFloat)arg4 exactMatchesInSourceText:(id)arg5 error:(*id)arg6 ;
-(BOOL)flushDonationsWithError:(*id)arg0 ;
-(BOOL)iterScoredTopicsWithQuery:(id)arg0 error:(*id)arg1 clientProcessName:(id)arg2 block:(id)arg3 ;
-(BOOL)iterScoresForTopicMapping:(id)arg0 query:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
-(BOOL)iterTopicRecordsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)pruneOrphanedTopicFeedbackCountsWithLimit:(NSUInteger)arg0 rowOffset:(NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 isComplete:(*BOOL)arg3 ;
-(CGFloat)finalScoreFromRecordsUsingHybrid:(id)arg0 streamingScorer:(id)arg1 mlModel:(id)arg2 ;
-(id)cachePath:(*id)arg0 ;
-(id)cachedTopicScores;
-(id)init;
-(id)initWithStorage:(id)arg0 trialWrapper:(id)arg1 ;
-(id)rankedTopicsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)rankedTopicsWithQuery:(id)arg0 error:(*id)arg1 clientProcessName:(id)arg2 ;
-(id)scoreTopics:(id)arg0 scoringDate:(id)arg1 decayRate:(CGFloat)arg2 strictFiltering:(BOOL)arg3 sourceStats:(id)arg4 decayedFeedbackCounts:(id)arg5 streamingScorer:(*id)arg6 mlModel:(id)arg7 ;
-(id)scoresForTopicMapping:(id)arg0 query:(id)arg1 error:(*id)arg2 ;
-(id)scoresForTopicMapping:(id)arg0 query:(id)arg1 error:(*id)arg2 clientProcessName:(id)arg3 ;
-(id)topicCacheSandboxExtensionToken:(*id)arg0 ;
-(id)topicExtractionsFromText:(id)arg0 clientProcessName:(id)arg1 error:(*id)arg2 ;
-(id)topicExtractionsFromText:(id)arg0 error:(*id)arg1 ;
-(id)topicRecordsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)unmapMappedTopicIdentifier:(id)arg0 mappingIdentifier:(id)arg1 error:(*id)arg2 ;
-(void)disableSyncForBundleIds:(id)arg0 ;
-(void)logDonationErrorForReason:(NSInteger)arg0 errorCode:(NSUInteger)arg1 source:(id)arg2 ;
-(void)processFeedback:(id)arg0 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)registerUniversalSearchSpotlightFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif