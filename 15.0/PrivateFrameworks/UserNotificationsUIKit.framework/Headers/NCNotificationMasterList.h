// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONMASTERLIST_H
#define NCNOTIFICATIONMASTERLIST_H

@class NSDate, NSString, NSMutableArray, NSDictionary;
@protocol NCNotificationListViewDataSource, NCNotificationListRevealCoordinatorDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationStructuredSectionListDelegate, NCSuggestionManagerDelegate, NCNotificationListCacheDelegate, NCDigestScheduleManagerObserver, NCNotificationListPersistentStateManagerDelegate, NCNotificationListMigrationSchedulerDelegate, NCNotificationListComponent, NCNotificationMasterListDelegate;

#import <Foundation/Foundation.h>

#import "NCNotificationSummarizedSectionList.h"
#import "NCDigestScheduleManager.h"
#import "NCNotificationCombinedSectionList.h"
#import "NCNotificationStructuredSectionList.h"
#import "NCNotificationListView.h"
#import "NCNotificationListMigrationScheduler.h"
#import "NCNotificationListCache.h"
#import "NCNotificationListStalenessEventTracker.h"
#import "NCNotificationListPersistentStateManager.h"
#import "NCNotificationListRevealCoordinator.h"
#import "NCSuggestionManager.h"

@interface NCNotificationMasterList : NSObject <NCNotificationListViewDataSource, NCNotificationListRevealCoordinatorDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationStructuredSectionListDelegate, NCSuggestionManagerDelegate, NCNotificationListCacheDelegate, NCDigestScheduleManagerObserver, NCNotificationListPersistentStateManagerDelegate, NCNotificationListMigrationSchedulerDelegate, NCNotificationListComponent>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy, nonatomic) NSDate *comparisonDate;
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NCNotificationSummarizedSectionList *currentDigestSectionList; // ivar: _currentDigestSectionList
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferCurrentDigestPresentationForPersistedDataLoad; // ivar: _deferCurrentDigestPresentationForPersistedDataLoad
@property (nonatomic) BOOL deferDigestMigration; // ivar: _deferDigestMigration
@property (weak, nonatomic) NSObject<NCNotificationMasterListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // ivar: _deviceAuthenticated
@property (nonatomic, getter=isDigestFeatureEnabled) BOOL digestFeatureEnabled; // ivar: _digestFeatureEnabled
@property (retain, nonatomic) NCDigestScheduleManager *digestScheduleManager; // ivar: _digestScheduleManager
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly, nonatomic) BOOL hasVisibleUrgentBreakthroughContent;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationCombinedSectionList *historySectionList; // ivar: _historySectionList
@property (retain, nonatomic) NCNotificationStructuredSectionList *incomingSectionList; // ivar: _incomingSectionList
@property (copy, nonatomic) NSString *logDescription; // ivar: _logDescription
@property (retain, nonatomic) NCNotificationListView *masterListView; // ivar: _masterListView
@property (retain, nonatomic) NCNotificationListMigrationScheduler *migrationScheduler; // ivar: _migrationScheduler
@property (nonatomic, getter=isMissedSectionActive) BOOL missedSectionActive; // ivar: _missedSectionActive
@property (retain, nonatomic) NCNotificationStructuredSectionList *missedSectionList; // ivar: _missedSectionList
@property (readonly, nonatomic) NSUInteger notificationCount;
@property (nonatomic, getter=isNotificationHistoryRevealed) BOOL notificationHistoryRevealed; // ivar: _notificationHistoryRevealed
@property (retain, nonatomic) NCNotificationListCache *notificationListCache; // ivar: _notificationListCache
@property (retain, nonatomic) NCNotificationListStalenessEventTracker *notificationListStalenessEventTracker; // ivar: _notificationListStalenessEventTracker
@property (retain, nonatomic) NSMutableArray *notificationRequestsPendingMigration; // ivar: _notificationRequestsPendingMigration
@property (retain, nonatomic) NSMutableArray *notificationSections; // ivar: _notificationSections
@property (retain, nonatomic) NCNotificationListPersistentStateManager *persistentStateManager; // ivar: _persistentStateManager
@property (copy, nonatomic) NSDictionary *persistentStoredListInfo; // ivar: _persistentStoredListInfo
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) NCNotificationListRevealCoordinator *revealCoordinator; // ivar: _revealCoordinator
@property (nonatomic, getter=isScheduledDeliveryEnabled) BOOL scheduledDeliveryEnabled; // ivar: _scheduledDeliveryEnabled
@property (copy, nonatomic) id *scrollCompletionBlock; // ivar: _scrollCompletionBlock
@property (nonatomic) CGFloat scrollCompletionBlockOffsetThreshold; // ivar: _scrollCompletionBlockOffsetThreshold
@property (nonatomic) BOOL shouldAllowNotificationHistoryReveal; // ivar: _shouldAllowNotificationHistoryReveal
@property (retain, nonatomic) NCSuggestionManager *suggestionManager; // ivar: _suggestionManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalNotificationCount;
@property (retain, nonatomic) NCNotificationSummarizedSectionList *upcomingDigestSectionList; // ivar: _upcomingDigestSectionList
@property (nonatomic, getter=isUpcomingDigestVisible) BOOL upcomingDigestVisible; // ivar: _upcomingDigestVisible
@property (retain, nonatomic) NCNotificationSummarizedSectionList *upcomingMissedSectionList; // ivar: _upcomingMissedSectionList


-(BOOL)_isCurrentDigestListAboveHistorySectionList;
-(BOOL)_isCurrentDigestListInHistorySectionList;
-(BOOL)_isCurrentDigestListInMissedSectionList;
-(BOOL)_isNotificationRequest:(id)arg0 forSectionList:(id)arg1 ;
-(BOOL)_isPersistentStateCurrentDigestInMissedSection;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)containsNotificationRequest:(id)arg0 ;
-(BOOL)notificationListRevealCoordinatorShouldAllowReveal:(id)arg0 ;
-(BOOL)notificationListViewIsGroup:(id)arg0 ;
-(BOOL)notificationStructuredSectionList:(id)arg0 shouldFilterNotificationRequest:(id)arg1 ;
-(BOOL)notificationStructuredSectionList:(id)arg0 shouldScrollToTopForGroupList:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldDelayDeliveryOfNotificationRequest:(id)arg0 ;
-(CGFloat)insetHorizontalMarginForNotificationListView:(id)arg0 ;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 ;
-(Class)notificationListCacheNotificationViewControllerClass:(id)arg0 ;
-(NSInteger)_atxDigestDeliveryTimeForDeliveryOrder:(NSInteger)arg0 ;
-(NSUInteger)notificationListViewNumberOfItems:(id)arg0 ;
-(id)_digestTestRecipe;
-(id)_filterNotificationsInGroupLists:(id)arg0 withDestinationsForSectionList:(id)arg1 ;
-(id)_listInfoForPersistentState;
-(id)_listInfoForStateCapture;
-(id)_missedSectionTitleForDNDMode:(id)arg0 ;
-(id)_newDigestSectionListWithTitle:(id)arg0 sectionType:(NSUInteger)arg1 summaryOrderProvider:(id)arg2 logDescription:(id)arg3 ;
-(id)_newMissedSectionListForDNDMode:(id)arg0 ;
-(id)_newMissedSectionWithTitle:(id)arg0 summaryHeading:(id)arg1 logDescription:(id)arg2 dndMode:(id)arg3 ;
-(id)_newSummaryOrderProviderOfType:(NSUInteger)arg0 fromSummaryOrderProvider:(id)arg1 ;
-(id)_newSummaryOrderProviderOfType:(NSUInteger)arg0 summaryHeading:(id)arg1 summaryDate:(id)arg2 atxDigestDeliveryTime:(NSInteger)arg3 ;
-(id)_notificationSectionListsForEnumeration;
-(id)_sectionForNotificationRequest:(id)arg0 ;
-(id)_sectionForStoredNotificationRequestOfSectionType:(NSUInteger)arg0 ;
-(id)_sectionListsForPersistentState;
-(id)_sectionsForStateDump;
-(id)_visibleNotificationRequests;
-(id)init;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(id)notificationRequestWithNotificationIdentifier:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)notificationStructuredSectionList:(id)arg0 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg1 isLongLook:(BOOL)arg2 ;
-(id)subListsForNotificationListRevealCoordinator:(id)arg0 ;
-(id)suggestionManager:(id)arg0 notificationRequestForUUID:(id)arg1 ;
-(id)suggestionManager:(id)arg0 requestsSectionSettingsForSectionIdentifier:(id)arg1 ;
-(id)suggestionManagerRequestsCurrentModeConfiguration:(id)arg0 ;
-(void)_addStateCaptureBlock;
-(void)_configureCurrentDigestSectionListWithDigestInfo:(id)arg0 isRead:(BOOL)arg1 summaryOrderProviderType:(NSUInteger)arg2 ;
-(void)_configureNotificationSectionList:(id)arg0 notificationListViewRevealed:(BOOL)arg1 logDescription:(id)arg2 ;
-(void)_configureUpcomingDigestSectionListWithDigestInfo:(id)arg0 ;
-(void)_configureUpcomingMissedSectionForDNDMode:(id)arg0 ;
-(void)_dissolveCurrentDigestSectionListToHistorySection;
-(void)_dissolveUpcomingDigestSectionListToHistorySection;
-(void)_insertCurrentDigestSectionList;
-(void)_insertCurrentDigestSectionListToHistorySectionList;
-(void)_insertCurrentDigestSectionListToMissedSectionList;
-(void)_insertCurrentDigestSectionListToSectionList:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_insertNotificationRequest:(id)arg0 ;
-(void)_insertSectionListInHistorySectionList:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_migrateCurrentDigestSectionListToReadSection;
// -(void)_migrateNotificationsFromList:(id)arg0 toList:(id)arg1 passingTest:(id)arg2 filterRequestsPassingTest:(unk)arg3 hideToList:(id)arg4 clearRequests:(unk)arg5 filterForDestination:(BOOL)arg6 animateRemoval:(BOOL)arg7 reorderGroupNotifications:(BOOL)arg8  ;
-(void)_migrateOnScheduleNotificationRequestsFromIncomingSectionToHistorySection:(id)arg0 ;
-(void)_migrateUpcomingDigestSectionListToCurrentDigestSectionList;
-(void)_migrateUpcomingMissedSectionToIncoming;
-(void)_notificationListDidChangeContent;
-(void)_performDeferredMigrationIfNecessary;
-(void)_regroupAllNotificationGroups;
-(void)_removeCurrentDigestSectionList;
-(void)_removeCurrentDigestSectionListFromHistorySectionList;
-(void)_removeCurrentDigestSectionListFromMissedSectionList;
-(void)_removeCurrentDigestSectionListFromSectionList:(id)arg0 ;
-(void)_removeSectionListInHistorySectionList:(id)arg0 animated:(BOOL)arg1 ;
-(void)_scheduleNotificationDigestMigrationIfNecessary;
-(void)_scheduleNotificationRequestsForMigrationFromIncomingListPassingTest:(id)arg0 ;
-(void)_setupNotificationSectionLists;
-(void)_sortNotificationGroupsIfNecessary;
-(void)_toggleCurrentDigestSectionListVisibility;
-(void)_toggleCurrentDigestSectionListVisibilityInHistorySection;
-(void)_toggleUpcomingDigestSectionListVisibility;
-(void)_toggleUpcomingMissedSectionListVisibility;
-(void)_toggleVisibilityInHistorySectionListForSectionList:(id)arg0 atIndex:(NSUInteger)arg1 isSectionHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateNotificationListPersistentState;
-(void)_updateUpcomingDigestSectionListWithDigestInfo:(id)arg0 ;
-(void)_updateVisibilityForSectionLists;
-(void)_updateVisibleRectForContentOffset:(struct CGPoint )arg0 ;
-(void)_upgradeCurrentDigestSectionListForPromotionAboveFold;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)collapseGroupForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)expandGroupForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)insertNotificationRequest:(id)arg0 ;
-(void)listViewControllerPresentedByUserAction;
-(void)migrateNotificationsFromIncomingSectionToHistorySection;
-(void)migrateNotificationsFromIncomingSectionToHistorySectionAndHideHistorySection:(BOOL)arg0 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationListComponent:(id)arg0 didRemoveNotificationRequest:(id)arg1 ;
-(void)notificationListComponentDidRemoveAllNotificationRequests:(id)arg0 ;
-(void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg0 ;
-(void)notificationListMigrationScheduler:(id)arg0 requestsMigratingNotificationRequests:(id)arg1 ;
-(void)notificationListMigrationSchedulerRequestsMigratingNotificationDigest:(id)arg0 ;
-(void)notificationListRevealCoordinator:(id)arg0 updatedRevealState:(BOOL)arg1 ;
-(void)notificationStructuredSectionList:(id)arg0 requestsScrollingToContentOffset:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)persistentStateManager:(id)arg0 didFetchMigrationTime:(id)arg1 forNotificationRequest:(id)arg2 ;
-(void)persistentStateManager:(id)arg0 didFetchStoredListInfo:(id)arg1 ;
-(void)persistentStateManager:(id)arg0 didFetchSummaryMigrationTime:(id)arg1 ;
-(void)persistentStateManager:(id)arg0 finishedLoadingDataForSectionType:(NSUInteger)arg1 ;
-(void)persistentStateManager:(id)arg0 hasStoredDataForSectionType:(NSUInteger)arg1 ;
-(void)publishScheduledDigest:(id)arg0 upcomingDigest:(id)arg1 ;
-(void)publishUpcomingDigest:(id)arg0 ;
-(void)recycleView:(id)arg0 ;
-(void)reloadNotificationRequest:(id)arg0 ;
-(void)reloadRemoteSuggestions;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)revealCoordinatorDidScrollToReveal:(id)arg0 ;
-(void)revokeUpcomingDigest:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)suggestionManager:(id)arg0 requestsPresentingNotificationManagementViewType:(NSUInteger)arg1 forNotificationRequest:(id)arg2 withPresentingView:(id)arg3 ;
-(void)suggestionManager:(id)arg0 requestsUpdatingContentForNotificationRequest:(id)arg1 ;
-(void)suggestionManager:(id)arg0 setAllowsDirectMessages:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)suggestionManager:(id)arg0 setAllowsTimeSensitive:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)suggestionManager:(id)arg0 setModeConfiguration:(id)arg1 ;
-(void)suggestionManager:(id)arg0 setMuted:(BOOL)arg1 untilDate:(id)arg2 forSectionIdentifier:(id)arg3 threadIdentifier:(id)arg4 ;
-(void)suggestionManager:(id)arg0 setScheduledDelivery:(BOOL)arg1 forSectionIdentifier:(id)arg2 ;
-(void)testDigestTimerFired;
-(void)testDigestTimerRevoke;
-(void)testDigestTimerUpdated;
-(void)testDissolveCurrentDigestToHistory;
-(void)testMigrateCurrentDigestToHistory;
-(void)testPromoteUpcomingDigestToCurrentDigest;
-(void)toggleFilteringForSectionIdentifier:(id)arg0 shouldFilter:(BOOL)arg1 ;
-(void)toggleMissedSectionActive:(BOOL)arg0 forDNDMode:(id)arg1 hideVisibleNotifications:(BOOL)arg2 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)updateNotificationSystemSettings:(id)arg0 previousSystemSettings:(id)arg1 ;


@end


#endif