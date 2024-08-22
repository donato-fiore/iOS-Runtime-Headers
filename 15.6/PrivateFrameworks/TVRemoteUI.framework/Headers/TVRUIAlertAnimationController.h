// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUIALERTANIMATIONCONTROLLER_H
#define TVRUIALERTANIMATIONCONTROLLER_H

@class NSString, UIVisualEffectView;
@protocol UIViewControllerAnimatedTransitioning, TVRemoteAlertVisualStyleProviding;

#import <Foundation/Foundation.h>

#import "TVRMaterialView.h"

@interface TVRUIAlertAnimationController : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, nonatomic) NSInteger animationType; // ivar: _animationType
@property (retain, nonatomic) TVRMaterialView *backgroundMaterialView; // ivar: _backgroundMaterialView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat foregroundBlurRadius; // ivar: _foregroundBlurRadius
@property (retain, nonatomic) UIVisualEffectView *foregroundVisualEffectView; // ivar: _foregroundVisualEffectView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGAffineTransform scaleTransform; // ivar: _scaleTransform
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TVRemoteAlertVisualStyleProviding> *visualStyle; // ivar: _visualStyle


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithAnimationType:(NSInteger)arg0 visualStyle:(id)arg1 ;
-(void)_runDismissalAnimationWithTransition:(id)arg0 ;
-(void)_runPresentationAnimationWithTransition:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif