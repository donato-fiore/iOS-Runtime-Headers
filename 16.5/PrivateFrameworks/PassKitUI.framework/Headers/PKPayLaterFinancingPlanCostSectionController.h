// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANCOSTSECTIONCONTROLLER_H
#define PKPAYLATERFINANCINGPLANCOSTSECTIONCONTROLLER_H

@class NSDateFormatter, PKPaymentPass, PKPayLaterFinancingPlan;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterButtonRow.h"
#import "PKPayLaterTitleDetailRow.h"

@interface PKPayLaterFinancingPlanCostSectionController : PKPayLaterSectionController {
    NSDateFormatter *_transactionDateFormatter;
    PKPayLaterButtonRow *_loanAgreementButton;
    PKPaymentPass *_payLaterPass;
    PKPayLaterTitleDetailRow *_loanIdentifierRow;
}


@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan


-(Class)headerViewClassForSectionIdentifier:(id)arg0 ;
-(id)contextMenuForPayLaterItem:(id)arg0 ;
-(id)footerContentForSectionIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithFinancingPlan:(id)arg0 payLaterAccount:(id)arg1 delegate:(id)arg2 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureCostSummarySection:(id)arg0 ;
-(void)_configureIssuerBrandSection:(id)arg0 ;
-(void)_configureLoanAgreementSection:(id)arg0 ;
-(void)configureHeaderView:(id)arg0 forSectionIdentifier:(id)arg1 ;


@end


#endif