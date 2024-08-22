// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKNUMERICSUGGESTIONSENTERVALUEALGORITHM_H
#define PKNUMERICSUGGESTIONSENTERVALUEALGORITHM_H

@class NSDecimalNumberHandler, NSArray, NSDecimalNumber, NSString;


#import "PKNumericSuggestionsAlgorithm.h"
#import "PKNumericSuggestionLastInput.h"

@interface PKNumericSuggestionsEnterValueAlgorithm : PKNumericSuggestionsAlgorithm {
    NSDecimalNumberHandler *_roundingBehavior;
    NSArray *_valuesToDefaults;
    NSArray *_defaultSuggestions;
    PKNumericSuggestionLastInput *_lastInput;
    BOOL _useBuiltInDefaults;
}


@property (copy, nonatomic) NSDecimalNumber *cardBalance; // ivar: _cardBalance
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) NSInteger decimalPrecision; // ivar: _decimalPrecision
@property (copy, nonatomic) NSArray *defaultValues; // ivar: _defaultValues
@property (readonly, nonatomic) BOOL hasValidDefaultSuggestions; // ivar: _hasValidDefaultSuggestions
@property (copy, nonatomic) NSDecimalNumber *maxBalance; // ivar: _maxBalance
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount; // ivar: _maxLoadAmount
@property (copy, nonatomic) NSDecimalNumber *minBalance; // ivar: _minBalance
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount; // ivar: _minLoadAmount
@property (nonatomic) NSUInteger powerOfTenFactor; // ivar: _powerOfTenFactor


-(BOOL)_amountIsValid:(id)arg0 ;
-(BOOL)_lastInputExistsInGeneratedSuggestions:(id)arg0 withLastInput:(id)arg1 ;
-(BOOL)_possibleAmountIsValidWithDefaultValue:(id)arg0 amount:(id)arg1 ;
-(BOOL)_useMaximumAmountSuggestionWithAmount:(id)arg0 ;
-(id)_generateDefaultSuggestions;
-(id)_generateValuesToDefaults;
-(id)_maxAmountSuggestion;
-(id)_possibleValueForAmount:(id)arg0 ;
-(id)_useMaxAmountSuggestion;
-(id)init;
-(id)initWithLastInput:(id)arg0 ;
-(id)suggestionsWithAmount:(id)arg0 ;
-(void)_generateCalculatedSuggestions;
-(void)setUseBuiltInDefaults:(BOOL)arg0 ;


@end


#endif