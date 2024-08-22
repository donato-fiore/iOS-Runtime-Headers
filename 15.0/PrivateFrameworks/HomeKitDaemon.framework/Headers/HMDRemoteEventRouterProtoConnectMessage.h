// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEEVENTROUTERPROTOCONNECTMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOCONNECTMESSAGE_H

@class PBCodable, HMEProtoEventInfo, NSMutableArray;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoConnectMessage : PBCodable <NSCopying>

 {
    HMEProtoEventInfo *_connectEvent;
    unsigned int _routerVersion;
    NSMutableArray *_topicFilterAdditions;
    HMEProtoEventInfo *_unregisterEvent;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif