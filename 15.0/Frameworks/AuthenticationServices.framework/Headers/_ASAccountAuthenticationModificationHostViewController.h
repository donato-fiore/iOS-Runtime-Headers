// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ASACCOUNTAUTHENTICATIONMODIFICATIONHOSTVIEWCONTROLLER_H
#define _ASACCOUNTAUTHENTICATIONMODIFICATIONHOSTVIEWCONTROLLER_H

@class ASExtensionViewController, NSString, AKAuthorization, NSDictionary;
@protocol _ASAccountAuthenticationModificationExtensionHostContextDelegate, _ASAccountAuthenticationModificationExtensionContextProtocol, _ASAccountAuthenticationModificationHostViewControllerDelegate;


#import "ASCredentialServiceIdentifier.h"
#import "ASPasswordCredential.h"

@interface _ASAccountAuthenticationModificationHostViewController : ASExtensionViewController <_ASAccountAuthenticationModificationExtensionHostContextDelegate>

 {
    ASCredentialServiceIdentifier *_serviceIdentifier;
    ASPasswordCredential *_existingCredential;
    NSString *_newPassword;
    NSInteger _accountModificationOperation;
    AKAuthorization *_signInWithAppleAuthorization;
    id<_ASAccountAuthenticationModificationExtensionContextProtocol> *_accountModificationExtensionContextProxy;
    NSDictionary *_userInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_ASAccountAuthenticationModificationHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldUseNonUIRequestTimer;
-(id)initWithExtension:(id)arg0 serviceIdentifier:(id)arg1 ;
-(void)_cancelButtonPressed;
-(void)_nonUIRequestDidRequireUserInteraction;
-(void)_requestDidFailWithError:(id)arg0 completion:(id)arg1 ;
-(void)dismissRequestUI:(id)arg0 ;
-(void)getSignInWithAppleAuthorizationWithState:(id)arg0 nonce:(id)arg1 completion:(id)arg2 ;
-(void)prepareToCancelRequestWithHostContext:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)prepareToCompleteRequestWithHostContext:(id)arg0 updatedCredential:(id)arg1 userInfo:(id)arg2 completion:(id)arg3 ;
-(void)prepareToCompleteUpgradeToSignInWithAppleRequestWithHostContext:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)updateCredential:(id)arg0 withNewPassword:(id)arg1 userInfo:(id)arg2 ;
-(void)upgradeCredentialToSignInWithApple:(id)arg0 userInfo:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif