// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOCREATESHAREFORPARTIALSHAREINVITATIONREQUEST_H
#define NPKPROTOCREATESHAREFORPARTIALSHAREINVITATIONREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface NPKProtoCreateShareForPartialShareInvitationRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *authorizationData; // ivar: _authorizationData
@property (readonly, nonatomic) BOOL hasAuthorizationData;
@property (retain, nonatomic) NSData *inviteData; // ivar: _inviteData


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