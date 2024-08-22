// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONLISTCOALESCINGCONTROLSVIEW_H
#define NCNOTIFICATIONLISTCOALESCINGCONTROLSVIEW_H

@class UIView, NSString, _UILegibilitySettings;
@protocol NCToggleControlDelegate, PLContentSizeCategoryAdjusting, MTMaterialGrouping, NCNotificationListCoalescingControlsViewDelegate;


#import "NCToggleControlPair.h"

@interface NCNotificationListCoalescingControlsView : UIView <NCToggleControlDelegate, PLContentSizeCategoryAdjusting, MTMaterialGrouping>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListCoalescingControlsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_effectiveButtonHeight) CGFloat effectiveButtonHeight; // ivar: _effectiveButtonHeight
@property (nonatomic, getter=_effectiveHorizontalPadding) CGFloat effectiveHorizontalPadding; // ivar: _effectiveHorizontalPadding
@property (nonatomic, getter=_effectiveVerticalPadding) CGFloat effectiveVerticalPadding; // ivar: _effectiveVerticalPadding
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (retain, nonatomic) NCToggleControlPair *toggleControlPair; // ivar: _toggleControlPair


+(CGFloat)preferredHeight;
+(id)labelTextStyle;
-(BOOL)_isClearButtonExpanded;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)dismissModalFullScreenIfNeeded;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint )arg0 ;
-(CGFloat)_cornerRadius;
-(CGFloat)_effectiveValue:(CGFloat)arg0 ;
-(CGFloat)_imageDimension;
-(id)_clearButton;
-(id)_clearButtonTitle;
-(id)_newClearButton;
-(id)_newRestackButton;
-(id)_restackButtonTitle;
-(id)containerViewForToggleControlClickInteractionPresentedContent:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_edgeInsets;
-(void)_configureToggleControlPairIfNecessary;
-(void)_handleClearAll:(id)arg0 ;
-(void)_handleClearPrimaryAction:(id)arg0 ;
-(void)_handleClearTouchUpInside:(id)arg0 ;
-(void)_handleRestackPrimaryAction:(id)arg0 ;
-(void)_handleRestackTouchUpInside:(id)arg0 ;
-(void)_layoutToggleControlPair;
-(void)layoutSubviews;
-(void)resetClearButtonStateAnimated:(BOOL)arg0 ;
-(void)toggleControlDidBeginClickInteraction:(id)arg0 ;
-(void)toggleControlDidDismssClickInteractionPresentedContent:(id)arg0 ;
-(void)toggleControlDidPresentClickInteractionPresentedContent:(id)arg0 ;


@end


#endif