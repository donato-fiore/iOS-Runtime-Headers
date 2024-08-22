// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOALLOCBINDRESPONSE_H
#define IDSQRPROTOALLOCBINDRESPONSE_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface IDSQRProtoAllocBindResponse : PBCodable <NSCopying>

 {
    ? _lightweightParticipantIdLists;
    ? _peerSubscribedStreamIds;
    ? _has;
}


@property (nonatomic) unsigned int channelId; // ivar: _channelId
@property (nonatomic) unsigned int channelSettings; // ivar: _channelSettings
@property (retain, nonatomic) NSString *clientAddress; // ivar: _clientAddress
@property (nonatomic) unsigned int generationCounter; // ivar: _generationCounter
@property (nonatomic) BOOL hasChannelSettings;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) BOOL hasParticipantType;
@property (readonly, nonatomic) BOOL hasReportingDataBlob;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (readonly, nonatomic) BOOL hasSoftware;
@property (readonly, nonatomic) *NSUInteger lightweightParticipantIdLists;
@property (readonly, nonatomic) NSUInteger lightweightParticipantIdListsCount;
@property (nonatomic) unsigned int linkId; // ivar: _linkId
@property (retain, nonatomic) NSMutableArray *materials; // ivar: _materials
@property (nonatomic) unsigned int participantType; // ivar: _participantType
@property (retain, nonatomic) NSMutableArray *peerPublishedStreams; // ivar: _peerPublishedStreams
@property (readonly, nonatomic) *unsigned int peerSubscribedStreamIds;
@property (readonly, nonatomic) NSUInteger peerSubscribedStreamIdsCount;
@property (retain, nonatomic) NSData *reportingDataBlob; // ivar: _reportingDataBlob
@property (nonatomic) unsigned int sessionStateCounter; // ivar: _sessionStateCounter
@property (retain, nonatomic) NSString *software; // ivar: _software


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)lightweightParticipantIdListAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)materialsAtIndex:(NSUInteger)arg0 ;
-(id)peerPublishedStreamsAtIndex:(NSUInteger)arg0 ;
-(unsigned int)peerSubscribedStreamIdsAtIndex:(NSUInteger)arg0 ;
-(void)addLightweightParticipantIdList:(NSUInteger)arg0 ;
-(void)addMaterials:(id)arg0 ;
-(void)addPeerPublishedStreams:(id)arg0 ;
-(void)addPeerSubscribedStreamIds:(unsigned int)arg0 ;
-(void)clearLightweightParticipantIdLists;
-(void)clearMaterials;
-(void)clearPeerPublishedStreams;
-(void)clearPeerSubscribedStreamIds;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif