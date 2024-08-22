// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYINVITATIONACCEPTANCEVIEWCONTROLLER_H
#define FAFAMILYINVITATIONACCEPTANCEVIEWCONTROLLER_H

@class AAUIBleachedNavigationController, ACAccount, ACAccountStore, AAGrandSlamSigner, FAFamilyInvite, AAUIRemoteUIController, NSOperationQueue, NSMutableURLRequest, NSString;
@protocol FAConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate, FAInvitationAcceptanceDelegate;



@interface FAFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <FAConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate>

 {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    FAFamilyInvite *_invite;
    AAUIRemoteUIController *_remoteUIController;
    NSOperationQueue *_inviteOperationQueue;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAInvitationAcceptanceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createCancelButton;
-(id)initWithInvite:(id)arg0 appleAccount:(id)arg1 grandSlamSigner:(id)arg2 ;
-(void)_cancelButtonWasTapped:(id)arg0 ;
-(void)_loadiTunesLinkingRemoteUI;
-(void)_sendUserToiTunesSettings;
-(void)_showErrorAlert;
-(void)confirmIdentityViewController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willLoadRequest:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;


@end


#endif