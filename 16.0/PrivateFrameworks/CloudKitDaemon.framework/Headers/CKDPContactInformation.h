// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCONTACTINFORMATION_H
#define CKDPCONTACTINFORMATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CKDPContactInformation : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *containerScopedUserId; // ivar: _containerScopedUserId
@property (retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) BOOL hasContainerScopedUserId;
@property (readonly, nonatomic) BOOL hasEmailAddress;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


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