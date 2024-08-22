// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKPROTOSTANDALONEACCOUNTIDENTITY_H
#define NNMKPROTOSTANDALONEACCOUNTIDENTITY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NNMKProtoStandaloneAccountIdentity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasIdentityType;
@property (readonly, nonatomic) BOOL hasRefreshToken;
@property (readonly, nonatomic) BOOL hasToken;
@property (readonly, nonatomic) BOOL hasUsername;
@property (nonatomic) unsigned int identityType; // ivar: _identityType
@property (retain, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (retain, nonatomic) NSString *token; // ivar: _token
@property (retain, nonatomic) NSString *username; // ivar: _username


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