// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPREDICTIONLOCATIONMOTIONCONTEXT_H
#define ATXPREDICTIONLOCATIONMOTIONCONTEXT_H

@class ATXLocationOfInterest;


#import "ATXPredictionContextDomain.h"

@interface ATXPredictionLocationMotionContext : ATXPredictionContextDomain

@property (readonly, nonatomic) BOOL canPredictClipsGivenRecentMotion; // ivar: _canPredictClipsGivenRecentMotion
@property (readonly, nonatomic) NSInteger coarseGeohash; // ivar: _coarseGeohash
@property (readonly, nonatomic) ATXLocationOfInterest *currentLOI; // ivar: _currentLOI
@property (readonly, nonatomic) CGFloat distanceFromGymOfCurrentLocationInMeters; // ivar: _distanceFromGymOfCurrentLocationInMeters
@property (readonly, nonatomic) CGFloat distanceFromHomeOfCurrentLocationInMeters; // ivar: _distanceFromHomeOfCurrentLocationInMeters
@property (readonly, nonatomic) CGFloat distanceFromSchoolOfCurrentLocationInMeters; // ivar: _distanceFromSchoolOfCurrentLocationInMeters
@property (readonly, nonatomic) CGFloat distanceFromWorkOfCurrentLocationInMeters; // ivar: _distanceFromWorkOfCurrentLocationInMeters
@property (readonly, nonatomic) NSInteger geohash; // ivar: _geohash
@property (readonly, nonatomic) NSInteger largeGeohash; // ivar: _largeGeohash
@property (readonly, nonatomic) BOOL locationEnabled; // ivar: _locationEnabled
@property (readonly, nonatomic) NSInteger motionType; // ivar: _motionType
@property (readonly, nonatomic) ATXLocationOfInterest *previousLOI; // ivar: _previousLOI


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPredictionLocationMotionContext:(id)arg0 ;
-(NSInteger)_atxMotionTypeFromPBMotionType:(int)arg0 ;
-(id)_unarchiveCLLocation:(id)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithCurrentLOI:(id)arg0 previousLOI:(id)arg1 motionType:(NSInteger)arg2 currentLocation:(id)arg3 locationEnabled:(BOOL)arg4 distanceFromHome:(CGFloat)arg5 distanceFromWork:(CGFloat)arg6 distanceFromSchool:(CGFloat)arg7 distanceFromGym:(CGFloat)arg8 canPredictClipsGivenRecentMotion:(BOOL)arg9 ;
-(id)initWithCurrentLOI:(id)arg0 previousLOI:(id)arg1 motionType:(NSInteger)arg2 geohash:(NSInteger)arg3 coarseGeohash:(NSInteger)arg4 largeGeohash:(NSInteger)arg5 locationEnabled:(BOOL)arg6 distanceFromHome:(CGFloat)arg7 distanceFromWork:(CGFloat)arg8 distanceFromSchool:(CGFloat)arg9 distanceFromGym:(CGFloat)arg10 canPredictClipsGivenRecentMotion:(BOOL)arg11 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;
-(int)_pbMotionTypeFromATXMotionType:(NSInteger)arg0 ;


@end


#endif