// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLERACINGMETRICS_H
#define HDCODABLERACINGMETRICS_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface HDCodableRacingMetrics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat distance; // ivar: _distance
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasWorkoutUUID;
@property (retain, nonatomic) NSMutableArray *routePoints; // ivar: _routePoints
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (retain, nonatomic) NSData *workoutUUID; // ivar: _workoutUUID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)routePointsAtIndex:(NSUInteger)arg0 ;
-(void)addRoutePoints:(id)arg0 ;
-(void)clearRoutePoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif