// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBPRICERANGEVALUE_H
#define _INPBPRICERANGEVALUE_H

@class PBCodable, NSString;
@protocol _INPBPriceRangeValue, NSSecureCoding, NSCopying;


#import "_INPBDecimalNumberValue.h"
#import "_INPBValueMetadata.h"

@interface _INPBPriceRangeValue : PBCodable <_INPBPriceRangeValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (readonly, nonatomic) BOOL hasMaximumPrice;
@property (readonly, nonatomic) BOOL hasMinimumPrice;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDecimalNumberValue *maximumPrice; // ivar: _maximumPrice
@property (retain, nonatomic) _INPBDecimalNumberValue *minimumPrice; // ivar: _minimumPrice
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