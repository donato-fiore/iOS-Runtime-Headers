// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV9PASSKITUI23ENTERCURRENCYAMOUNTVIEW11COORDINATOR_H
#define _TTCV9PASSKITUI23ENTERCURRENCYAMOUNTVIEW11COORDINATOR_H

@protocol PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PassKitUI23EnterCurrencyAmountView11Coordinator : NSObject <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate>

 {
    ? _nextDisabled;
    ? _amount;
    ? _amountGuide;
    ? _amountGuideColor;
    ? currencyCode;
    ? currentBalance;
    ? availableBalance;
    ? minLoadAmount;
    ? maxLoadAmount;
    ? fundsActionType;
    ? view;
    ? keypadSuggestionSelected;
}




-(BOOL)enterCurrencyAmountView:(id)arg0 shouldChangeAmountFrom:(id)arg1 to:(id)arg2 ;
-(id)init;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg0 ;
-(void)numberPadSuggestionsView:(id)arg0 didSelectSuggestion:(id)arg1 ;


@end


#endif