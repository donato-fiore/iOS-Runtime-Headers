// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASACCOUNTAUTHENTICATIONMODIFICATIONSERVICEVIEWCONTROLLER_H
#define ASACCOUNTAUTHENTICATIONMODIFICATIONSERVICEVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol _ASAccountAuthenticationModificationHostViewControllerDelegate, ASAccountAuthenticationModificationServiceViewControllerProtocol;


#import "_ASAccountAuthenticationModificationHostViewController.h"
#import "ASPasswordCredential.h"
#import "ASCredentialServiceIdentifier.h"

@interface ASAccountAuthenticationModificationServiceViewController : UIViewController <_ASAccountAuthenticationModificationHostViewControllerDelegate, ASAccountAuthenticationModificationServiceViewControllerProtocol>

 {
    _ASAccountAuthenticationModificationHostViewController *_accountModificationHostViewController;
    BOOL _isPerformingAppInitiatedUpgrade;
    ASPasswordCredential *_existingCredential;
    ASCredentialServiceIdentifier *_serviceIdentifierForUpgrade;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)_ensureHostHasAccountModificationEntitlement;
-(BOOL)_isKeychainSyncEnabled;
-(void)_deleteExistingKeychainCredentialIfPossible;
-(void)_findExtensionSupportingUpgrade:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_updateCredential:(id)arg0 forServiceIdentifier:(id)arg1 userInfo:(id)arg2 extension:(id)arg3 ;
-(void)_updateKeychainWithNewCredential:(id)arg0 ;
-(void)_upgradeCredentialToSignInWithApple:(id)arg0 forServiceIdentifier:(id)arg1 userInfo:(id)arg2 extension:(id)arg3 ;
-(void)accountModificationHostViewController:(id)arg0 didFinishWithCredential:(id)arg1 userInfo:(id)arg2 completion:(id)arg3 ;
-(void)accountModificationHostViewController:(id)arg0 requestCanceledWithError:(id)arg1 completion:(id)arg2 ;
-(void)accountModificationHostViewControllerDidCompleteUpgradeToSignInWithApple:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)dismissUIForAccountModificationHostViewController:(id)arg0 ;
-(void)presentUIForAccountModificationHostViewController:(id)arg0 ;
-(void)updateCredential:(id)arg0 forServiceIdentifier:(id)arg1 userInfo:(id)arg2 extensionUUID:(id)arg3 ;
-(void)upgradeCredentialToSignInWithApple:(id)arg0 forServiceIdentifier:(id)arg1 userInfo:(id)arg2 extensionUUID:(id)arg3 ;


@end


#endif