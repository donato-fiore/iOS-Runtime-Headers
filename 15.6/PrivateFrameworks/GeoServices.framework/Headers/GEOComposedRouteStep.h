// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDROUTESTEP_H
#define GEOCOMPOSEDROUTESTEP_H

@class NSString, NSArray;
@protocol GEOComposedRouteStepTravelTimeProvider, NSSecureCoding, GEOTransitArtworkDataSource;

#import <Foundation/Foundation.h>

#import "GEOComposedTransitTripRouteStep.h"
#import "GEOComposedRoute.h"
#import "GEOPBTransitStop.h"
#import "GEOComposedRouteEVStepInfo.h"
#import "GEOStep.h"
#import "GEOInstructionSet.h"
#import "GEOJunction.h"
#import "GEOComposedRouteStep.h"
#import "GEOComposedRouteSegment.h"
#import "GEOTransitStep.h"

@interface GEOComposedRouteStep : NSObject <GEOComposedRouteStepTravelTimeProvider, NSSecureCoding>

 {
    NSString *_maneuverRoadOrExitName;
    NSString *_maneuverRoadName;
}


@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artworkOverride;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *closestLogicalBoardOrAlightStep;
@property (weak, nonatomic) GEOComposedRoute *composedRoute; // ivar: _composedRoute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) int drivingSide; // ivar: _drivingSide
@property (readonly, nonatomic) unsigned int duration;
@property (readonly, nonatomic) ? endGeoCoordinate;
@property (readonly, nonatomic) ? endRouteCoordinate; // ivar: _endRouteCoordinate
@property (readonly, nonatomic) GEOPBTransitStop *endingStop;
@property (readonly, nonatomic) GEOComposedRouteEVStepInfo *evInfo;
@property (readonly, nonatomic) GEOStep *geoStep; // ivar: _geoStep
@property (readonly, nonatomic) BOOL hasDuration;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOInstructionSet *instructions;
@property (readonly, nonatomic) BOOL isArrivalStep;
@property (readonly, nonatomic) BOOL isUncertainArrival;
@property (readonly, nonatomic) GEOJunction *junction; // ivar: _junction
@property (readonly, nonatomic) NSString *maneuverRoadName;
@property (readonly, nonatomic) NSString *maneuverRoadOrExitName;
@property (readonly, nonatomic) ? maneuverStartRouteCoordinate; // ivar: _maneuverStartRouteCoordinate
@property (readonly, nonatomic) int maneuverType;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *nextAlightingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *nextBoardingStep;
@property (readonly, nonatomic, getter=getNextStep) GEOComposedRouteStep *nextStep;
@property (readonly, nonatomic) GEOPBTransitStop *nextStop;
@property (readonly, nonatomic) NSUInteger pathIndex;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *previousAlightingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *previousBoardingStep;
@property (readonly, nonatomic, getter=getPreviousStep) GEOComposedRouteStep *previousStep;
@property (readonly, nonatomic) GEOPBTransitStop *previousStop;
@property (readonly, nonatomic) NSArray *routeDetailsPrimaryArtwork;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *routeDetailsSecondaryArtwork;
@property (readonly, nonatomic) NSInteger routeSegmentType; // ivar: _routeSegmentType
@property (readonly, nonatomic) GEOComposedRouteSegment *segment;
@property (readonly, nonatomic) BOOL shouldCreateAlightExitGroup;
@property (readonly, nonatomic) BOOL shouldCreateArrivalGroup;
@property (readonly, nonatomic) BOOL shouldCreateEnterBoardGroup;
@property (readonly, nonatomic) BOOL shouldCreateFerryProgressionGroup;
@property (readonly, nonatomic) BOOL shouldCreateTransferGroup;
@property (readonly, nonatomic) BOOL shouldCreateTripProgressionGroup;
@property (readonly, nonatomic) ? startGeoCoordinate;
@property (readonly, nonatomic) ? startRouteCoordinate; // ivar: _startRouteCoordinate
@property (readonly, nonatomic) unsigned int startTime;
@property (readonly, nonatomic) GEOPBTransitStop *startingStop;
@property (readonly, nonatomic) unsigned int stepID;
@property (readonly, nonatomic) NSUInteger stepIndex; // ivar: _stepIndex
@property (readonly, nonatomic) NSArray *steppingArtwork;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOTransitStep *transitStep;
@property (readonly, nonatomic) int transportType;


+(BOOL)supportsSecureCoding;
-(BOOL)_belongsToTransferGroup;
-(BOOL)shouldPreloadWithHighPriority;
-(CGFloat)travelTime;
-(id)firstNameOrBranch;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 geoRouteLeg:(id)arg1 geoStep:(id)arg2 routeSegmentType:(NSInteger)arg3 stepIndex:(NSUInteger)arg4 pointRange:(struct _NSRange )arg5 maneuverPointRange:(struct _NSRange )arg6 ;
-(id)initWithComposedRoute:(id)arg0 geoRouteLeg:(id)arg1 geoStep:(id)arg2 routeSegmentType:(NSInteger)arg3 stepIndex:(NSUInteger)arg4 startRouteCoordinate:(struct ? )arg5 endRouteCoordinate:(struct ? )arg6 maneuverStartRouteCoordinate:(struct ? )arg7 ;
-(id)initWithComposedRoute:(id)arg0 routeSegmentType:(NSInteger)arg1 stepIndex:(NSUInteger)arg2 pointRange:(struct _NSRange )arg3 ;
-(id)timeCheckpoints;
-(int)maneuver;
-(struct GEOPolylineCoordinateRange )routeCoordinateRange;
-(struct _NSRange )maneuverPointRange;
-(struct _NSRange )pointRange;
-(unsigned int)endPointIndex;
-(unsigned int)maneuverEndPointIndex;
-(unsigned int)maneuverStartPointIndex;
-(unsigned int)pointCount;
-(unsigned int)startPointIndex;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif