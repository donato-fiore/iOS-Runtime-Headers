// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERPROTOCONNECTMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOCONNECTMESSAGE_H

@class PBCodable, HMEProtoEventInfo, NSMutableArray;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoConnectMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HMEProtoEventInfo *connectEvent; // ivar: _connectEvent
@property (readonly, nonatomic) BOOL hasConnectEvent;
@property (nonatomic) BOOL hasRouterVersion;
@property (readonly, nonatomic) BOOL hasUnregisterEvent;
@property (nonatomic) unsigned int routerVersion; // ivar: _routerVersion
@property (retain, nonatomic) NSMutableArray *topicAdditions; // ivar: _topicAdditions
@property (retain, nonatomic) NSMutableArray *topicFilterAdditions; // ivar: _topicFilterAdditions
@property (retain, nonatomic) HMEProtoEventInfo *unregisterEvent; // ivar: _unregisterEvent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicAdditionsAtIndex:(NSUInteger)arg0 ;
-(id)topicFilterAdditionsAtIndex:(NSUInteger)arg0 ;
-(void)addTopicAdditions:(id)arg0 ;
-(void)addTopicFilterAdditions:(id)arg0 ;
-(void)clearTopicAdditions;
-(void)clearTopicFilterAdditions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif