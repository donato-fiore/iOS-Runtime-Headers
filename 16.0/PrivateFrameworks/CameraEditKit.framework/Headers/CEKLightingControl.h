// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEKLIGHTINGCONTROL_H
#define CEKLIGHTINGCONTROL_H

@class UIView, NSTimer, NSDictionary, NSArray, NSSet, UIPanGestureRecognizer, UILongPressGestureRecognizer, UIImageView, UITapGestureRecognizer, NSDate, NSString;
@protocol UIGestureRecognizerDelegate, CEKBadgeViewDelegate, CAAnimationDelegate, CEKLightingControlDelegate;


#import "CEKAnimationGenerator.h"
#import "CEKLightingDialBackground.h"
#import "CEKLightingFrameCache.h"
#import "CEKLightingNameBadge.h"
#import "CEKSelectionFeedbackGenerator.h"
#import "CEKMultiplyImageView.h"

@interface CEKLightingControl : UIView <UIGestureRecognizerDelegate, CEKBadgeViewDelegate, CAAnimationDelegate>

 {
    ? _delegateFlags;
}


@property (readonly, nonatomic) CEKAnimationGenerator *_animationGenerator; // ivar: __animationGenerator
@property (retain, nonatomic, setter=_setBackgroundView:) CEKLightingDialBackground *_backgroundView; // ivar: __backgroundView
@property (retain, nonatomic, setter=_setCollapseTimer:) NSTimer *_collapseTimer; // ivar: __collapseTimer
@property (retain, nonatomic, setter=_setEffectItemsForType:) NSDictionary *_effectItemsForType; // ivar: __effectItemsForType
@property (readonly, nonatomic) NSArray *_effectTypes; // ivar: __effectTypes
@property (retain, nonatomic) NSSet *_enabledEffectTypes; // ivar: __enabledEffectTypes
@property (nonatomic, setter=_setExpandedAnimationCounter:) NSUInteger _expandedAnimationCounter; // ivar: __expandedAnimationCounter
@property (readonly, nonatomic) CEKLightingFrameCache *_frameCache; // ivar: __frameCache
@property (retain, nonatomic, setter=_setItemOutlineViewsForType:) NSDictionary *_itemOutlineViewsForType; // ivar: __itemOutlineViewsForType
@property (retain, nonatomic, setter=_setItemShadowViewsForType:) NSDictionary *_itemShadowViewsForType; // ivar: __itemShadowViewsForType
@property (retain, nonatomic, setter=_setItemViewsForType:) NSDictionary *_itemViewsForType; // ivar: __itemViewsForType
@property (retain, nonatomic, setter=_setNameBadge:) CEKLightingNameBadge *_nameBadge; // ivar: __nameBadge
@property (readonly, nonatomic) UIPanGestureRecognizer *_panGesture; // ivar: __panGesture
@property (readonly, nonatomic) UILongPressGestureRecognizer *_pressGesture; // ivar: __pressGesture
@property (nonatomic, setter=_setSelectionAngularOffset:) CGFloat _selectionAngularOffset; // ivar: __selectionAngularOffset
@property (readonly, nonatomic) CEKSelectionFeedbackGenerator *_selectionFeedbackGenerator; // ivar: __selectionFeedbackGenerator
@property (readonly, nonatomic) NSUInteger _selectionIndex; // ivar: __selectionIndex
@property (retain, nonatomic, setter=_setSelectionOverlay:) CEKMultiplyImageView *_selectionOverlay; // ivar: __selectionOverlay
@property (retain, nonatomic, setter=_setSelectionUnderlay:) UIImageView *_selectionUnderlay; // ivar: __selectionUnderlay
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGesture; // ivar: __tapGesture
@property (retain, nonatomic, setter=_setTimeTrackingBegan:) NSDate *_timeTrackingBegan; // ivar: __timeTrackingBegan
@property (nonatomic) ? collapsedItemFading; // ivar: _collapsedItemFading
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultLightingType;
@property (weak, nonatomic) NSObject<CEKLightingControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) NSInteger lightingEffectSet; // ivar: _lightingEffectSet
@property (nonatomic) NSUInteger nameBadgeFontStyle;
@property (nonatomic, getter=isNameBadgeHidden) BOOL nameBadgeHidden; // ivar: _nameBadgeHidden
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) NSInteger selectedLightingType; // ivar: _selectedLightingType
@property (readonly) Class superclass;
@property (nonatomic, getter=isTracking, setter=_setTracking:) BOOL tracking; // ivar: _tracking


-(BOOL)_isLightingTypeEnabled:(NSInteger)arg0 ;
-(BOOL)_isOverDialedWithSelectionAngularOffset:(CGFloat)arg0 selectionIndex:(NSUInteger)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(CGFloat)_angleFromCenterToPoint:(struct CGPoint )arg0 ;
-(CGFloat)_angularSpacingForRadialLayout;
-(CGFloat)_compressedItemOffsetForFractionalItemOffset:(CGFloat)arg0 ;
-(CGFloat)_dialBadgePaddingExpanded:(BOOL)arg0 ;
-(CGFloat)_dialCenterDistanceBelowBoundsForWidth:(CGFloat)arg0 ;
-(CGFloat)_dialRadius;
-(CGFloat)_dialRadiusForWidth:(CGFloat)arg0 ;
-(CGFloat)_dialVisibleHeightExpanded:(BOOL)arg0 ;
-(CGFloat)_offsetAngleForItemAtIndex:(NSUInteger)arg0 withSelectionOffset:(CGFloat)arg1 ;
-(CGFloat)_offsetAngleForRubberBandOffsetAngle:(CGFloat)arg0 selectionIndex:(NSUInteger)arg1 ;
-(CGFloat)_offsetXForItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_rotationForPanGesture:(id)arg0 ;
-(CGFloat)_rubberBandOffsetAngleForOffsetAngle:(CGFloat)arg0 ;
-(CGFloat)_safeWidthForWidth:(CGFloat)arg0 ;
-(CGFloat)_spacingForLinearLayout;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(NSUInteger)_enabledItemCount;
-(NSUInteger)_itemCount;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_dialCenter;
-(struct CGPoint )_dialCenterForWidth:(CGFloat)arg0 ;
-(struct CGPoint )_selectionPointForExpanded:(BOOL)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_cancelDelayedCollapse;
-(void)_collapseWithDelay:(CGFloat)arg0 ;
-(void)_createBackgroundViewIfNeeded;
-(void)_createItemViewsIfNeeded;
-(void)_createNameBadgeIfNeeded;
-(void)_createSelectionViewsIfNeeded;
-(void)_handleCollapseTimer:(id)arg0 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_handleSettlingSelectionViewsFromOffset:(CGFloat)arg0 withProgress:(CGFloat)arg1 timingCurve:(id)arg2 ;
-(void)_handleSnapFromOffset:(CGFloat)arg0 withProgress:(CGFloat)arg1 timingCurve:(id)arg2 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_handleTapRotationFromOffset:(CGFloat)arg0 withProgress:(CGFloat)arg1 timingCurve:(id)arg2 ;
-(void)_layoutBackgroundExpanded:(BOOL)arg0 ;
-(void)_layoutItemViewsLinear;
-(void)_layoutItemViewsRadialWithSelectionOffsetAngle:(CGFloat)arg0 ;
-(void)_layoutNameBadgeExpanded:(BOOL)arg0 ;
-(void)_layoutSelectionViewsExpanded:(BOOL)arg0 ;
-(void)_loadItemsIfNeeded;
-(void)_performFeedback;
-(void)_prepareFeedback;
-(void)_rotateForTapFromSelectionIndex:(NSUInteger)arg0 offset:(CGFloat)arg1 toSelectionIndex:(NSUInteger)arg2 ;
-(void)_settleSelectionViewsFromSelectionOffsetAngle:(CGFloat)arg0 ;
-(void)_snapFromSelectionOffsetAngle:(CGFloat)arg0 toAngle:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)_updateItemViewsWithSelectionOffsetAngle:(CGFloat)arg0 ;
-(void)_updateNameBadgeAnimated:(BOOL)arg0 ;
-(void)_updateSelectionOverlayColorAnimated:(BOOL)arg0 ;
-(void)_updateSelectionViewsWithSelectionOffsetAngle:(CGFloat)arg0 ;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)layoutSubviews;
-(void)ppt_selectLightingType:(NSInteger)arg0 ;
-(void)preloadEffectChangeAnimation;


@end


#endif