// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASACCOUNTAUTHENTICATIONMODIFICATIONVIEWCONTROLLER_H
#define ASACCOUNTAUTHENTICATIONMODIFICATIONVIEWCONTROLLER_H

@class UIViewController;


#import "ASAccountAuthenticationModificationExtensionContext.h"

@interface ASAccountAuthenticationModificationViewController : UIViewController

@property (readonly, nonatomic) ASAccountAuthenticationModificationExtensionContext *extensionContext;


-(void)cancelRequest;
-(void)changePasswordWithoutUserInteractionForServiceIdentifier:(id)arg0 existingCredential:(id)arg1 newPassword:(id)arg2 userInfo:(id)arg3 ;
-(void)convertAccountToSignInWithAppleWithoutUserInteractionForServiceIdentifier:(id)arg0 existingCredential:(id)arg1 userInfo:(id)arg2 ;
-(void)prepareInterfaceToChangePasswordForServiceIdentifier:(id)arg0 existingCredential:(id)arg1 newPassword:(id)arg2 userInfo:(id)arg3 ;
-(void)prepareInterfaceToConvertAccountToSignInWithAppleForServiceIdentifier:(id)arg0 existingCredential:(id)arg1 userInfo:(id)arg2 ;


@end


#endif