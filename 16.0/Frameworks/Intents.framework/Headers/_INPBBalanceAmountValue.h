// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBBALANCEAMOUNTVALUE_H
#define _INPBBALANCEAMOUNTVALUE_H

@class PBCodable, NSString;
@protocol _INPBBalanceAmountValue, NSSecureCoding, NSCopying;


#import "_INPBCurrencyAmountValue.h"
#import "_INPBDecimalNumberValue.h"
#import "_INPBValueMetadata.h"

@interface _INPBBalanceAmountValue : PBCodable <_INPBBalanceAmountValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCurrencyAmountValue *currencyAmount; // ivar: _currencyAmount
@property (retain, nonatomic) _INPBDecimalNumberValue *customAmount; // ivar: _customAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCurrencyAmount;
@property (readonly, nonatomic) BOOL hasCustomAmount;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif