// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPANELINTERNALSTATE_H
#define _UIPANELINTERNALSTATE_H

@protocol NSCopying, UIPanelControllerDelegate;

#import <Foundation/Foundation.h>

#import "_UIPanelAnimationState.h"
#import "UIViewController.h"
#import "UISlidingBarConfiguration.h"
#import "UISlidingBarStateRequest.h"

@interface _UIPanelInternalState : NSObject <NSCopying>



@property (retain, nonatomic) _UIPanelAnimationState *animationState; // ivar: _animationState
@property (nonatomic) NSInteger collapsedState; // ivar: _collapsedState
@property (retain, nonatomic) UIViewController *collapsedViewController; // ivar: _collapsedViewController
@property (copy, nonatomic) UISlidingBarConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<UIPanelControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger externallyAnimatingAffectedSides; // ivar: _externallyAnimatingAffectedSides
@property (copy, nonatomic) UISlidingBarStateRequest *externallyAnimatingStateRequest; // ivar: _externallyAnimatingStateRequest
@property (copy, nonatomic) UISlidingBarStateRequest *interactiveStateRequest; // ivar: _interactiveStateRequest
@property (nonatomic) CGFloat keyboardAdjustment; // ivar: _keyboardAdjustment
@property (retain, nonatomic) UIViewController *leadingViewController; // ivar: _leadingViewController
@property (retain, nonatomic) UIViewController *mainViewController; // ivar: _mainViewController
@property (retain, nonatomic) UIViewController *preservedDetailController; // ivar: _preservedDetailController
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest; // ivar: _stateRequest
@property (retain, nonatomic) UIViewController *supplementaryViewController; // ivar: _supplementaryViewController
@property (retain, nonatomic) UIViewController *trailingViewController; // ivar: _trailingViewController


-(CGFloat)_defaultWidthForViewController:(id)arg0 parentWidth:(CGFloat)arg1 ;
-(id)_allowedLeadingWidthsForParentWidth:(CGFloat)arg0 ;
-(id)_allowedSupplementaryWidthsForParentWidth:(CGFloat)arg0 ;
-(id)_allowedTrailingWidthsForParentWidth:(CGFloat)arg0 ;
-(id)_allowedWidthsForViewController:(id)arg0 parentWidth:(CGFloat)arg1 ;
-(id)_stateForInteractiveRequest:(id)arg0 withAffectedSides:(NSInteger)arg1 inPossibleStates:(id)arg2 ;
-(id)computePossibleStatesGivenParentView:(id)arg0 withSize:(struct CGSize )arg1 ;
-(id)computePossibleStatesGivenParentView:(id)arg0 withSize:(struct CGSize )arg1 forceOverlay:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif