// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDROUTE_H
#define GEOCOMPOSEDROUTE_H

@class NSArray, NSMutableArray, geo_reentrant_isolater, geo_isolater, NSHashTable, NSString, NSData, NSUUID, NSDate;
@protocol _GEORouteHypothesisMonitorETAProvider, NSSecureCoding, GEOMapAccessRestrictions, GEOComposedRouteTransitDisplayStrings, GEOServerFormattedString, GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;

#import <Foundation/Foundation.h>

#import "GEORouteAttributes.h"
#import "GEORouteInitializerData.h"
#import "GEOTransitDecoderData.h"
#import "GEOComposedRouteCoordinateArray.h"
#import "GEOComposedRouteCellularCoverage.h"
#import "GEOZilchDecoder.h"
#import "GEOComposedRouteMutableData.h"
#import "GEOMapRegion.h"
#import "GEORoute.h"
#import "GEOComposedWaypoint.h"
#import "GEORouteDisplayHints.h"
#import "GEOElevationProfile.h"
#import "GEOWaypointRoute.h"
#import "GEOTransitSuggestedRoute.h"
#import "GEORouteRestrictionZoneInfo.h"
#import "GEOStyleAttributes.h"
#import "GEOComposedRouteTraffic.h"
#import "GEOTransitRouteUpdateRequest.h"

@interface GEOComposedRoute : NSObject <_GEORouteHypothesisMonitorETAProvider, NSSecureCoding, GEOMapAccessRestrictions>

 {
    GEORouteAttributes *_routeAttributes;
    GEORouteInitializerData *_routeInitializerData;
    GEOTransitDecoderData *_decoderData;
    GEOComposedRouteCoordinateArray *_coordinates;
    GEOComposedRouteCellularCoverage *_cellularCoverage;
    NSInteger _initialPromptTypes;
    NSArray *_currentSectionOptions;
    NSArray *_ticketedSegments;
    NSArray *_transitRouteUpdateAlerts;
    id<GEOComposedRouteTransitDisplayStrings> *_transitRouteDisplayStrings;
    NSMutableArray *_snappedPaths;
    GEOZilchDecoder *_zilchDecoder;
    geo_reentrant_isolater *_snappedRoutesIsolater;
    geo_isolater *_mutableDataLock;
    GEOComposedRouteMutableData *_mutableData;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) CGFloat _hypothesis_travelDuration;
@property (readonly, nonatomic) CGFloat _hypothesis_travelDurationAggressiveEstimate;
@property (readonly, nonatomic) CGFloat _hypothesis_travelDurationConservativeEstimate;
@property (readonly, nonatomic) NSArray *advisories; // ivar: _advisories
@property (readonly, nonatomic) BOOL allowsNetworkTileLoad;
@property (readonly, nonatomic) GEOMapRegion *arrivalMapRegion;
@property (readonly, nonatomic) BOOL avoidsHighways; // ivar: _avoidsHighways
@property (readonly, nonatomic) BOOL avoidsTolls; // ivar: _avoidsTolls
@property (readonly, nonatomic) BOOL avoidsTraffic; // ivar: _avoidsTraffic
@property (readonly, nonatomic) NSArray *baseTransitFares;
@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion; // ivar: _boundingMapRegion
@property (readonly, nonatomic) NSArray *cameraInfos; // ivar: _cameraInfos
@property (readonly, nonatomic) CGFloat chargingDuration;
@property (readonly, nonatomic) NSArray *composedGuidanceEvents; // ivar: _composedGuidanceEvents
@property (nonatomic) NSUInteger currentDisplayStep; // ivar: _currentDisplayStep
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEORoute *deprecatedGeoRoute;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) NSData *directionsResponseID; // ivar: _directionsResponseID
@property (readonly, nonatomic) GEORouteDisplayHints *displayHints; // ivar: _displayHints
@property (readonly, nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) GEOElevationProfile *elevationProfile; // ivar: _elevationProfile
@property (readonly, nonatomic) PolylineCoordinate endRouteCoordinate;
@property (readonly, nonatomic) NSArray *enrouteNotices; // ivar: _enrouteNotices
@property (readonly, nonatomic) NSArray *etauPositions; // ivar: _etauPositions
@property (readonly, nonatomic) NSData *etauResponseID; // ivar: _etauResponseID
@property (readonly, nonatomic) unsigned int expectedTime; // ivar: _expectedTime
@property (nonatomic) unsigned int firstVisiblePoint; // ivar: _firstVisiblePoint
@property (readonly, nonatomic) CGFloat freeflowTravelTime; // ivar: _freeflowTravelTime
@property (readonly, nonatomic) GEOWaypointRoute *geoWaypointRoute; // ivar: _geoWaypointRoute
@property (readonly, nonatomic) NSArray *halls; // ivar: _halls
@property (readonly, nonatomic) BOOL hasArrivalMapRegion;
@property (readonly, nonatomic) BOOL hasExpectedTime;
@property (readonly, nonatomic) BOOL hasHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasRideClusters;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int historicTravelTime; // ivar: _historicTravelTime
@property (readonly, nonatomic) NSUInteger indexInResponse; // ivar: _indexInResponse
@property (readonly, nonatomic) NSUInteger indexOfSuggestedRoute;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *infrastructureDescription; // ivar: _infrastructureDescription
@property (readonly, nonatomic) BOOL isEVRoute;
@property (readonly, nonatomic) BOOL isNavigable; // ivar: _isNavigable
@property (readonly, nonatomic) BOOL isNewProtocolRoute;
@property (readonly, nonatomic) BOOL isWalkingOnlyTransitRoute; // ivar: _isWalkingOnlyTransitRoute
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *launchAndGoCardTitle; // ivar: _launchAndGoCardTitle
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *launchAndGoRouteDescription; // ivar: _launchAndGoRouteDescription
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *launchAndGoRouteTitle; // ivar: _launchAndGoRouteTitle
@property (readonly, nonatomic) NSArray *legs; // ivar: _legs
@property (readonly, nonatomic) NSString *longTrafficDescription; // ivar: _longTrafficDescription
@property (nonatomic) BOOL maneuverDisplayEnabled; // ivar: _maneuverDisplayEnabled
@property (retain, nonatomic) NSArray *maneuverDisplaySteps; // ivar: _maneuverDisplaySteps
@property (retain, nonatomic) GEOComposedRouteMutableData *mutableData;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger numberOfTransitStops;
@property (readonly, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) GEOTransitSuggestedRoute *originalSuggestedRoute; // ivar: _originalSuggestedRoute
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *pickingDurationFormatString; // ivar: _pickingDurationFormatString
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *planningDescriptionFormatString; // ivar: _planningDescriptionFormatString
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *planningDistanceFormatString; // ivar: _planningDistanceFormatString
@property (readonly, nonatomic) NSString *planningSeparatorString; // ivar: _planningSeparatorString
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) CGFloat pointLength;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *previewDurationFormatString; // ivar: _previewDurationFormatString
@property (readonly, nonatomic) GEORouteRestrictionZoneInfo *restrictionZoneInfo; // ivar: _restrictionZoneInfo
@property (retain, nonatomic) NSUUID *revisionIdentifier; // ivar: _revisionIdentifier
@property (readonly, nonatomic) NSArray *rideSelections; // ivar: _rideSelections
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) NSArray *routeDescriptions;
@property (readonly, nonatomic) GEORouteInitializerData *routeInitializerData;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *routeLabelArtwork; // ivar: _routeLabelArtwork
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *routeLabelDescription; // ivar: _routeLabelDescription
@property (readonly, copy, nonatomic) NSArray *routePlanningArtworks; // ivar: _routePlanningArtworks
@property (readonly, nonatomic) int routeType;
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic) NSArray *segments; // ivar: _segments
@property (nonatomic) NSUInteger selectedSegmentIndex; // ivar: _selectedSegmentIndex
@property (readonly, nonatomic) NSUInteger serverIdentifier; // ivar: _serverIdentifier
@property (retain, nonatomic) NSData *serverRouteID; // ivar: _serverRouteID
@property (readonly, nonatomic) BOOL shouldShowSchedule;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSArray *stations; // ivar: _stations
@property (readonly, nonatomic) NSArray *steps; // ivar: _steps
@property (readonly, nonatomic) NSUInteger stepsCount;
@property (readonly, nonatomic) NSArray *stops; // ivar: _stops
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes; // ivar: _styleAttributes
@property (retain, nonatomic) GEOTransitSuggestedRoute *suggestedRoute; // ivar: _suggestedRoute
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOComposedRouteTraffic *traffic;
@property (readonly, nonatomic) NSString *trafficDescription; // ivar: _trafficDescription
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *transitDescriptionFormatString; // ivar: _transitDescriptionFormatString
@property (retain, nonatomic) NSArray *transitPaymentMethods; // ivar: _transitPaymentMethods
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *transitRouteBadge; // ivar: _transitRouteBadge
@property (readonly, nonatomic) GEOTransitRouteUpdateRequest *transitRouteUpdateRequest; // ivar: _transitRouteUpdateRequest
@property (readonly, nonatomic) NSObject<GEOTransitRoutingIncidentMessage> *transitRoutingIncidentMessage; // ivar: _transitRoutingIncidentMessage
@property (nonatomic) CGFloat transitUpdateInitialDelay; // ivar: _transitUpdateInitialDelay
@property (readonly, nonatomic) int transportType; // ivar: _transportType
@property (readonly, nonatomic) CGFloat travelAndChargingDuration;
@property (readonly, nonatomic) CGFloat travelTimeAggressiveEstimate; // ivar: _travelTimeAggressiveEstimate
@property (readonly, nonatomic) CGFloat travelTimeConservativeEstimate; // ivar: _travelTimeConservativeEstimate
@property (retain, nonatomic) NSUUID *uniqueRouteID; // ivar: _uniqueRouteID
@property (readonly, nonatomic) BOOL usesRoutingPathPoints;
@property (readonly, nonatomic) BOOL usesZilch; // ivar: _usesZilch
@property (readonly, nonatomic) NSArray *visualInfos; // ivar: _visualInfos
@property (readonly, nonatomic) NSArray *waypoints;


+(BOOL)supportsSecureCoding;
-(BOOL)_MapsCarPlay_isEqual:(id)arg0 ;
-(BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg0 end:(unsigned int)arg1 ;
-(BOOL)checkDrivingArrivalForCoordinate:(struct ? )arg0 coordinateOnRoute:(struct ? )arg1 routePointIndex:(unsigned int)arg2 distanceFromRoute:(CGFloat)arg3 arrivalMapRegion:(id)arg4 checkArrivalRadius:(BOOL)arg5 checkDistanceAlongRoute:(BOOL)arg6 checkRoadAccessPoints:(BOOL)arg7 isOnRoute:(BOOL)arg8 ;
-(BOOL)hasInitialPromptType:(int)arg0 ;
-(BOOL)isSnapping;
-(BOOL)isStopInTerminalStructure:(id)arg0 ;
-(BOOL)supportsSnapping;
-(CGFloat)_hypothesis_travelDurationFromStep:(id)arg0 stepRemainingDistance:(CGFloat)arg1 ;
-(CGFloat)courseAtRouteCoordinateIndex:(unsigned int)arg0 ;
-(CGFloat)distanceBetweenIndex:(NSUInteger)arg0 andIndex:(NSUInteger)arg1 ;
-(CGFloat)distanceBetweenLocation:(struct ? )arg0 nextPointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2 ;
-(CGFloat)distanceBetweenRouteCoordinate:(struct ? )arg0 andRouteCoordinate:(struct ? )arg1 ;
-(CGFloat)distanceBetweenRoutePointIndex:(unsigned int)arg0 toPointIndex:(unsigned int)arg1 ;
-(CGFloat)distanceBetweenStep:(id)arg0 andStep:(id)arg1 ;
-(CGFloat)distanceFromPoint:(struct PolylineCoordinate )arg0 toPoint:(struct PolylineCoordinate )arg1 ;
-(CGFloat)distanceFromPointIndex:(NSUInteger)arg0 toPointIndex:(NSUInteger)arg1 ;
-(CGFloat)distanceFromStartToIndex:(NSUInteger)arg0 ;
-(CGFloat)distanceFromStartToRouteCoordinate:(struct ? )arg0 ;
-(CGFloat)distanceToEndFromIndex:(NSUInteger)arg0 ;
-(CGFloat)distanceToEndFromRouteCoordinate:(struct ? )arg0 ;
-(CGFloat)remainingDistanceAlongRouteFromStepIndex:(NSUInteger)arg0 currentStepRemainingDistance:(CGFloat)arg1 ;
-(CGFloat)remainingDistanceToEndOfLeg:(NSUInteger)arg0 currentStepRemainingDistance:(CGFloat)arg1 ;
-(CGFloat)remainingTimeAlongRouteFromStepIndex:(NSUInteger)arg0 currentStepRemainingDistance:(CGFloat)arg1 ;
-(CGFloat)remainingTimeToEndOfCurrentLegFrom:(struct PolylineCoordinate )arg0 etaRoute:(id)arg1 ;
-(CGFloat)remainingTimeToEndOfLeg:(NSUInteger)arg0 currentStepRemainingDistance:(CGFloat)arg1 ;
-(CGFloat)remainingTimeToEndOfRouteFrom:(struct PolylineCoordinate )arg0 etaRoute:(id)arg1 ;
-(CGFloat)stepDistanceFromPoint:(struct PolylineCoordinate )arg0 toPoint:(struct PolylineCoordinate )arg1 ;
-(NSUInteger)_tripIndexForTripSegment:(id)arg0 ;
-(NSUInteger)lastStepIndexOfLegAtStepIndex:(NSUInteger)arg0 ;
-(NSUInteger)legIndexForRouteCoordinate:(struct ? )arg0 ;
-(NSUInteger)legIndexForStepIndex:(NSUInteger)arg0 ;
-(NSUInteger)segmentIndexForPointIndex:(NSUInteger)arg0 ;
-(NSUInteger)segmentIndexForRouteCoordinate:(struct ? )arg0 ;
-(NSUInteger)segmentIndexForStepIndex:(NSUInteger)arg0 ;
-(NSUInteger)stepIndexForPointIndex:(NSUInteger)arg0 ;
-(NSUInteger)stepIndexForRouteCoordinate:(struct ? )arg0 ;
-(id)_geoETAWaypointRouteWithZilchFromRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(id)_nextOptionForOption:(id)arg0 rideIndex:(NSUInteger)arg1 ;
-(id)boardStepForSection:(id)arg0 ;
-(id)coordinates;
-(id)etaRoute;
-(id)etaRouteFromRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(id)geoETAWaypointRoute;
-(id)geoETAWaypointRouteFromRouteCoordinate:(struct PolylineCoordinate )arg0 includeOriginWaypointInfo:(BOOL)arg1 startPathSegment:(id)arg2 ;
-(id)geoOriginalWaypointRouteFromRouteCoordinate:(struct PolylineCoordinate )arg0 purpose:(int)arg1 ;
-(id)geoOriginalWaypointRouteFromRouteCoordinate:(struct PolylineCoordinate )arg0 purpose:(int)arg1 origin:(id)arg2 startPathSegment:(id)arg3 ;
-(id)geoTrafficBannerText;
-(id)getHallForStop:(id)arg0 ;
-(id)getSnappedPathsForLocation:(struct ? )arg0 radius:(CGFloat)arg1 observer:(id)arg2 ;
-(id)getSnappedPathsForVisibleRect:(struct ? )arg0 rectsToSnap:(struct ? *)arg1 rectsToSnapCount:(NSUInteger)arg2 observer:(id)arg3 ;
-(id)getSnappedPathsForVisibleRect:(struct ? )arg0 rectsToSnap:(struct ? *)arg1 rectsToSnapCount:(NSUInteger)arg2 observer:(id)arg3 completionHandler:(id)arg4 ;
-(id)getStationForHall:(id)arg0 ;
-(id)getStationForStop:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompanionRoute:(id)arg0 ;
-(id)initWithGeoWaypointRoute:(id)arg0 initializerData:(id)arg1 ;
-(id)initWithSuggestedRoute:(id)arg0 initializerData:(id)arg1 ;
-(id)initWithSuggestedRoute:(id)arg0 initializerData:(id)arg1 uniqueRouteID:(id)arg2 ;
-(id)initWithSuggestedRoute:(id)arg0 initializerData:(id)arg1 updateRequest:(id)arg2 ;
-(id)initWithTransitGeometry:(id)arg0 andLine:(id)arg1 andStops:(id)arg2 ;
-(id)lastEVStep;
-(id)lastEVStepInLegWithIndex:(NSUInteger)arg0 ;
-(id)roadFeatureAtPointIndex:(unsigned int)arg0 ;
-(id)routeMatchAtDistance:(CGFloat)arg0 from:(id)arg1 stopAtEndOfTunnel:(BOOL)arg2 stopAtEndOfManeuver:(BOOL)arg3 date:(id)arg4 ;
-(id)routingPathDataFromStart:(struct PolylineCoordinate )arg0 ;
-(id)sectionOptionForTripIndex:(NSUInteger)arg0 ;
-(id)sectionOptionForTripSegment:(id)arg0 ;
-(id)segmentForPointIndex:(unsigned int)arg0 ;
-(id)segmentForStepIndex:(NSUInteger)arg0 ;
-(id)stepAtIndex:(NSUInteger)arg0 ;
-(id)stepForPointIndex:(unsigned int)arg0 ;
-(id)ticketingSegmentsForSelectedRides;
-(id)truncatedTrafficFromRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(id)waypointsFromRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(id)zilchDataArrayToEndOfRouteFromStepIndex:(NSUInteger)arg0 ;
-(id)zilchDataFromStepIndex:(NSUInteger)arg0 ;
-(int)estimatedCellularCoverageForOffset:(CGFloat)arg0 ;
-(int)formOfWayAt:(unsigned int)arg0 ;
-(int)transportTypeForStep:(id)arg0 ;
-(struct ? )locationAtDistance:(CGFloat)arg0 from:(id)arg1 ;
-(struct ? )pointAt:(NSUInteger)arg0 ;
-(struct ? )pointAtRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(struct ? )routeCoordinateForDistance:(CGFloat)arg0 afterRouteCoordinate:(struct ? )arg1 ;
-(struct ? )routeCoordinateForDistance:(CGFloat)arg0 beforeRouteCoordinate:(struct ? )arg1 ;
-(struct ? )routeCoordinateForDistanceAfterStart:(CGFloat)arg0 ;
-(struct ? )routeCoordinateForDistanceBeforeEnd:(CGFloat)arg0 ;
-(struct PolylineCoordinate )_findRouteCoordinateWithOffset:(float)arg0 aPos:(*void)arg1 aCoord:(struct PolylineCoordinate *)arg2 bCoord:(struct PolylineCoordinate *)arg3 pointOnSegment:(*void)arg4 bounds:(struct ? *)arg5 ;
-(struct PolylineCoordinate )closestPointOnRoute:(struct ? )arg0 ;
-(struct PolylineCoordinate )coordinateAtOffset:(CGFloat)arg0 ;
-(struct PolylineCoordinate )coordinateAtOffset:(CGFloat)arg0 fromRouteCoordinate:(struct PolylineCoordinate )arg1 ;
-(struct PolylineCoordinate )coordinateAtOffset:(CGFloat)arg0 fromRoutePoint:(NSUInteger)arg1 ;
-(struct PolylineCoordinate )routeCoordinateAtDistance:(CGFloat)arg0 beforeRouteCoordinate:(struct PolylineCoordinate )arg1 ;
-(unsigned int)laneCountAtRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(void)_addPaths:(id)arg0 forObserver:(id)arg1 ;
-(void)_addSnappedPolylinePathsForSection:(id)arg0 toPaths:(id)arg1 rects:(struct ? *)arg2 rectsCount:(NSUInteger)arg3 ;
-(void)_enumerateAllStepsWithBlock:(id)arg0 ;
-(void)_ingestRouteBuilderOutput:(id)arg0 ;
-(void)_initAdvisoriesForRoute:(id)arg0 initializerData:(id)arg1 ;
-(void)_initOtherRouteFeatures:(id)arg0 initializerData:(id)arg1 ;
-(void)_initializeManeuverDisplaySteps;
-(void)_iterateTravelTimeRangesForStep:(id)arg0 handler:(id)arg1 ;
-(void)_populateArtworkForSuggestedRoute:(id)arg0 decoderData:(id)arg1 ;
-(void)_rebuildRouteForRideChange;
-(void)_snapPaths:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateRevisionIdentifier;
-(void)applyCompanionUpdates:(id)arg0 ;
-(void)applyUpdatesToTransitRoute:(id)arg0 ;
-(void)clearPoints;
-(void)clearSnappedPathsForObserver:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateCellularCoverageRangesWithBlock:(id)arg0 ;
-(void)forEachSnappedPath:(id)arg0 ;
-(void)getFormOfWay:(*int)arg0 roadClass:(*int)arg1 at:(unsigned int)arg2 ;
-(void)iterateTravelTimeRangesFromRouteCoordinate:(struct PolylineCoordinate )arg0 etaRoute:(id)arg1 handler:(id)arg2 ;
-(void)maneuverDisplayHasChanged;
-(void)registerObserver:(id)arg0 ;
-(void)roadFeaturesForRouteCoordinate:(struct PolylineCoordinate )arg0 distanceAhead:(CGFloat)arg1 handler:(id)arg2 ;
-(void)selectRide:(NSUInteger)arg0 forBoardStep:(id)arg1 ;
-(void)selectRide:(NSUInteger)arg0 forTripSegment:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateRouteWithRideSelections:(id)arg0 ;
-(void)updateTransitRouteUpdateRequest:(id)arg0 ;


@end


#endif