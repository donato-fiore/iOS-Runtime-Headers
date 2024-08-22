// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPROGRESSIVEBLURPRESENTATIONCONTROLLER_H
#define _UIPROGRESSIVEBLURPRESENTATIONCONTROLLER_H



#import "UIPresentationController.h"
#import "UIVisualEffectView.h"

@interface _UIProgressiveBlurPresentationController : UIPresentationController

@property (nonatomic) NSInteger blurStyle; // ivar: _blurStyle
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(BOOL)_forcesPreferredAnimationControllers;
-(BOOL)_mayChildGrabPresentedViewControllerView;
-(NSInteger)presentationStyle;
-(id)_preferredAnimationControllerForDismissal;
-(id)_preferredAnimationControllerForPresentation;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_animateWithCoordinator:(id)arg0 isPresenting:(BOOL)arg1 ;
-(void)_configureSubviews;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;


@end


#endif