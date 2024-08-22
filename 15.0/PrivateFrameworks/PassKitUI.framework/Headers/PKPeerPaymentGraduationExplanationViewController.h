// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTGRADUATIONEXPLANATIONVIEWCONTROLLER_H
#define PKPEERPAYMENTGRADUATIONEXPLANATIONVIEWCONTROLLER_H

@class PKPeerPaymentWebService, PKPeerPaymentAccount, NSString;
@protocol PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPaymentSetupViewControllerDelegate, PKPassLibraryDataProvider;


#import "PKExplanationViewController.h"

@interface PKPeerPaymentGraduationExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate>

 {
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccount *_peerPaymentAccount;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
}


@property (nonatomic) BOOL allowsManualEntry; // ivar: _allowsManualEntry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPeerPaymentWebService:(id)arg0 peerPaymentAccount:(id)arg1 passLibraryDataProvider:(id)arg2 setupDelegate:(id)arg3 context:(NSInteger)arg4 ;
-(void)_presentGenericError;
-(void)_presentIdentityVerificationFlowWithGraduationPrerequisiteIdentifier:(BOOL)arg0 ;
-(void)_presentTermsWithTermsResponse:(id)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif