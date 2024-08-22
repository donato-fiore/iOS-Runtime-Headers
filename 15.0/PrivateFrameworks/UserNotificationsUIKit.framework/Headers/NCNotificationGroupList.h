// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONGROUPLIST_H
#define NCNOTIFICATIONGROUPLIST_H

@class NSArray, NSString, NSMutableDictionary, NSDate, NCNotificationRequest, _UILegibilitySettings, NCNotificationSectionSettings, NSMutableArray;
@protocol NCNotificationListViewDataSource, NCNotificationViewControllerDelegatePrivate, NCNotificationViewControllerObserving, NCNotificationListCellDelegate, NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationManagementContentProviderDelegate, NCNotificationListComponent, NCNotificationGroupListDelegate;

#import <Foundation/Foundation.h>

#import "NCNotificationListCell.h"
#import "NCNotificationListCoalescingControlsCell.h"
#import "NCNotificationListView.h"
#import "NCNotificationListCoalescingHeaderCell.h"
#import "NCNotificationListCache.h"

@interface NCNotificationGroupList : NSObject <NCNotificationListViewDataSource, NCNotificationViewControllerDelegatePrivate, NCNotificationViewControllerObserving, NCNotificationListCellDelegate, NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationManagementContentProviderDelegate, NCNotificationListComponent>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, nonatomic) NSArray *allNotificationRequests;
@property (copy, nonatomic) NSString *backgroundGroupNameBase; // ivar: _backgroundGroupNameBase
@property (retain, nonatomic) NCNotificationListCell *cellRecycledWhilePresentingLongLook; // ivar: _cellRecycledWhilePresentingLongLook
@property (nonatomic, getter=isClockNotificationGroup) BOOL clockNotificationGroup; // ivar: _clockNotificationGroup
@property (retain, nonatomic) NSMutableDictionary *clockSnoozeAlarmContentProviders; // ivar: _clockSnoozeAlarmContentProviders
@property (copy, nonatomic) NSDate *comparisonDate; // ivar: _comparisonDate
@property (readonly, nonatomic) BOOL containsNonPersistentNotificationRequests;
@property (retain, nonatomic) NSMutableDictionary *contentProviders; // ivar: _contentProviders
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *criticalAlerts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationGroupListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // ivar: _deviceAuthenticated
@property (retain, nonatomic) NCNotificationListCoalescingControlsCell *footerView; // ivar: _footerView
@property (nonatomic) CGFloat footerViewHeight; // ivar: _footerViewHeight
@property (retain, nonatomic) NCNotificationListView *groupListView; // ivar: _groupListView
@property (nonatomic, getter=isGrouped) BOOL grouped; // ivar: _grouped
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationListCoalescingHeaderCell *headerView; // ivar: _headerView
@property (nonatomic) CGFloat headerViewHeight; // ivar: _headerViewHeight
@property (retain, nonatomic) NCNotificationRequest *leadingNotificationRequest; // ivar: _leadingNotificationRequest
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *logDescription; // ivar: _logDescription
@property (nonatomic) BOOL longLookDismissalFinalFrameCalculatedWithoutWindow; // ivar: _longLookDismissalFinalFrameCalculatedWithoutWindow
@property (readonly, nonatomic) NSUInteger notificationCount;
@property (retain, nonatomic) NCNotificationListCache *notificationListCache; // ivar: _notificationListCache
@property (retain, nonatomic) NCNotificationSectionSettings *notificationSectionSettings; // ivar: _notificationSectionSettings
@property (retain, nonatomic) NSMutableArray *orderedRequests; // ivar: _orderedRequests
@property (readonly, nonatomic) NSArray *persistentNotificationRequests;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) BOOL shouldReloadLeadingNotificationRequest; // ivar: _shouldReloadLeadingNotificationRequest
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier


-(BOOL)_isContentRevealedForNotificationRequest:(id)arg0 ;
-(BOOL)_shouldAllowInteractionWithNotificationViewController:(id)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)containsCriticalNotificationRequest:(id)arg0 ;
-(BOOL)containsNotificationRequest:(id)arg0 ;
-(BOOL)isGroupForNotificationRequest:(id)arg0 ;
-(BOOL)isLeadingNotificationRequest:(id)arg0 ;
-(BOOL)matchesGroup:(id)arg0 ;
-(BOOL)notificationListCellShouldPanHorizontally:(id)arg0 ;
-(BOOL)notificationListCellShouldPerformClipping:(id)arg0 ;
-(BOOL)notificationListCellShouldShowDefaultActionButton:(id)arg0 ;
-(BOOL)notificationListCellShouldShowViewActionButton:(id)arg0 ;
-(BOOL)notificationListViewIsGroup:(id)arg0 ;
-(BOOL)notificationViewControllerIsCoalescedBundle:(id)arg0 ;
-(BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(id)arg0 ;
-(BOOL)notificationViewControllerShouldAllowExpandedPlatterInteraction:(id)arg0 ;
-(BOOL)notificationViewControllerShouldAllowLongPressGesture:(id)arg0 ;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg0 ;
-(BOOL)notificationViewControllerShouldPerformHoverHighlighting:(id)arg0 ;
-(BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg0 ;
-(CGFloat)_cachedHeightForNotificationRequest:(id)arg0 isLeadingNotificationRequest:(BOOL)arg1 ;
-(CGFloat)footerViewHeightForNotificationList:(id)arg0 ;
-(CGFloat)headerViewHeightForNotificationList:(id)arg0 ;
-(CGFloat)insetHorizontalMarginForNotificationListView:(id)arg0 ;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 ;
-(NSInteger)_compareNotificationRequest:(id)arg0 withNotificationRequest:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)notificationViewControllerDateFormatStyle:(id)arg0 ;
-(NSUInteger)_existingIndexForCriticalNotificationRequest:(id)arg0 ;
-(NSUInteger)_existingIndexForNotificationRequest:(id)arg0 ;
-(NSUInteger)_insertionIndexForNotificationRequest:(id)arg0 ;
-(NSUInteger)_lockScreenPersistenceForNotificationRequest:(id)arg0 ;
-(NSUInteger)_lockScreenPriorityForNotificationRequest:(id)arg0 ;
-(NSUInteger)indexOfNotificationRequestPassingTest:(id)arg0 ;
-(NSUInteger)notificationListViewNumberOfItems:(id)arg0 ;
-(id)_cachedCellForNotificationRequest:(id)arg0 createNewIfNecessary:(BOOL)arg1 shouldConfigure:(BOOL)arg2 ;
-(id)_clockSnoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg0 viewController:(id)arg1 ;
-(id)_currentCellForNotificationRequest:(id)arg0 ;
-(id)containerViewForCoalescingControlsHandlerPreviewInteractionPresentedContent:(id)arg0 ;
-(id)footerViewForNotificationList:(id)arg0 ;
-(id)headerViewForNotificationList:(id)arg0 ;
-(id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg0 ;
-(id)initWithSectionIdentifier:(id)arg0 threadIdentifier:(id)arg1 ;
-(id)notificationListCellRequestsSectionSettings:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(id)notificationUsageTrackingStateForNotificationViewController:(id)arg0 ;
-(id)notificationViewController:(id)arg0 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg1 withLongLook:(BOOL)arg2 ;
-(id)notificationViewController:(id)arg0 keyboardAssertionForGestureWindow:(id)arg1 ;
-(id)notificationViewController:(id)arg0 staticContentProviderForNotificationRequest:(id)arg1 ;
-(id)notificationViewControllerContainerViewProviderForExpandedContent:(id)arg0 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg0 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg0 ;
-(struct CGRect )notificationViewController:(id)arg0 finalFrameForDismissingLongLookFromView:(id)arg1 ;
-(struct CGRect )notificationViewController:(id)arg0 initialFrameForPresentingLongLookFromView:(id)arg1 ;
-(void)_clearNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_hintSideSwipeForDefaultActionForNotificationRequest:(id)arg0 ;
-(void)_invalidateSnoozeAlarmNotificationStaticContentProviderTimerForNotificationRequest:(id)arg0 ;
-(void)_loadLeadingNotificationRequestCellIfNecessary;
-(void)_performAction:(id)arg0 forNotificationRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)_performDefaultActionForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_reloadNotificationCellAtIndex:(NSUInteger)arg0 ;
-(void)_reloadNotificationViewForNotificationRequest:(id)arg0 ;
-(void)_reloadRecycledGroupedNotificationCells;
-(void)_reloadRecycledNotificationCellForRequest:(id)arg0 ;
-(void)_scrollToTopIfNecessaryAndPerformBlock:(id)arg0 ;
-(void)_toggleGroupedState;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)insertNotificationRequest:(id)arg0 ;
-(void)longLookDidDismissForNotificationViewController:(id)arg0 ;
-(void)longLookWillDismissForNotificationViewController:(id)arg0 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg0 ;
-(void)mergeNotificationRequests:(id)arg0 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationListCell:(id)arg0 didMoveToNewXPosition:(CGFloat)arg1 ;
-(void)notificationListCellDidHideCellActions:(id)arg0 resetCellScrollPosition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)notificationListCellDidRevealCellActions:(id)arg0 ;
-(void)notificationListCellDidSignificantUserInteraction:(id)arg0 ;
-(void)notificationListCellRequestsDefaultAction:(id)arg0 completion:(id)arg1 ;
-(void)notificationListCellRequestsDismissAction:(id)arg0 completion:(id)arg1 ;
-(void)notificationListCellRequestsPresentingLongLook:(id)arg0 completion:(id)arg1 ;
-(void)notificationListCellRequestsPresentingManagementView:(id)arg0 withPresentingView:(id)arg1 completion:(id)arg2 ;
-(void)notificationListCellRequestsPresentingOptionsMenu:(id)arg0 forCellActionWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)notificationListCoalescingControlsHandler:(id)arg0 didTransitionToClearState:(BOOL)arg1 ;
-(void)notificationListCoalescingControlsHandlerDidBeginPreviewInteraction:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerDidDismissPreviewInteractionPresentedContent:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerDidPresentPreviewInteractionPresentedContent:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerRequestsClearingAllNotifications:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerRequestsClearingNotifications:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerRequestsRestackingNotifications:(id)arg0 ;
-(void)notificationManagementContentProvider:(id)arg0 requestsPresentingNotificationManagementViewType:(NSUInteger)arg1 forNotificationRequest:(id)arg2 withPresentingView:(id)arg3 ;
-(void)notificationViewController:(id)arg0 didUpdatePreferredContentSize:(struct CGSize )arg1 ;
-(void)notificationViewController:(id)arg0 executeAction:(id)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)notificationViewController:(id)arg0 isPerformingHoverHighlighting:(BOOL)arg1 ;
-(void)notificationViewController:(id)arg0 requestPermissionToExecuteAction:(id)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)notificationViewController:(id)arg0 requestsExpandingCoalescedBundleForNotificationRequest:(id)arg1 ;
-(void)notificationViewController:(id)arg0 shouldFinishLongLookTransitionForTrigger:(NSInteger)arg1 withCompletionBlock:(id)arg2 ;
-(void)notificationViewControllerDidEndUserInteraction:(id)arg0 ;
-(void)notificationViewControllerWillBeginUserInteraction:(id)arg0 ;
-(void)notificationViewControllerWillDismissForCancelAction:(id)arg0 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)recycleView:(id)arg0 ;
-(void)reloadLeadingNotificationRequestIfNecessary;
-(void)reloadNotificationRequest:(id)arg0 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)updateOrderedNotificationRequests:(id)arg0 ;
-(void)willTearDownNotificationListCell:(id)arg0 ;


@end


#endif