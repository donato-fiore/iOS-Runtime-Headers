// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGENERICSENSORICONCONTENTVIEW_H
#define HUGENERICSENSORICONCONTENTVIEW_H

@class UIView, NSArray;


#import "HUPrimaryStateIconContentView.h"
#import "HUAnimationApplier.h"
#import "HUVisualEffectContainerView.h"
#import "HUShapeLayerView.h"

@interface HUGenericSensorIconContentView : HUPrimaryStateIconContentView

@property (retain, nonatomic) HUAnimationApplier *animationApplier; // ivar: _animationApplier
@property (retain, nonatomic) HUVisualEffectContainerView *bodyContainerView; // ivar: _bodyContainerView
@property (retain, nonatomic) HUShapeLayerView *bodyView; // ivar: _bodyView
@property (retain, nonatomic) UIView *indicatorClippingView; // ivar: _indicatorClippingView
@property (retain, nonatomic) NSArray *indicatorContainerViews; // ivar: _indicatorContainerViews
@property (retain, nonatomic) NSArray *indicatorViews; // ivar: _indicatorViews


-(BOOL)showIndicators;
-(BOOL)wantsManagedVibrancyEffect;
-(id)_animationSettingsForShowingIndicators:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)managedVisualEffectViews;
-(struct CGAffineTransform )_transformForIndicatorContainerViewInPosition:(NSUInteger)arg0 ;
-(struct CGRect )_frameForIndicatorContainerViewInPosition:(NSUInteger)arg0 ;
-(struct CGRect )_frameForIndicatorViewInPosition:(NSUInteger)arg0 showIndicators:(BOOL)arg1 ;
-(void)_layoutIndicatorViewsShowingIndicators:(BOOL)arg0 ;
-(void)_updateIndicatorAlpha;
-(void)layoutSubviews;
-(void)updateColorsForDisplayStyle:(NSUInteger)arg0 ;
-(void)updateIconFromState:(NSInteger)arg0 toState:(NSInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif