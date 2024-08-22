// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONSUMMARIZEDSECTIONLIST_H
#define NCNOTIFICATIONSUMMARIZEDSECTIONLIST_H

@class NSUUID, NSString, UIView;
@protocol NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationSummaryOrderProviderDelegate;


#import "NCNotificationCombinedSectionList.h"
#import "NCNotificationSummaryOrderProvider.h"

@interface NCNotificationSummarizedSectionList : NCNotificationCombinedSectionList <NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationSummaryOrderProviderDelegate>

 {
    BOOL _adjustsFontForContentSizeCategory;
}


@property (readonly, copy, nonatomic) NSUUID *atxUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldAdjustIndex; // ivar: _shouldAdjustIndex
@property (retain, nonatomic) NCNotificationSummaryOrderProvider *summaryOrderProvider; // ivar: _summaryOrderProvider
@property (retain, nonatomic) UIView *summaryPlatterView; // ivar: _summaryPlatterView
@property (readonly) Class superclass;


-(BOOL)_shouldHideNotificationGroupList:(id)arg0 ;
-(BOOL)_shouldHideNotificationRequest:(id)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)notificationGroupListShouldReloadNotificationCells:(id)arg0 ;
-(BOOL)notificationListViewIsGroup:(id)arg0 ;
-(CGFloat)footerViewHeightForNotificationList:(id)arg0 ;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 ;
-(NSUInteger)notificationListViewNumberOfItems:(id)arg0 ;
-(id)_newSectionHeaderView;
-(id)comparisonDate;
-(id)materialGroupNameBaseForNotificationSummaryOrderProvider:(id)arg0 ;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(id)titlesForSectionListsInSummaryForSummaryOrderProvider:(id)arg0 ;
-(void)_collapseAllGroupListViews;
-(void)_collapseAllSectionListViews;
-(void)_collapseSection;
-(void)_didPerformSignificantUserInteraction;
-(void)_expandSection;
-(void)_hideSummaryPlatterView;
-(void)_insertViewToListAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_reloadGroupListLeadingNotificationRequests;
-(void)_removeViewFromListAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_showSummaryPlatterView;
-(void)_updateSectionForRankOrderedIfNecessaryAndReloadDigest:(BOOL)arg0 ;
-(void)collapseSummarizedSectionList;
-(void)insertNotificationRequest:(id)arg0 ;
-(void)mergeNotificationGroups:(id)arg0 reorderGroupNotifications:(BOOL)arg1 ;
-(void)notificationListComponent:(id)arg0 didRemoveNotificationRequest:(id)arg1 ;
-(void)notificationListComponentDidRemoveAllNotificationRequests:(id)arg0 ;
-(void)notificationSummaryOrderProvider:(id)arg0 didUpdateOrderedNotificationGroupLists:(id)arg1 ;
-(void)notificationSummaryOrderProvider:(id)arg0 requestsPerformingDefaultActionForNotificationRequest:(id)arg1 inGroupList:(id)arg2 ;
-(void)notificationSummaryOrderProviderDidTapOnLeadingSummaryPlatterView:(id)arg0 ;
-(void)notificationSummaryOrderProviderRequestsReloadingLeadingSummaryPlatterView:(id)arg0 ;
-(void)removeNotificationRequest:(id)arg0 ;
-(void)sectionHeaderViewDidRequestCollapsing:(id)arg0 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg0 ;
-(void)setDeviceAuthenticated:(BOOL)arg0 ;
-(void)updateNotificationSectionSettings:(id)arg0 previousSectionSettings:(id)arg1 ;


@end


#endif