// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUIPARTIALSHEETPRESENTATIONCONTROLLER_H
#define RUIPARTIALSHEETPRESENTATIONCONTROLLER_H

@class UIPresentationController, UIView;


#import "RemoteUIController.h"

@interface RUIPartialSheetPresentationController : UIPresentationController {
    UIView *_dimmingView;
    CGFloat _keyboardHeight;
}


@property (weak, nonatomic) RemoteUIController *remoteUIController; // ivar: _remoteUIController


-(CGFloat)_maxHeight;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)containerViewDidLayoutSubviews;
-(void)didTapDimmingView;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)keyboardWillHideNotification:(id)arg0 ;
-(void)keyboardWillShowNotification:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif