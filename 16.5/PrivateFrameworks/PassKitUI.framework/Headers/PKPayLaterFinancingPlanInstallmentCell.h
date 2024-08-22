// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANINSTALLMENTCELL_H
#define PKPAYLATERFINANCINGPLANINSTALLMENTCELL_H

@class PKPayLaterFinancingPlan, PKPayLaterInstallment, NSNumberFormatter;


#import "PKPayLaterIconCell.h"

@interface PKPayLaterFinancingPlanInstallmentCell : PKPayLaterIconCell {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    NSNumberFormatter *_numberFormatter;
}




-(void)prepareForReuse;
-(void)setFinancingPlan:(id)arg0 installment:(id)arg1 rowIndex:(NSInteger)arg2 paymentIntentController:(id)arg3 presentingViewController:(id)arg4 ;


@end


#endif