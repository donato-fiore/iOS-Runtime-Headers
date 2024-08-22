// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBDIALINGCONTACTVALUE_H
#define _INPBDIALINGCONTACTVALUE_H

@class PBCodable, NSString;
@protocol _INPBDialingContactValue, NSSecureCoding, NSCopying;


#import "_INPBContactValue.h"
#import "_INPBStringValue.h"

@interface _INPBDialingContactValue : PBCodable <_INPBDialingContactValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBContactValue *dialingContact; // ivar: _dialingContact
@property (retain, nonatomic) _INPBStringValue *dialingPhoneLabel; // ivar: _dialingPhoneLabel
@property (retain, nonatomic) _INPBStringValue *dialingPhoneNumber; // ivar: _dialingPhoneNumber
@property (readonly, nonatomic) BOOL hasDialingContact;
@property (readonly, nonatomic) BOOL hasDialingPhoneLabel;
@property (readonly, nonatomic) BOOL hasDialingPhoneNumber;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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