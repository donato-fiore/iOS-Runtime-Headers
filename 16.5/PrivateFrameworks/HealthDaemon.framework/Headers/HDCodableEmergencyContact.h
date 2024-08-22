// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEEMERGENCYCONTACT_H
#define HDCODABLEEMERGENCYCONTACT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCodableEmergencyContact : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasNameContactIdentifier;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (readonly, nonatomic) BOOL hasPhoneNumberContactIdentifier;
@property (readonly, nonatomic) BOOL hasPhoneNumberLabel;
@property (readonly, nonatomic) BOOL hasRelationship;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nameContactIdentifier; // ivar: _nameContactIdentifier
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) NSString *phoneNumberContactIdentifier; // ivar: _phoneNumberContactIdentifier
@property (retain, nonatomic) NSString *phoneNumberLabel; // ivar: _phoneNumberLabel
@property (retain, nonatomic) NSString *relationship; // ivar: _relationship


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif