// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPPURCHASEAMOUNTVIEW_H
#define PKPAYMENTSETUPPURCHASEAMOUNTVIEW_H

@class UIView, UIStackView, UITextField, NSLayoutConstraint, NSString, NSDecimalNumber, UILabel, PKPaymentSetupProduct, PKPaymentProvisioningMethodMetadata, PKNumericSuggestionsEnterValueAlgorithm, UIButton;
@protocol PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPaymentSetupPurchaseAmountViewDelegate;


#import "PKEnterCurrencyAmountView.h"
#import "PKNumberPadSuggestionsView.h"

@interface PKPaymentSetupPurchaseAmountView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate>

 {
    BOOL _transferButtonEnabled;
}


@property (retain, nonatomic) UIStackView *amountStackView; // ivar: _amountStackView
@property (readonly, nonatomic) UITextField *amountTextField;
@property (retain, nonatomic) NSLayoutConstraint *centeringConstraint; // ivar: _centeringConstraint
@property (retain, nonatomic) UIView *centeringView; // ivar: _centeringView
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (retain, nonatomic) NSDecimalNumber *currentAmount; // ivar: _currentAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGSize defaultKeyboardSize;
@property (weak, nonatomic) NSObject<PKPaymentSetupPurchaseAmountViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDecimalNumber *depositAmount; // ivar: _depositAmount
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayingBalanceErrorMessage; // ivar: _displayingBalanceErrorMessage
@property (retain, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView; // ivar: _enterCurrencyAmountView
@property (retain, nonatomic) NSLayoutConstraint *fixedConstraint; // ivar: _fixedConstraint
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDecimalNumber *maxLoadedBalance; // ivar: _maxLoadedBalance
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (copy, nonatomic) NSDecimalNumber *minLoadedBalance; // ivar: _minLoadedBalance
@property (copy, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (copy, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata; // ivar: _provisioningMethodMetadata
@property (nonatomic) BOOL showTransferButton; // ivar: _showTransferButton
@property (retain, nonatomic) PKNumericSuggestionsEnterValueAlgorithm *suggestionGenerator; // ivar: _suggestionGenerator
@property (retain, nonatomic) PKNumberPadSuggestionsView *suggestionView; // ivar: _suggestionView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *transferBalanceButton; // ivar: _transferBalanceButton
@property (nonatomic, getter=isTransferButtonEnabled) BOOL transferButtonEnabled;


-(BOOL)_isAmountValid:(id)arg0 ;
-(BOOL)_shouldShakeCard:(id)arg0 ;
-(BOOL)enterCurrencyAmountView:(id)arg0 shouldChangeAmountFrom:(id)arg1 to:(id)arg2 ;
-(CGFloat)_transferButtonBottomOffset;
-(id)_defaultSuggestions;
-(id)_defaultValues;
-(id)initWithProduct:(id)arg0 provisioningMethodMetadata:(id)arg1 showTransferButton:(BOOL)arg2 ;
-(void)_createConstraints;
-(void)_createSubviews;
-(void)_transferBalanceButtonTapped:(id)arg0 ;
-(void)_updateCurrentAmount:(id)arg0 ;
-(void)_updateMessageLabelForAmount:(id)arg0 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg0 ;
-(void)enterCurrencyAmountViewDidLayoutKeyboard:(id)arg0 ;
-(void)layoutSubviews;
-(void)numberPadSuggestionsView:(id)arg0 didSelectSuggestion:(id)arg1 ;
-(void)updateConstraints;


@end


#endif