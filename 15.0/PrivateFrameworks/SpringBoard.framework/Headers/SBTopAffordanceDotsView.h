// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTOPAFFORDANCEDOTSVIEW_H
#define SBTOPAFFORDANCEDOTSVIEW_H

@class UIView, NSLayoutConstraint, UIPointerInteraction, NSString;
@protocol UIPointerInteractionDelegate;


#import "SBHitTestExtendedView.h"
#import "SBTopAffordanceDotView.h"

@interface SBTopAffordanceDotsView : SBHitTestExtendedView <UIPointerInteractionDelegate>

 {
    SBTopAffordanceDotView *_leadingDotView;
    SBTopAffordanceDotView *_centerDotView;
    SBTopAffordanceDotView *_trailingDotView;
    UIView *_hitTestBlocker;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_leadingSpacingConstraint;
    NSLayoutConstraint *_trailingSpacingConstraint;
    NSLayoutConstraint *_hitTestBlockerWidthConstraint;
    NSLayoutConstraint *_hitTestBlockerHeightConstraint;
    NSLayoutConstraint *_hitTestBlockerLeftConstraint;
    UIPointerInteraction *_pointerInteraction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) UIEdgeInsets hitTestEdgeInsets; // ivar: _hitTestEdgeInsets
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_dotViews;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_updateBackgroundColor;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif