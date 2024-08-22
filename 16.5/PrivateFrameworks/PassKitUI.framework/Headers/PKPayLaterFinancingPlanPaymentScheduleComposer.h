// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSER_H
#define PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSER_H

@class UIFont;
@protocol PKPayLaterFinancingPlanPaymentScheduleComposerDelegate, PKPayLaterFinancingPlanPaymentScheduleComposerDataSource;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanPaymentScheduleComposer : NSObject {
    CGFloat _minimumCellHeight;
    UIFont *_font;
    id<PKPayLaterFinancingPlanPaymentScheduleComposerDelegate> *_delegate;
    id<PKPayLaterFinancingPlanPaymentScheduleComposerDataSource> *_dataSource;
}




+(NSUInteger)_scheduleComposerDetailTypeForPayment:(id)arg0 financingPlan:(id)arg1 ;
+(id)_detailTextForPaymentWithCreditRevokedType:(id)arg0 financingPlan:(id)arg1 ;
+(id)_detailTextForPaymentWithDisputeCreditType:(id)arg0 financingPlan:(id)arg1 ;
+(id)_detailTextForPaymentWithPaymentType:(id)arg0 financingPlan:(id)arg1 ;
+(id)_detailTextForPaymentWithRefundRevokedType:(id)arg0 financingPlan:(id)arg1 ;
+(id)_detailTextForPaymentWithRefundType:(id)arg0 financingPlan:(id)arg1 ;
+(id)_detailTextForPaymentWithTemporaryCreditType:(id)arg0 financingPlan:(id)arg1 ;
+(id)attributedStringWithText:(id)arg0 strikethrough:(BOOL)arg1 ;
+(id)detailTextForPayment:(id)arg0 financingPlan:(id)arg1 ;
+(id)mediumDateFormatter;
+(id)numberFormatter;
+(id)shortDateFormatter;
-(id)_commonRowWithRowIndex:(NSInteger)arg0 ;
-(id)_formRowsWithList:(id)arg0 financingPlan:(id)arg1 payLaterAccount:(id)arg2 ;
-(id)_paymentForItem:(id)arg0 ;
-(id)_selectionBlockForPayment:(SEL)arg0 financingPlan:(id)arg1 payLaterAccount:(id)arg2 ;
-(id)composeFinancingPlanPaymentScheduleLineItemsForPlan:(id)arg0 payLaterAccount:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 dataSource:(id)arg1 ;
-(void)_updateRowConnectorsForRows:(id)arg0 ;


@end


#endif