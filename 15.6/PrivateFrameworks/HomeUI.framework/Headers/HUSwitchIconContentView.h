// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSWITCHICONCONTENTVIEW_H
#define HUSWITCHICONCONTENTVIEW_H

@class UIViewPropertyAnimator, UIView;


#import "HUPrimaryStateIconContentView.h"
#import "HUVisualEffectContainerView.h"
#import "HUShapeLayerView.h"

@interface HUSwitchIconContentView : HUPrimaryStateIconContentView

@property (retain, nonatomic) HUVisualEffectContainerView *frameContainerView; // ivar: _frameContainerView
@property (retain, nonatomic) HUShapeLayerView *frameView; // ivar: _frameView
@property (retain, nonatomic) UIViewPropertyAnimator *switchAnimator; // ivar: _switchAnimator
@property (retain, nonatomic) UIView *switchBackgroundView; // ivar: _switchBackgroundView
@property (retain, nonatomic) HUVisualEffectContainerView *switchBottomIndicatorContainerView; // ivar: _switchBottomIndicatorContainerView
@property (retain, nonatomic) HUShapeLayerView *switchBottomIndicatorView; // ivar: _switchBottomIndicatorView
@property (retain, nonatomic) HUVisualEffectContainerView *switchTopIndicatorContainerView; // ivar: _switchTopIndicatorContainerView
@property (retain, nonatomic) HUShapeLayerView *switchTopIndicatorView; // ivar: _switchTopIndicatorView
@property (retain, nonatomic) UIView *visibleSwitchView; // ivar: _visibleSwitchView


-(BOOL)wantsManagedVibrancyEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)managedVisualEffectViews;
-(struct CGRect )switchBottomIndicatorFrameForVisibleSwitchBounds:(struct CGRect )arg0 switchOn:(BOOL)arg1 ;
-(struct CGRect )switchTopIndicatorFrameForVisibleSwitchBounds:(struct CGRect )arg0 switchOn:(BOOL)arg1 ;
-(void)_setIconState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)updateColorsForDisplayStyle:(NSUInteger)arg0 ;
-(void)updateIconFromState:(NSInteger)arg0 toState:(NSInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif