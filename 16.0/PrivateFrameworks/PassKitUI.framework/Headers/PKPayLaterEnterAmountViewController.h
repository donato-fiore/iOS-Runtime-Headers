// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERENTERAMOUNTVIEWCONTROLLER_H
#define PKPAYLATERENTERAMOUNTVIEWCONTROLLER_H

@class UIViewController, UIScrollView, UILabel, PKAccount, NSDecimalNumber, NSString, UIBarButtonItem, UIActivityIndicatorView, PKCurrencyAmount;
@protocol PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, _PKUIKVisibilityBackdropViewDelegate, UIScrollViewDelegate;


#import "_PKUIKVisibilityBackdropView.h"
#import "PKEnterCurrencyAmountView.h"

@interface PKPayLaterEnterAmountViewController : UIViewController <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, _PKUIKVisibilityBackdropViewDelegate, UIScrollViewDelegate>

 {
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PKAccount *_payLaterAccount;
    NSDecimalNumber *_amount;
    NSString *_currency;
    _PKUIKVisibilityBackdropView *_backdropView;
    PKEnterCurrencyAmountView *_enterAmountView;
    UILabel *_amountDetailsLabel;
    UIBarButtonItem *_spinningItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _showingSpinner;
    BOOL _wasBackHidden;
    BOOL _keyboardVisible;
    CGRect _keyboardFrame;
    CGRect _lastKeyboardFrame;
    CGRect _lastSeenValidBounds;
    unsigned char _visibility;
}


@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDecimalNumber *maxAllowedAmount; // ivar: _maxAllowedAmount
@property (retain, nonatomic) NSDecimalNumber *minAllowedAmount; // ivar: _minAllowedAmount
@property (readonly) Class superclass;


-(BOOL)_isCurrentAmountValid;
-(BOOL)_shouldShakeWithNewAmount:(id)arg0 ;
-(BOOL)enterCurrencyAmountView:(id)arg0 shouldChangeAmountFrom:(id)arg1 to:(id)arg2 ;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(id)headerSubtitle;
-(id)headerTitle;
-(id)initWithPayLaterAccount:(id)arg0 ;
-(id)keypadSuggestions;
-(void)_calculateBlur;
-(void)_keyboardWillChange:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)_updateAmount:(id)arg0 ;
-(void)_updateBarButtonEnabledState;
-(void)_updateLayoutForKeyboardAction:(id)arg0 ;
-(void)currencyAmountUpdated:(id)arg0 ;
-(void)dealloc;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg0 ;
-(void)loadView;
-(void)nextButtonTapped;
-(void)numberPadSuggestionsView:(id)arg0 didSelectSuggestion:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setAmountDetailsText:(id)arg0 ;
-(void)showNavigationBarSpinner:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif