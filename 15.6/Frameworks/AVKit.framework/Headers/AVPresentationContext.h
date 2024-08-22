// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPRESENTATIONCONTEXT_H
#define AVPRESENTATIONCONTEXT_H

@class UIView, UIWindow, UIViewController;
@protocol UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "AVFullScreenViewController.h"
#import "AVPresentationConfiguration.h"
#import "AVPresentationContextTransition.h"
#import "AVPresentationController.h"
#import "AVPresentationContainerView.h"

@interface AVPresentationContext : NSObject

@property (nonatomic) BOOL allowsPausingWhenTransitionCompletes; // ivar: _allowsPausingWhenTransitionCompletes
@property (nonatomic) BOOL allowsSecondWindowPresentations; // ivar: _allowsSecondWindowPresentations
@property (readonly, weak, nonatomic) AVFullScreenViewController *avFullScreenViewController; // ivar: _avFullScreenViewController
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) BOOL canBeInteractivelyDismissed;
@property (readonly, nonatomic) AVPresentationConfiguration *configuration; // ivar: _configuration
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly, nonatomic) AVPresentationContextTransition *currentTransition;
@property (readonly, nonatomic, getter=isDismissing) BOOL dismissing;
@property (retain, nonatomic) AVPresentationContextTransition *dismissingTransition; // ivar: _dismissingTransition
@property (readonly, nonatomic) BOOL hasActiveTransition;
@property (readonly, weak, nonatomic) AVPresentationController *presentationController; // ivar: _presentationController
@property (readonly, weak, nonatomic) UIWindow *presentationWindow;
@property (readonly, weak, nonatomic) AVPresentationContainerView *presentedView;
@property (readonly, weak, nonatomic) UIViewController *presentedViewController;
@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (retain, nonatomic) AVPresentationContextTransition *presentingTransition; // ivar: _presentingTransition
@property (retain, nonatomic) UIWindow *rotatableSecondWindow; // ivar: _rotatableSecondWindow
@property (readonly, weak, nonatomic) AVFullScreenViewController *rotatableWindowViewController;
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly, nonatomic) UIView *touchBlockingView; // ivar: _touchBlockingView
@property (weak, nonatomic) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext
@property (readonly, nonatomic) NSInteger transitionType;
@property (readonly, nonatomic) BOOL wasInitiallyInteractive;
@property (nonatomic) BOOL wasInitiallyPresentedWithoutSecondWindow; // ivar: _wasInitiallyPresentedWithoutSecondWindow


+(BOOL)supportsInteractiveCounterRotationDismissals;
-(id)dismissalToView;
-(id)initWithPresentationController:(id)arg0 configuration:(id)arg1 ;
-(id)presentationFromView;
-(id)presentingView;


@end


#endif