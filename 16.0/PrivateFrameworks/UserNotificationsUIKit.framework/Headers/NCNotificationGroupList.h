// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONGROUPLIST_H
#define NCNOTIFICATIONGROUPLIST_H

@class NSArray, NSMutableDictionary, NSDate, NSString, NCNotificationRequest, _UILegibilitySettings, NCNotificationSectionSettings, NSMutableArray;
@protocol NCNotificationViewControllerDelegatePrivate, NCNotificationViewControllerObserving, NCNotificationListCellActionProviding, NCNotificationManagementContentProviderDelegate, NCNotificationListComponent, NCNotificationListPresentableGroupDelegate><NCNotificationGroupListDelegate;


#import "NCNotificationListPresentableGroup.h"
#import "NCNotificationListCell.h"
#import "NCNotificationSummaryBuilder.h"

@interface NCNotificationGroupList : NCNotificationListPresentableGroup <NCNotificationViewControllerDelegatePrivate, NCNotificationViewControllerObserving, NCNotificationListCellActionProviding, NCNotificationManagementContentProviderDelegate, NCNotificationListComponent>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, nonatomic) NSArray *allNotificationRequests;
@property (retain, nonatomic) NCNotificationListCell *cellRecycledWhilePresentingLongLook; // ivar: _cellRecycledWhilePresentingLongLook
@property (nonatomic, getter=isClearingAllNotificationRequestsForCellHorizontalSwipe) BOOL clearingAllNotificationRequestsForCellHorizontalSwipe; // ivar: _clearingAllNotificationRequestsForCellHorizontalSwipe
@property (nonatomic, getter=isClockNotificationGroup) BOOL clockNotificationGroup; // ivar: _clockNotificationGroup
@property (retain, nonatomic) NSMutableDictionary *clockSnoozeAlarmContentProviders; // ivar: _clockSnoozeAlarmContentProviders
@property (copy, nonatomic) NSDate *comparisonDate; // ivar: _comparisonDate
@property (readonly, nonatomic) BOOL containsNonPersistentNotificationRequests;
@property (retain, nonatomic) NSMutableDictionary *contentProviders; // ivar: _contentProviders
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *criticalAlerts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListPresentableGroupDelegate><NCNotificationGroupListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // ivar: _deviceAuthenticated
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationRequest *leadingNotificationRequest; // ivar: _leadingNotificationRequest
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *logDescription; // ivar: _logDescription
@property (nonatomic) BOOL longLookDismissalFinalFrameCalculatedWithoutWindow; // ivar: _longLookDismissalFinalFrameCalculatedWithoutWindow
@property (readonly, nonatomic) NSUInteger notificationCount;
@property (retain, nonatomic) NCNotificationSectionSettings *notificationSectionSettings; // ivar: _notificationSectionSettings
@property (retain, nonatomic) NSMutableArray *orderedRequests; // ivar: _orderedRequests
@property (readonly, nonatomic) NSArray *persistentNotificationRequests;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) BOOL shouldReloadLeadingNotificationRequest; // ivar: _shouldReloadLeadingNotificationRequest
@property (retain, nonatomic) NCNotificationSummaryBuilder *summaryBuilder; // ivar: _summaryBuilder
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier


+(id)presentableTypes;
-(BOOL)_allowPanningForRequest:(id)arg0 ;
-(BOOL)_handleTapToExpandGroupForNotificationRequest:(id)arg0 ;
-(BOOL)_isContentRevealedForNotificationRequest:(id)arg0 ;
-(BOOL)_shouldAllowInteractionWithNotificationViewController:(id)arg0 ;
-(BOOL)_shouldShowClearActionForRequest:(id)arg0 ;
-(BOOL)_shouldShowOpenActionToPerformDefaultActionForRequest:(id)arg0 ;
-(BOOL)_shouldShowOpenActionToPerformLongLookPresentationForRequest:(id)arg0 ;
-(BOOL)_shouldShowOptionsActionForRequest:(id)arg0 ;
-(BOOL)_shouldShowViewActionForRequest:(id)arg0 ;
-(BOOL)containsCriticalNotificationRequest:(id)arg0 ;
-(BOOL)containsNotificationRequest:(id)arg0 ;
-(BOOL)handleTapOnNotificationViewController:(id)arg0 ;
-(BOOL)isAttachmentImageFeaturedForNotificationViewController:(id)arg0 ;
-(BOOL)isGroupForNotificationRequest:(id)arg0 ;
-(BOOL)isLeadingNotificationRequest:(id)arg0 ;
-(BOOL)isRichNotificationContentViewForNotificationViewController:(id)arg0 ;
-(BOOL)matchesGroup:(id)arg0 ;
-(BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(id)arg0 ;
-(BOOL)notificationViewControllerShouldAllowExpandedPlatterInteraction:(id)arg0 ;
-(BOOL)notificationViewControllerShouldAllowLongPressGesture:(id)arg0 ;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg0 ;
-(BOOL)notificationViewControllerShouldPerformHoverHighlighting:(id)arg0 ;
-(BOOL)shouldAlignContentToBottomForNotificationViewController:(id)arg0 ;
-(BOOL)shouldContinuePresentingActionButtonsForNotificationListCell:(id)arg0 ;
-(BOOL)shouldShowDefaultActionForNotificationListCell:(id)arg0 ;
-(BOOL)shouldShowSupplementaryActionsForNotificationListCell:(id)arg0 ;
-(BOOL)shouldVerticallyStackActionButtonsForNotificationListCell:(id)arg0 ;
-(BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg0 ;
-(CGFloat)_cachedHeightForNotificationRequest:(id)arg0 isLeadingNotificationRequest:(BOOL)arg1 withWidth:(CGFloat)arg2 ;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 withWidth:(CGFloat)arg2 ;
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
-(id)_clearActionForRequest:(id)arg0 clearAll:(BOOL)arg1 ;
-(id)_clockSnoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg0 viewController:(id)arg1 ;
-(id)_currentCellForNotificationRequest:(id)arg0 ;
-(id)_openActionForRequest:(id)arg0 ;
-(id)_optionsActionForRequest:(id)arg0 ;
-(id)_presentLongLookActionForRequest:(id)arg0 title:(id)arg1 identifier:(id)arg2 ;
-(id)_presentLongLookActionWithOpenTitleForRequest:(id)arg0 ;
-(id)_presentLongLookActionWithViewTitleForRequest:(id)arg0 ;
-(id)_requestForListCell:(id)arg0 ;
-(id)clearAllText;
-(id)defaultActionForNotificationListCell:(id)arg0 ;
-(id)headerText;
-(id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg0 ;
-(id)initWithSectionIdentifier:(id)arg0 threadIdentifier:(id)arg1 ;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(id)notificationUsageTrackingStateForNotificationViewController:(id)arg0 ;
-(id)notificationViewController:(id)arg0 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg1 withLongLook:(BOOL)arg2 ;
-(id)notificationViewController:(id)arg0 keyboardAssertionForGestureWindow:(id)arg1 ;
-(id)notificationViewController:(id)arg0 staticContentProviderForNotificationRequest:(id)arg1 ;
-(id)notificationViewControllerContainerViewProviderForExpandedContent:(id)arg0 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg0 ;
-(id)supplementaryActionsForNotificationListCell:(id)arg0 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg0 ;
-(struct CGRect )notificationViewController:(id)arg0 finalFrameForDismissingLongLookFromView:(id)arg1 ;
-(struct CGRect )notificationViewController:(id)arg0 initialFrameForPresentingLongLookFromView:(id)arg1 ;
-(void)_executeClearActionForRequest:(id)arg0 ;
-(void)_executeOptionsActionForRequest:(id)arg0 action:(id)arg1 ;
-(void)_executeViewActionForRequest:(id)arg0 ;
-(void)_hintSideSwipeForDefaultActionForNotificationRequest:(id)arg0 ;
-(void)_invalidateSnoozeAlarmNotificationStaticContentProviderTimerForNotificationRequest:(id)arg0 ;
-(void)_loadLeadingNotificationRequestCellIfNecessary;
-(void)_performAction:(id)arg0 forNotificationRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)_reloadNotificationCellAtIndex:(NSUInteger)arg0 ;
-(void)_reloadNotificationViewForNotificationRequest:(id)arg0 ;
-(void)_reloadRecycledGroupedNotificationCells;
-(void)_reloadRecycledNotificationCellForRequest:(id)arg0 ;
-(void)_scrollToTopIfNecessaryAndPerformBlock:(id)arg0 ;
-(void)_updateSummaryBuilderForNewLeadingNotificationRequest:(id)arg0 oldLeadingNotificationRequest:(id)arg1 ;
-(void)clearAll;
-(void)insertNotificationRequest:(id)arg0 ;
-(void)longLookDidDismissForNotificationViewController:(id)arg0 ;
-(void)longLookWillDismissForNotificationViewController:(id)arg0 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg0 ;
-(void)mergeNotificationRequests:(id)arg0 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationManagementContentProvider:(id)arg0 requestsPresentingNotificationManagementViewType:(NSUInteger)arg1 forNotificationRequest:(id)arg2 withPresentingView:(id)arg3 ;
-(void)notificationViewController:(id)arg0 didUpdatePreferredContentSize:(struct CGSize )arg1 ;
-(void)notificationViewController:(id)arg0 executeAction:(id)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)notificationViewController:(id)arg0 isPerformingHoverHighlighting:(BOOL)arg1 ;
-(void)notificationViewController:(id)arg0 requestPermissionToExecuteAction:(id)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)notificationViewController:(id)arg0 shouldFinishLongLookTransitionForTrigger:(NSInteger)arg1 withCompletionBlock:(id)arg2 ;
-(void)notificationViewControllerDidEndUserInteraction:(id)arg0 ;
-(void)notificationViewControllerWillBeginUserInteraction:(id)arg0 ;
-(void)notificationViewControllerWillDismissForCancelAction:(id)arg0 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg0 ;
-(void)recycleView:(id)arg0 ;
-(void)reloadLeadingNotificationRequest;
-(void)reloadLeadingNotificationRequestIfNecessary;
-(void)reloadNotificationRequest:(id)arg0 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)toggleGroupedState;
-(void)updateComparisonDate;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;
-(void)updateOrderedNotificationRequests:(id)arg0 ;


@end


#endif