// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLRACINGROUTEVARIABLES_H
#define CLRACINGROUTEVARIABLES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLRacingRouteVariables : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int currentRouteDataPointCounter; // ivar: _currentRouteDataPointCounter
@property (readonly, nonatomic) CGFloat endOfRaceTimeThreshold; // ivar: _endOfRaceTimeThreshold
@property (readonly, nonatomic) int inutileDataPointCounter; // ivar: _inutileDataPointCounter
@property (readonly, nonatomic) int lastMatchedPointIndex; // ivar: _lastMatchedPointIndex
@property (readonly, nonatomic) int lastMatchedPointIndexOnReferenceRoute; // ivar: _lastMatchedPointIndexOnReferenceRoute
@property (readonly, nonatomic) BOOL locationPointIsOutsideOfAcceptedRange; // ivar: _locationPointIsOutsideOfAcceptedRange
@property (readonly, nonatomic) BOOL locationPointNotMatched; // ivar: _locationPointNotMatched
@property (readonly, nonatomic) int matchedPointCounter; // ivar: _matchedPointCounter
@property (readonly, nonatomic) int matrixCellIndexForLastMatchedPoint; // ivar: _matrixCellIndexForLastMatchedPoint
@property (readonly, nonatomic) CGFloat nearestNeighborMaximumAcceptedDistance; // ivar: _nearestNeighborMaximumAcceptedDistance
@property (readonly, nonatomic) int numberOfRoutePointsToAdd; // ivar: _numberOfRoutePointsToAdd
@property (readonly, nonatomic) int offRouteDataPointCounter; // ivar: _offRouteDataPointCounter
@property (readonly, nonatomic) int offRouteGraceDuration; // ivar: _offRouteGraceDuration
@property (readonly, nonatomic) BOOL prematureRaceEndDetected; // ivar: _prematureRaceEndDetected
@property (readonly, nonatomic) BOOL projectedOnNearestPoint; // ivar: _projectedOnNearestPoint
@property (readonly, nonatomic) BOOL raceEndPointDetected; // ivar: _raceEndPointDetected
@property (readonly, nonatomic) BOOL raceSessionExpired; // ivar: _raceSessionExpired
@property (readonly, nonatomic) BOOL raceStartPointDetected; // ivar: _raceStartPointDetected
@property (readonly, nonatomic) BOOL racingRouteAnalyticsSent; // ivar: _racingRouteAnalyticsSent
@property (readonly, nonatomic) int referenceRouteDataPointCounter; // ivar: _referenceRouteDataPointCounter
@property (readonly, nonatomic) CGFloat referenceRouteTotalLength; // ivar: _referenceRouteTotalLength
@property (readonly, nonatomic) BOOL referenceRouteTotalLengthDetermined; // ivar: _referenceRouteTotalLengthDetermined
@property (readonly, nonatomic) CGFloat registeredTimeAtThresholdDistance; // ivar: _registeredTimeAtThresholdDistance
@property (readonly, nonatomic) BOOL rollingBufferReachedEndOfReferenceRoute; // ivar: _rollingBufferReachedEndOfReferenceRoute
@property (readonly, nonatomic) int rollingBufferStartIndexOnReferenceRoute; // ivar: _rollingBufferStartIndexOnReferenceRoute
@property (readonly, nonatomic) int rollingBufferUpdateCounter; // ivar: _rollingBufferUpdateCounter
@property (readonly, nonatomic) BOOL routeConfigurationSuccessful; // ivar: _routeConfigurationSuccessful
@property (readonly, nonatomic) int routePointsBufferSize; // ivar: _routePointsBufferSize
@property (readonly, nonatomic) CGFloat timestampOfLastMatchedPointOnReferenceRoute; // ivar: _timestampOfLastMatchedPointOnReferenceRoute
@property (readonly, nonatomic) BOOL userIsOffRoute; // ivar: _userIsOffRoute


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRaceStartPointDetected:(BOOL)arg0 raceEndPointDetected:(BOOL)arg1 userIsOffRoute:(BOOL)arg2 projectedOnNearestPoint:(BOOL)arg3 raceSessionExpired:(BOOL)arg4 rollingBufferReachedEndOfReferenceRoute:(BOOL)arg5 routeConfigurationSuccessful:(BOOL)arg6 racingRouteAnalyticsSent:(BOOL)arg7 prematureRaceEndDetected:(BOOL)arg8 referenceRouteTotalLengthDetermined:(BOOL)arg9 locationPointIsOutsideOfAcceptedRange:(BOOL)arg10 locationPointNotMatched:(BOOL)arg11 routePointsBufferSize:(int)arg12 numberOfRoutePointsToAdd:(int)arg13 offRouteGraceDuration:(int)arg14 matchedPointCounter:(int)arg15 referenceRouteDataPointCounter:(int)arg16 currentRouteDataPointCounter:(int)arg17 offRouteDataPointCounter:(int)arg18 inutileDataPointCounter:(int)arg19 rollingBufferUpdateCounter:(int)arg20 lastMatchedPointIndex:(int)arg21 lastMatchedPointIndexOnReferenceRoute:(int)arg22 rollingBufferStartIndexOnReferenceRoute:(int)arg23 matrixCellIndexForLastMatchedPoint:(int)arg24 referenceRouteTotalLength:(CGFloat)arg25 timestampOfLastMatchedPointOnReferenceRoute:(CGFloat)arg26 registeredTimeAtThresholdDistance:(CGFloat)arg27 endOfRaceTimeThreshold:(CGFloat)arg28 nearestNeighborMaximumAcceptedDistance:(CGFloat)arg29 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif