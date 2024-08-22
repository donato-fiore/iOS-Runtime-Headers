// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNDRIVINGTURNBYTURNLOCATIONTRACKER_H
#define MNDRIVINGTURNBYTURNLOCATIONTRACKER_H

@class NSMutableArray, NSString;
@protocol MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate;


#import "MNTurnByTurnLocationTracker.h"
#import "MNTunnelLocationProjector.h"
#import "MNAlternateRoutesUpdater.h"
#import "MNTrafficIncidentAlertUpdater.h"

@interface MNDrivingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate>

 {
    MNTunnelLocationProjector *_tunnelLocationProjector;
    MNAlternateRoutesUpdater *_alternateRoutesUpdater;
    MNTrafficIncidentAlertUpdater *_trafficIncidentAlertUpdater;
    int _detectedTransportType;
    BOOL _exitedVehicle;
    NSUInteger _vehicleExitConfidence;
    ? _vehicleExitCoordinate;
    NSMutableArray *_etauPositions;
    CGFloat _lastKnownCourse;
    CGFloat _consecutiveValidCourseCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_allowSwitchToTransportType:(int)arg0 forLocation:(id)arg1 ;
-(BOOL)shouldProjectAlongRoute;
-(BOOL)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg0 ;
-(CGFloat)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg0 ;
-(CGFloat)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg0 ;
-(id)_matchedLocationForLocation:(id)arg0 ;
-(id)_newMapMatcherForRoute:(id)arg0 ;
-(id)_overrideLocationForLocation:(id)arg0 ;
-(id)initWithNavigationSession:(id)arg0 ;
-(int)_detectedMotionForLocation:(id)arg0 ;
-(int)transportType;
-(void)_updateForAlternateRoutes:(id)arg0 ;
-(void)_updateForArrivalAtLegIndex:(NSUInteger)arg0 ;
-(void)_updateForLocation:(id)arg0 ;
-(void)_updateForReroute:(id)arg0 rerouteReason:(NSUInteger)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)startTrackingWithInitialLocation:(id)arg0 targetLegIndex:(NSUInteger)arg1 ;
-(void)stopTracking;
-(void)tracePaused;
-(void)trafficIncidentAlertUpdater:(id)arg0 didDismissAlert:(id)arg1 withReroute:(BOOL)arg2 ;
-(void)trafficIncidentAlertUpdater:(id)arg0 didSwitchToNewRoute:(id)arg1 forAlert:(id)arg2 ;
-(void)trafficIncidentAlertUpdater:(id)arg0 invalidatedAlert:(id)arg1 ;
-(void)trafficIncidentAlertUpdater:(id)arg0 receivedAlert:(id)arg1 responseCallback:(id)arg2 ;
-(void)trafficIncidentAlertUpdater:(id)arg0 updatedAlert:(id)arg1 ;
-(void)tunnelLocationProjector:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)updateForETAUResponse:(id)arg0 ;
-(void)updateRequestForETAUpdate:(id)arg0 ;


@end


#endif