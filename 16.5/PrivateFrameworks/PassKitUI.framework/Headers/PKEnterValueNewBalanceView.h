// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKENTERVALUENEWBALANCEVIEW_H
#define PKENTERVALUENEWBALANCEVIEW_H

@class UIView, NSDecimalNumber, NSNumberFormatter, UILabel, UIActivityIndicatorView, UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, PKEnterValueNewBalanceViewDelegate;



@interface PKEnterValueNewBalanceView : UIView <UIGestureRecognizerDelegate>

 {
    NSDecimalNumber *_additionalAmount;
    BOOL _subtractAdditionalAmountFromCurrentAmount;
    BOOL _showSpinner;
    NSNumberFormatter *_currentAmountFormatter;
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
    UITapGestureRecognizer *_tapRecognizer;
}


@property (nonatomic) BOOL amountIsWithdrawal; // ivar: _amountIsWithdrawal
@property (copy, nonatomic) NSDecimalNumber *cardBalance; // ivar: _cardBalance
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKEnterValueNewBalanceViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDecimalNumber *maxBalance; // ivar: _maxBalance
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount; // ivar: _maxLoadAmount
@property (copy, nonatomic) NSString *maxLoadAmountText; // ivar: _maxLoadAmountText
@property (copy, nonatomic) NSDecimalNumber *minBalance; // ivar: _minBalance
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount; // ivar: _minLoadAmount
@property (copy, nonatomic) NSString *promptText; // ivar: _promptText
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *updatedBalancePromptText; // ivar: _updatedBalancePromptText


-(id)_minimalFormattedStringForAmount:(id)arg0 ;
-(id)_textForPrompt:(id)arg0 amount:(id)arg1 ;
-(id)init;
-(id)initWithCurrencyCode:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addSubviews;
-(void)_createAmountFormatter;
-(void)_updateAdditionalAmount:(id)arg0 subtractAdditionalAmountFromCurrentAmount:(BOOL)arg1 ;
-(void)_updateBalanceText;
-(void)addAmountToBalance:(id)arg0 ;
-(void)currentBalanceTapRecognized;
-(void)layoutSubviews;
-(void)showSpinner:(BOOL)arg0 ;
-(void)subtractAmountFromBalance:(id)arg0 ;


@end


#endif