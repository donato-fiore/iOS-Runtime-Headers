// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERUPDATEUSERINFOFIELDSVIEWCONTROLLER_H
#define PKPAYLATERUPDATEUSERINFOFIELDSVIEWCONTROLLER_H

@class PKAccount, PKAccountService, NSArray, NSString;


#import "PKDynamicProvisioningFieldsPageViewController.h"

@interface PKPayLaterUpdateUserInfoFieldsViewController : PKDynamicProvisioningFieldsPageViewController {
    PKAccount *_payLaterAccount;
    PKAccountService *_accountService;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVerion;
}




-(id)initWithPayLaterAccount:(id)arg0 webService:(id)arg1 context:(NSInteger)arg2 setupDelegate:(id)arg3 encryptionCertificates:(id)arg4 encryptionVerion:(id)arg5 fieldsPage:(id)arg6 ;
-(void)handleCancelTapped;
-(void)handleNextButtonTapped:(id)arg0 ;


@end


#endif