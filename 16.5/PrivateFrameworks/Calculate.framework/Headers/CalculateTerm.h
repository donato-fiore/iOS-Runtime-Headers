// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCULATETERM_H
#define CALCULATETERM_H

@class NSString, NSArray, NSNumber;

#import <Foundation/Foundation.h>

#import "CalculateUnit.h"
#import "CalculateResult.h"

@interface CalculateTerm : NSObject

@property (nonatomic) ? decimalValue; // ivar: _decimalValue
@property (readonly, nonatomic) NSString *formattedResult;
@property (readonly, nonatomic) NSString *formattedUnit;
@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) CalculateUnit *primaryUnit;
@property (weak, nonatomic) CalculateResult *result; // ivar: _result
@property (readonly, nonatomic) NSArray *units; // ivar: _units
@property (readonly, nonatomic) NSNumber *value; // ivar: _value


+(id)termWithValue:(id)arg0 units:(id)arg1 result:(id)arg2 ;
-(BOOL)isCurrency;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)emptyNumeratorString;
-(id)formattedUnitReplacingFirstNumerator:(id)arg0 ;
-(id)init;
-(id)locale;
-(id)numberFormatter;
-(void)getMaximumFractionDigits:(*NSUInteger)arg0 minimumFractionDigits:(*NSUInteger)arg1 ;
-(void)getMaximumFractionDigits:(*NSUInteger)arg0 minimumFractionDigits:(*NSUInteger)arg1 forValue:(struct ? )arg2 ;


@end


#endif