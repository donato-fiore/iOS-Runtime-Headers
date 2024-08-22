// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFUNDINGSOURCESECTIONCONTROLLER_H
#define PKPAYLATERFUNDINGSOURCESECTIONCONTROLLER_H

@class PKPayLaterFinancingOption, PKPeerPaymentAccount, PKPayLaterPaymentSource, NSMutableDictionary, NSArray, NSString;
@protocol PKPaymentSetupDelegate, PKPayLaterFundingSourceSectionControllerDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterSetupFlowController.h"
#import "PKPayLaterButtonRow.h"

@interface PKPayLaterFundingSourceSectionController : PKPayLaterSectionController <PKPaymentSetupDelegate>

 {
    PKPayLaterSetupFlowController *_setupController;
    PKPayLaterFinancingOption *_selectedFinancingOption;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPayLaterPaymentSource *_selectedFundingSource;
    id<PKPayLaterFundingSourceSectionControllerDelegate> *_delegate;
    NSMutableDictionary *_paymentSourceRows;
    PKPayLaterButtonRow *_addPaymentMethodRow;
    BOOL _autoPayment;
}


@property (copy, nonatomic) NSArray *availableFundingSources; // ivar: _availableFundingSources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_pageItemForSectionIndex:(NSInteger)arg0 ;
-(id)_paymentSourceRowForBankFundingSource:(id)arg0 ;
-(id)_paymentSourceRowForPassFundingSource:(id)arg0 ;
-(id)_rowForPaymentSource:(id)arg0 ;
-(id)identifiers;
-(id)initWithPayLaterAccount:(id)arg0 dynamicContentPage:(id)arg1 peerPaymentAccount:(id)arg2 selectedFundingSource:(id)arg3 autoPayment:(BOOL)arg4 availableFundingSources:(id)arg5 setupController:(id)arg6 delegate:(id)arg7 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureAddPaymentMethoSectionSnapshot:(id)arg0 ;
-(void)_configureAutoPaySectionSnapshot:(id)arg0 ;
-(void)_configurePaymentPassSectionSnapshot:(id)arg0 ;
-(void)_presentProvisioningFlow;
-(void)_showAddPaymentButtonSpinner:(BOOL)arg0 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;
-(void)didTapHyperLink:(id)arg0 ;
-(void)paymentSetupDidFinish:(id)arg0 ;


@end


#endif