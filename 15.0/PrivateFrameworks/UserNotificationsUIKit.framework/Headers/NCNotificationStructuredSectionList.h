// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONSTRUCTUREDSECTIONLIST_H
#define NCNOTIFICATIONSTRUCTUREDSECTIONLIST_H

@class NSArray, NSDate, NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol NCNotificationListViewDataSource, NCNotificationListSectionHeaderViewDelegate, NCNotificationGroupListDelegate, NCNotificationListComponent, NCNotificationStructuredSectionListDelegate;

#import <Foundation/Foundation.h>

#import "NCNotificationListSectionHeaderView.h"
#import "NCNotificationListCache.h"
#import "NCNotificationListSectionRevealHintView.h"
#import "NCNotificationListView.h"

@interface NCNotificationStructuredSectionList : NSObject <NCNotificationListViewDataSource, NCNotificationListSectionHeaderViewDelegate, NCNotificationGroupListDelegate, NCNotificationListComponent>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, nonatomic) NSArray *allNotificationGroups;
@property (readonly, nonatomic) NSArray *allNotificationRequests;
@property (readonly, copy, nonatomic) NSDate *comparisonDate;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationStructuredSectionListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // ivar: _deviceAuthenticated
@property (nonatomic, getter=isDynamicGroupingActive) BOOL dynamicGroupingActive; // ivar: _dynamicGroupingActive
@property (nonatomic) NSUInteger dynamicGroupingThreshold; // ivar: _dynamicGroupingThreshold
@property (retain, nonatomic) NSMutableDictionary *filteredNotificationRequests; // ivar: _filteredNotificationRequests
@property (retain, nonatomic) NSObject<NCNotificationListComponent> *groupListPresentingLongLook; // ivar: _groupListPresentingLongLook
@property (retain, nonatomic) NSMutableSet *groupListsToSort; // ivar: _groupListsToSort
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationListSectionHeaderView *headerView; // ivar: _headerView
@property (nonatomic) CGFloat headerViewHeight; // ivar: _headerViewHeight
@property (nonatomic, getter=isHeaderViewHeightValid) BOOL headerViewHeightValid; // ivar: _headerViewHeightValid
@property (retain, nonatomic) NSMutableSet *hiddenNotificationGroups; // ivar: _hiddenNotificationGroups
@property (retain, nonatomic) NSMutableSet *hiddenNotificationRequests; // ivar: _hiddenNotificationRequests
@property (nonatomic, getter=isHistorySection) BOOL historySection; // ivar: _historySection
@property (retain, nonatomic) NSMutableSet *loadedNotificationSections; // ivar: _loadedNotificationSections
@property (copy, nonatomic) NSString *logDescription; // ivar: _logDescription
@property (readonly, nonatomic) NSUInteger notificationCount;
@property (retain, nonatomic) NSMutableArray *notificationGroups; // ivar: _notificationGroups
@property (retain, nonatomic) NCNotificationListCache *notificationListCache; // ivar: _notificationListCache
@property (nonatomic, getter=isNotificationListViewRevealed) BOOL notificationListViewRevealed; // ivar: _notificationListViewRevealed
@property (readonly, copy, nonatomic) NSArray *orderedNotificationListComponents;
@property (nonatomic, getter=isPerformingDynamicGrouping) BOOL performingDynamicGrouping; // ivar: _performingDynamicGrouping
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) NSMutableDictionary *preloadedNotificationGroups; // ivar: _preloadedNotificationGroups
@property (nonatomic) BOOL preloadsNotificationRequests; // ivar: _preloadsNotificationRequests
@property (retain, nonatomic) NCNotificationListSectionRevealHintView *revealHintView; // ivar: _revealHintView
@property (retain, nonatomic) NSString *sectionListDestination; // ivar: _sectionListDestination
@property (retain, nonatomic) NCNotificationListView *sectionListView; // ivar: _sectionListView
@property (nonatomic) NSUInteger sectionType; // ivar: _sectionType
@property (readonly, nonatomic, getter=isSectionVisible) BOOL sectionVisible;
@property (nonatomic) BOOL shouldPresentEmptySectionHint; // ivar: _shouldPresentEmptySectionHint
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDynamicGrouping; // ivar: _supportsDynamicGrouping
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)_shouldClearPersistentNotificationRequests;
-(BOOL)_shouldFilterNotificationRequest:(id)arg0 ;
-(BOOL)_shouldHideForSectionIdentifier:(id)arg0 ;
-(BOOL)_shouldHideNotificationGroupList:(id)arg0 ;
-(BOOL)_shouldHideNotificationRequest:(id)arg0 ;
-(BOOL)_shouldPreloadNotificationRequest:(id)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)containsNotificationRequest:(id)arg0 ;
-(BOOL)isNotificationGroupListInCollapsedStack:(id)arg0 ;
-(BOOL)isViewVisibleForNotificationGroupList:(id)arg0 ;
-(BOOL)notificationGroupListShouldReloadNotificationCells:(id)arg0 ;
-(BOOL)notificationGroupListShouldScrollToTop:(id)arg0 ;
-(BOOL)notificationListViewIsGroup:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(CGFloat)_insetHorizontalMargin;
-(CGFloat)headerViewHeightForNotificationList:(id)arg0 ;
-(CGFloat)insetHorizontalMarginForNotificationListView:(id)arg0 ;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 ;
-(NSUInteger)_existingIndexOfGroupForNotificationRequest:(id)arg0 ;
-(NSUInteger)_existingIndexOfGroupForNotificationRequest:(id)arg0 inNotificationGroupLists:(id)arg1 ;
-(NSUInteger)_existingIndexOfGroupForNotificationRequest:(id)arg0 withSectionIdentifier:(id)arg1 threadIdentifier:(id)arg2 inNotificationGroupLists:(id)arg3 ;
-(NSUInteger)_existingIndexOfGroupWithSectionIdentifier:(id)arg0 threadIdentifier:(id)arg1 inNotificationGroupLists:(id)arg2 ;
-(NSUInteger)_indexOfOrderedNotificationListComponent:(id)arg0 ;
-(NSUInteger)_insertionIndexForGroup:(id)arg0 ;
-(NSUInteger)notificationListViewNumberOfItems:(id)arg0 ;
-(id)_backgroundGroupNameBase;
-(id)_groupListForPreloadedNotificationRequest:(id)arg0 createNewIfNecessary:(BOOL)arg1 ;
-(id)_legibilitySettings;
-(id)_newGroupListForNotificationRequest:(id)arg0 ;
-(id)_newSectionHeaderView;
-(id)_sectionSettingsForSectionIdentifier:(id)arg0 ;
-(id)containerViewForHeaderViewPreviewInteractionPresentedContent:(id)arg0 ;
-(id)headerViewForNotificationList:(id)arg0 ;
-(id)initWithTitle:(id)arg0 sectionType:(NSUInteger)arg1 ;
-(id)legibilitySettingsForSectionHeaderView:(id)arg0 ;
-(id)notificationGroupList:(id)arg0 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg1 isLongLook:(BOOL)arg2 ;
-(id)notificationListComponent:(id)arg0 containerViewProviderForExpandedContentForViewController:(id)arg1 ;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
// -(id)removeNotificationGroupListsForMigrationPassingTest:(id)arg0 filterRequestsPassingTest:(unk)arg1 animate:(id)arg2  ;
-(void)_addHiddenNotificationGroupList:(id)arg0 ;
-(void)_filterNotificationRequest:(id)arg0 ;
-(void)_filterNotificationRequestsForSectionIdentifier:(id)arg0 ;
-(void)_hideNotificationGroupsOnDeviceReauthentication;
-(void)_hideNotificationGroupsPassingTest:(id)arg0 ;
-(void)_insertNotificationGroupList:(id)arg0 ;
-(void)_insertPreloadedNotificationRequest:(id)arg0 ;
-(void)_insertViewToListAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_modifyHiddenNotificationRequest:(id)arg0 ;
-(void)_modifyPreloadedNotificationRequest:(id)arg0 ;
-(void)_postPreloadedNotificationRequestsForSectionIdentifier:(id)arg0 ;
-(void)_removeFilteredNotificationRequest:(id)arg0 ;
-(void)_removeHiddenNotificationRequest:(id)arg0 ;
-(void)_removeNotificationGroupList:(id)arg0 ;
-(void)_removePreloadedNotificationRequest:(id)arg0 ;
-(void)_removeViewFromListAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_showHiddenNotificationGroupsOnDeviceAuthentication;
-(void)_showHiddenNotificationGroupsPassingTest:(id)arg0 ;
-(void)_showHiddenNotificationRequestsPassingTest:(id)arg0 ;
-(void)_toggleDynamicGroupingIfNecessary;
-(void)_toggleHiddenNotificationsOnAuthenticationChange:(BOOL)arg0 ;
-(void)_unfilterNotificationRequestsForSectionIdentifier:(id)arg0 ;
-(void)_updatePositionOfGroup:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)clearAllNotificationRequests;
-(void)collapseGroupForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)expandGroupForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)insertNotificationRequest:(id)arg0 ;
-(void)mergeNotificationGroups:(id)arg0 reorderGroupNotifications:(BOOL)arg1 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationGroupList:(id)arg0 requestsScrollToTopOfGroupWithCompletion:(id)arg1 ;
-(void)notificationListComponent:(id)arg0 didRemoveNotificationRequest:(id)arg1 ;
-(void)notificationListComponent:(id)arg0 isPresentingLongLookForViewController:(id)arg1 ;
-(void)notificationListComponent:(id)arg0 shouldFinishLongLookTransitionForNotificationRequest:(id)arg1 trigger:(NSInteger)arg2 withCompletionBlock:(id)arg3 ;
-(void)notificationListComponentDidRemoveAllNotificationRequests:(id)arg0 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)recycleView:(id)arg0 ;
-(void)regroupNotificationGroups;
-(void)reloadNotificationRequest:(id)arg0 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)sectionHeaderView:(id)arg0 didReceiveClearActionForSectionIdentifier:(id)arg1 ;
-(void)sectionHeaderViewDidBeginForceTouchInteraction:(id)arg0 ;
-(void)sectionHeaderViewDidDismissForceTouchView:(id)arg0 ;
-(void)sectionHeaderViewDidPresentForceTouchView:(id)arg0 ;
-(void)sectionHeaderViewDidReceiveClearAllAction:(id)arg0 ;
-(void)sectionHeaderViewDidTransitionToClearState:(id)arg0 ;
-(void)sortNotificationGroupListsIfNecessary;
-(void)toggleFilteringForSectionIdentifier:(id)arg0 shouldFilter:(BOOL)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;


@end


#endif