// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERCHANGEFUNDINGSOURCESECTIONCONTROLLER_H
#define PKPAYLATERCHANGEFUNDINGSOURCESECTIONCONTROLLER_H

@class PKPeerPaymentAccount, PKPaymentPass, NSArray, PKPayLaterPaymentSource, NSString, NSMutableDictionary, NSDateFormatter, PKPayLaterFinancingPlan, PKAccountWebServiceFinancingPlanPaymentIntentResponse, PKPayLaterPaymentIntentController;
@protocol PKPaymentSetupDelegate, PKPayLaterChangeFundingSourceSectionControllerDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPassSnapshotter.h"
#import "PKPayLaterButtonRow.h"
#import "PKPayLaterSwitchRow.h"

@interface PKPayLaterChangeFundingSourceSectionController : PKPayLaterSectionController <PKPaymentSetupDelegate>

 {
    PKPeerPaymentAccount *_peerPaymentAccount;
    id<PKPayLaterChangeFundingSourceSectionControllerDelegate> *_delegate;
    PKPassSnapshotter *_snapshotter;
    PKPaymentPass *_payLaterPass;
    BOOL _autoPayment;
    BOOL _preventTouches;
    NSArray *_availableFundingSources;
    PKPayLaterButtonRow *_addPaymentMethodRow;
    PKPayLaterSwitchRow *_autoPaySwitchRow;
    PKPayLaterPaymentSource *_selectedFundingSource;
    NSString *_selectedFundingSourceCellIdentifier;
    NSMutableDictionary *_paymentSourceRows;
    NSDateFormatter *_dateFormatter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKAccountWebServiceFinancingPlanPaymentIntentResponse *intentDetails; // ivar: _intentDetails
@property (retain, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController; // ivar: _paymentIntentController
@property (readonly) Class superclass;


-(BOOL)_shouldShowAddPaymentMethodSection;
-(BOOL)_shouldShowNextPaymentSection;
-(id)_paymentSourceRowForBankFundingSource:(id)arg0 ;
-(id)_paymentSourceRowForPassFundingSource:(id)arg0 ;
-(id)_rowForPaymentSource:(id)arg0 ;
-(id)_snapshotForPass:(id)arg0 completion:(id)arg1 ;
-(id)_unavailablePaymentSourceRowForFundingSource:(id)arg0 ;
-(id)footerContentForSectionIdentifier:(id)arg0 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithFinancingPlan:(id)arg0 payLaterPass:(id)arg1 paymentIntentController:(id)arg2 intentDetails:(id)arg3 dynamicContentPage:(id)arg4 delegate:(id)arg5 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(struct CGSize )_passImageSize;
-(void)_configureAddPaymentMethodSection:(id)arg0 ;
-(void)_configureAutoPaymentAgreementSection:(id)arg0 ;
-(void)_configureAutoPaymentNextPaymentSection:(id)arg0 ;
-(void)_configureAutoPaymentSection:(id)arg0 ;
-(void)_configureFundingSourceSection:(id)arg0 ;
-(void)_handleAutoPaySwitchEnabled:(BOOL)arg0 ;
-(void)_presentAutoPayOverdueAlertWithCompletion:(id)arg0 ;
-(void)_presentMakePaymentWithCompletion:(id)arg0 ;
-(void)_presentProvisioningFlowFromRow:(id)arg0 ;
-(void)_showButtonSpinnerForRow:(id)arg0 showSpinner:(BOOL)arg1 ;
-(void)_updateCachedValues;
-(void)paymentSetupDidFinish:(id)arg0 ;


@end


#endif