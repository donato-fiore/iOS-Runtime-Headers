// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FACREATECHILDCONTROLLER_H
#define FACREATECHILDCONTROLLER_H

@class ACAccount, UIViewController;
@protocol FANavigationControllerDelegate, FACreateChildControllerDelegate;

#import <Foundation/Foundation.h>

#import "FANavigationController.h"

@interface FACreateChildController : NSObject <FANavigationControllerDelegate>



@property (retain, nonatomic) ACAccount *appleAccount; // ivar: _appleAccount
@property (weak, nonatomic) NSObject<FACreateChildControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) FANavigationController *navController; // ivar: _navController
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


-(id)_createChildAuthContext;
-(id)_repairAuthContextWithAuthResults:(id)arg0 ;
-(id)_repairFAContextWithAuthResults:(id)arg0 ;
-(id)_repairParametersFromAuthResults:(id)arg0 ;
-(id)initWithAppleAccount:(id)arg0 ;
-(void)_dismissPresentedViewControllerWithCompletion:(id)arg0 ;
-(void)_setupPresentedViewController;
-(void)createChildAccountWithCompletion:(id)arg0 ;
-(void)navigationController:(id)arg0 didPresentInitialViewController:(id)arg1 ;
-(void)navigationController:(id)arg0 presentViewController:(id)arg1 ;
-(void)repairChildAccountWithAuthenticationResults:(id)arg0 completion:(id)arg1 ;


@end


#endif