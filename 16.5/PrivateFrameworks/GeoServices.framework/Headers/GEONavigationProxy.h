// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONAVIGATIONPROXY_H
#define GEONAVIGATIONPROXY_H

@class NSXPCConnection, NSString, NSData, NSArray;
@protocol GEOServerFormattedStepStringFormatter;

#import <Foundation/Foundation.h>

#import "GEOComposedRoute.h"
#import "GEOLocation.h"
#import "GEORouteMatch.h"
#import "GEONameInfo.h"
#import "GEONavigationRouteSummary.h"
#import "GEONavigationRouteTransitSummary.h"
#import "GEOArrivalTimeAndDistanceInfo.h"
#import "GEONavigationGuidanceState.h"

@interface GEONavigationProxy : NSObject {
    NSXPCConnection *_navdConnection;
    int _navigationStartedToken;
    BOOL _hasNavigationStartedToken;
    NSString *_destinationName;
    GEOComposedRoute *_route;
    GEOLocation *_lastLocation;
    ? _matchedCoordinate;
    BOOL _locationUnreliable;
    GEORouteMatch *_routeMatch;
    NSString *_currentRoadName;
    BOOL _guidancePromptsEnabled;
    NSData *_activeRouteDetailsData;
    NSArray *_rideSelections;
    NSUInteger _stepIndex;
    NSUInteger _displayedStepIndex;
    GEONameInfo *_stepNameInfo;
    ? _positionFromSign;
    ? _positionFromManeuver;
    ? _positionFromDestination;
    NSUInteger _announcementStage;
    NSUInteger _nextAnnouncementStage;
    CGFloat _timeUntilNextAnnouncement;
    GEONavigationRouteSummary *_routeSummary;
    GEONavigationRouteTransitSummary *_transitRouteSummary;
    GEOArrivalTimeAndDistanceInfo *_timeAndDistanceInfo;
    GEONavigationGuidanceState *_guidanceState;
    int _navigationVoiceVolume;
    BOOL _isNavigatingInLowGuidance;
    BOOL _isConnectedToCarplay;
}


@property (retain, nonatomic) NSObject<GEOServerFormattedStepStringFormatter> *formatter; // ivar: _formatter


-(void)_clearState;
-(void)_closeNavdConnection;
-(void)_openNavdConnection;
-(void)_sendActiveRouteDetailsData;
-(void)_sendCurrentRoadName;
-(void)_sendGuidanceState;
-(void)_sendLocationAndCoordinate;
-(void)_sendNavigationVoiceVolume;
-(void)_sendPositionFromDestination;
-(void)_sendPositionFromManeuver;
-(void)_sendPositionFromSign;
-(void)_sendRideSelections;
-(void)_sendRouteSummary;
-(void)_sendStepIndex;
-(void)_sendStepNameInfo;
-(void)_sendTransitSummary;
-(void)dealloc;
-(void)setActiveRouteDetailsData:(id)arg0 ;
-(void)setAnnouncementStage:(NSUInteger)arg0 ;
-(void)setArrivedAtWaypoint:(id)arg0 endOfLegIndex:(NSUInteger)arg1 ;
-(void)setClusteredSectionSelectedRideFromRoute:(id)arg0 ;
-(void)setCurrentRoadName:(id)arg0 ;
-(void)setDestinationName:(id)arg0 ;
-(void)setDisplayedStepIndex:(NSUInteger)arg0 ;
-(void)setETAUpdate:(id)arg0 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg0 ;
-(void)setIsConnectedToCarplay:(BOOL)arg0 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg0 ;
-(void)setLastLocation:(id)arg0 routeMatchedCoordinate:(struct ? )arg1 ;
-(void)setLocationUnreliable:(BOOL)arg0 ;
-(void)setNavigationSessionState:(NSUInteger)arg0 transportType:(int)arg1 navigationType:(int)arg2 isResumingMultipointRoute:(BOOL)arg3 ;
-(void)setNavigationState:(int)arg0 ;
-(void)setNavigationVoiceVolume:(int)arg0 ;
-(void)setNextAnnouncementStage:(NSUInteger)arg0 timeUntilNextAnnouncement:(CGFloat)arg1 ;
-(void)setPositionFromDestination:(struct ? )arg0 ;
-(void)setPositionFromManeuver:(struct ? )arg0 ;
-(void)setPositionFromSign:(struct ? )arg0 ;
-(void)setResumedNavigatingFromWaypoint:(id)arg0 endOfLegIndex:(NSUInteger)arg1 ;
-(void)setRoute:(id)arg0 ;
-(void)setRouteMatch:(id)arg0 ;
-(void)setStepIndex:(NSUInteger)arg0 ;
-(void)setStepNameInfo:(id)arg0 ;
-(void)setTrafficForCurrentRoute:(id)arg0 ;
-(void)startWithDestinationName:(id)arg0 ;
-(void)stop;
-(void)triggerHaptics:(int)arg0 ;


@end


#endif