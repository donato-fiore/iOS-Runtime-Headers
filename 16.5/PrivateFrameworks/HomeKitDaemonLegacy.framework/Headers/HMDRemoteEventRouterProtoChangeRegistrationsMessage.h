// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEEVENTROUTERPROTOCHANGEREGISTRATIONSMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOCHANGEREGISTRATIONSMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *topicAdditions; // ivar: _topicAdditions
@property (retain, nonatomic) NSMutableArray *topicFilterAdditions; // ivar: _topicFilterAdditions
@property (retain, nonatomic) NSMutableArray *topicFilterRemovals; // ivar: _topicFilterRemovals
@property (retain, nonatomic) NSMutableArray *topicRemovals; // ivar: _topicRemovals


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicAdditionsAtIndex:(NSUInteger)arg0 ;
-(id)topicFilterAdditionsAtIndex:(NSUInteger)arg0 ;
-(id)topicFilterRemovalsAtIndex:(NSUInteger)arg0 ;
-(id)topicRemovalsAtIndex:(NSUInteger)arg0 ;
-(void)addTopicAdditions:(id)arg0 ;
-(void)addTopicFilterAdditions:(id)arg0 ;
-(void)addTopicFilterRemovals:(id)arg0 ;
-(void)addTopicRemovals:(id)arg0 ;
-(void)clearTopicAdditions;
-(void)clearTopicFilterAdditions;
-(void)clearTopicFilterRemovals;
-(void)clearTopicRemovals;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif