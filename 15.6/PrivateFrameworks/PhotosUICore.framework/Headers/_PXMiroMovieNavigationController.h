// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXMIROMOVIENAVIGATIONCONTROLLER_H
#define _PXMIROMOVIENAVIGATIONCONTROLLER_H

@class UINavigationController, NSString, UIViewController;
@protocol UIViewControllerTransitioningDelegate;



@interface _PXMiroMovieNavigationController : UINavigationController <UIViewControllerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *miroMoviePresentingViewController; // ivar: _miroMoviePresentingViewController
@property (readonly) Class superclass;


-(id)_transitionForPresentedOrDismissedViewController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)dismiss:(id)arg0 ;


@end


#endif