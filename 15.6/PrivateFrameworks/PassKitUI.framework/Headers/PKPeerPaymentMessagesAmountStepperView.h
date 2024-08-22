// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTMESSAGESAMOUNTSTEPPERVIEW_H
#define PKPEERPAYMENTMESSAGESAMOUNTSTEPPERVIEW_H

@class UIView, UILabel, NSString, NSNumberFormatter, UITapGestureRecognizer, UILongPressGestureRecognizer, PKCurrencyAmount, NSDecimalNumber;
@protocol UIGestureRecognizerDelegate, OS_dispatch_source;


#import "PKPeerPaymentMessagesRoundedButton.h"

@interface PKPeerPaymentMessagesAmountStepperView : UIView <UIGestureRecognizerDelegate>

 {
    PKPeerPaymentMessagesRoundedButton *_plusButton;
    PKPeerPaymentMessagesRoundedButton *_minusButton;
    UIView *_centerView;
    UILabel *_amountLabel;
    UILabel *_showKeypadLabel;
    NSString *_amountString;
    NSString *_amountCurrency;
    NSNumberFormatter *_currencyFormatter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSObject<OS_dispatch_source> *_longPressTimer;
    BOOL _longPressTimerSuspended;
    BOOL _nextNumberPadActionCausesReset;
    BOOL _usesAccessibilityLayout;
}


@property (copy, nonatomic) PKCurrencyAmount *amount;
@property (copy, nonatomic) id *amountChangedHandler; // ivar: _amountChangedHandler
@property (copy, nonatomic) id *amountTappedHandler; // ivar: _amountTappedHandler
@property (nonatomic) BOOL canShowKeypad; // ivar: _canShowKeypad
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isKeypadVisible) BOOL keypadVisible; // ivar: _keypadVisible
@property (copy, nonatomic) NSDecimalNumber *maxAmount; // ivar: _maxAmount
@property (copy, nonatomic) NSDecimalNumber *minAmount; // ivar: _minAmount
@property (readonly) Class superclass;
@property (nonatomic) BOOL usedKeypad; // ivar: _usedKeypad


+(struct CGSize )referenceSize;
-(BOOL)_isCompactUI;
-(BOOL)_plusAndMinusVisible;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)_decimalNumberFromPosixString:(id)arg0 ;
-(id)_posixFormatter;
-(id)_posixLocale;
-(id)_posixStringFromDecimalNumber:(id)arg0 ;
-(id)_stringForAction:(NSUInteger)arg0 ;
-(id)_updatePosixString:(id)arg0 withAction:(NSUInteger)arg1 maxDigits:(NSUInteger)arg2 maxDecimalPlaces:(NSUInteger)arg3 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cleanupPosixString;
-(void)_decrementAmount;
-(void)_handleLongPress:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_incrementAmount;
-(void)_shakeAmountLabel;
-(void)_updateContent;
-(void)dealloc;
-(void)handleNumberPadAction:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)setPlusAndMinusVisible:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)validateNumberPadInput;


@end


#endif