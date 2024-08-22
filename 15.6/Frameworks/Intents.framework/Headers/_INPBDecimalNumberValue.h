// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBDECIMALNUMBERVALUE_H
#define _INPBDECIMALNUMBERVALUE_H

@class PBCodable, NSString;
@protocol _INPBDecimalNumberValue, NSSecureCoding, NSCopying;


#import "_INPBValueMetadata.h"

@interface _INPBDecimalNumberValue : PBCodable <_INPBDecimalNumberValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int exponent; // ivar: _exponent
@property (nonatomic) BOOL hasExponent;
@property (nonatomic) BOOL hasIsNegative;
@property (nonatomic) BOOL hasMantissa;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isNegative; // ivar: _isNegative
@property (nonatomic) NSUInteger mantissa; // ivar: _mantissa
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