// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOGENERATEISOENCRYPTIONCERTIFICATEFORSUBCREDENTIALIDRESPONSE_H
#define NPKPROTOGENERATEISOENCRYPTIONCERTIFICATEFORSUBCREDENTIALIDRESPONSE_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface NPKProtoGenerateISOEncryptionCertificateForSubCredentialIdResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *attestations; // ivar: _attestations
@property (retain, nonatomic) NSData *authorization; // ivar: _authorization
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasAuthorization;
@property (readonly, nonatomic) BOOL hasErrorData;


+(Class)attestationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attestationAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAttestation:(id)arg0 ;
-(void)clearAttestations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif