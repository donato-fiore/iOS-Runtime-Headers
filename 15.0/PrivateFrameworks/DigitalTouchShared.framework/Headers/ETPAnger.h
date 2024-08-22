// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETPANGER_H
#define ETPANGER_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ETPAnger : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *delays; // ivar: _delays
@property (nonatomic) float duration; // ivar: _duration
@property (readonly, nonatomic) BOOL hasDelays;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasNormalizedCenterX;
@property (nonatomic) BOOL hasNormalizedCenterY;
@property (readonly, nonatomic) BOOL hasPoints;
@property (nonatomic) float normalizedCenterX; // ivar: _normalizedCenterX
@property (nonatomic) float normalizedCenterY; // ivar: _normalizedCenterY
@property (retain, nonatomic) NSData *points; // ivar: _points


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