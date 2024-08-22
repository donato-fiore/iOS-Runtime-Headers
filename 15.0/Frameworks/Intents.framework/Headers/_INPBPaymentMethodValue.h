// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBPAYMENTMETHODVALUE_H
#define _INPBPAYMENTMETHODVALUE_H

@class PBCodable, NSString;
@protocol _INPBPaymentMethodValue, NSSecureCoding, NSCopying;


#import "_INPBImageValue.h"
#import "_INPBValueMetadata.h"

@interface _INPBPaymentMethodValue : PBCodable <_INPBPaymentMethodValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIcon;
@property (readonly, nonatomic) BOOL hasIdentificationHint;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBImageValue *icon; // ivar: _icon
@property (copy, nonatomic) NSString *identificationHint; // ivar: _identificationHint
@property (copy, nonatomic) NSString *name; // ivar: _name
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