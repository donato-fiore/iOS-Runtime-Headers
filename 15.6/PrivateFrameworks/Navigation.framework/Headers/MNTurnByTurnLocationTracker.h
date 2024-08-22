// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTURNBYTURNLOCATIONTRACKER_H
#define MNTURNBYTURNLOCATIONTRACKER_H

@class GEONavigationMapMatcher, NSDate, GEODirectionsRequest, NSTimer, NSMutableArray, GEOPathMatcher, NSString, NSData;
@protocol MNArrivalUpdaterDelegate, MNEVChargingStateMonitorDelegate, GEODirectionServiceTicket;


#import "MNLocationTracker.h"
#import "MNArrivalUpdater.h"
#import "MNLocation.h"
#import "MNEVChargingStateMonitor.h"

@interface MNTurnByTurnLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate, MNEVChargingStateMonitorDelegate>

 {
    GEONavigationMapMatcher *_mapMatcher;
    MNArrivalUpdater *_arrivalUpdater;
    NSUInteger _lastArrivalLegIndex;
    NSDate *_startDate;
    ? _originCoordinate;
    id<GEODirectionServiceTicket> *_rerouteTicket;
    GEODirectionsRequest *_request;
    NSUInteger _rerouteReason;
    NSInteger _responseErrorCode;
    NSUInteger _responseErrorCount;
    NSUInteger _recalculationNetworkUnreachableCount;
    NSTimer *_recalculationRetryTimer;
    MNLocation *_previousRerouteLocation;
    NSMutableArray *_rerouteDates;
    NSUInteger _consecutiveOffRouteCount;
    MNLocation *_lastKnownGoodLocationOnRoute;
    BOOL _isNavigatingInLowGuidance;
    MNEVChargingStateMonitor *_evChargingStateMonitor;
    GEOPathMatcher *_pathMatcher;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *serverSessionState; // ivar: _serverSessionState
@property (readonly) Class superclass;


-(BOOL)_allowRerouteForLocation:(id)arg0 outError:(*id)arg1 ;
-(BOOL)_allowSwitchToTransportType:(int)arg0 forLocation:(id)arg1 ;
-(BOOL)_hasArrivedAtFinalDestination;
-(BOOL)_isCameraTestMode;
-(BOOL)_isRoadFeatureInOppositeDirection:(id)arg0 ofCoordinate:(struct ? )arg1 course:(CGFloat)arg2 ;
-(BOOL)_shouldAdvanceGuidanceToRouteMatch:(id)arg0 ;
-(BOOL)isRerouting;
-(id)_alternateRouteForOffRouteLocation:(id)arg0 ;
-(id)_matchedLocationForLocation:(id)arg0 ;
-(id)_matchedLocationForMatchResult:(id)arg0 originalLocation:(id)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg0 ;
-(id)_overrideLocationForLocation:(id)arg0 ;
-(id)_rerouteTicketForLocation:(id)arg0 transportType:(int)arg1 ;
-(id)_ticketForNewDestination:(id)arg0 fromLocation:(id)arg1 transportType:(int)arg2 ;
-(id)initForTestingWithRoute:(id)arg0 ;
-(id)initWithNavigationSession:(id)arg0 ;
-(int)_detectedMotionForLocation:(id)arg0 ;
-(int)_routeHintTypeForTransportType:(int)arg0 ;
-(void)_failedToRecalculateRouteWithError:(id)arg0 ;
-(void)_handleOffRouteForLocation:(id)arg0 ;
-(void)_recalculationRetryTimerFired:(id)arg0 ;
-(void)_requestDirectionsForLocation:(id)arg0 destination:(id)arg1 transportType:(int)arg2 handler:(id)arg3 ;
-(void)_reroute:(id)arg0 rerouteReason:(NSUInteger)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)_retryLastRouteRecalculation;
-(void)_sendRouteHintForLocation:(id)arg0 ;
-(void)_setIsNavigatingInLowGuidance:(BOOL)arg0 ;
-(void)_startMonitoringBatteryChargeForLegIndex:(NSUInteger)arg0 ;
-(void)_submitRerouteTicketWithHandler:(id)arg0 ;
-(void)_updateForArrivalAtLegIndex:(NSUInteger)arg0 ;
-(void)_updateForDepartureAtLegIndex:(NSUInteger)arg0 ;
-(void)_updateForLocation:(id)arg0 ;
-(void)_updateForReroute:(id)arg0 rerouteReason:(NSUInteger)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)_updateStateForLocation:(id)arg0 ;
-(void)_updateSwitchTransportTypeForLocation:(id)arg0 ;
-(void)arrivalUpdater:(id)arg0 didArriveAtEndOfLegAtIndex:(NSUInteger)arg1 ;
-(void)arrivalUpdater:(id)arg0 didEnterPreArrivalStateForLegIndex:(NSUInteger)arg1 ;
-(void)arrivalUpdater:(id)arg0 isApproachingEndOfLegAtIndex:(NSUInteger)arg1 ;
-(void)arrivalUpdaterDidTimeoutInArrivalRegion:(id)arg0 ;
-(void)dealloc;
-(void)evChargingStateMonitor:(id)arg0 didChangeChargingState:(BOOL)arg1 ;
-(void)evChargingStateMonitor:(id)arg0 didReachTargetBatteryCharge:(id)arg1 ;
-(void)evChargingStateMonitorShouldShowChargingInfo:(id)arg0 ;
-(void)forceOnRoute:(id)arg0 atLocation:(id)arg1 ;
-(void)forceReroute;
-(void)reroute:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)startTracking;
-(void)stopTracking;
-(void)traceJumpedInTime;
-(void)updateDestination:(id)arg0 finishedHandler:(id)arg1 ;
-(void)updateLocation:(id)arg0 ;


@end


#endif