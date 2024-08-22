// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMCONTROLDRAWERMENUBUTTON_H
#define CAMCONTROLDRAWERMENUBUTTON_H

@class UIImageView, NSArray, UIView, NSMutableArray;
@protocol CAMControlDrawerExpandableButton, CAMControlDrawerMenuButtonDelegate;


#import "CAMControlDrawerButton.h"

@interface CAMControlDrawerMenuButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton>



@property (readonly, nonatomic) UIImageView *_accessoryBackgroundView; // ivar: __accessoryBackgroundView
@property (retain, nonatomic, setter=_setCachedMenuItems:) NSArray *_cachedMenuItems; // ivar: __cachedMenuItems
@property (retain, nonatomic, setter=_setHighlightedView:) UIView *_highlightedView; // ivar: __highlightedView
@property (readonly, nonatomic) NSMutableArray *_itemLabels; // ivar: __itemLabels
@property (nonatomic, setter=_setNeedsLoadMenuItems:) BOOL _needsLoadMenuItems; // ivar: __needsLoadMenuItems
@property (nonatomic, getter=_isTouchInTrackedView, setter=_setTouchInTrackedView:) BOOL _touchInTrackedView; // ivar: __touchInTrackedView
@property (nonatomic, setter=_setTrackedItemIndex:) NSUInteger _trackedItemIndex; // ivar: __trackedItemIndex
@property (nonatomic, getter=_isTrackingExpansionToggle, setter=_setTrackingExpansionToggle:) BOOL _trackingExpansionToggle; // ivar: __trackingExpansionToggle
@property (weak, nonatomic) NSObject<CAMControlDrawerMenuButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic) UIEdgeInsets expansionInsets; // ivar: _expansionInsets


+(id)_backgroundImage;
-(BOOL)_shouldTrackView:(id)arg0 forTouchAtLocation:(struct CGPoint )arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isExpandable;
-(BOOL)isMenuItemSelected:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldScaleImageWhileHighlighted;
-(NSUInteger)_indexOfItemToTrackForTouchAtLocation:(struct CGPoint )arg0 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)loadMenuItems;
-(void)_loadMenuItemsIfNeeded;
-(void)_updateHighlightedView;
-(void)_updateLabels;
-(void)_updateSubviewAlphas;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)didChangeContentSize;
-(void)didSelectMenuItem:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;
-(void)setNeedsLoadMenuItems;
-(void)setOrientation:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)updateLabelsIfNeeded;


@end


#endif