// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPROGRESSIVEBLURCONTEXTCONTROLLER_H
#define _UIPROGRESSIVEBLURCONTEXTCONTROLLER_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate;


#import "UIViewController.h"

@interface _UIProgressiveBlurContextController : UIViewController <UIViewControllerTransitioningDelegate>

 {
    UIViewController *_presentedViewController;
}


@property (nonatomic) NSInteger blurStyle; // ivar: _blurStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithPresentedViewController:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif