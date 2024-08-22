// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLERACINGCLUSTER_H
#define HDCODABLERACINGCLUSTER_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "HDCodableRacingMetrics.h"

@interface HDCodableRacingCluster : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int activityType; // ivar: _activityType
@property (retain, nonatomic) HDCodableRacingMetrics *bestWorkoutMetrics; // ivar: _bestWorkoutMetrics
@property (nonatomic) int clusterSize; // ivar: _clusterSize
@property (retain, nonatomic) NSMutableArray *eligibleClusterUUIDs; // ivar: _eligibleClusterUUIDs
@property (nonatomic) BOOL final; // ivar: _final
@property (nonatomic) BOOL hasActivityType;
@property (readonly, nonatomic) BOOL hasBestWorkoutMetrics;
@property (nonatomic) BOOL hasClusterSize;
@property (nonatomic) BOOL hasFinal;
@property (readonly, nonatomic) BOOL hasLastWorkoutMetrics;
@property (nonatomic) BOOL hasRelevance;
@property (readonly, nonatomic) BOOL hasRouteLabel;
@property (readonly, nonatomic) BOOL hasRouteSnapshot;
@property (readonly, nonatomic) BOOL hasUuid;
@property (readonly, nonatomic) BOOL hasWorkoutClusterUUID;
@property (retain, nonatomic) HDCodableRacingMetrics *lastWorkoutMetrics; // ivar: _lastWorkoutMetrics
@property (nonatomic) CGFloat relevance; // ivar: _relevance
@property (retain, nonatomic) NSString *routeLabel; // ivar: _routeLabel
@property (retain, nonatomic) NSData *routeSnapshot; // ivar: _routeSnapshot
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid
@property (retain, nonatomic) NSData *workoutClusterUUID; // ivar: _workoutClusterUUID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eligibleClusterUUIDsAtIndex:(NSUInteger)arg0 ;
-(void)addEligibleClusterUUIDs:(id)arg0 ;
-(void)clearEligibleClusterUUIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif