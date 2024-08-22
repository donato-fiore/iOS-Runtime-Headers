// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKENTERCURRENCYAMOUNTVIEW_H
#define PKENTERCURRENCYAMOUNTVIEW_H

@class UIView, UIColor, UIFont, NSNumberFormatter, UILabel, NSString, UITextField, NSDecimalNumber, NSNumber, NSDecimalNumberHandler;
@protocol UITextFieldDelegate, PKEnterCurrencyAmountViewDelegate;


#import "PKNumberPadInputView.h"

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate>

 {
    UIView *_internalInputAccessoryView;
    UIColor *_keyboardColor;
}


@property (copy, nonatomic) UIFont *amountFont; // ivar: _amountFont
@property (retain, nonatomic) NSNumberFormatter *amountFormatter; // ivar: _amountFormatter
@property (retain, nonatomic) UILabel *amountLabel; // ivar: _amountLabel
@property (copy, nonatomic) NSString *amountString; // ivar: _amountString
@property (readonly, nonatomic) UITextField *amountTextField; // ivar: _amountTextField
@property (nonatomic) BOOL clearAmountOnFirstKeyboardInput; // ivar: _clearAmountOnFirstKeyboardInput
@property (retain, nonatomic) NSString *currency; // ivar: _currency
@property (retain, nonatomic) NSNumberFormatter *currencySymbolAmountFormatter; // ivar: _currencySymbolAmountFormatter
@property (copy, nonatomic) UIFont *currencySymbolFont; // ivar: _currencySymbolFont
@property (retain, nonatomic) NSDecimalNumber *currentAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGSize defaultKeyboardSize;
@property (weak, nonatomic) NSObject<PKEnterCurrencyAmountViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreIntegralNumber; // ivar: _ignoreIntegralNumber
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (nonatomic) BOOL isFirstKeyboardInput; // ivar: _isFirstKeyboardInput
@property (copy, nonatomic) NSNumber *kerning; // ivar: _kerning
@property (copy, nonatomic) UIColor *keyboardColor;
@property (nonatomic) CGFloat labelScaleFactor; // ivar: _labelScaleFactor
@property (nonatomic) CGSize lastLayoutBoundsSize; // ivar: _lastLayoutBoundsSize
@property (retain, nonatomic) PKNumberPadInputView *numberPad; // ivar: _numberPad
@property (retain, nonatomic) NSDecimalNumberHandler *roundingBehavior; // ivar: _roundingBehavior
@property (nonatomic) BOOL showsDecimalPointButton; // ivar: _showsDecimalPointButton
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


+(id)_defaultTextColor;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(NSUInteger)_numberOfDecimalPlacesInString:(id)arg0 decimalSeperator:(id)arg1 ;
-(id)_decimalNumberFromString:(id)arg0 ;
-(id)_formatAmount:(id)arg0 minimumFractionDigits:(NSUInteger)arg1 ;
-(id)_formatAmountForDisplay:(id)arg0 alwaysShowDecimalSeparator:(BOOL)arg1 minimumFractionDigits:(NSUInteger)arg2 useGroupingSeparator:(BOOL)arg3 ;
-(id)initWithCurrency:(id)arg0 amount:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addSuperscriptToAttributedString:(id)arg0 formattedCurrencyAmount:(id)arg1 currencyAmountWithoutSymbols:(id)arg2 ;
-(void)_addSuperscriptToAttributedString:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)_createAmountFormatter;
-(void)_createSubviews;
-(void)_updateContent;
-(void)didMoveToWindow;
-(void)dismissKeyboard;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)showKeyboard;


@end


#endif