// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKSHEETVIEWCONTROLLER_H
#define TSKSHEETVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, NSString;
@protocol UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate, TSKSheetViewControllerDelegate;



@interface TSKSheetViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate>

 {
    UIViewController *_contentViewController;
    NSLayoutConstraint *_contentVerticalConstraint;
    BOOL _isContentHidden;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TSKSheetViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)isShowingForTransitionContext:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithContentViewController:(id)arg0 ;
-(id)initWithContentViewController:(id)arg0 allowTapsOutsideContentView:(BOOL)arg1 ;
-(void)animateDismissWithContext:(id)arg0 ;
-(void)animateShowWithContext:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)didTapView;
-(void)dismissSheetAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)setContentHidden:(BOOL)arg0 ;


@end


#endif