// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONSUMMARIZEDINLINEEXPANDINGSECTIONLIST_H
#define NCNOTIFICATIONSUMMARIZEDINLINEEXPANDINGSECTIONLIST_H

@class NSMutableDictionary, NSMutableSet, PLPlatterView, UIView, NSString;
@protocol NCNotificationStructuredSectionListDelegate, NCNotificationSummaryExpandedHeaderViewDelegate, NCNotificationListCoalescingControlsHandler, NCNotificationListCoalescingControlsHandlerDelegate;


#import "NCNotificationSummarizedSectionList.h"
#import "NCNotificationAppSectionList.h"
#import "NCNotificationSummaryExpandedHeaderView.h"
#import "NCToggleControl.h"

@interface NCNotificationSummarizedInlineExpandingSectionList : NCNotificationSummarizedSectionList <NCNotificationStructuredSectionListDelegate, NCNotificationSummaryExpandedHeaderViewDelegate, NCNotificationListCoalescingControlsHandler>



@property (retain, nonatomic) NSMutableDictionary *appSectionLists; // ivar: _appSectionLists
@property (retain, nonatomic) NSMutableSet *appSectionListsToReloadOnCollapse; // ivar: _appSectionListsToReloadOnCollapse
@property (retain, nonatomic) PLPlatterView *backgroundPlatterView; // ivar: _backgroundPlatterView
@property (retain, nonatomic) UIView *collapseButtonView; // ivar: _collapseButtonView
@property (retain, nonatomic) NCNotificationAppSectionList *combinedAppSectionList; // ivar: _combinedAppSectionList
@property (nonatomic, getter=isCombinedAppSectionListActive) BOOL combinedAppSectionListActive; // ivar: _combinedAppSectionListActive
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NCNotificationSummaryExpandedHeaderView *expandedHeaderView; // ivar: _expandedHeaderView
@property (weak, nonatomic) NSObject<NCNotificationListCoalescingControlsHandlerDelegate> *handlerDelegate; // ivar: handlerDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCToggleControl *leadingPlatterViewClearControl; // ivar: _leadingPlatterViewClearControl
@property (nonatomic) BOOL reloadCombinedAppSectionListOnCollapse; // ivar: _reloadCombinedAppSectionListOnCollapse
@property (nonatomic) BOOL reloadOrderingOnCollapse; // ivar: _reloadOrderingOnCollapse
@property (readonly) Class superclass;


-(BOOL)_shouldCombineAppSectionLists;
-(BOOL)_shouldInsertNotificationRequestToCombinedAppSectionList:(id)arg0 ;
-(BOOL)_shouldSplitCombinedAppSectionList;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)dismissModalFullScreenIfNeeded;
-(BOOL)notificationStructuredSectionList:(id)arg0 shouldFilterNotificationRequest:(id)arg1 ;
-(BOOL)notificationStructuredSectionList:(id)arg0 shouldScrollToTopForGroupList:(id)arg1 ;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint )arg0 ;
-(CGFloat)footerViewHeightForNotificationList:(id)arg0 withWidth:(CGFloat)arg1 ;
-(CGFloat)headerViewHeightForNotificationList:(id)arg0 withWidth:(CGFloat)arg1 ;
-(id)_newAppSectionListForRequest:(id)arg0 ;
-(id)_newCombinedAppSectionListForRequest;
-(id)_notificationGroupsForDigestRankOrdering;
-(id)_notificationGroupsForDigestRankOrderingShouldMerge:(BOOL)arg0 ;
-(id)allNotificationGroups;
-(id)backgroundViewForNotificationList:(id)arg0 ;
-(id)clearControlViewForLeadingSummaryPlatterViewForSummaryOrderProvider:(id)arg0 ;
-(id)containerViewForClickInteractionPresentedContentForNotificationSummaryExpandedHeaderView:(id)arg0 ;
-(id)headerViewForNotificationList:(id)arg0 ;
-(id)hoverViewForNotificationList:(id)arg0 ;
-(id)initWithTitle:(id)arg0 sectionType:(NSUInteger)arg1 ;
-(id)materialGroupNameBaseForNotificationSummaryExpandedHeaderView:(id)arg0 ;
-(id)notificationStructuredSectionList:(id)arg0 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg1 isLongLook:(BOOL)arg2 ;
// -(id)removeNotificationGroupListsForMigrationPassingTest:(id)arg0 filterRequestsPassingTest:(unk)arg1 animate:(id)arg2  ;
-(void)_appSectionListDidRemoveNotificationRequests:(id)arg0 ;
-(void)_collapseAllSectionListViews;
-(void)_collapseButtonTapped:(id)arg0 ;
-(void)_combineAppSectionLists;
-(void)_configureBackgroundPlatterViewIfNecessary;
-(void)_configureCollapseButtonIfNecessary;
-(void)_configureExpandedHeaderViewIfNecessary;
-(void)_configureLeadingPlatterViewClearControlIfNecessary;
-(void)_configureSectionListView:(id)arg0 ;
-(void)_handleClearControlPrimaryAction:(id)arg0 ;
-(void)_handleClearControlTouchUpInside:(id)arg0 ;
-(void)_insertNotificationRequestToAppSectionList:(id)arg0 ;
-(void)_insertNotificationRequestToCombinedAppSectionList:(id)arg0 ;
-(void)_modifyNotificationInCombinedAppSectionList:(id)arg0 ;
-(void)_modifyNotificationRequestInAppSectionList:(id)arg0 ;
-(void)_prepareForExpand;
-(void)_removeAppSectionListsIfEmpty;
-(void)_removeNotificationFromCombinedAppSectionList:(id)arg0 ;
-(void)_removeNotificationRequestFromAppSectionList:(id)arg0 ;
-(void)_splitCombinedAppSectionList;
-(void)_toggleCombinedAppSectionListIfNecessary;
-(void)_updateAppSectionListsOnCollapse;
-(void)_updateAppSectionListsOnExpand;
-(void)_updateAppSectionsForOrderedNotificationGroupLists:(id)arg0 ;
-(void)insertNotificationRequest:(id)arg0 ;
-(void)mergeNotificationGroups:(id)arg0 reorderGroupNotifications:(BOOL)arg1 ;
-(void)modifyNotificationRequest:(id)arg0 ;
-(void)notificationListComponent:(id)arg0 didRemoveNotificationRequest:(id)arg1 ;
-(void)notificationListComponentDidRemoveAllNotificationRequests:(id)arg0 ;
-(void)notificationStructuredSectionList:(id)arg0 requestsScrollingToContentOffset:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)notificationSummaryExpandedHeaderView:(id)arg0 acceptedSummaryOnboarding:(BOOL)arg1 ;
-(void)notificationSummaryExpandedHeaderView:(id)arg0 didTransitionToClearState:(BOOL)arg1 ;
-(void)notificationSummaryExpandedHeaderViewDidBeginClickInteraction:(id)arg0 ;
-(void)notificationSummaryExpandedHeaderViewDidDismssClickInteractionPresentedContent:(id)arg0 ;
-(void)notificationSummaryExpandedHeaderViewDidPresentClickInteractionPresentedContent:(id)arg0 ;
-(void)notificationSummaryExpandedHeaderViewRequestsClearAll:(id)arg0 ;
-(void)notificationSummaryExpandedHeaderViewRequestsClearingSummary:(id)arg0 ;
-(void)notificationSummaryExpandedHeaderViewRequestsCollapsingSummary:(id)arg0 ;
-(void)notificationSummaryOrderProvider:(id)arg0 didUpdateOrderedNotificationGroupLists:(id)arg1 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)resetClearButtonStateAnimated:(BOOL)arg0 ;
-(void)setDeviceAuthenticated:(BOOL)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;


@end


#endif