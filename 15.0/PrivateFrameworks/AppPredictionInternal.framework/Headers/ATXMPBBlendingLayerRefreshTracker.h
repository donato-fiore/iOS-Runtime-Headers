// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMPBBLENDINGLAYERREFRESHTRACKER_H
#define ATXMPBBLENDINGLAYERREFRESHTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBBlendingLayerRefreshTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (nonatomic) unsigned int computationTime; // ivar: _computationTime
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (nonatomic) BOOL hasComputationTime;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasInterarrivalTime;
@property (nonatomic) unsigned int interarrivalTime; // ivar: _interarrivalTime


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