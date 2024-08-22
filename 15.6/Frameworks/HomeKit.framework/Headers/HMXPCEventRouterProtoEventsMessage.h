// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMXPCEVENTROUTERPROTOEVENTSMESSAGE_H
#define HMXPCEVENTROUTERPROTOEVENTSMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HMXPCEventRouterProtoEventsMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *cachedEvents; // ivar: _cachedEvents
@property (retain, nonatomic) NSMutableArray *events; // ivar: _events


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cachedEventsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(void)addCachedEvents:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)clearCachedEvents;
-(void)clearEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif