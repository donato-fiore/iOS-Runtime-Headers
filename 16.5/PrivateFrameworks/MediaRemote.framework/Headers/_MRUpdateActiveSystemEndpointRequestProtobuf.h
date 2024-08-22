// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRUPDATEACTIVESYSTEMENDPOINTREQUESTPROTOBUF_H
#define _MRUPDATEACTIVESYSTEMENDPOINTREQUESTPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRUpdateActiveSystemEndpointRequestProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int changeType; // ivar: _changeType
@property (nonatomic) BOOL hasChangeType;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (nonatomic) BOOL hasPairedDeviceSync;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID
@property (nonatomic) BOOL pairedDeviceSync; // ivar: _pairedDeviceSync
@property (retain, nonatomic) NSString *reason; // ivar: _reason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsChangeType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif