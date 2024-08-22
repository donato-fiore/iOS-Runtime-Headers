// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNLOCATIONTRACKER_H
#define MNLOCATIONTRACKER_H

@class GEOApplicationAuditToken, NSString;
@protocol MNNavigationSessionObserver;

#import <Foundation/Foundation.h>

#import "MNLocation.h"
#import "MNNavigationSession.h"
#import "MNObserverHashTable.h"

@interface MNLocationTracker : NSObject <MNNavigationSessionObserver>

 {
    BOOL _localizeRoadNames;
}


@property (retain, nonatomic, getter=_auditToken, setter=_setAuditToken:) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArrived;
@property (readonly, nonatomic) BOOL hasArrivedAtFinalDestination;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRerouting;
@property (readonly, nonatomic) MNLocation *lastMatchedLocation; // ivar: _lastMatchedLocation
@property (readonly, weak, nonatomic) MNNavigationSession *navigationSession; // ivar: _navigationSession
@property (readonly, nonatomic) MNObserverHashTable *safeDelegate; // ivar: _safeDelegate
@property (readonly, nonatomic) BOOL shouldProjectAlongRoute;
@property (nonatomic, setter=_setState:) int state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic, setter=_setTargetLegIndex:) NSUInteger targetLegIndex; // ivar: _targetLegIndex
@property (readonly, nonatomic) int transportType;


-(BOOL)paused;
-(BOOL)shouldAllowPause;
-(id)_matchedLocationForLocation:(id)arg0 ;
-(id)init;
-(id)initWithNavigationSession:(id)arg0 ;
-(id)matchedLocationForLocation:(id)arg0 ;
-(void)_defaultsDidChange;
-(void)_roadFeaturesForFeature:(id)arg0 outRoadName:(*id)arg1 outShieldText:(*id)arg2 outShieldType:(*NSInteger)arg3 ;
-(void)_setIsNavigatingInLowGuidance:(BOOL)arg0 ;
-(void)_switchedToStepAtIndex:(NSUInteger)arg0 ;
-(void)_updateMatchedLocation:(id)arg0 ;
-(void)_updateShouldLocalizeRoadNames;
-(void)advanceToNextLeg;
-(void)dealloc;
-(void)enterRegionWithId:(id)arg0 ;
-(void)exitRegionWithId:(id)arg0 ;
-(void)forceOnRoute:(id)arg0 atLocation:(id)arg1 ;
-(void)forceRerouteWithReason:(NSUInteger)arg0 ;
-(void)insertWaypoint:(id)arg0 completionHandler:(id)arg1 ;
-(void)monitoringDidFailForRegionWithId:(id)arg0 withError:(id)arg1 ;
-(void)pause;
-(void)removeWaypointAtIndex:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)reroute:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)rerouteWithWaypoints:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetForTracePlayerAtLocation:(id)arg0 ;
-(void)resume;
-(void)setDelegate:(id)arg0 ;
-(void)startTrackingWithInitialLocation:(id)arg0 ;
-(void)stopTracking;
-(void)traceForcedActiveTransportTypeChange:(int)arg0 ;
-(void)traceForcedRerouteWithResponse:(id)arg0 request:(id)arg1 ;
-(void)traceJumpedInTime;
-(void)tracePaused;
-(void)updateDestination:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateForETAUResponse:(id)arg0 ;
-(void)updateLocation:(id)arg0 ;
-(void)updateRequestForETAUpdate:(id)arg0 ;
-(void)updateVehicleHeading:(CGFloat)arg0 timestamp:(id)arg1 ;
-(void)updateVehicleSpeed:(CGFloat)arg0 timestamp:(id)arg1 ;


@end


#endif