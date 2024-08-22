// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARACTIVITYVIEW_H
#define _UISTATUSBARACTIVITYVIEW_H

@class CAGradientLayer, NSString, CALayer;
@protocol _UIStatusBarDisplayable;


#import "UIView.h"
#import "UIAccessibilityHUDItem.h"
#import "UIColor.h"
#import "_UIStatusBarCycleAnimation.h"

@interface _UIStatusBarActivityView : UIView <_UIStatusBarDisplayable>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (retain, nonatomic) CAGradientLayer *barLayer; // ivar: _barLayer
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation; // ivar: _cycleAnimation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSlow; // ivar: _isSlow
@property (retain, nonatomic) CALayer *mainLayer; // ivar: _mainLayer
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (retain, nonatomic) CALayer *pointLayer; // ivar: _pointLayer
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat thickness; // ivar: _thickness
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(CGFloat)_thicknessForTraitCollection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_commonInit;
-(void)_stopAnimatingWithStoppingAnimations:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)startAnimating;
-(void)stopAnimatingWithCompletionHandler:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif