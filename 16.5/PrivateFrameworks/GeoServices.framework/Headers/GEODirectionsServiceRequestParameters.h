// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEODIRECTIONSSERVICEREQUESTPARAMETERS_H
#define GEODIRECTIONSSERVICEREQUESTPARAMETERS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"
#import "GEOCommonOptions.h"
#import "GEOLocation.h"
#import "GEOComposedRoute.h"
#import "GEODirectionsRequestFeedback.h"
#import "GEOMatchedPathSegment.h"
#import "GEORecentLocationHistory.h"
#import "GEOResumeRouteHandle.h"
#import "GEORouteAttributes.h"
#import "GEOMapRegion.h"
#import "GEOComposedWaypoint.h"

@interface GEODirectionsServiceRequestParameters : NSObject

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (retain, nonatomic) GEOCommonOptions *commonOptions; // ivar: _commonOptions
@property (retain, nonatomic) GEOLocation *currentLocation; // ivar: _currentLocation
@property (retain, nonatomic) GEOComposedRoute *currentRoute; // ivar: _currentRoute
@property (nonatomic) CGFloat displayRemainingTimeToDestination; // ivar: _displayRemainingTimeToDestination
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback; // ivar: _feedback
@property (nonatomic) NSUInteger maxRouteCount; // ivar: _maxRouteCount
@property (retain, nonatomic) GEOMatchedPathSegment *pathSegment; // ivar: _pathSegment
@property (retain, nonatomic) GEORecentLocationHistory *recentLocationHistory; // ivar: _recentLocationHistory
@property (copy, nonatomic) id *requestCallback; // ivar: _requestCallback
@property (nonatomic) NSInteger requestPriority; // ivar: _requestPriority
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (retain, nonatomic) NSString *requestingAppIdentifier; // ivar: _requestingAppIdentifier
@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle; // ivar: _resumeRouteHandle
@property (nonatomic) BOOL returnToOriginalDestination; // ivar: _returnToOriginalDestination
@property (retain, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (nonatomic) ? routeCoordinate; // ivar: _routeCoordinate
@property (nonatomic) NSUInteger startingLegIndex; // ivar: _startingLegIndex
@property (nonatomic) int transportType; // ivar: _transportType
@property (retain, nonatomic) GEOMapRegion *visibleRegion; // ivar: _visibleRegion
@property (nonatomic) NSUInteger waypointIndexToRemove; // ivar: _waypointIndexToRemove
@property (nonatomic) NSUInteger waypointModificationType; // ivar: _waypointModificationType
@property (retain, nonatomic) GEOComposedWaypoint *waypointToInsert; // ivar: _waypointToInsert
@property (retain, nonatomic) NSArray *waypoints; // ivar: _waypoints


-(id)init;


@end


#endif