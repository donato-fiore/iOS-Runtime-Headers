// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCULATERESULT_H
#define CALCULATERESULT_H

@class NSArray, NSString, NSNumberFormatter;

#import <Foundation/Foundation.h>

#import "CalculateResult.h"
#import "UnitTypeInfo.h"
#import "UnitsInfo.h"

@interface CalculateResult : NSObject

@property (nonatomic) BOOL autoScientificNotation; // ivar: _autoScientificNotation
@property (readonly, nonatomic) NSArray *conversions; // ivar: _conversions
@property (readonly, nonatomic) NSString *expression; // ivar: _expression
@property (nonatomic) BOOL flexibleFractionDigits; // ivar: _flexibleFractionDigits
@property (readonly, nonatomic) NSString *formattedExpression;
@property (readonly, nonatomic) NSString *formattedResult;
@property (readonly, nonatomic) BOOL hasStaleCurrencyData; // ivar: _hasStaleCurrencyData
@property (readonly, nonatomic) CalculateResult *inputValueAndUnit; // ivar: _inputValueAndUnit
@property (readonly, nonatomic) BOOL isTrivial; // ivar: _isTrivial
@property (retain, nonatomic) NSArray *locales; // ivar: _locales
@property (nonatomic) BOOL localizeUnit; // ivar: _localizeUnit
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (weak, nonatomic) CalculateResult *parent; // ivar: _parent
@property (nonatomic) *TreeObject parseTree; // ivar: _parseTree
@property (nonatomic) *TreeObject resultTree; // ivar: _resultTree
@property (nonatomic) int singleUnitID; // ivar: _singleUnitID
@property (nonatomic) BOOL synchronous; // ivar: _synchronous
@property (readonly, nonatomic) NSArray *terms; // ivar: _terms
@property (retain, nonatomic) UnitTypeInfo *typeInfo; // ivar: _typeInfo
@property (readonly, nonatomic) int unitExponent; // ivar: _unitExponent
@property (nonatomic) NSUInteger unitFormat; // ivar: _unitFormat
@property (readonly, nonatomic) NSUInteger unitType; // ivar: _unitType
@property (retain, nonatomic) UnitsInfo *unitsInfo; // ivar: _unitsInfo


+(?)resultWithResultTree:(?)arg0 parseTree:(?)arg1 locales:(?)arg2 numberFormatter:(?)arg3 unitsInfo:(?)arg4 unitType:(?)arg5 unitExponent:(?)arg6 expression:(?)arg7 isTrivial:(?)arg8 localizeUnit:(?)arg9 unitFormat:(?)arg10 autoScientificNotation:(?)arg11 flexibleFractionDigitshasStaleCurrencyData;
+(id)decimalNumberWithDecimal128:(struct ? )arg0 ;
+(id)defaultNumberFormatter;
+(void)preferMeasurementSystemsForLocale:(id)arg0 preferred:(*NSUInteger)arg1 fallback:(*NSUInteger)arg2 ;
-(?)convertedTreeneedsUpdate;
-(?)isAcceptableConversion;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)availableConversions;
-(id)bestConversion;
-(id)conversionsForMetric:(BOOL)arg0 US:(BOOL)arg1 UK:(BOOL)arg2 ;
-(id)convertedTo:(id)arg0 ;
-(id)description;
-(id)init;
-(id)localizedConversions;
-(id)newUnit:(id)arg0 ;
-(void)dealloc;
-(void)enableMeasurementSystemsForLocale:(id)arg0 metric:(*BOOL)arg1 US:(*BOOL)arg2 UK:(*BOOL)arg3 ;


@end


#endif