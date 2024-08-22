// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUISHOWACCESSKEYVIEWCONTROLLER_H
#define AAUISHOWACCESSKEYVIEWCONTROLLER_H

@class PSListController, ACAccount, AALocalContactInfo, NSString, UIImage;
@protocol AAUIInviteMessageFlowControllerDelegate;


#import "AAUIAccountContactsSpecifierCreator.h"
#import "AAUIInviteMessageFlowController.h"

@interface AAUIShowAccessKeyViewController : PSListController <AAUIInviteMessageFlowControllerDelegate>

 {
    ACAccount *_appleAccount;
    AAUIAccountContactsSpecifierCreator *_specifierCreator;
    AALocalContactInfo *_localContact;
    NSString *_accessKey;
    UIImage *_qrCodeImage;
    AAUIInviteMessageFlowController *_inviteFlowController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_specifiersForShowAccessKey;
-(id)initWithAppleAccount:(id)arg0 localContactInfo:(id)arg1 accessKey:(id)arg2 accessKeyQRCodeImage:(id)arg3 ;
-(id)specifiers;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(void)_printTapped:(id)arg0 ;
-(void)_setTableSeparatorInset;
-(void)_setupNavigationBar;
-(void)_shareAccessKeyTapped:(id)arg0 ;
-(void)inviteMessageCompleteSecondaryButtonTapped:(id)arg0 ;
-(void)inviteMessageFlowDidFinish:(id)arg0 ;
-(void)inviteMessageWasSent:(id)arg0 completion:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif