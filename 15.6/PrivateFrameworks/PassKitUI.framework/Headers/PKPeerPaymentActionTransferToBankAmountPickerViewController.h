// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTACTIONTRANSFERTOBANKAMOUNTPICKERVIEWCONTROLLER_H
#define PKPEERPAYMENTACTIONTRANSFERTOBANKAMOUNTPICKERVIEWCONTROLLER_H

@class UIScrollView, NSString;
@protocol PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate, PKEnterCurrencyAmountPassViewDelegate;


#import "PKPeerPaymentActionViewController.h"
#import "PKEnterCurrencyAmountPassView.h"

@interface PKPeerPaymentActionTransferToBankAmountPickerViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate, PKEnterCurrencyAmountPassViewDelegate>

 {
    UIScrollView *_scrollView;
    PKEnterCurrencyAmountPassView *_amountPassView;
    unsigned char _visibility;
    BOOL _keyboardVisible;
    CGRect _keyboardFrame;
    CGRect _lastKeyboardFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isCurrentAmountValid;
-(BOOL)_shouldShakeWithNewAmount:(id)arg0 ;
-(BOOL)enterCurrencyAmountView:(id)arg0 shouldChangeAmountFrom:(id)arg1 to:(id)arg2 ;
-(id)_nextBarButton;
-(id)initWithPaymentPass:(id)arg0 webService:(id)arg1 passLibraryDataProvider:(id)arg2 context:(NSInteger)arg3 ;
-(void)_currentAmountDidChangeTo:(id)arg0 shouldGenerateNewSuggestions:(BOOL)arg1 ;
-(void)_nextBarButtonPressed:(id)arg0 ;
-(void)_updateBarButtonEnabledState;
-(void)_updateCurrentAmount:(id)arg0 shouldGenerateNewSuggestions:(BOOL)arg1 ;
-(void)_updateLayoutForKeyboardAction:(id)arg0 ;
-(void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg0 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg0 ;
-(void)keyboardWillChange:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadView;
-(void)setCardBalance:(id)arg0 ;
-(void)setMaxBalance:(id)arg0 ;
-(void)setMaxLoadAmount:(id)arg0 ;
-(void)setMinBalance:(id)arg0 ;
-(void)setMinLoadAmount:(id)arg0 ;
-(void)updateAccountValues;
-(void)updateFirstResponder;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willDismissViewController;


@end


#endif