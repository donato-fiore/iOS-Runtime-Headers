// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRVOLUMEDIDCHANGEMESSAGEPROTOBUF_H
#define _MRVOLUMEDIDCHANGEMESSAGEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRVolumeDidChangeMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *endpointUID; // ivar: _endpointUID
@property (readonly, nonatomic) BOOL hasEndpointUID;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (nonatomic) BOOL hasVolume;
@property (retain, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID
@property (nonatomic) float volume; // ivar: _volume


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