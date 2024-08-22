// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDASHBOARDSCROLLINGANIMATIONCONTROLLER_H
#define HUDASHBOARDSCROLLINGANIMATIONCONTROLLER_H

@class UIView, UIViewPropertyAnimator;
@protocol HUDashboardScrollingAnimationControllerDelegate;

#import <Foundation/Foundation.h>


@interface HUDashboardScrollingAnimationController : NSObject

@property (retain, nonatomic) UIView *animatingView; // ivar: _animatingView
@property (retain, nonatomic) UIViewPropertyAnimator *animator; // ivar: _animator
@property (weak, nonatomic) NSObject<HUDashboardScrollingAnimationControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat minimumMargin; // ivar: _minimumMargin
@property (nonatomic) NSUInteger visibilityState; // ivar: _visibilityState


-(id)initWithDelegate:(id)arg0 ;
-(void)updateWithCurrentMargin:(CGFloat)arg0 animated:(BOOL)arg1 ;


@end


#endif