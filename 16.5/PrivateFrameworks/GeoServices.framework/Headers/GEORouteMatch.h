// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTEMATCH_H
#define GEOROUTEMATCH_H

@class NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEONavigationMatchInfo.h"
#import "GEOComposedRouteLeg.h"
#import "GEOMatchedPathSegment.h"
#import "GEORouteMatch.h"
#import "GEOMapFeatureRoad.h"
#import "GEOComposedRoute.h"
#import "GEOComposedRouteSegment.h"
#import "GEOComposedRouteStep.h"
#import "GEOComposedTransitStationRouteStep.h"
#import "GEOComposedTransitTripRouteStep.h"

@interface GEORouteMatch : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *candidateSteps; // ivar: _candidateSteps
@property (nonatomic) NSUInteger consecutiveProgressionsOffRoute; // ivar: _consecutiveProgressionsOffRoute
@property (retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // ivar: _detailedMatchInfo
@property (nonatomic) CGFloat distanceFromRoute; // ivar: _distanceFromRoute
@property (nonatomic) CGFloat distanceTraveledOffRoute; // ivar: _distanceTraveledOffRoute
@property (nonatomic) BOOL isGoodMatch; // ivar: _isGoodMatch
@property (readonly, nonatomic) BOOL isOnParkingLotRoad;
@property (nonatomic) BOOL isTunnelProjection; // ivar: _isTunnelProjection
@property (readonly, nonatomic) GEOComposedRouteLeg *leg;
@property (readonly, nonatomic) NSUInteger legIndex;
@property (readonly, nonatomic) ? locationCoordinate;
@property (nonatomic) ? locationCoordinate3D; // ivar: _locationCoordinate
@property (nonatomic) CGFloat matchedCourse; // ivar: _matchedCourse
@property (nonatomic) CGFloat modifiedCourseAccuracy; // ivar: _modifiedCourseAccuracy
@property (nonatomic) CGFloat modifiedHorizontalAccuracy; // ivar: _modifiedHorizontalAccuracy
@property (retain, nonatomic) GEOMatchedPathSegment *pathSegment; // ivar: _pathSegment
@property (retain, nonatomic) GEORouteMatch *projectedFrom; // ivar: _projectedFrom
@property (readonly, nonatomic) GEOMapFeatureRoad *road;
@property (nonatomic) CGFloat roadWidth; // ivar: _roadWidth
@property (retain, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (nonatomic) PolylineCoordinate routeCoordinate; // ivar: _routeCoordinate
@property (readonly, nonatomic) BOOL routeMatchedToEnd;
@property (readonly, nonatomic) GEOComposedRouteSegment *segment;
@property (readonly, nonatomic) NSUInteger segmentIndex;
@property (nonatomic) BOOL shouldProjectLocationAlongRoute; // ivar: _shouldProjectLocationAlongRoute
@property (readonly, nonatomic) GEOComposedRouteStep *step;
@property (nonatomic) NSUInteger stepIndex; // ivar: _stepIndex
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger transitID; // ivar: _transitID
@property (readonly, nonatomic) GEOComposedTransitStationRouteStep *transitStationStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *transitTripStep;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringScore:(id)arg0 ;
-(BOOL)routeMatchBehind:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 routeStatus:(id)arg1 ;
-(id)initWithRoute:(id)arg0 routeCoordinate:(struct PolylineCoordinate )arg1 locationCoordinate:(struct ? )arg2 stepIndex:(NSUInteger)arg3 matchedCourse:(CGFloat)arg4 timestamp:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateOffRouteProgress:(id)arg0 minDistanceToGetOnRoute:(CGFloat)arg1 ;


@end


#endif