// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTBILLPAYMENTAMOUNTDESCRIPTIONVIEW_H
#define PKACCOUNTBILLPAYMENTAMOUNTDESCRIPTIONVIEW_H

@class UIView, UILabel, UITextView, NSDecimalNumber, NSString, PKBillPaymentSuggestedAmountList, PKAccount;
@protocol PKNumberPadSuggestionsViewDelegate, UITextViewDelegate, PKEnterCurrencyAmountViewDelegate, PKAccountBillPaymentAmountDescriptionViewDelegate;


#import "PKNumberPadSuggestionsView.h"
#import "PKAccountServiceAccountResolutionCofiguration.h"
#import "PKAccountBillPaymentAmountContainerView.h"

@interface PKAccountBillPaymentAmountDescriptionView : UIView <PKNumberPadSuggestionsViewDelegate, UITextViewDelegate, PKEnterCurrencyAmountViewDelegate>

 {
    UILabel *_suggestedAmountTitleLabel;
    UITextView *_suggestedAmountDescriptionView;
    PKNumberPadSuggestionsView *_suggestionView;
    NSDecimalNumber *_enteredAmount;
    NSString *_learnMoreString;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    PKAccount *_account;
    PKAccountServiceAccountResolutionCofiguration *_configuration;
}


@property (copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, nonatomic) PKAccountBillPaymentAmountContainerView *amountContainerView; // ivar: _amountContainerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAccountBillPaymentAmountDescriptionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDecimalNumber *maximumAmount; // ivar: _maximumAmount
@property (copy, nonatomic) NSDecimalNumber *minimumAmount; // ivar: _minimumAmount
@property (nonatomic) BOOL showAmount;
@property (nonatomic) BOOL showDescriptionLabels; // ivar: _showDescriptionLabels
@property (nonatomic) BOOL showDescriptionSubtitle; // ivar: _showDescriptionSubtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(BOOL)_isEnteredAmountValid;
-(BOOL)_shouldShakeWithNewAmount:(id)arg0 ;
-(BOOL)enterCurrencyAmountView:(id)arg0 shouldChangeAmountFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_keypadSuggestions;
-(id)_sugestedAmountDescriptionAttributedString;
-(id)initWithSuggestedAmountList:(id)arg0 account:(id)arg1 configuration:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_enteredAmountDidChangeTo:(id)arg0 ;
-(void)_updateDescriptionAlpha;
-(void)_updateEnteredAmount:(id)arg0 ;
-(void)dismissKeyboard;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg0 ;
-(void)layoutSubviews;
-(void)numberPadSuggestionsView:(id)arg0 didSelectSuggestion:(id)arg1 ;
-(void)showKeyboard;


@end


#endif