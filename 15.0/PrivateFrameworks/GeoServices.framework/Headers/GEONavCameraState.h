// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONAVCAMERASTATE_H
#define GEONAVCAMERASTATE_H

@class PBCodable;
@protocol NSCopying;



@interface GEONavCameraState : PBCodable <NSCopying>

 {
    int _distanceToManeuver;
    int _speedBucket;
    int _upcomingManeuverType;
    BOOL _isGroupedManeuver;
    ? _flags;
}


@property (nonatomic) int distanceToManeuver;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) BOOL hasIsGroupedManeuver;
@property (nonatomic) BOOL hasSpeedBucket;
@property (nonatomic) BOOL hasUpcomingManeuverType;
@property (nonatomic) BOOL isGroupedManeuver;
@property (nonatomic) int speedBucket;
@property (nonatomic) int upcomingManeuverType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)distanceToManeuverAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)speedBucketAsString:(int)arg0 ;
-(id)upcomingManeuverTypeAsString:(int)arg0 ;
-(int)StringAsDistanceToManeuver:(id)arg0 ;
-(int)StringAsSpeedBucket:(id)arg0 ;
-(int)StringAsUpcomingManeuverType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif