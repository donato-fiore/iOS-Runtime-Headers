// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRAUDIOSTREAMPACKETDESCRIPTIONPROTOBUF_H
#define _MRAUDIOSTREAMPACKETDESCRIPTIONPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int dataByteSize; // ivar: _dataByteSize
@property (nonatomic) BOOL hasDataByteSize;
@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic) BOOL hasVariableFramesInPacket;
@property (nonatomic) NSInteger startOffset; // ivar: _startOffset
@property (nonatomic) unsigned int variableFramesInPacket; // ivar: _variableFramesInPacket


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