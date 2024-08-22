// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTCREDENTIALPROVISIONINGVIEWCONTROLLER_H
#define PKPAYMENTCREDENTIALPROVISIONINGVIEWCONTROLLER_H

@class UIImage, PKPaymentCredential, PKPaymentSetupProduct, PKAddPaymentPassRequest, NSString;
@protocol PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol;


#import "PKPaymentSetupProvisioningFieldsViewController.h"
#import "PKPaymentCredentialMetadataTableController.h"

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol>

 {
    UIImage *_passSnapshotPlaceHolder;
    NSUInteger _credentialProvisioningType;
    NSUInteger _displayType;
    PKPaymentCredentialMetadataTableController *_metadataController;
    PKPaymentCredential *_paymentCredential;
    PKPaymentSetupProduct *_setupProduct;
    BOOL _allowsManualEntry;
    BOOL _previouslyAcceptedTerms;
    UIImage *_passSnapshot;
    BOOL _passSnapshotNeedsCorners;
    CGSize _passSnapshotOverrideSize;
    PKAddPaymentPassRequest *_addRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldAutoProvision; // ivar: _shouldAutoProvision
@property (readonly) Class superclass;


-(BOOL)_isPaymentAccount;
-(BOOL)isComplete;
-(BOOL)isProvisioningHomeKey;
-(BOOL)isProvisioningPaymentAccount;
-(id)_defaultHeaderViewSubTitleForLocalCredential;
-(id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
-(id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
-(id)defaultFields;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 setupDelegate:(id)arg2 paymentCredential:(id)arg3 setupProduct:(id)arg4 allowsManualEntry:(BOOL)arg5 previouslyAcceptedTerms:(BOOL)arg6 ;
-(id)newPaymentEligibilityRequest;
-(id)newPaymentProvisioningRequest;
-(id)newPaymentRequirementsRequest;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(id)readonlyFieldIdentifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)visibleFieldIdentifiers;
-(void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(id)arg0 ;
-(void)_createPassSnapshotFromPaymentPass:(id)arg0 completion:(id)arg1 ;
-(void)_fetchAddRequestWithCompletion:(id)arg0 ;
-(void)_performEligibilityWithCompletion:(id)arg0 ;
-(void)_performFinishWithCompletion:(id)arg0 ;
-(void)_performProvisionWithCompletion:(id)arg0 ;
-(void)_performRequirementsWithCompletion:(id)arg0 ;
-(void)_performTermsWithCompletion:(id)arg0 ;
-(void)_preflightCredentialFieldsWithCompletion:(id)arg0 ;
-(void)_skipCard;
-(void)_terminateSetupFlow;
-(void)_updatePassSnapshotHeader;
-(void)addDifferentCard:(id)arg0 ;
-(void)dealloc;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)paymentPassUpdatedOnCredential:(id)arg0 ;
-(void)performNextActionForProvisioningState:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)setPassSnapshot:(id)arg0 needsCorners:(BOOL)arg1 ;
-(void)triggerWatchProvisioning;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif