// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PNPPLATTERCONTAINERVIEW_H
#define PNPPLATTERCONTAINERVIEW_H

@class UIView, UIVisualEffectView, NSDate;


#import "PNPPlatterShadowView.h"

@interface PNPPlatterContainerView : UIView {
    UIView *_contentViewContainerView;
    PNPPlatterShadowView *_shadowView;
    UIView *_dimmingView;
    UIVisualEffectView *_effectView;
}


@property (nonatomic) CGAffineTransform animationTranslation; // ivar: _animationTranslation
@property (copy, nonatomic) id *autoDismissBlock; // ivar: _autoDismissBlock
@property (retain, nonatomic) NSDate *autoDismissDate; // ivar: _autoDismissDate
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger dimmingState; // ivar: _dimmingState
@property (nonatomic) BOOL dismissUsingAlpha; // ivar: _dismissUsingAlpha
@property (nonatomic) NSUInteger edge; // ivar: _edge
@property (nonatomic) CGFloat pencilOffset; // ivar: _pencilOffset
@property (nonatomic) CGFloat preferredCornerRadius; // ivar: _preferredCornerRadius
@property (nonatomic) BOOL presented; // ivar: _presented


-(CGFloat)_dismissedAlphaForEdge:(CGFloat)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )_dismissedTransformForEdge:(NSUInteger)arg0 ;
-(struct CGRect )dismissedFrameForViewWithSize:(struct CGSize )arg0 edge:(NSUInteger)arg1 inRect:(struct CGRect )arg2 ;
-(struct CGRect )presentedFrameForViewWithSize:(struct CGSize )arg0 edge:(NSUInteger)arg1 inRect:(struct CGRect )arg2 ;
-(void)_updateShadowForCenteredPlatter:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif