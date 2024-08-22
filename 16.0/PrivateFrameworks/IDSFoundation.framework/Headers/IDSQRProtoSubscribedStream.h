// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOSUBSCRIBEDSTREAM_H
#define IDSQRPROTOSUBSCRIBEDSTREAM_H

@class PBCodable;
@protocol NSCopying;



@interface IDSQRProtoSubscribedStream : PBCodable <NSCopying>

 {
    ? _peerStreamIds;
    ? _has;
}


@property (nonatomic) BOOL hasIsSeamlessTransition;
@property (nonatomic) BOOL isSeamlessTransition; // ivar: _isSeamlessTransition
@property (nonatomic) NSUInteger peerParticipantId; // ivar: _peerParticipantId
@property (readonly, nonatomic) *unsigned int peerStreamIds;
@property (readonly, nonatomic) NSUInteger peerStreamIdsCount;
@property (nonatomic) BOOL wildcardSubscription; // ivar: _wildcardSubscription


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