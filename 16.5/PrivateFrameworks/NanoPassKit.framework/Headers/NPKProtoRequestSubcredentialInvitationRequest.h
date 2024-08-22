// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOREQUESTSUBCREDENTIALINVITATIONREQUEST_H
#define NPKPROTOREQUESTSUBCREDENTIALINVITATIONREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface NPKProtoRequestSubcredentialInvitationRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasInvitationData;
@property (retain, nonatomic) NSData *invitationData; // ivar: _invitationData


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