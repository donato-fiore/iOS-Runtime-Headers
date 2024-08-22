// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETPHEARTBEAT_H
#define ETPHEARTBEAT_H

@class PBCodable;
@protocol NSCopying;



@interface ETPHeartbeat : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float beatsPerMinute; // ivar: _beatsPerMinute
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasBeatsPerMinute;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasHeartbreakTime;
@property (nonatomic) BOOL hasNormalizedCenterX;
@property (nonatomic) BOOL hasNormalizedCenterY;
@property (nonatomic) BOOL hasRotation;
@property (nonatomic) float heartbreakTime; // ivar: _heartbreakTime
@property (nonatomic) float normalizedCenterX; // ivar: _normalizedCenterX
@property (nonatomic) float normalizedCenterY; // ivar: _normalizedCenterY
@property (nonatomic) float rotation; // ivar: _rotation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif