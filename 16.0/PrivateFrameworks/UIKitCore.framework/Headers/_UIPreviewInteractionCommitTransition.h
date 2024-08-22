// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPREVIEWINTERACTIONCOMMITTRANSITION_H
#define _UIPREVIEWINTERACTIONCOMMITTRANSITION_H


#import <Foundation/Foundation.h>

#import "UIWindow.h"
#import "UIViewController.h"

@interface _UIPreviewInteractionCommitTransition : NSObject

@property (retain, nonatomic) UIWindow *currentCommitEffectWindow; // ivar: _currentCommitEffectWindow
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)_shouldReduceMotion;
-(id)_preferredTransitionAnimator;
-(id)_preferredTransitionAnimatorForReducedMotion;
-(id)initWithPresentedViewController:(id)arg0 ;
-(void)_applyCommitEffectTransformToView:(id)arg0 ;
// -(void)performTransitionWithPresentationBlock:(id)arg0 completion:(unk)arg1  ;


@end


#endif