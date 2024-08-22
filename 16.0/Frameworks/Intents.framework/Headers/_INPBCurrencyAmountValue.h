// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCURRENCYAMOUNTVALUE_H
#define _INPBCURRENCYAMOUNTVALUE_H

@class PBCodable, NSString;
@protocol _INPBCurrencyAmountValue, NSSecureCoding, NSCopying;


#import "_INPBDecimalNumberValue.h"
#import "_INPBValueMetadata.h"

@interface _INPBCurrencyAmountValue : PBCodable <_INPBCurrencyAmountValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDecimalNumberValue *amount; // ivar: _amount
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAmount;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif