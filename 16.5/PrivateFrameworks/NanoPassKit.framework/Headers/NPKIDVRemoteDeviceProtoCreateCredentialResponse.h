// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKIDVREMOTEDEVICEPROTOCREATECREDENTIALRESPONSE_H
#define NPKIDVREMOTEDEVICEPROTOCREATECREDENTIALRESPONSE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoCreateCredentialResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (readonly, nonatomic) BOOL hasErrorData;


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