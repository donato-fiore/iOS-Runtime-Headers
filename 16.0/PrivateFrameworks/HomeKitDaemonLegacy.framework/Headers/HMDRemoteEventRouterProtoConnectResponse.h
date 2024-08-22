// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERPROTOCONNECTRESPONSE_H
#define HMDREMOTEEVENTROUTERPROTOCONNECTRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoConnectResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *cachedEvents; // ivar: _cachedEvents


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cachedEventsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCachedEvents:(id)arg0 ;
-(void)clearCachedEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif