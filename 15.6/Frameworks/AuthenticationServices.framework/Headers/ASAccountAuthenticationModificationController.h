// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASACCOUNTAUTHENTICATIONMODIFICATIONCONTROLLER_H
#define ASACCOUNTAUTHENTICATIONMODIFICATIONCONTROLLER_H

@class NSExtension, NSString;
@protocol _ASAccountAuthenticationModificationRemoteViewControllerDelegate, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding;

#import <Foundation/Foundation.h>

#import "_ASAccountAuthenticationModificationRemoteViewController.h"
#import "ASAccountAuthenticationModificationRequest.h"
#import "ASAccountAuthenticationModificationController.h"

@interface ASAccountAuthenticationModificationController : NSObject <_ASAccountAuthenticationModificationRemoteViewControllerDelegate>

 {
    _ASAccountAuthenticationModificationRemoteViewController *_accountAuthenticationModificationRemoteViewController;
    ASAccountAuthenticationModificationRequest *_request;
    ASAccountAuthenticationModificationController *_referenceToSelf;
    NSExtension *_helperExtension;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASAccountAuthenticationModificationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<ASAccountAuthenticationModificationControllerPresentationContextProviding> *presentationContextProvider; // ivar: _presentationContextProvider
@property (readonly) Class superclass;


-(id)_viewControllerToPresentFrom;
-(id)init;
-(void)_failRequestWithError:(id)arg0 ;
-(void)_invalidate;
-(void)_performReplacePasswordWithSignInWithAppleRequest:(id)arg0 ;
-(void)_performUpgradePasswordToStrongPasswordRequest:(id)arg0 ;
-(void)_requestRemoteViewController:(id)arg0 ;
-(void)_showUpgradeToStrongPasswordPromptForRequest:(id)arg0 ;
-(void)accountModificationRemoteViewController:(id)arg0 didFinishWithCredential:(id)arg1 userInfo:(id)arg2 completion:(id)arg3 ;
-(void)accountModificationRemoteViewController:(id)arg0 requestCanceledWithError:(id)arg1 completion:(id)arg2 ;
-(void)accountModificationRemoteViewController:(id)arg0 viewServiceDidTerminateWithError:(id)arg1 ;
-(void)accountModificationRemoteViewControllerDidFinishUpgradeToSignInWithApple:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)dismissAccountModificationRemoteViewController:(id)arg0 ;
-(void)performRequest:(id)arg0 ;
-(void)presentAccountModificationRemoteViewController:(id)arg0 ;


@end


#endif