// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKNUMERICSUGGESTION_H
#define PKNUMERICSUGGESTION_H

@class NSString, NSDecimalNumber;

#import <Foundation/Foundation.h>


@interface PKNumericSuggestion : NSObject

@property (copy, nonatomic) NSString *displayValue; // ivar: _displayValue
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL usedMaximumSuggestion; // ivar: _usedMaximumSuggestion
@property (readonly, copy, nonatomic) NSDecimalNumber *value; // ivar: _value


+(id)suggestionWithTitle:(id)arg0 value:(id)arg1 currencyCode:(id)arg2 ;
+(id)suggestionWithValue:(id)arg0 currencyCode:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithTitle:(id)arg0 value:(id)arg1 currencyCode:(id)arg2 ;
-(id)initWithValue:(id)arg0 currencyCode:(id)arg1 ;


@end


#endif