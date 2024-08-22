// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROUTEBUILDER_H
#define GEOROUTEBUILDER_H


#import <Foundation/Foundation.h>


@interface GEORouteBuilder : NSObject



+(BOOL)_isGuidanceEventAtEndOfLeg:(int)arg0 ;
+(NSUInteger)segmentIndexForPointIndex:(NSUInteger)arg0 withSegments:(id)arg1 ;
+(NSUInteger)stepIndexForPointIndex:(NSUInteger)arg0 withSteps:(id)arg1 ;
+(id)_buildCoordinatesForGeoRoute:(id)arg0 ;
+(id)_buildGuidanceEventsForGeoRoute:(id)arg0 withComposedSteps:(id)arg1 coordinates:(id)arg2 ;
+(id)_cellularCoverageForGeoRoute:(id)arg0 coordinates:(id)arg1 ;
+(id)_cellularCoverageForGeoWaypointRoute:(id)arg0 coordinates:(id)arg1 ;
+(id)_composedRouteLegForStartStep:(id)arg0 endStep:(id)arg1 custodian:(id)arg2 geoRouteLeg:(id)arg3 legIndex:(NSUInteger)arg4 origin:(id)arg5 destination:(id)arg6 arrivalParameters:(id)arg7 legLength:(CGFloat)arg8 ;
+(id)_composedRouteSegmentForStartStep:(id)arg0 andEndStep:(id)arg1 andCustodian:(id)arg2 ;
+(id)_composedRouteStepWithTransportType:(int)arg0 andCustodian:(id)arg1 geoRouteLeg:(id)arg2 forGeoStep:(id)arg3 withStepIndex:(NSUInteger)arg4 startRouteCoordinate:(struct PolylineCoordinate )arg5 endRouteCoordinate:(struct PolylineCoordinate )arg6 maneuverStartRouteCoordinate:(struct PolylineCoordinate )arg7 ;
+(id)_composedRouteStepWithTransportType:(int)arg0 andCustodian:(id)arg1 geoRouteLeg:(id)arg2 forGeoStep:(id)arg3 withStepIndex:(NSUInteger)arg4 stepStartPointIndex:(NSUInteger)arg5 legStartPointIndex:(NSUInteger)arg6 ;
+(id)_coordinatesForGeoWaypointRoute:(id)arg0 ;
+(id)_guidanceEventsForGeoWaypointRoute:(id)arg0 legs:(id)arg1 steps:(id)arg2 coordinates:(id)arg3 ;
+(id)_roadComplexitiesForGeoWaypointRoute:(id)arg0 coordinates:(id)arg1 ;
+(id)_segmentForStepIndex:(NSUInteger)arg0 withSegments:(id)arg1 ;
+(id)_unpackedPointsDataForGeoRoute:(id)arg0 ;
+(id)_visualInfosForGuidanceEvents:(id)arg0 steps:(id)arg1 coordinates:(id)arg2 ;
+(id)buildMapRegionFromPointSections:(id)arg0 ;
+(id)buildPointSectionsWithSteps:(id)arg0 segments:(id)arg1 coordinates:(id)arg2 ;
+(id)outputForGeoRoute:(id)arg0 initializerData:(id)arg1 andCustodian:(id)arg2 ;
+(id)outputForGeoWaypointRoute:(id)arg0 initializerData:(id)arg1 custodian:(id)arg2 ;
+(id)segmentForPointIndex:(NSUInteger)arg0 withSegments:(id)arg1 andSteps:(id)arg2 ;
+(void)_buildComponentsForGeoRoute:(id)arg0 andCustodian:(id)arg1 initializerData:(id)arg2 outLegs:(*id)arg3 outSegments:(*id)arg4 outSteps:(*id)arg5 ;
+(void)_componentsForGeoWaypointRoute:(id)arg0 initializerData:(id)arg1 coordinates:(id)arg2 custodian:(id)arg3 outLegs:(*id)arg4 outSegments:(*id)arg5 outSteps:(*id)arg6 ;


@end


#endif