// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONPRESENTATIONTARGET_H
#define PKPAYMENTAUTHORIZATIONPRESENTATIONTARGET_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface PKPaymentAuthorizationPresentationTarget : NSObject

@property (copy, nonatomic) id *presentationCompletion; // ivar: _presentationCompletion
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (nonatomic) BOOL shouldAnimatePresentation; // ivar: _shouldAnimatePresentation
@property (retain, nonatomic) UIViewController *viewControllerToPresent; // ivar: _viewControllerToPresent


-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentPendingViewControllerIfNecessary;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif