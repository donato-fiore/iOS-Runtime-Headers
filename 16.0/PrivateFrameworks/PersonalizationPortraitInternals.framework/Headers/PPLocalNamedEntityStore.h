// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPLOCALNAMEDENTITYSTORE_H
#define PPLOCALNAMEDENTITYSTORE_H

@class PPNamedEntityStore, _PASLock, _PASLazyResult, NSCache, NSString;
@protocol PPFeedbackProcessing, OS_dispatch_queue;


#import "PPLocalTopicStore.h"
#import "PPTrialWrapper.h"
#import "PPNamedEntityStorage.h"

@interface PPLocalNamedEntityStore : PPNamedEntityStore <PPFeedbackProcessing>

 {
    _PASLock *_lock;
    PPLocalTopicStore *_topicStoreForNamedEntityMapping;
    _PASLazyResult *_lazyContactStoreForMapsFeedback;
    NSObject<OS_dispatch_queue> *_mapsPrefetchQueue;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
}


@property (retain, nonatomic) NSString *invalidationNotificationOverride; // ivar: _invalidationNotificationOverride
@property (retain, nonatomic) NSString *meaningfulChangeNotificationOverride; // ivar: _meaningfulChangeNotificationOverride
@property (readonly, nonatomic) PPNamedEntityStorage *storage; // ivar: _storage


+(float)resolvedPerRecordDecayRateForFeatureProvider:(id)arg0 perRecordDecayRate:(float)arg1 ;
+(id)defaultStore;
+(id)recordsForNamedEntities:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 ;
+(void)sortAndTruncate:(id)arg0 queryLimit:(NSUInteger)arg1 ;
-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)cloudSyncWithError:(*id)arg0 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThan:(id)arg2 deletedCount:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 deletedCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteAllNamedEntitiesOlderThanDate:(id)arg0 deletedCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllNamedEntityFeedbackCountsOlderThanDate:(id)arg0 ;
-(BOOL)donateLocationNamedEntities:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 error:(*id)arg3 ;
-(BOOL)donateMapItem:(id)arg0 forPlaceName:(id)arg1 error:(*id)arg2 ;
-(BOOL)donateNamedEntities:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 sentimentScore:(CGFloat)arg4 error:(*id)arg5 ;
-(BOOL)filterExistingNamedEntitiesWithShouldContinueBlock:(id)arg0 ;
-(BOOL)flushDonationsWithError:(*id)arg0 ;
-(BOOL)iterNamedEntityRecordsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterRankedNamedEntitiesWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)pruneOrphanedNamedEntityFeedbackCountsWithLimit:(NSInteger)arg0 rowOffset:(NSUInteger)arg1 deletedCount:(*NSUInteger)arg2 isComplete:(*BOOL)arg3 ;
-(BOOL)removeMapItemForPlaceName:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeMapItemsBeforeCutoffDate:(id)arg0 error:(*id)arg1 ;
-(CGFloat)finalScoreFromRecordsUsingHybrid:(id)arg0 streamingScorer:(id)arg1 mlModel:(id)arg2 ;
-(id)init;
-(id)initWithStorage:(id)arg0 topicStoreForNamedEntityMapping:(id)arg1 lazyContactStoreForMapsFeedback:(id)arg2 trialWrapper:(id)arg3 ;
-(id)mapItemForPlaceName:(id)arg0 error:(*id)arg1 ;
-(id)namedEntityRecordsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)namedEntityToMatchedStringMappingForNamedEntities:(id)arg0 timestamp:(CGFloat)arg1 error:(*id)arg2 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)rankedNamedEntitiesWithQuery:(id)arg0 error:(*id)arg1 clientProcessName:(id)arg2 ;
-(id)scoredEntityFromRecords:(id)arg0 scoringDate:(id)arg1 perRecordDecayRate:(float)arg2 decayRate:(float)arg3 sourceStats:(id)arg4 decayedFeedbackCounts:(id)arg5 streamingScorer:(*id)arg6 mlModel:(id)arg7 ;
-(void)disableSyncForBundleIds:(id)arg0 ;
-(void)processFeedback:(id)arg0 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif