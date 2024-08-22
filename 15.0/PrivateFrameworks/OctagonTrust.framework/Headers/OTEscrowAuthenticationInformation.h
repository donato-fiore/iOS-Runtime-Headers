// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OTESCROWAUTHENTICATIONINFORMATION_H
#define OTESCROWAUTHENTICATIONINFORMATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface OTEscrowAuthenticationInformation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *authenticationAppleid; // ivar: _authenticationAppleid
@property (retain, nonatomic) NSString *authenticationAuthToken; // ivar: _authenticationAuthToken
@property (retain, nonatomic) NSString *authenticationDsid; // ivar: _authenticationDsid
@property (retain, nonatomic) NSString *authenticationEscrowproxyUrl; // ivar: _authenticationEscrowproxyUrl
@property (retain, nonatomic) NSString *authenticationIcloudEnvironment; // ivar: _authenticationIcloudEnvironment
@property (retain, nonatomic) NSString *authenticationPassword; // ivar: _authenticationPassword
@property (nonatomic) BOOL fmipRecovery; // ivar: _fmipRecovery
@property (retain, nonatomic) NSString *fmipUuid; // ivar: _fmipUuid
@property (readonly, nonatomic) BOOL hasAuthenticationAppleid;
@property (readonly, nonatomic) BOOL hasAuthenticationAuthToken;
@property (readonly, nonatomic) BOOL hasAuthenticationDsid;
@property (readonly, nonatomic) BOOL hasAuthenticationEscrowproxyUrl;
@property (readonly, nonatomic) BOOL hasAuthenticationIcloudEnvironment;
@property (readonly, nonatomic) BOOL hasAuthenticationPassword;
@property (nonatomic) BOOL hasFmipRecovery;
@property (readonly, nonatomic) BOOL hasFmipUuid;
@property (nonatomic) BOOL hasIdmsRecovery;
@property (nonatomic) BOOL idmsRecovery; // ivar: _idmsRecovery


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