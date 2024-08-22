// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMEXPANDABLEMENUBUTTON_H
#define CAMEXPANDABLEMENUBUTTON_H

@class UIControl, UIView, NSMutableIndexSet, NSMutableArray, UIImageView, NSIndexSet, NSString;
@protocol CAMAccessibilityHUDItemProvider, CAMExpandableMenuButtonDelegate;


#import "CAMTouchingGestureRecognizer.h"

@interface CAMExpandableMenuButton : UIControl <CAMAccessibilityHUDItemProvider>



@property (readonly, nonatomic) UIView *_headerView; // ivar: __headerView
@property (readonly, copy, nonatomic) NSMutableIndexSet *_highlightedIndexesWhileCollapsed; // ivar: __highlightedIndexesWhileCollapsed
@property (readonly, nonatomic) NSMutableArray *_menuItems; // ivar: __menuItems
@property (readonly, nonatomic) UIImageView *_padBackgroundView; // ivar: __padBackgroundView
@property (readonly, copy, nonatomic) NSIndexSet *_shownIndexesWhileCollapsed; // ivar: __shownIndexesWhileCollapsed
@property (retain, nonatomic, setter=_setTrackingView:) UIView *_trackingView; // ivar: __trackingView
@property (nonatomic, getter=_isTrackingViewHighlighted, setter=_setTrackingViewHighlighted:) BOOL _trackingViewHighlighted; // ivar: __trackingViewHighlighted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CAMExpandableMenuButtonDelegate> *expandableMenuDelegate; // ivar: _expandableMenuDelegate
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets
@property (readonly, nonatomic) CAMTouchingGestureRecognizer *touchingGestureRecognizer; // ivar: _touchingGestureRecognizer


+(CGFloat)expansionDuration;
-(BOOL)_wantsHeaderViewToBeVisible;
-(BOOL)shouldAllowExpansion;
-(BOOL)shouldIgnoreMenuInteraction;
-(BOOL)wantsSelectedItemToBeVisible;
-(CGFloat)collapsedSelectedLabelHorizontalMargin;
-(CGFloat)padHeaderViewContentInsetLeft;
-(NSInteger)numberOfMenuItems;
-(id)_selectedLabel;
-(id)_viewToTrackForTouchAtLocation:(struct CGPoint )arg0 ;
-(id)headerView;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)shownIndexesWhileCollapsed;
-(id)titleForMenuItemAtIndex:(NSInteger)arg0 ;
-(struct CGRect )alignmentRectForFrame:(struct CGRect )arg0 expanded:(BOOL)arg1 ;
-(struct CGRect )frameForAlignmentRect:(struct CGRect )arg0 expanded:(BOOL)arg1 ;
-(struct CGSize )_layoutForPadCollapsedPortraitButton:(BOOL)arg0 ;
-(struct CGSize )_layoutForPadExpandedPortraitButton:(BOOL)arg0 ;
-(struct CGSize )_layoutForPadStyle:(BOOL)arg0 expanded:(BOOL)arg1 ;
-(struct CGSize )_layoutForPhoneCollapsedLandscapeButton:(BOOL)arg0 ;
-(struct CGSize )_layoutForPhoneCollapsedPortraitButton:(BOOL)arg0 ;
-(struct CGSize )_layoutForPhoneExpandedLandscapeButton:(BOOL)arg0 ;
-(struct CGSize )_layoutForPhoneExpandedPortraitButton:(BOOL)arg0 ;
-(struct CGSize )_layoutForPhoneStyle:(BOOL)arg0 expanded:(BOOL)arg1 ;
-(struct CGSize )_layoutMenuButton:(BOOL)arg0 expanded:(BOOL)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )intrinsicContentSizeForExpansion:(BOOL)arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_applyHeaderViewForCurrentExpansionState;
-(void)_applyMenuItemAlphaForCurrentExpansionState;
-(void)_applyMenuItemColorsForCurrentState;
-(void)_applyMenuItemTextAlignmentAndShadowForCurrentOrientation;
-(void)_convertAllSubviewsToProposedFrame:(struct CGRect )arg0 ;
-(void)_createPadBackgroundView;
-(void)_handleTouchGesture:(id)arg0 ;
-(void)_updateFromExpansionChangeAnimated:(BOOL)arg0 ;
-(void)_updateFromOrientationChangeAnimated:(BOOL)arg0 ;
-(void)_updateFromSelectedIndexChange;
-(void)collapseMenuAnimated:(BOOL)arg0 ;
-(void)completeExpansionToProposedFrame:(struct CGRect )arg0 ;
-(void)expandMenuAnimated:(BOOL)arg0 ;
-(void)finishCollapsingAnimated:(BOOL)arg0 ;
-(void)finishExpansionAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareHeaderViewForExpanding:(BOOL)arg0 ;
-(void)reloadData;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 forIndex:(NSInteger)arg1 ;
-(void)startCollapsingWithProposedFrame:(struct CGRect )arg0 ;
-(void)startExpansionWithProposedFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif