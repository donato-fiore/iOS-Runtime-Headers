// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKIDVREMOTEDEVICEPROTONONCEFORAUTHORIZATIONTOKENRESPONSE_H
#define NPKIDVREMOTEDEVICEPROTONONCEFORAUTHORIZATIONTOKENRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoNonceForAuthorizationTokenResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasErrorData;
@property (readonly, nonatomic) BOOL hasNonceData;
@property (retain, nonatomic) NSData *nonceData; // ivar: _nonceData


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