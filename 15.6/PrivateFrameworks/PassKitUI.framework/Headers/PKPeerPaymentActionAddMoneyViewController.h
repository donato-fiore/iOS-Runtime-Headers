// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTACTIONADDMONEYVIEWCONTROLLER_H
#define PKPEERPAYMENTACTIONADDMONEYVIEWCONTROLLER_H

@class PKNumericSuggestionsEnterValueAlgorithm, UIScrollView, NSString;
@protocol PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPeerPaymentActionControllerDelegate, PKEnterCurrencyAmountPassViewDelegate;


#import "PKPeerPaymentActionViewController.h"
#import "PKNumberPadSuggestionsView.h"
#import "PKEnterCurrencyAmountPassView.h"

@interface PKPeerPaymentActionAddMoneyViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPeerPaymentActionControllerDelegate, PKEnterCurrencyAmountPassViewDelegate>

 {
    PKNumericSuggestionsEnterValueAlgorithm *_suggestionGenerator;
    PKNumberPadSuggestionsView *_suggestionView;
    UIScrollView *_scrollView;
    PKEnterCurrencyAmountPassView *_amountPassView;
    BOOL _keyboardVisible;
    CGRect _keyboardFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isCurrentAmountValid;
-(BOOL)_shouldShakeCard:(id)arg0 ;
-(BOOL)enterCurrencyAmountView:(id)arg0 shouldChangeAmountFrom:(id)arg1 to:(id)arg2 ;
-(id)_addBarButton;
-(id)_spinnerBarButton;
-(id)initWithPaymentPass:(id)arg0 webService:(id)arg1 passLibraryDataProvider:(id)arg2 context:(NSInteger)arg3 ;
-(void)_addBarButtonPressed:(id)arg0 ;
-(void)_currentAmountDidChangeTo:(id)arg0 shouldGenerateNewSuggestions:(BOOL)arg1 ;
-(void)_showNavigationBarSpinner:(BOOL)arg0 ;
-(void)_updateBarButtonEnabledState;
-(void)_updateCurrentAmount:(id)arg0 shouldGenerateNewSuggestions:(BOOL)arg1 ;
-(void)_updateLayoutForKeyboardAction:(id)arg0 ;
-(void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg0 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg0 ;
-(void)keyboardWillChange:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadView;
-(void)numberPadSuggestionsView:(id)arg0 didSelectSuggestion:(id)arg1 ;
-(void)peerPaymentActionController:(id)arg0 hasChangedState:(NSUInteger)arg1 ;
-(void)setCardBalance:(id)arg0 ;
-(void)setMaxBalance:(id)arg0 ;
-(void)setMaxLoadAmount:(id)arg0 ;
-(void)setMinBalance:(id)arg0 ;
-(void)setMinLoadAmount:(id)arg0 ;
-(void)updateAccountValues;
-(void)updateFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)willDismissViewController;


@end


#endif