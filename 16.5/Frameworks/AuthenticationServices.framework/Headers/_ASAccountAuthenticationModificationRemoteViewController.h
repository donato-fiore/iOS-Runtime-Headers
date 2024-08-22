// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ASACCOUNTAUTHENTICATIONMODIFICATIONREMOTEVIEWCONTROLLER_H
#define _ASACCOUNTAUTHENTICATIONMODIFICATIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol ASAccountAuthenticationModificationRemoteViewControllerProtocol, _ASAccountAuthenticationModificationRemoteViewControllerDelegate;



@interface _ASAccountAuthenticationModificationRemoteViewController : UIRemoteViewController <ASAccountAuthenticationModificationRemoteViewControllerProtocol>



@property (weak, nonatomic) NSObject<_ASAccountAuthenticationModificationRemoteViewControllerDelegate> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)dismissAccountModificationRemoteViewController;
-(void)presentAccountModificationRemoteViewController;
-(void)requestDidFailWithError:(id)arg0 completion:(id)arg1 ;
-(void)requestDidFinishWithCredential:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)requestToUpgradeToSignInWithAppleDidFinishWithUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)updateCredential:(id)arg0 forServiceIdentifier:(id)arg1 userInfo:(id)arg2 extension:(id)arg3 ;
-(void)upgradeCredentialToSignInWithApple:(id)arg0 forServiceIdentifier:(id)arg1 userInfo:(id)arg2 extension:(id)arg3 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif