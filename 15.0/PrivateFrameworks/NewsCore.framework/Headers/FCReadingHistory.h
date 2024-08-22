// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCREADINGHISTORY_H
#define FCREADINGHISTORY_H

@class NSMutableDictionary, NSSet, NSString;
@protocol FCClearableReadingHistory;


#import "FCPrivateDataController.h"
#import "FCMTWriterLock.h"

@interface FCReadingHistory : FCPrivateDataController <FCClearableReadingHistory>

 {
    NSMutableDictionary *_itemsByIdentifier;
    NSMutableDictionary *_itemsByArticleID;
    FCMTWriterLock *_itemsLock;
}


@property (readonly, nonatomic) NSSet *allConsumedArticleIDs;
@property (readonly, nonatomic) NSSet *allReadArticleIDs;
@property (readonly, nonatomic) NSSet *allSeenArticleIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
+(NSInteger)commandQueueUrgency;
+(NSUInteger)localStoreVersion;
+(id)backingRecordIDs;
+(id)backingRecordZoneIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg0 ;
+(id)desiredKeys;
+(id)localStoreFilename;
+(void)configureKeyValueStoreForJSONHandling:(id)arg0 ;
+(void)populateLocalStoreClassRegistry:(id)arg0 ;
-(BOOL)canHelpPruneZoneName:(id)arg0 ;
-(BOOL)canHelpRestoreZoneName:(id)arg0 ;
-(BOOL)hasArticleBeenConsumed:(id)arg0 ;
-(BOOL)hasArticleBeenMarkedAsOffensive:(id)arg0 ;
-(BOOL)hasArticleBeenRead:(id)arg0 ;
-(BOOL)hasArticleBeenReadMoreThanThreshold:(id)arg0 ;
-(BOOL)hasArticleBeenSeen:(id)arg0 ;
-(BOOL)hasArticleBeenVisited:(id)arg0 ;
-(BOOL)hasArticleCompletedListening:(id)arg0 ;
-(BOOL)hasArticleCompletedReading:(id)arg0 ;
-(BOOL)markArticle:(id)arg0 withCompletedListening:(BOOL)arg1 ;
-(BOOL)markArticle:(id)arg0 withCompletedReading:(BOOL)arg1 ;
-(BOOL)markArticle:(id)arg0 withLikingStatus:(NSUInteger)arg1 ;
-(BOOL)markArticleAsReadWithArticleID:(id)arg0 articleVersion:(NSInteger)arg1 readDate:(id)arg2 ;
-(BOOL)markArticleAsSeenWithHeadline:(id)arg0 ;
-(BOOL)markArticleAsSeenWithHeadline:(id)arg0 rememberForever:(BOOL)arg1 ;
-(BOOL)toggleArticleHasBeenMarkedAsOffensive:(id)arg0 ;
-(BOOL)toggleDislikeForArticleWithID:(id)arg0 ;
-(BOOL)toggleLikeForArticleWithID:(id)arg0 ;
-(CGFloat)listeningProgressFor:(id)arg0 ;
-(CGFloat)softMaxRecordAgeWhenMigratingZoneName:(id)arg0 ;
-(NSUInteger)likingStatusForArticleID:(id)arg0 ;
-(NSUInteger)softMaxRecordCountWhenMigratingZoneName:(id)arg0 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)allReadingHistoryItems;
-(id)allSortedArticleIDsInReadingHistory;
-(id)consumedArticleIDsForTagID:(id)arg0 fromTime:(id)arg1 ;
-(id)firstSeenDateFor:(id)arg0 ;
-(id)historyItemsForArticleIDs:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)lastListenedFor:(id)arg0 ;
-(id)lastVisitedDateForArticleID:(id)arg0 ;
-(id)listeningProgressSavedDateFor:(id)arg0 ;
-(id)localStoreMigrator;
-(id)markArticlesAsSeenWithHeadlines:(id)arg0 ;
-(id)mostRecentlyCompletedListeningArticlesWithMaxCount:(NSUInteger)arg0 ;
-(id)mostRecentlyReadArticlesWithMaxCount:(NSUInteger)arg0 ;
-(id)pruneRecords:(id)arg0 forZoneName:(id)arg1 ;
-(id)readingPositionJSONFor:(id)arg0 ;
-(id)readingPositionSavedDateFor:(id)arg0 ;
-(id)recordsForRestoringZoneName:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)clearHistory;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)markArticle:(id)arg0 asArticleConsumed:(BOOL)arg1 sourceChannelTagID:(id)arg2 ;
-(void)markArticle:(id)arg0 asOffensive:(BOOL)arg1 ;
-(void)markArticle:(id)arg0 withLastListened:(id)arg1 ;
-(void)markArticle:(id)arg0 withListeningProgress:(CGFloat)arg1 ;
-(void)markArticle:(id)arg0 withReadingPositionJSON:(id)arg1 ;
-(void)markArticleAsReadWithHeadline:(id)arg0 ;
-(void)markArticleAsReadWithHeadline:(id)arg0 fromGroupType:(NSInteger)arg1 swipedToArticle:(BOOL)arg2 onScreenChecker:(id)arg3 ;
-(void)removeArticleFromHistory:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif