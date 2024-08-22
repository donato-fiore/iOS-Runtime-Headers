// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUICONTENTMODULEDETAILCLICKPRESENTATIONTRANSITION_H
#define CCUICONTENTMODULEDETAILCLICKPRESENTATIONTRANSITION_H

@class UIViewPropertyAnimator, NSString, UIViewController, UITargetedPreview;
@protocol _UIClickPresentationTransition;

#import <Foundation/Foundation.h>

#import "CCUIContentModuleDetailAnimationController.h"

@interface CCUIContentModuleDetailClickPresentationTransition : NSObject <_UIClickPresentationTransition>



@property (readonly, nonatomic) CCUIContentModuleDetailAnimationController *animationController; // ivar: _animationController
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly) Class superclass;


-(id)initWithPresentedViewController:(id)arg0 animationController:(id)arg1 ;
-(void)performTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)transitionDidEnd:(BOOL)arg0 ;


@end


#endif