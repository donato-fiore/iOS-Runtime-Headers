// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBBILLPAYEEVALUE_H
#define _INPBBILLPAYEEVALUE_H

@class PBCodable, NSString;
@protocol _INPBBillPayeeValue, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBValueMetadata.h"

@interface _INPBBillPayeeValue : PBCodable <_INPBBillPayeeValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccountNumber;
@property (readonly, nonatomic) BOOL hasNickname;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDataString *nickname; // ivar: _nickname
@property (retain, nonatomic) _INPBDataString *organizationName; // ivar: _organizationName
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