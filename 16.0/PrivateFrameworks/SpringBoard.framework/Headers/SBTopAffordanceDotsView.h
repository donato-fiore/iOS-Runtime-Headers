// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTOPAFFORDANCEDOTSVIEW_H
#define SBTOPAFFORDANCEDOTSVIEW_H

@class UIButton, UIView, NSLayoutConstraint, UIPointerInteraction, NSString;
@protocol UIPointerInteractionDelegate, SBTopAffordanceDotsViewDelegate;


#import "SBTopAffordanceDotView.h"

@interface SBTopAffordanceDotsView : UIButton <UIPointerInteractionDelegate>

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
@property (weak, nonatomic) NSObject<SBTopAffordanceDotsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) UIEdgeInsets hitTestEdgeInsets; // ivar: _hitTestEdgeInsets
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_dotViews;
-(id)initWithFrame:(struct CGRect )arg0 delegate:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(void)_updateBackgroundColor;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif