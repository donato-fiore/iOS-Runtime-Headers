// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOACCEPTSUBCREDENTIALINVITATIONWITHIDENTIFIERREQUEST_H
#define NPKPROTOACCEPTSUBCREDENTIALINVITATIONWITHIDENTIFIERREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoAcceptSubcredentialInvitationWithIdentifierRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasInvitationIdentifier;
@property (readonly, nonatomic) BOOL hasMetadataData;
@property (retain, nonatomic) NSString *invitationIdentifier; // ivar: _invitationIdentifier
@property (retain, nonatomic) NSData *metadataData; // ivar: _metadataData


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