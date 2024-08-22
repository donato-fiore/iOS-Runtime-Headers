// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASACCOUNTAUTHENTICATIONMODIFICATIONEXTENSIONCONTEXT_H
#define ASACCOUNTAUTHENTICATIONMODIFICATIONEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol _ASAccountAuthenticationModificationExtensionContextProtocol;



@interface ASAccountAuthenticationModificationExtensionContext : NSExtensionContext <_ASAccountAuthenticationModificationExtensionContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)cancelRequest;
-(void)cancelRequestWithError:(id)arg0 ;
-(void)completeChangePasswordRequestWithUpdatedCredential:(id)arg0 userInfo:(id)arg1 ;
-(void)completeUpgradeToSignInWithAppleWithUserInfo:(id)arg0 ;
-(void)getSignInWithAppleUpgradeAuthorizationWithState:(id)arg0 nonce:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareInterfaceToUpdatePasswordForServiceIdentifier:(id)arg0 existingCredential:(id)arg1 newPassword:(id)arg2 userInfo:(id)arg3 completion:(id)arg4 ;
-(void)prepareInterfaceToUpgradeCredentialToSignInWithApple:(id)arg0 serviceIdentifier:(id)arg1 userInfo:(id)arg2 completion:(id)arg3 ;
-(void)updatePasswordForServiceIdentifier:(id)arg0 existingCredential:(id)arg1 newPassword:(id)arg2 userInfo:(id)arg3 ;
-(void)upgradeCredentialToSignInWithApple:(id)arg0 serviceIdentifier:(id)arg1 userInfo:(id)arg2 ;


@end


#endif