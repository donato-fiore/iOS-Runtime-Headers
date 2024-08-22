// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFRIENDLISTSECTIONMANAGER_H
#define ASFRIENDLISTSECTIONMANAGER_H

@class HKHealthStore, ASClient, FIUIModel, NSCache, NSSet, ASFriendListQuery, HKActivitySummaryQuery, FIUIWorkoutDataProvider, FIUIClientToken;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASFriendListSectionManager : NSObject {
    HKHealthStore *_healthStore;
    ASClient *_client;
    FIUIModel *_model;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    NSCache *_displayContextToSortedSectionsCache;
    NSSet *_allFriends;
    ASFriendListQuery *_friendListQuery;
    HKActivitySummaryQuery *_meQuery;
    FIUIWorkoutDataProvider *_workoutDataProvider;
    NSInteger _meQueryRetries;
    NSInteger _friendQueryRetries;
    FIUIClientToken *_modelQueryToken;
    BOOL _shouldGenerateDemoData;
    BOOL _hasReceivedFriendListQueryResult;
    BOOL _hasReceivedMeQueryResult;
}




-(BOOL)_isWheelchairUserDisplayModeValidForFriends:(id)arg0 filter:(NSInteger)arg1 ;
-(BOOL)hasAnyFriendsSetup;
-(BOOL)hasInitializedFriendData;
-(BOOL)hasReachedMaxNumberOfFriends;
-(NSInteger)numberOfNewFriendsAllowed;
-(NSUInteger)numberOfFriendsWithCompetitionRequestsAwaitingResponseFromMe;
-(NSUInteger)numberOfFriendsWithInvitesAwaitingResponseFromMe;
-(NSUInteger)totalNumberOfPendingRequests;
-(id)_copyFriends;
-(id)_createSectionsForFriends:(id)arg0 withDisplayContext:(id)arg1 ;
-(id)_datesToShowSnapshotsForFriend:(id)arg0 startingFromCurrentDateComponents:(id)arg1 ;
-(id)_filterFriends:(id)arg0 withActiveFriendshipAtEndOfDay:(id)arg1 ;
-(id)_filterFriends:(id)arg0 withSnapshotDataAtCacheIndex:(id)arg1 ;
-(id)_filterFriends:(id)arg0 withWheelchairUseAtCacheIndex:(id)arg1 ;
-(id)_friendWithUUID:(id)arg0 fromFriends:(id)arg1 ;
-(id)_queue_me;
-(id)_sectionForDataVisibilityConditionalUsingBlock:(id)arg0 ;
// -(id)_sectionForDataVisibilityConditionalUsingBlock:(id)arg0 comparator:(unk)arg1  ;
-(id)_sortFriends:(id)arg0 forDisplayMode:(NSInteger)arg1 cacheIndex:(id)arg2 ;
-(id)allActiveFriendsAsRecipients;
-(id)allDestinationsForActiveOrPendingFriends;
-(id)allFriends;
-(id)friendWithUUID:(id)arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 andWorkoutDataProvider:(id)arg1 ;
-(id)me;
-(id)sectionForFriendsCompetingWithMe;
-(id)sectionForFriendsHidingDataFromMe;
-(id)sectionForFriendsInvitedByMe;
-(id)sectionForFriendsInvitingMe;
-(id)sectionForFriendsMyDataIsHiddenFrom;
-(id)sectionForFriendsRequestedToCompeteByMe;
-(id)sectionForFriendsRequestingMeToCompete;
-(id)sectionForFriendsWithNoHiding;
-(id)sectionsForDisplayContext:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_calendarDayChangedNotification:(id)arg0 ;
-(void)_createFakeFriends;
-(void)_enumerateVisibleDaysForFriends:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postFriendsListChangedNotification;
-(void)_queue_handleActivitySummaryUpdate:(id)arg0 ;
-(void)_queue_handleMyWorkoutsUpdate;
-(void)_queue_restartQueryAfterErrorCount:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)_queue_startFriendsQuery;
-(void)_queue_startMeQuery;
-(void)_queue_stopQueries;
-(void)_queue_updateWithNewData;
-(void)_startQueries;
-(void)_startQueriesIfRequired;
-(void)_stopQueries;
-(void)dealloc;
-(void)enumerateValidDisplayModesForFilter:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)fetchActivitySharingDataIfTimeSinceLastFetchIsGreaterThan:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif