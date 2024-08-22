// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBRIDEFARELINEITEM_H
#define _INPBRIDEFARELINEITEM_H

@class PBCodable, NSString;
@protocol _INPBRideFareLineItem, NSSecureCoding, NSCopying;


#import "_INPBDecimalNumberValue.h"

@interface _INPBRideFareLineItem : PBCodable <_INPBRideFareLineItem, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (readonly, nonatomic) BOOL hasPrice;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDecimalNumberValue *price; // ivar: _price
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


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