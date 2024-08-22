// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITPRESENCEEVENT_H
#define AWDHOMEKITPRESENCEEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitPresenceEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPresenceEventGranularity;
@property (nonatomic) BOOL hasPresenceEventType;
@property (nonatomic) int presenceEventGranularity; // ivar: _presenceEventGranularity
@property (nonatomic) int presenceEventType; // ivar: _presenceEventType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)presenceEventGranularityAsString:(int)arg0 ;
-(id)presenceEventTypeAsString:(int)arg0 ;
-(int)StringAsPresenceEventGranularity:(id)arg0 ;
-(int)StringAsPresenceEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif