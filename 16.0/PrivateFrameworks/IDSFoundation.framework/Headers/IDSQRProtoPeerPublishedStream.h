// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOPEERPUBLISHEDSTREAM_H
#define IDSQRPROTOPEERPUBLISHEDSTREAM_H

@class PBCodable;
@protocol NSCopying;



@interface IDSQRProtoPeerPublishedStream : PBCodable <NSCopying>

 {
    ? _peerStreamIds;
}


@property (nonatomic) NSUInteger peerParticipantId; // ivar: _peerParticipantId
@property (readonly, nonatomic) *unsigned int peerStreamIds;
@property (readonly, nonatomic) NSUInteger peerStreamIdsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)peerStreamIdsAtIndex:(NSUInteger)arg0 ;
-(void)addPeerStreamIds:(unsigned int)arg0 ;
-(void)clearPeerStreamIds;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif