// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOCIALHIGHLIGHTSTORAGE_H
#define PPSOCIALHIGHLIGHTSTORAGE_H

@class _PASLock;

#import <Foundation/Foundation.h>

#import "PPSocialHighlightCache.h"
#import "PPSocialHighlightStorageUtilities.h"

@interface PPSocialHighlightStorage : NSObject {
    _PASLock *_lock;
    PPSocialHighlightCache *_cache;
    PPSocialHighlightStorageUtilities *_socialHighlightStorageUtils;
}




+(NSUInteger)entitlementStatusForClient:(id)arg0 applicationIdentifiers:(id)arg1 ;
+(id)appLinksForResourceURL:(id)arg0 resolvedURL:(id)arg1 ;
+(id)feedbackPruningPolicy;
+(int)attributionFeedbackTypeForAttributionFeedbackType:(NSUInteger)arg0 ;
+(int)unifiedFeedbackTypeForHighlightFeedbackType:(NSUInteger)arg0 ;
-(BOOL)_isCollaborationEntitlementPresentForApplicationIdentifiers:(id)arg0 ;
-(BOOL)isClientEntitledForItem:(id)arg0 client:(id)arg1 applicationIdentifiers:(id)arg2 blockedHosts:(id)arg3 ;
-(BOOL)isClientEntitledForItem:(id)arg0 client:(id)arg1 applicationIdentifiers:(id)arg2 blockedHosts:(id)arg3 iTunesOverrideChecker:(id)arg4 ;
-(BOOL)isValidHighlight:(id)arg0 ;
-(BOOL)rerankingEnabled;
-(BOOL)saveAttributionFeedbackForAttributionIdentifier:(id)arg0 feedbackType:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 ;
-(BOOL)saveFeedbackForHighlightIdentifier:(id)arg0 feedbackType:(NSUInteger)arg1 client:(id)arg2 variant:(id)arg3 ;
-(CGFloat)_sessionLoggingRate;
-(NSUInteger)countDistinctRankedItemsMatchingBatchIdentifier:(id)arg0 ;
// -(id)_mostRecentRankedHighlightsMatchingTest:(id)arg0 client:(unk)arg1  ;
-(id)_rankableItemsForClient:(id)arg0 variant:(id)arg1 applicationIdentifiers:(id)arg2 autoDonatingChatIdentifiers:(id)arg3 limit:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)_rankableItemsForClient:(id)arg0 variant:(id)arg1 applicationIdentifiers:(id)arg2 limit:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)_screenTimeConversation;
-(id)_socialAttributionFromAttributeValues:(id)arg0 fetchAttributes:(id)arg1 ;
-(id)_socialLayerDefaults;
-(id)allSupportedHighlightsForAutoDonatingChats:(id)arg0 error:(*id)arg1 ;
-(id)attributionForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)attributionsForIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)autoDonatingChatsWithError:(*id)arg0 ;
// -(id)autoDonatingChatsWithShouldContinueBlock:(id)arg0 error:(unk)arg1  ;
-(id)cachedRankedHighlightsForClient:(id)arg0 variant:(id)arg1 queriedHighlights:(id)arg2 ;
-(id)deduplicateAndSortRankedHighlights:(id)arg0 attributionLookup:(id)arg1 limit:(NSUInteger)arg2 client:(id)arg3 ;
-(id)featurizeRankedHighlights:(id)arg0 ;
-(id)feedbackItems;
-(id)feedbackItemsInInterval:(CGFloat)arg0 includingRemote:(BOOL)arg1 ;
-(id)feedbackPublisherWithInterval:(CGFloat)arg0 includingRemote:(BOOL)arg1 ;
-(id)highlightFromRankableHighlight:(id)arg0 attributionIdentifiers:(id)arg1 earliestAttributionIdentifiers:(id)arg2 ;
-(id)init;
-(id)initWithFeedbackStream:(id)arg0 rankedStream:(id)arg1 database:(id)arg2 ;
-(id)lastCacheInvalidationDateForClient:(id)arg0 ;
-(id)rankedHighlightsForSyncedItems:(id)arg0 client:(id)arg1 variant:(id)arg2 applicationIdentifiers:(id)arg3 error:(*id)arg4 ;
-(id)rankedHighlightsWithLimit:(NSUInteger)arg0 client:(id)arg1 variant:(id)arg2 applicationIdentifiers:(id)arg3 error:(*id)arg4 ;
-(id)rankedItems;
-(id)sharedContentForClient:(id)arg0 variant:(id)arg1 applicationIdentifiers:(id)arg2 limit:(NSUInteger)arg3 autoDonatingChatIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)sharedContentFromChats:(id)arg0 dateRange:(CGFloat)arg1 applicationIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)unserializedRankedHighlightsWithLimit:(NSUInteger)arg0 client:(id)arg1 variant:(id)arg2 applicationIdentifiers:(id)arg3 error:(*id)arg4 ;
-(unsigned char)automaticSharingEnabled;
-(unsigned char)automaticSharingEnabledForClient:(id)arg0 error:(*id)arg1 ;
-(void)_performFeedbackSessionLoggingForEnrichedFeedback:(id)arg0 client:(id)arg1 ;
-(void)_writeEnrichedFeedbackForAttributionIdentifier:(id)arg0 client:(id)arg1 feedbackType:(int)arg2 ;
-(void)_writeEnrichedFeedbackForHighlightIdentifier:(id)arg0 client:(id)arg1 feedbackType:(int)arg2 ;
// -(void)cleanUpFeedbackWithShouldContinueBlock:(id)arg0 ttl:(unk)arg1 onDeleteBlock:(CGFloat)arg2  ;
-(void)clearFeedbackStream;
-(void)clearRankedStream;
-(void)clearStreams;
-(void)deleteAllRecordsFromBundleId:(id)arg0 ;
-(void)deleteAllRecordsFromBundleId:(id)arg0 matchingAttributionIdentifiers:(id)arg1 ;
-(void)deleteAllRecordsFromBundleId:(id)arg0 matchingDomainSelection:(id)arg1 ;
-(void)deleteFeedbackMatchingPredicate:(id)arg0 ;
-(void)deleteVendedMatchingPredicate:(id)arg0 ;
-(void)invalidateCacheForClient:(id)arg0 ;
-(void)saveFeedbackItems:(id)arg0 ;
-(void)saveOrderedBatch:(id)arg0 ;
-(void)syncFeedback;


@end


#endif