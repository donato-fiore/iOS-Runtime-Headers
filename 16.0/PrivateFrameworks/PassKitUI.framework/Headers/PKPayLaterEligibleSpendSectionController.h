// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERELIGIBLESPENDSECTIONCONTROLLER_H
#define PKPAYLATERELIGIBLESPENDSECTIONCONTROLLER_H

@class PKCurrencyAmount, NSDecimalNumber, NSDate, NSArray, NSNumberFormatter, NSDateFormatter;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterSetupFlowController.h"
#import "PKPayLaterButtonRow.h"

@interface PKPayLaterEligibleSpendSectionController : PKPayLaterSectionController {
    PKCurrencyAmount *_eligibleSpendAmount;
    NSDecimalNumber *_minAPR;
    NSDecimalNumber *_maxAPR;
    NSUInteger _financingOptionsProductType;
    NSDate *_expirationDate;
    NSArray *_financingOptions;
    NSNumberFormatter *_numberFormatter;
    PKPayLaterSetupFlowController *_payLaterSetupFlowController;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_percentageFormatter;
    PKPayLaterButtonRow *_newPurchaseButtonRow;
}




+(id)dynamicContentPageForBNPLOption:(id)arg0 ;
-(Class)headerViewClassForSectionIdentifier:(id)arg0 ;
-(id)_firstFinancingOptionSectionIdentifier;
-(id)_lastFinancingOptionSectionIdentifier;
-(id)_paymentScheduleRowsForOption:(id)arg0 ;
-(id)_tileDetailRowForOption:(id)arg0 ;
-(id)footerContentForSectionIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithPayLaterAccount:(id)arg0 dynamicContentPage:(id)arg1 viewControllerDelegate:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)listLayoutConfigurationWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureEligbleSpendSection:(id)arg0 ;
-(void)_configureFinancingOptionsSectionWithSectionIdentifier:(id)arg0 snapshot:(id)arg1 ;
-(void)_configureNewPurchaseSection:(id)arg0 ;
-(void)_configureTotalCostSection:(id)arg0 ;
-(void)_updateLocalState;
-(void)configureHeaderView:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)setPayLaterAccount:(id)arg0 ;


@end


#endif