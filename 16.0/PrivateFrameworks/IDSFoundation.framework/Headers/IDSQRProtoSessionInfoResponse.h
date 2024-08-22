// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOSESSIONINFORESPONSE_H
#define IDSQRPROTOSESSIONINFORESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface IDSQRProtoSessionInfoResponse : PBCodable <NSCopying>

 {
    ? _lightweightParticipantIdLists;
    ? _peerSubscribedStreamIds;
    ? _has;
}


@property (nonatomic) unsigned int generationCounter; // ivar: _generationCounter
@property (nonatomic) BOOL hasGenerationCounter;
@property (readonly, nonatomic) *NSUInteger lightweightParticipantIdLists;
@property (readonly, nonatomic) NSUInteger lightweightParticipantIdListsCount;
@property (retain, nonatomic) NSMutableArray *peerPublishedStreams; // ivar: _peerPublishedStreams
@property (readonly, nonatomic) *unsigned int peerSubscribedStreamIds;
@property (readonly, nonatomic) NSUInteger peerSubscribedStreamIdsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)lightweightParticipantIdListAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)peerPublishedStreamsAtIndex:(NSUInteger)arg0 ;
-(unsigned int)peerSubscribedStreamIdsAtIndex:(NSUInteger)arg0 ;
-(void)addLightweightParticipantIdList:(NSUInteger)arg0 ;
-(void)addPeerPublishedStreams:(id)arg0 ;
-(void)addPeerSubscribedStreamIds:(unsigned int)arg0 ;
-(void)clearLightweightParticipantIdLists;
-(void)clearPeerPublishedStreams;
-(void)clearPeerSubscribedStreamIds;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif