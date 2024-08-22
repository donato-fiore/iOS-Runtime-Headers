// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSEMANTIC_H
#define PKPASSSEMANTIC_H

@class NSDate, NSArray, NSString, NSNumber, NSPersonNameComponents;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKLocation.h"

@interface PKPassSemantic : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKCurrencyAmount *currencyAmountValue; // ivar: _currencyAmountValue
@property (retain, nonatomic) NSDate *dateValue; // ivar: _dateValue
@property (retain, nonatomic) NSArray *dictionariesValue; // ivar: _dictionariesValue
@property (copy, nonatomic) NSString *fieldKey; // ivar: _fieldKey
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) PKLocation *locationValue; // ivar: _locationValue
@property (retain, nonatomic) NSNumber *numberValue; // ivar: _numberValue
@property (retain, nonatomic) NSPersonNameComponents *personNameComponentsValue; // ivar: _personNameComponentsValue
@property (copy, nonatomic) NSString *semanticKey; // ivar: _semanticKey
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (retain, nonatomic) NSArray *stringsValue; // ivar: _stringsValue


+(BOOL)isSupportedDictionaryKeyType:(id)arg0 ;
+(BOOL)isSupportedDictionaryValueType:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_supportedDictionaryValueTypes;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif