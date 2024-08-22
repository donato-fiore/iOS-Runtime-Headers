// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOPROVISIONINGDATARESPONSE_H
#define NPKPROTOPROVISIONINGDATARESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoProvisioningDataResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPending;
@property (readonly, nonatomic) BOOL hasProvisioningDataBytes;
@property (nonatomic) BOOL pending; // ivar: _pending
@property (retain, nonatomic) NSData *provisioningDataBytes; // ivar: _provisioningDataBytes


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