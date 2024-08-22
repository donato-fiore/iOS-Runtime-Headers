// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLHIGHLIGHTPILLMARQUEEVIEW_H
#define SLHIGHLIGHTPILLMARQUEEVIEW_H

@class UIView, CALayer, NSLayoutConstraint;


#import "SLReplicatorView.h"

@interface SLHighlightPillMarqueeView : UIView

@property (nonatomic) BOOL endingPositionConstraintsShouldBeActive; // ivar: _endingPositionConstraintsShouldBeActive
@property (nonatomic) BOOL marqueeAnimationIsActive; // ivar: _marqueeAnimationIsActive
@property (nonatomic) CGFloat marqueeClippingWidth; // ivar: _marqueeClippingWidth
@property (nonatomic) BOOL marqueeEnabled; // ivar: _marqueeEnabled
@property (retain, nonatomic) CALayer *maskLayer; // ivar: _maskLayer
@property (retain, nonatomic) NSLayoutConstraint *ourHeightConstraint; // ivar: _ourHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *ourWidthConstraint; // ivar: _ourWidthConstraint
@property (retain, nonatomic) UIView *pillView; // ivar: _pillView
@property (retain, nonatomic) SLReplicatorView *replicatorView; // ivar: _replicatorView
@property (retain, nonatomic) NSLayoutConstraint *replicatorViewEndingPositionXConstraint; // ivar: _replicatorViewEndingPositionXConstraint
@property (retain, nonatomic) NSLayoutConstraint *replicatorViewStartingPositionXConstraint; // ivar: _replicatorViewStartingPositionXConstraint
@property (retain, nonatomic) NSLayoutConstraint *replicatorViewYConstraint; // ivar: _replicatorViewYConstraint


-(id)initWithFrame:(struct CGRect )arg0 pillView:(id)arg1 ;
-(void)_activateMarqueeAnimationIfNecessary;
-(void)_deactivateMarqueeAnimationIfNecessary;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif