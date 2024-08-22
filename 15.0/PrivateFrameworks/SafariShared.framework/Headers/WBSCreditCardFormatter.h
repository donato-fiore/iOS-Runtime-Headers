// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCREDITCARDFORMATTER_H
#define WBSCREDITCARDFORMATTER_H

@class NSFormatter;



@interface WBSCreditCardFormatter : NSFormatter

@property (nonatomic) BOOL allowsUnknownCardTypes; // ivar: _allowsUnknownCardTypes
@property (nonatomic) BOOL isVirtualCard; // ivar: _isVirtualCard
@property (nonatomic) BOOL showCreditCardNumber; // ivar: _showCreditCardNumber
@property (nonatomic) BOOL showLastFourDigits; // ivar: _showLastFourDigits


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isPartialStringValid:(*id)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(id)arg2 originalSelectedRange:(struct _NSRange )arg3 errorDescription:(*id)arg4 ;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;
-(id)_formattedStringForNormalizedNumber:(id)arg0 showCreditCardNumber:(BOOL)arg1 ;
-(id)stringForObjectValue:(id)arg0 ;
-(struct _NSRange )_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg0 withOriginalSelectionRange:(struct _NSRange )arg1 ;
-(struct _NSRange )_selectionRangeInFormattedCreditCardNumber:(id)arg0 forNormalizedSelectionRange:(struct _NSRange )arg1 inNormalizedCreditCardNumber:(id)arg2 ;


@end


#endif