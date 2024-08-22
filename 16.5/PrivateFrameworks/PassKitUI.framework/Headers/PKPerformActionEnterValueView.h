// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPERFORMACTIONENTERVALUEVIEW_H
#define PKPERFORMACTIONENTERVALUEVIEW_H

@class UIView, PKPass, PKPaymentPassAction, PKNumericSuggestionsEnterValueAlgorithm, PKNumericSuggestionLastInput, PKTransitPassProperties, NSDecimalNumber, PKPeerPaymentService, PKPeerPaymentAccount, UITextField, NSString;
@protocol PKNumberPadSuggestionsViewDelegate, UITextFieldDelegate, PKPaymentDataProviderDelegate, PKEnterCurrencyAmountViewDelegate, PKPerformActionView, PKPaymentDataProvider, PKPerformActionViewDelegate;


#import "PKEnterCurrencyAmountView.h"
#import "PKEnterValueNewBalanceView.h"
#import "PKNumberPadSuggestionsView.h"

@interface PKPerformActionEnterValueView : UIView <PKNumberPadSuggestionsViewDelegate, UITextFieldDelegate, PKPaymentDataProviderDelegate, PKEnterCurrencyAmountViewDelegate, PKPerformActionView>

 {
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    PKEnterValueNewBalanceView *_newBalanceView;
    PKNumberPadSuggestionsView *_suggestionView;
    PKPass *_pass;
    PKPaymentPassAction *_action;
    PKNumericSuggestionsEnterValueAlgorithm *_suggestionGenerator;
    PKNumericSuggestionLastInput *_lastInput;
    PKTransitPassProperties *_transitProperties;
    NSDecimalNumber *_currentAmount;
    id<PKPaymentDataProvider> *_paymentServiceDataProvider;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_peerPaymentAccount;
}


@property (readonly, nonatomic) UITextField *amountTextField;
@property (copy, nonatomic) NSDecimalNumber *cardBalance; // ivar: _cardBalance
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPerformActionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount; // ivar: _maxLoadAmount
@property (copy, nonatomic) NSDecimalNumber *maxLoadedBalance; // ivar: _maxLoadedBalance
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount; // ivar: _minLoadAmount
@property (copy, nonatomic) NSDecimalNumber *minLoadedBalance; // ivar: _minLoadedBalance
@property (readonly) Class superclass;


-(BOOL)_isCurrentAmountValid;
-(BOOL)_shouldShakeCard:(id)arg0 ;
-(BOOL)enterCurrencyAmountView:(id)arg0 shouldChangeAmountFrom:(id)arg1 to:(id)arg2 ;
-(CGFloat)_amountTopPadding;
-(id)init;
-(id)initWithPass:(id)arg0 action:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)pass;
-(id)transactionAmount;
-(id)transactionCurrency;
-(void)_createSubviews;
-(void)_currentAmountDidChangeTo:(id)arg0 shouldGenerateNewSuggestions:(BOOL)arg1 ;
-(void)_peerPaymentAccountChanged:(id)arg0 ;
-(void)_readCurrentBalance;
-(void)_updateCurrentAmount:(id)arg0 shouldGenerateNewSuggestions:(BOOL)arg1 ;
-(void)_updateCurrentBalanceWithUpdatedTransitProperties;
-(void)_updatePeerPaymentAccount;
-(void)dealloc;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg0 ;
-(void)fetchServiceProviderDataWithCompletion:(id)arg0 ;
-(void)layoutSubviews;
-(void)numberPadSuggestionsView:(id)arg0 didSelectSuggestion:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)saveLastInputValues;
-(void)setMinBalance:(id)arg0 ;
-(void)willDismissViewController;


@end


#endif