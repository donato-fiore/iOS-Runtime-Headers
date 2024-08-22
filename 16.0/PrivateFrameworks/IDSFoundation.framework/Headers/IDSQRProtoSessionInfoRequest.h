// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOSESSIONINFOREQUEST_H
#define IDSQRPROTOSESSIONINFOREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface IDSQRProtoSessionInfoRequest : PBRequest <NSCopying>

 {
    ? _publishedStreamIds;
    ? _has;
}


@property (nonatomic) BOOL allWildcardSubscription; // ivar: _allWildcardSubscription
@property (nonatomic) unsigned int generationCounter; // ivar: _generationCounter
@property (nonatomic) BOOL hasAllWildcardSubscription;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) BOOL hasMaxConcurrentStreams;
@property (nonatomic) BOOL hasRequestId;
@property (nonatomic) unsigned int linkId; // ivar: _linkId
@property (nonatomic) unsigned int maxConcurrentStreams; // ivar: _maxConcurrentStreams
@property (readonly, nonatomic) *unsigned int publishedStreamIds;
@property (readonly, nonatomic) NSUInteger publishedStreamIdsCount;
@property (nonatomic) unsigned int requestId; // ivar: _requestId
@property (retain, nonatomic) NSMutableArray *subscribedStreams; // ivar: _subscribedStreams


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)subscribedStreamsAtIndex:(NSUInteger)arg0 ;
-(unsigned int)publishedStreamIdsAtIndex:(NSUInteger)arg0 ;
-(void)addPublishedStreamIds:(unsigned int)arg0 ;
-(void)addSubscribedStreams:(id)arg0 ;
-(void)clearPublishedStreamIds;
-(void)clearSubscribedStreams;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif