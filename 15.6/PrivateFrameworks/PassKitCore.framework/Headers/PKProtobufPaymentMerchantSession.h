// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFPAYMENTMERCHANTSESSION_H
#define PKPROTOBUFPAYMENTMERCHANTSESSION_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *ampEnrollmentPinning; // ivar: _ampEnrollmentPinning
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) NSUInteger epochTimestamp; // ivar: _epochTimestamp
@property (nonatomic) NSUInteger expiresAt; // ivar: _expiresAt
@property (readonly, nonatomic) BOOL hasAmpEnrollmentPinning;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasEpochTimestamp;
@property (nonatomic) BOOL hasExpiresAt;
@property (readonly, nonatomic) BOOL hasInitiative;
@property (readonly, nonatomic) BOOL hasInitiativeContext;
@property (readonly, nonatomic) BOOL hasMerchantIdentifier;
@property (readonly, nonatomic) BOOL hasNonce;
@property (readonly, nonatomic) BOOL hasOperationalAnalyticsIdentifier;
@property (readonly, nonatomic) BOOL hasRetryNonce;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSString *initiative; // ivar: _initiative
@property (retain, nonatomic) NSString *initiativeContext; // ivar: _initiativeContext
@property (retain, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (retain, nonatomic) NSString *operationalAnalyticsIdentifier; // ivar: _operationalAnalyticsIdentifier
@property (retain, nonatomic) NSString *retryNonce; // ivar: _retryNonce
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (retain, nonatomic) NSMutableArray *signedFields; // ivar: _signedFields


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)signedFieldsAtIndex:(NSUInteger)arg0 ;
-(void)addSignedFields:(id)arg0 ;
-(void)clearSignedFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif