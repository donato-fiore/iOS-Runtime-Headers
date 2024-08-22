// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNNAVIGATIONDETAILS_H
#define MNNAVIGATIONDETAILS_H

@class NSArray, NSMapTable, NSMutableDictionary, geo_isolater, GEOComposedRoute, NSString, GEODirectionsRequest, GEODirectionsResponse, GEONavigationGuidanceState, GEOComposedWaypoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MNActiveRouteInfo.h"
#import "MNGuidanceLaneInfo.h"
#import "MNDisplayETAInfo.h"
#import "MNLocation.h"
#import "MNRouteDistanceInfo.h"

@interface MNNavigationDetails : NSObject <NSSecureCoding>

 {
    MNActiveRouteInfo *_currentRoute;
    NSArray *_previewRoutes;
    NSArray *_alternateRoutes;
    NSMapTable *_routeIDLookup;
    NSMutableDictionary *_trafficIncidentAlerts;
    geo_isolater *_routeLookupLock;
}


@property (retain, nonatomic) MNGuidanceLaneInfo *activeLaneInfo; // ivar: _activeLaneInfo
@property (readonly, nonatomic) NSArray *alternateRoutes;
@property (nonatomic) NSUInteger closestStepIndex; // ivar: _closestStepIndex
@property (readonly, nonatomic) GEOComposedRoute *currentRoute;
@property (retain, nonatomic) NSString *currentVoiceLanguage; // ivar: _currentVoiceLanguage
@property (nonatomic) int desiredNavigationType; // ivar: _desiredNavigationType
@property (nonatomic) int desiredTransportType; // ivar: _desiredTransportType
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest; // ivar: _directionsRequest
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse; // ivar: _directionsResponse
@property (readonly, nonatomic) MNDisplayETAInfo *displayETAInfo;
@property (retain, nonatomic) NSString *displayString; // ivar: _displayString
@property (nonatomic) NSUInteger displayedStepIndex; // ivar: _displayedStepIndex
@property (nonatomic) CGFloat distanceUntilManeuver; // ivar: _distanceUntilManeuver
@property (nonatomic) CGFloat distanceUntilSign; // ivar: _distanceUntilSign
@property (nonatomic) BOOL guidancePromptsEnabled; // ivar: _guidancePromptsEnabled
@property (retain, nonatomic) GEONavigationGuidanceState *guidanceState; // ivar: _guidanceState
@property (nonatomic) int headingOrientation; // ivar: _headingOrientation
@property (nonatomic) BOOL isDetour; // ivar: _isDetour
@property (nonatomic) BOOL isInPreArrivalState; // ivar: _isInPreArrivalState
@property (retain, nonatomic) MNLocation *location; // ivar: _location
@property (nonatomic) int navigationState; // ivar: _navigationState
@property (nonatomic) int navigationType; // ivar: _navigationType
@property (retain, nonatomic) GEOComposedWaypoint *originalDestination; // ivar: _originalDestination
@property (retain, nonatomic) GEOComposedWaypoint *originalOrigin; // ivar: _originalOrigin
@property (readonly, nonatomic) NSArray *previewRoutes;
@property (nonatomic) CGFloat proceedToRouteDistance; // ivar: _proceedToRouteDistance
@property (readonly, nonatomic) NSUInteger reconnectionRouteIndex; // ivar: _reconnectionRouteIndex
@property (readonly, nonatomic) MNRouteDistanceInfo *remainingDistanceInfo;
@property (readonly, nonatomic) NSMapTable *routeIDLookup;
@property (readonly, nonatomic) NSUInteger routeIndex; // ivar: _routeIndex
@property (readonly, nonatomic) NSMutableDictionary *routeLookup; // ivar: _routeLookup
@property (readonly, nonatomic) NSUInteger segmentIndex;
@property (readonly, nonatomic) NSUInteger selectedPreviewRouteIndex; // ivar: _selectedPreviewRouteIndex
@property (readonly, nonatomic) NSArray *spokenAnnouncements; // ivar: _spokenAnnouncements
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSUInteger stepIndex;
@property (nonatomic) CGFloat timeUntilManeuver; // ivar: _timeUntilManeuver
@property (nonatomic) CGFloat timeUntilSign; // ivar: _timeUntilSign
@property (retain, nonatomic) NSArray *traceBookmarks; // ivar: _traceBookmarks
@property (nonatomic) CGFloat traceDuration; // ivar: _traceDuration
@property (nonatomic) BOOL traceIsPlaying; // ivar: _traceIsPlaying
@property (copy, nonatomic) NSString *tracePath; // ivar: _tracePath
@property (nonatomic) CGFloat tracePosition; // ivar: _tracePosition


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)removeTrafficIncidentAlert:(id)arg0 ;
-(id)routeInfoForID:(id)arg0 ;
-(id)routeInfoForRoute:(id)arg0 ;
-(id)updateWithTrafficIncidentAlert:(id)arg0 ;
-(void)_updateRouteIDLookup;
-(void)copySerializableValuesFrom:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markAnnouncementSpoken:(id)arg0 ;
-(void)updateETATrafficForRoute:(id)arg0 ;


@end


#endif