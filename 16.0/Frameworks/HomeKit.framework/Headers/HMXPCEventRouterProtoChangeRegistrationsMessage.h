// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMXPCEVENTROUTERPROTOCHANGEREGISTRATIONSMESSAGE_H
#define HMXPCEVENTROUTERPROTOCHANGEREGISTRATIONSMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HMXPCEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *topicFilterAdditions; // ivar: _topicFilterAdditions
@property (retain, nonatomic) NSMutableArray *topicFilterRemovals; // ivar: _topicFilterRemovals


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicFilterAdditionsAtIndex:(NSUInteger)arg0 ;
-(id)topicFilterRemovalsAtIndex:(NSUInteger)arg0 ;
-(void)addTopicFilterAdditions:(id)arg0 ;
-(void)addTopicFilterRemovals:(id)arg0 ;
-(void)clearTopicFilterAdditions;
-(void)clearTopicFilterRemovals;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif