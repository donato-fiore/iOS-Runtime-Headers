// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAPPLEIDAUTHENTICATIONPURPLEBUDDYCONTEXT_H
#define AKAPPLEIDAUTHENTICATIONPURPLEBUDDYCONTEXT_H

@class NSDictionary, UIViewController, UINavigationController, NSString;


#import "AKAppleIDAuthenticationInAppContext.h"

@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext {
    NSDictionary *_overrideFirstActionSignal;
    UIViewController *_topViewControllerOnLoadStart;
}


@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly, nonatomic) NSString *passwordForCreating;
@property (readonly, nonatomic) NSString *usernameForCreating;


-(id)init;
-(void)dismissBasicLoginUIWithCompletion:(id)arg0 ;
-(void)dismissServerProvidedUIWithCompletion:(id)arg0 ;
-(void)presentBasicLoginUIWithCompletion:(id)arg0 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg0 completion:(id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg0 title:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;


@end


#endif