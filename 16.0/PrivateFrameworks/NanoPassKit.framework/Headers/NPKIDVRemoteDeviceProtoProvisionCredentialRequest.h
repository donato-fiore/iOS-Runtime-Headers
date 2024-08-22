// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKIDVREMOTEDEVICEPROTOPROVISIONCREDENTIALREQUEST_H
#define NPKIDVREMOTEDEVICEPROTOPROVISIONCREDENTIALREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoProvisionCredentialRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *attestationsData; // ivar: _attestationsData
@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (nonatomic) int credentialType; // ivar: _credentialType
@property (readonly, nonatomic) BOOL hasAttestationsData;
@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (readonly, nonatomic) BOOL hasMetadataData;
@property (readonly, nonatomic) BOOL hasPolicyIdentifier;
@property (retain, nonatomic) NSData *metadataData; // ivar: _metadataData
@property (retain, nonatomic) NSString *policyIdentifier; // ivar: _policyIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)credentialTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCredentialType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif