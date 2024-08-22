// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERMAKEPAYMENTSECTIONCONTROLLER_H
#define PKPAYLATERMAKEPAYMENTSECTIONCONTROLLER_H

@class PKPayLaterFinancingPlan, NSNumberFormatter, NSDateFormatter, PKAccountWebServiceFinancingPlanPaymentIntentResponse;
@protocol PKPayLaterMakePaymentSectionControllerDelegate;


#import "PKPayLaterSectionController.h"

@interface PKPayLaterMakePaymentSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingPlan *_financingPlan;
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_mediumDateFormatter;
    NSUInteger _selectedItem;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
    id<PKPayLaterMakePaymentSectionControllerDelegate> *_delegate;
}




-(id)_amountForItemType:(NSUInteger)arg0 ;
-(id)_detailFont;
-(id)_detailTextColor;
-(id)_titleFont;
-(id)currentSelectedAmount;
-(id)footerContentForSectionIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithFinancingPlan:(id)arg0 payLaterAccount:(id)arg1 intentDetails:(id)arg2 dynamicContentPage:(id)arg3 delegate:(id)arg4 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureNextPaymentSection:(id)arg0 ;
-(void)_configureTotalPaymentSection:(id)arg0 ;
-(void)_updateSelectedItem:(NSUInteger)arg0 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;


@end


#endif