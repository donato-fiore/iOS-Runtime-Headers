// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCDPCODESERVICERESPONSEATTESTATIONRESPONSEATTESTATION_H
#define CKCDPCODESERVICERESPONSEATTESTATIONRESPONSEATTESTATION_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface CKCDPCodeServiceResponseAttestationResponseAttestation : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *appQuote; // ivar: _appQuote
@property (retain, nonatomic) NSData *aqeQuote; // ivar: _aqeQuote
@property (readonly, nonatomic) BOOL hasAppQuote;
@property (readonly, nonatomic) BOOL hasAqeQuote;
@property (readonly, nonatomic) BOOL hasPckCertificate;
@property (readonly, nonatomic) BOOL hasRoutingToken;
@property (retain, nonatomic) NSString *pckCertificate; // ivar: _pckCertificate
@property (retain, nonatomic) NSData *routingToken; // ivar: _routingToken


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