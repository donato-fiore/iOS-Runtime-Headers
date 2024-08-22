// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPASSWORDSAVINGREMOTEVIEWCONTROLLER_H
#define SFPASSWORDSAVINGREMOTEVIEWCONTROLLER_H

@class ASAccountAuthenticationModificationController;


#import "SFPasswordRemoteViewController.h"

@interface SFPasswordSavingRemoteViewController : SFPasswordRemoteViewController {
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;
}




+(id)passwordServiceViewControllerName;
+(id)serviceViewControllerInterface;
-(id)_accountAuthenticationModificationController;
-(id)presentationAnchorForAccountAuthenticationModificationController:(id)arg0 ;
-(void)accountAuthenticationModificationController:(id)arg0 didFailRequest:(id)arg1 withError:(id)arg2 ;
-(void)accountAuthenticationModificationController:(id)arg0 didSuccessfullyCompleteRequest:(id)arg1 withUserInfo:(id)arg2 ;
-(void)performUpgradeToSignInWithAppleForCredential:(id)arg0 serviceIdentifier:(id)arg1 ;
-(void)performUpgradeToStrongPasswordForCredential:(id)arg0 serviceIdentifier:(id)arg1 ;


@end


#endif