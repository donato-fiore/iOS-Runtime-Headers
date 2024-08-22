// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTBILLPAYMENTPAYINTERESTDESCRIPTIONVIEW_H
#define PKACCOUNTBILLPAYMENTPAYINTERESTDESCRIPTIONVIEW_H

@class UIView, UILabel, UITextView, NSDateFormatter, PKAccount, NSNumberFormatter, NSString, NSDate, NSDecimalNumber;
@protocol UITextViewDelegate, PKAccountBillPaymentPayInterestDescriptionViewDelegate;



@interface PKAccountBillPaymentPayInterestDescriptionView : UIView <UITextViewDelegate>

 {
    UILabel *_estimatedChargeLabel;
    UITextView *_cancellationView;
    UILabel *_interestLabel;
    NSDateFormatter *_productDateFormatter;
    NSDateFormatter *_localDateFormatter;
    NSDateFormatter *_localTimeFormatter;
    PKAccount *_account;
    NSNumberFormatter *_amountFormatter;
    NSString *_learnMoreString;
    NSDate *_cancellationDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAccountBillPaymentPayInterestDescriptionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDecimalNumber *interest; // ivar: _interest
@property (copy, nonatomic) NSDate *interestChargeDate; // ivar: _interestChargeDate
@property (copy, nonatomic) NSDate *selectedPaymentDate; // ivar: _selectedPaymentDate
@property (readonly) Class superclass;


-(BOOL)_showInterest;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_learnMoreAttributedStringWithText:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateLabels;
-(void)layoutSubviews;


@end


#endif