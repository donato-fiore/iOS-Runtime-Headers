// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAUTHORIZATIONCONTAINERIPHONEVIEWCONTROLLER_H
#define AKAUTHORIZATIONCONTAINERIPHONEVIEWCONTROLLER_H

@class UITapGestureRecognizer, UIVisualEffectView, NSString;
@protocol UIViewControllerTransitioningDelegate;


#import "AKAuthorizationContainerViewController.h"

@interface AKAuthorizationContaineriPhoneViewController : AKAuthorizationContainerViewController <UIViewControllerTransitioningDelegate>

 {
    UITapGestureRecognizer *_tapGestureRecognizer;
}


@property (retain, nonatomic) UIVisualEffectView *blurBackgroundView; // ivar: _blurBackgroundView
@property (nonatomic) CGSize containerContentSize; // ivar: _containerContentSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_delegate_authorizationContainerViewControllerShouldDismiss;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)initWithRootViewController:(id)arg0 authorizationContext:(id)arg1 ;
-(struct CGRect )_dismissalFrameForContentSize:(struct CGSize )arg0 ;
-(struct CGRect )_layoutFrameForContentSize:(struct CGSize )arg0 ;
-(void)_delegate_authorizationContainerViewControllerDidDismiss;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_layoutContainerView:(BOOL)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif