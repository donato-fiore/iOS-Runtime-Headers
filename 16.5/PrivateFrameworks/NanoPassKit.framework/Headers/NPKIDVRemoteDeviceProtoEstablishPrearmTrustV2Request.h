// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKIDVREMOTEDEVICEPROTOESTABLISHPREARMTRUSTV2REQUEST_H
#define NPKIDVREMOTEDEVICEPROTOESTABLISHPREARMTRUSTV2REQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoEstablishPrearmTrustV2Request : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasTrustData;
@property (retain, nonatomic) NSData *trustData; // ivar: _trustData


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