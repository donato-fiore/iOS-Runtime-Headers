// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTODEVICEMETADATAWITHFIELDSREPONSE_H
#define NPKPROTODEVICEMETADATAWITHFIELDSREPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoDeviceMetadataWithFieldsReponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *deviceMetadata; // ivar: _deviceMetadata
@property (readonly, nonatomic) BOOL hasDeviceMetadata;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending; // ivar: _pending


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