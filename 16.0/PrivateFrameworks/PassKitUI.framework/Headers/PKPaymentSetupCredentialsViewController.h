// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPCREDENTIALSVIEWCONTROLLER_H
#define PKPAYMENTSETUPCREDENTIALSVIEWCONTROLLER_H

@class PKPaymentSetupProduct, LAContext, NSString;
@protocol PKPaymentSetupCredentialsSectionControllerDelegate, PKPaymentSetupPresentationProtocol;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKPaymentSetupFlowController.h"
#import "PKPaymentSetupCredentialsSectionController.h"

@interface PKPaymentSetupCredentialsViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupCredentialsSectionControllerDelegate, PKPaymentSetupPresentationProtocol>

 {
    PKPaymentSetupFlowController *_flowController;
    PKPaymentSetupCredentialsSectionController *_sectionController;
    PKPaymentSetupProduct *_product;
    LAContext *_localAuthenticationContext;
    BOOL _didBeginWalletProvisioningSubject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_analyticsPageTag;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 credentials:(id)arg3 product:(id)arg4 allowsManualEntry:(BOOL)arg5 ;
-(void)_beginReportingIfNecessary;
-(void)_continueButtonPressed;
-(void)_endReportingIfNecessary;
// -(void)_presentCredentialDoubleCheckAlert:(id)arg0 continueHandler:(id)arg1 setupLaterHandler:(unk)arg2  ;
-(void)_presentManualAddController;
-(void)_presentProvisioningFlowForCredentials:(id)arg0 ;
-(void)_requestAuthAndStartProvisioningForCredentials:(id)arg0 ;
-(void)_requestExternalizedAuthIfNeededWithCompletion:(id)arg0 ;
-(void)_setUserInteractionEnabled:(BOOL)arg0 ;
-(void)_setupDockView;
-(void)_setupLaterTapped;
-(void)_terminateSetupFlow;
-(void)_toggleEdit;
-(void)_updateEditButtonVisibility;
-(void)credentialSelectionDidChange:(BOOL)arg0 ;
-(void)dealloc;
-(void)presentRefundFlowForCredential:(id)arg0 ;
-(void)presentUnavailableDetailsForCredential:(id)arg0 ;
-(void)reloadAnimated:(BOOL)arg0 ;
-(void)setShowNoResultsView:(BOOL)arg0 ;
-(void)showCredentialDeletionError;
-(void)showDeleteConfirmationWithCompletion:(id)arg0 ;
-(void)showMaxSelectionAlertForCredential:(id)arg0 ;
-(void)showUnableToDeleteCredentialError;
-(void)showUnableToDeleteSafariCredentialError;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif