// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCISSUEREADINGHISTORY_H
#define FCISSUEREADINGHISTORY_H

@class NSMutableDictionary, NSArray, NSString;
@protocol FCIssueReadingHistoryType, FCClearableReadingHistory;


#import "FCPrivateDataController.h"
#import "FCMTWriterLock.h"

@interface FCIssueReadingHistory : FCPrivateDataController <FCIssueReadingHistoryType, FCClearableReadingHistory>

 {
    NSMutableDictionary *_itemsByID;
    FCMTWriterLock *_itemsLock;
}


@property (readonly, nonatomic) NSArray *allEngagedIssueIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *mostRecentlyVisitedIssueID;
@property (readonly, nonatomic) NSArray *recentlyEngagedIssueIDs;
@property (readonly, nonatomic) NSArray *recentlyVisitedIssueIDs;
@property (readonly) Class superclass;


+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
+(NSInteger)commandQueueUrgency;
+(NSUInteger)localStoreVersion;
+(id)backingRecordIDs;
+(id)backingRecordZoneIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg0 privateDataDirectory:(id)arg1 ;
+(id)desiredKeys;
+(id)localStoreFilename;
+(void)populateLocalStoreClassRegistry:(id)arg0 ;
-(BOOL)canHelpRestoreZoneName:(id)arg0 ;
-(BOOL)hasIssueWithIDBeenBadged:(id)arg0 ;
-(BOOL)hasIssueWithIDBeenEngaged:(id)arg0 ;
-(BOOL)hasIssueWithIDBeenSeen:(id)arg0 ;
-(BOOL)hasIssueWithIDBeenVisited:(id)arg0 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)bookmarkForLastVisitToIssueWithID:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)lastEngagedDateForIssueWithID:(id)arg0 ;
-(id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg0 ;
-(id)lastSeenDateForIssueWithID:(id)arg0 ;
-(id)lastVisitedDateForIssueWithID:(id)arg0 ;
-(id)recordsForRestoringZoneName:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)clearHistory;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)markIssueAsBadgedWithID:(id)arg0 ;
-(void)markIssueAsEngagedWithID:(id)arg0 ;
-(void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg0 ;
-(void)markIssueAsSeenWithID:(id)arg0 ;
-(void)markIssueWithID:(id)arg0 asVisitedWithBookmark:(id)arg1 ;
-(void)prepareForUseWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif