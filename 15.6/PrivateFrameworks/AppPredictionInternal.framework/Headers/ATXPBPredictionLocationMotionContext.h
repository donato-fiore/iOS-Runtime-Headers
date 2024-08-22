// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBPREDICTIONLOCATIONMOTIONCONTEXT_H
#define ATXPBPREDICTIONLOCATIONMOTIONCONTEXT_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "ATXPBPredictionLocationOfInterest.h"

@interface ATXPBPredictionLocationMotionContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL canPredictClipsGivenRecentMotion; // ivar: _canPredictClipsGivenRecentMotion
@property (nonatomic) NSUInteger coarseGeohash; // ivar: _coarseGeohash
@property (retain, nonatomic) ATXPBPredictionLocationOfInterest *currentLOI; // ivar: _currentLOI
@property (retain, nonatomic) NSData *currentLocation; // ivar: _currentLocation
@property (nonatomic) CGFloat distanceFromGym; // ivar: _distanceFromGym
@property (nonatomic) CGFloat distanceFromHome; // ivar: _distanceFromHome
@property (nonatomic) CGFloat distanceFromSchool; // ivar: _distanceFromSchool
@property (nonatomic) CGFloat distanceFromWork; // ivar: _distanceFromWork
@property (nonatomic) NSUInteger geohash; // ivar: _geohash
@property (nonatomic) BOOL hasCanPredictClipsGivenRecentMotion;
@property (nonatomic) BOOL hasCoarseGeohash;
@property (readonly, nonatomic) BOOL hasCurrentLOI;
@property (readonly, nonatomic) BOOL hasCurrentLocation;
@property (nonatomic) BOOL hasDistanceFromGym;
@property (nonatomic) BOOL hasDistanceFromHome;
@property (nonatomic) BOOL hasDistanceFromSchool;
@property (nonatomic) BOOL hasDistanceFromWork;
@property (nonatomic) BOOL hasGeohash;
@property (nonatomic) BOOL hasLargeGeohash;
@property (nonatomic) BOOL hasLocationEnabled;
@property (nonatomic) BOOL hasMotionType;
@property (readonly, nonatomic) BOOL hasPreviousLOI;
@property (nonatomic) NSUInteger largeGeohash; // ivar: _largeGeohash
@property (nonatomic) BOOL locationEnabled; // ivar: _locationEnabled
@property (nonatomic) int motionType; // ivar: _motionType
@property (retain, nonatomic) ATXPBPredictionLocationOfInterest *previousLOI; // ivar: _previousLOI


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)motionTypeAsString:(int)arg0 ;
-(int)StringAsMotionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif