// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTVERIFICATIONCONTROLLER_H
#define PKPAYMENTVERIFICATIONCONTROLLER_H

@class NSString, NSNumber, UIImage, PKPaymentPass, PKPaymentProvisioningController, PKVerificationRequestRecord, PKPaymentWebService;
@protocol UINavigationControllerDelegate, PKPaymentVerificationControllerDelegate, PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPassView.h"

@interface PKPaymentVerificationController : NSObject <UINavigationControllerDelegate>

 {
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    NSString *_inStoreBankAppTitle;
    NSNumber *_inStoreBankAppStoreID;
    UIImage *_passSnapshot;
    BOOL _bankAppNotFound;
}


@property (readonly) NSString *alternateMethodButtonTitle;
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly) NSString *continueVerificationButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentVerificationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPassView *passView; // ivar: _passView
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) BOOL shouldDisabledVerificationButton;
@property (readonly) Class superclass;
@property (readonly) NSString *verificationBodyString;
@property (nonatomic) NSInteger verificationContext; // ivar: _verificationContext
@property (readonly, nonatomic) PKVerificationRequestRecord *verificationRecord; // ivar: _verificationRecord
@property (readonly) NSString *verificationTitleString;
@property (readonly, nonatomic) PKPaymentWebService *webService; // ivar: _webService


-(BOOL)_isBankAppInstalled;
-(NSUInteger)_channelType;
-(id)_bankAppName;
-(id)_bankAppStoreIDs;
-(id)_continueVerificationButtonTitleForBankAppChannel:(id)arg0 ;
-(id)_formattedPhoneNumber:(id)arg0 forTextMessage:(BOOL)arg1 ;
-(id)_outboundCallPhoneNumber;
-(id)_verificationBodyStringForBankAppChannel:(id)arg0 ;
-(id)_verificationBodyStringForOutboundPhoneCallChannel:(id)arg0 ;
-(id)defaultVerificationBodyString;
-(id)initWithPaymentPass:(id)arg0 passView:(id)arg1 webService:(id)arg2 context:(NSInteger)arg3 delegate:(id)arg4 setupDelegate:(id)arg5 verificationContext:(NSInteger)arg6 ;
-(id)verificationSecureURL;
-(id)verificationURL;
-(id)verificationURLComponents;
-(void)_accessBankVerificationURLAsAppClip;
-(void)_accessBankVerificationURLAsWebPage:(id)arg0 ;
-(void)_completeVerificationUsingBankApp;
-(void)_completeVerificationUsingOutboundCall;
-(void)_completeVerificationUsingURL;
-(void)_didChangePresentation;
-(void)_downloadAndAddPassWithCompletion:(id)arg0 ;
-(void)_launchBankApp;
-(void)_lookForBankAppIfNecessary;
-(void)_performStoreLookupForBankApp;
-(void)_presentVerificationViewControllerForStepIdentifier:(id)arg0 ;
-(void)_presentVerificatonEntryCompletionViewController;
-(void)_queue_sharedPaymentWebServiceChanged;
-(void)_requestDelegatePresentationOfViewController:(id)arg0 ;
-(void)_resetState;
-(void)_wrapViewControllerAndRequestDelegatePresentationOfView:(id)arg0 ;
-(void)continueVerification;
-(void)continueVerificationUsingMethods;
-(void)dealloc;
-(void)goToPreviousStep;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)performVerificationOptionsRequest:(id)arg0 completion:(id)arg1 ;
-(void)performVerificationUpdateRequest:(id)arg0 completion:(id)arg1 ;
-(void)retryCurrentStep;
-(void)selectOtherVerificationMethod;
-(void)sharedPaymentServiceChanged;
-(void)submitVerificationCode:(id)arg0 completion:(id)arg1 ;


@end


#endif