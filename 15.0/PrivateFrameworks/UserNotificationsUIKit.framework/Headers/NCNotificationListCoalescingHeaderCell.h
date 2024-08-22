// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONLISTCOALESCINGHEADERCELL_H
#define NCNOTIFICATIONLISTCOALESCINGHEADERCELL_H

@class UIView, NSString, _UILegibilitySettings;
@protocol NCNotificationListCoalescingControlsViewDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler, MTMaterialGrouping, NCNotificationListCoalescingControlsHandlerDelegate;


#import "NCNotificationListCoalescingControlsView.h"
#import "NCNotificationListHeaderTitleView.h"

@interface NCNotificationListCoalescingHeaderCell : UIView <NCNotificationListCoalescingControlsViewDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler, MTMaterialGrouping>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) NCNotificationListCoalescingControlsView *coalescingControlsView; // ivar: _coalescingControlsView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<NCNotificationListCoalescingControlsHandlerDelegate> *handlerDelegate; // ivar: _handlerDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationListHeaderTitleView *headerTitleView; // ivar: _headerTitleView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(CGFloat)coalescingHeaderCellHeightForWidth:(CGFloat)arg0 title:(id)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)dismissModalFullScreenIfNeeded;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint )arg0 ;
-(id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)arg0 ;
-(struct CGRect )_coalescingControlsViewFrameForBounds:(struct CGRect )arg0 ;
-(void)_configureCoalescingControlsViewIfNecessary;
-(void)_configureHeaderTitleViewIfNecessary;
-(void)_contentSizeCategoryDidChange;
-(void)_layoutCoalescingControlsView;
-(void)_layoutHeaderTitleView;
-(void)adjustForLegibilitySettingsChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)notificationListCoalescingControlsView:(id)arg0 didTransitionToClearState:(BOOL)arg1 ;
-(void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)arg0 ;
-(void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)arg0 ;
-(void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)arg0 ;
-(void)notificationListCoalescingControlsViewRequestsClear:(id)arg0 ;
-(void)notificationListCoalescingControlsViewRequestsClearAll:(id)arg0 ;
-(void)notificationListCoalescingControlsViewRequestsRestack:(id)arg0 ;
-(void)resetClearButtonStateAnimated:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif