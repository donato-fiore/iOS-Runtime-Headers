// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTPRESENTABLEGROUP_H
#define NCNOTIFICATIONLISTPRESENTABLEGROUP_H

@class NSString;
@protocol NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationListViewDataSource, NCNotificationListBaseComponent, MTMaterialGrouping, NCNotificationListCellActionHandling, NCNotificationListPresentableGroupDelegate;

#import <Foundation/Foundation.h>

#import "NCNotificationListCell.h"
#import "NCNotificationListCoalescingControlsCell.h"
#import "NCNotificationListView.h"
#import "NCNotificationListCoalescingHeaderCell.h"
#import "NCNotificationListCache.h"

@interface NCNotificationListPresentableGroup : NSObject <NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationListViewDataSource, NCNotificationListBaseComponent, MTMaterialGrouping, NCNotificationListCellActionHandling>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) NCNotificationListCell *cellWithActionsRevealed; // ivar: _cellWithActionsRevealed
@property (readonly, nonatomic) NSString *clearAllText; // ivar: _clearAllText
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListPresentableGroupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NCNotificationListCoalescingControlsCell *footerView; // ivar: _footerView
@property (nonatomic) CGFloat footerViewHeight; // ivar: _footerViewHeight
@property (retain, nonatomic) NCNotificationListView *groupListView; // ivar: _groupListView
@property (nonatomic, getter=isGrouped) BOOL grouped; // ivar: _grouped
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *headerText; // ivar: _headerText
@property (retain, nonatomic) NCNotificationListCoalescingHeaderCell *headerView; // ivar: _headerView
@property (nonatomic) CGFloat headerViewHeight; // ivar: _headerViewHeight
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (retain, nonatomic) NCNotificationListCache *notificationListCache; // ivar: _notificationListCache
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL shouldImmediatelyReveal; // ivar: _shouldImmediatelyReveal
@property (readonly) Class superclass;


+(id)presentableTypes;
-(BOOL)_shouldAllowRestacking;
-(BOOL)actionsRevealedForNotificationListCell:(id)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)shouldPerformClippingForNotificationListCell:(id)arg0 ;
-(CGFloat)footerViewHeightForNotificationList:(id)arg0 withWidth:(CGFloat)arg1 ;
-(CGFloat)headerViewHeightForNotificationList:(id)arg0 withWidth:(CGFloat)arg1 ;
-(CGFloat)notificationListView:(id)arg0 ;
-(CGFloat)notificationListView:(id)arg0 heightForItemAtIndex:(NSUInteger)arg1 withWidth:(CGFloat)arg2 ;
-(NSUInteger)notificationListViewNumberOfItems:(id)arg0 ;
-(id)_legibilitySettings;
-(id)containerViewForCoalescingControlsHandlerPreviewInteractionPresentedContent:(id)arg0 ;
-(id)footerViewForNotificationList:(id)arg0 ;
-(id)headerViewForNotificationList:(id)arg0 ;
-(id)notificationListView:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(void)_didSignificantInteraction;
-(void)_scrollToTopIfNecessaryAndPerformBlock:(id)arg0 ;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)clearAll;
-(void)notificationListCell:(id)arg0 didMoveToNewXPosition:(CGFloat)arg1 ;
-(void)notificationListCellDidBeginHidingActions:(id)arg0 ;
-(void)notificationListCellDidBeginRevealingActions:(id)arg0 ;
-(void)notificationListCellDidSignificantUserInteraction:(id)arg0 ;
-(void)notificationListCoalescingControlsHandler:(id)arg0 didTransitionToClearState:(BOOL)arg1 ;
-(void)notificationListCoalescingControlsHandlerDidBeginPreviewInteraction:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerDidDismissPreviewInteractionPresentedContent:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerDidPresentPreviewInteractionPresentedContent:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerRequestsClearingAllNotifications:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerRequestsClearingNotifications:(id)arg0 ;
-(void)notificationListCoalescingControlsHandlerRequestsRestackingNotifications:(id)arg0 ;
-(void)recycleView:(id)arg0 ;
-(void)toggleGroupedState;


@end


#endif