// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ASACCOUNTAUTHENTICATIONMODIFICATIONEXTENSIONHOSTCONTEXT_H
#define _ASACCOUNTAUTHENTICATIONMODIFICATIONEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol _ASAccountAuthenticationModificationExtensionHostContextProtocol, _ASExtensionHostContext, _ASAccountAuthenticationModificationExtensionHostContextDelegate;



@interface _ASAccountAuthenticationModificationExtensionHostContext : NSExtensionContext <_ASAccountAuthenticationModificationExtensionHostContextProtocol, _ASExtensionHostContext>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_ASAccountAuthenticationModificationExtensionHostContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dismissRequestUI;
-(void)getSignInWithAppleAuthorizationWithState:(id)arg0 nonce:(id)arg1 completion:(id)arg2 ;
-(void)prepareToCancelRequestWithError:(id)arg0 completion:(id)arg1 ;
-(void)prepareToCompleteRequestWithUpdatedCredential:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(id)arg0 completion:(id)arg1 ;


@end


#endif