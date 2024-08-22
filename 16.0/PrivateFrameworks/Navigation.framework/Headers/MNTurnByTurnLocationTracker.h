// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTURNBYTURNLOCATIONTRACKER_H
#define MNTURNBYTURNLOCATIONTRACKER_H

@class GEONavigationMapMatcher, NSDate, GEODirectionsServiceRequest, NSTimer, NSMutableArray, GEOPathMatcher, NSString, NSData;
@protocol GEOPListStateCapturing, MNArrivalUpdaterDelegate;


#import "MNLocationTracker.h"
#import "MNArrivalUpdater.h"
#import "MNLocation.h"

@interface MNTurnByTurnLocationTracker : MNLocationTracker <GEOPListStateCapturing, MNArrivalUpdaterDelegate>

 {
    GEONavigationMapMatcher *_mapMatcher;
    MNArrivalUpdater *_arrivalUpdater;
    NSUInteger _lastArrivalLegIndex;
    NSDate *_startDate;
    ? _originCoordinate;
    GEODirectionsServiceRequest *_pendingRequest;
    NSUInteger _rerouteReason;
    NSUInteger _responseErrorCount;
    NSUInteger _recalculationNetworkUnreachableCount;
    NSTimer *_recalculationRetryTimer;
    MNLocation *_previousRerouteLocation;
    NSMutableArray *_rerouteDates;
    NSUInteger _consecutiveOffRouteCount;
    MNLocation *_lastKnownGoodLocationOnRoute;
    BOOL _isNavigatingInLowGuidance;
    GEOPathMatcher *_pathMatcher;
    NSUInteger _stateCaptureHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *serverSessionState; // ivar: _serverSessionState
@property (readonly) Class superclass;


-(BOOL)_allowRerouteForLocation:(id)arg0 outError:(*id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg0 forLocation:(id)arg1 ;
-(BOOL)_isRoadFeatureInOppositeDirection:(id)arg0 ofCoordinate:(struct ? )arg1 course:(CGFloat)arg2 ;
-(BOOL)_shouldAdvanceGuidanceToRouteMatch:(id)arg0 ;
-(BOOL)hasArrivedAtFinalDestination;
-(BOOL)isRerouting;
-(NSUInteger)_modifiedStepIndexForMatchResult:(id)arg0 matchType:(NSUInteger)arg1 ;
-(id)_matchedLocationForLocation:(id)arg0 ;
-(id)_matchedLocationForMatchResult:(id)arg0 originalLocation:(id)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg0 ;
-(id)_overrideLocationForLocation:(id)arg0 ;
-(id)_rerouteRequestParametersForLocation:(id)arg0 transportType:(int)arg1 ;
-(id)_routeAttributesFromRouteCoordinate:(struct PolylineCoordinate )arg0 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)initForTestingWithRoute:(id)arg0 ;
-(id)initWithNavigationSession:(id)arg0 ;
-(int)_detectedMotionForLocation:(id)arg0 ;
-(int)_routeHintTypeForTransportType:(int)arg0 ;
-(void)_failedToRecalculateRouteWithError:(id)arg0 ;
-(void)_handleOffRouteForLocation:(id)arg0 ;
-(void)_handleSuccessfulRerouteRequest:(id)arg0 response:(id)arg1 waypoints:(id)arg2 ;
-(void)_handleWaypointRerouteForLocation:(id)arg0 ;
-(void)_recalculationRetryTimerFired:(id)arg0 ;
// -(void)_requestRerouteWithReason:(NSUInteger)arg0 requestHandler:(id)arg1 completionHandler:(unk)arg2 errorHandler:(id)arg3  ;
-(void)_retryLastRouteRecalculation;
-(void)_sendRouteHintForLocation:(id)arg0 ;
-(void)_setIsNavigatingInLowGuidance:(BOOL)arg0 ;
-(void)_updateForArrivalAtLegIndex:(NSUInteger)arg0 ;
-(void)_updateForDepartureFromLegIndex:(NSUInteger)arg0 withReason:(NSUInteger)arg1 ;
-(void)_updateForLocation:(id)arg0 ;
-(void)_updateForNewRoute:(id)arg0 rerouteReason:(NSUInteger)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)_updateForReroute:(id)arg0 rerouteReason:(NSUInteger)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)_updateStateForLocation:(id)arg0 ;
-(void)_updateSwitchTransportTypeForLocation:(id)arg0 ;
-(void)advanceToNextLeg;
-(void)arrivalUpdater:(id)arg0 didArriveAtEndOfLegIndex:(NSUInteger)arg1 ;
-(void)arrivalUpdater:(id)arg0 didDepartFromLegIndex:(NSUInteger)arg1 withReason:(NSUInteger)arg2 ;
-(void)arrivalUpdater:(id)arg0 didEnterPreArrivalStateForLegIndex:(NSUInteger)arg1 ;
-(void)arrivalUpdater:(id)arg0 didTimeoutAtLegIndex:(NSUInteger)arg1 withReason:(NSUInteger)arg2 ;
-(void)arrivalUpdater:(id)arg0 shouldShowChargingInfoForWaypoint:(id)arg1 ;
-(void)dealloc;
-(void)forceOnRoute:(id)arg0 atLocation:(id)arg1 ;
-(void)forceRerouteWithReason:(NSUInteger)arg0 ;
-(void)insertWaypoint:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeWaypointAtIndex:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)reroute:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)rerouteWithWaypoints:(id)arg0 completionHandler:(id)arg1 ;
-(void)startTrackingWithInitialLocation:(id)arg0 ;
-(void)stopTracking;
-(void)traceJumpedInTime;
-(void)updateDestination:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateLocation:(id)arg0 ;


@end


#endif