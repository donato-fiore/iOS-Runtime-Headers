// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOPROVISIONPASSFORREMOTECREDENTIALWITHTYPEANDIDENTIFIERREQUEST_H
#define NPKPROTOPROVISIONPASSFORREMOTECREDENTIALWITHTYPEANDIDENTIFIERREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NPKProtoProvisionPassForRemoteCredentialWithTypeAndIdentifierRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (nonatomic) NSInteger credentialType; // ivar: _credentialType
@property (readonly, nonatomic) BOOL hasCredentialIdentifier;


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