// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIROOTPRESENTATIONCONTROLLER_H
#define _UIROOTPRESENTATIONCONTROLLER_H

@class NSString;
@protocol _UIStatusBarAnimationProviding;


#import "UISheetPresentationController.h"
#import "UIStatusBarHideAnimationParameters.h"
#import "UIStatusBarStyleAnimationParameters.h"
#import "UIWindow.h"

@interface _UIRootPresentationController : UISheetPresentationController <_UIStatusBarAnimationProviding>



@property (readonly, nonatomic) int _preferredStatusBarVisibility;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_preferredStatusBarHideAnimationParameters) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property (readonly, nonatomic) NSInteger preferredStatusBarStyle;
@property (readonly, nonatomic, getter=_preferredStatusBarStyleAnimationParameters) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
@property (readonly, nonatomic) NSInteger preferredStatusBarUpdateAnimation;
@property (readonly, weak, nonatomic) UIWindow *presentingWindow; // ivar: _presentingWindow
@property (readonly) Class superclass;


+(BOOL)_allowsDeferredTransitions;
-(BOOL)_isRootPresentation;
-(BOOL)_mayChildGrabPresentedViewControllerView;
-(id)_createVisualStyleForProvider:(id)arg0 ;
-(id)_fullscreenPresentationSuperview;
-(id)_parentTraitEnvironment;
-(id)initWithPresentedViewController:(id)arg0 presentingWindow:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif