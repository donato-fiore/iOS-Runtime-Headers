// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTTERMSANDCONDITIONSVIEWCONTROLLER_H
#define PKACCOUNTTERMSANDCONDITIONSVIEWCONTROLLER_H

@class PKAccount, PKPaymentWebService, NSString;


#import "PKFeatureTermsAndConditionsViewController.h"

@interface PKAccountTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController {
    PKAccount *_account;
    PKPaymentWebService *_webService;
    NSString *_termsIdentifier;
}




-(id)displayTitle;
-(id)initWithAccount:(id)arg0 webService:(id)arg1 context:(NSInteger)arg2 termsIdentifier:(id)arg3 ;
-(void)_termsDataForIdentifier:(id)arg0 format:(id)arg1 completion:(id)arg2 ;
-(void)htmlTermsDataWithCompletion:(id)arg0 ;
-(void)initalTermsDataWithCompletion:(id)arg0 ;
-(void)pdfTermsDataWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)presentErrorAlert;
-(void)termsAccepted:(BOOL)arg0 completion:(id)arg1 ;
-(void)termsShown;


@end


#endif