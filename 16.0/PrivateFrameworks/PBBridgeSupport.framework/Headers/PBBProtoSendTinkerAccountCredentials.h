// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBBPROTOSENDTINKERACCOUNTCREDENTIALS_H
#define PBBPROTOSENDTINKERACCOUNTCREDENTIALS_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface PBBProtoSendTinkerAccountCredentials : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *acceptedTermsData; // ivar: _acceptedTermsData
@property (readonly, nonatomic) BOOL hasAcceptedTermsData;
@property (readonly, nonatomic) BOOL hasPairingParentAltDSID;
@property (readonly, nonatomic) BOOL hasPairingParentAppleID;
@property (readonly, nonatomic) BOOL hasPassword;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *pairingParentAltDSID; // ivar: _pairingParentAltDSID
@property (retain, nonatomic) NSString *pairingParentAppleID; // ivar: _pairingParentAppleID
@property (retain, nonatomic) NSString *password; // ivar: _password
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