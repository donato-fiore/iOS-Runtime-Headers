// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNNAVIGATIONSESSION_H
#define MNNAVIGATIONSESSION_H

@class GEONavigationGuidanceState, NSString, GEOResourceManifestUpdateAssertion, NSUUID, GEOApplicationAuditToken, GEOComposedWaypoint, GEOMotionContext;
@protocol GEOMotionContextDelegate, MNAudioManagerObserver, MNGuidanceManagerDelegate, MNLocationManagerHeadingObserver, MNLocationManagerObserver, MNLocationTrackerDelegate, MNTimeAndDistanceUpdaterDelegate, MNTracePlayerObserver, MNVehicleMonitorDelegate, MNSessionUpdateManagerDelegate, MNAudioProvider;

#import <Foundation/Foundation.h>

#import "MNLocationTracker.h"
#import "MNGuidanceManager.h"
#import "MNTimeAndDistanceUpdater.h"
#import "MNVehicleMonitor.h"
#import "MNNavigationSessionLogger.h"
#import "MNTraceNavigationEventRecorder.h"
#import "MNTrafficIncidentAlert.h"
#import "MNObserverHashTable.h"
#import "MNGuidanceSignInfo.h"
#import "MNLocation.h"
#import "MNRouteManager.h"
#import "MNNavigationTraceManager.h"

@interface MNNavigationSession : NSObject <GEOMotionContextDelegate, MNAudioManagerObserver, MNGuidanceManagerDelegate, MNLocationManagerHeadingObserver, MNLocationManagerObserver, MNLocationTrackerDelegate, MNTimeAndDistanceUpdaterDelegate, MNTracePlayerObserver, MNVehicleMonitorDelegate, MNSessionUpdateManagerDelegate>

 {
    MNLocationTracker *_locationTracker;
    MNGuidanceManager *_guidanceManager;
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;
    MNVehicleMonitor *_vehicleMonitor;
    MNNavigationSessionLogger *_logger;
    MNTraceNavigationEventRecorder *_navigationEventRecorder;
    MNTrafficIncidentAlert *_activeTrafficIncidentAlert;
    BOOL _isSpeakingTrafficIncidentAlert;
    GEONavigationGuidanceState *_guidanceState;
    MNObserverHashTable *_observers;
    NSString *_tileLoaderClient;
    GEOResourceManifestUpdateAssertion *_manifestUpdateAssertion;
    BOOL _etaUpdatesDisabled;
    MNGuidanceSignInfo *_lastSignInfo;
    NSUUID *_lastLaneID;
    NSUUID *_lastJunctionViewID;
}


@property (retain, nonatomic) NSObject<MNAudioProvider> *audioProvider; // ivar: _audioProvider
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOComposedWaypoint *destination; // ivar: _destination
@property (nonatomic) NSUInteger displayedStepIndex; // ivar: _displayedStepIndex
@property (nonatomic) BOOL guidancePromptsEnabled; // ivar: _guidancePromptsEnabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllowedToSwitchTransportTypes; // ivar: _isAllowedToSwitchTransportTypes
@property (nonatomic) BOOL isConnectedToCarplay; // ivar: _isConnectedToCarplay
@property (readonly, nonatomic) MNLocation *lastMatchedLocation;
@property (readonly, nonatomic) GEOMotionContext *motionContext; // ivar: _motionContext
@property (readonly, nonatomic) int navigationState;
@property (readonly, nonatomic) int navigationType; // ivar: _navigationType
@property (readonly, nonatomic) MNRouteManager *routeManager; // ivar: _routeManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL traceIsPlaying;
@property (readonly, nonatomic) MNNavigationTraceManager *traceManager; // ivar: _traceManager


-(BOOL)isCurrentlySpeaking;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg0 ;
-(BOOL)repeatCurrentGuidance;
-(BOOL)repeatCurrentTrafficAlert;
-(BOOL)vibrateForPrompt:(NSUInteger)arg0 ;
-(BOOL)wantsETAUpdates;
-(CGFloat)durationForAnnouncement:(id)arg0 ;
-(CGFloat)timeSinceLastAnnouncement;
-(CGFloat)timeUntilNextAnnouncement;
-(id)_locationTrackerForTransportType:(int)arg0 navigationType:(int)arg1 ;
-(id)_transitStopAtStopIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithRouteManager:(id)arg0 auditToken:(id)arg1 traceManager:(id)arg2 ;
-(id)routeInfoForUpdateManager:(id)arg0 ;
-(id)userLocationForUpdateManager:(id)arg0 ;
-(void)_closeTileLoader;
-(void)_openTileLoader;
-(void)_startAudioSession;
-(void)_startGuidanceAllowMidRouteStart:(BOOL)arg0 announcementsToIgnore:(id)arg1 ;
-(void)_startLocationTracking;
-(void)_startLocationUpdates;
-(void)_startMotionUpdates;
-(void)_startTravelTimeUpdates;
-(void)_startVirtualGarageUpdates;
-(void)_stopAudioSession;
-(void)_stopGuidance;
-(void)_stopLocationTracking;
-(void)_stopLocationUpdates;
-(void)_stopMotionUpdates;
-(void)_stopTravelTimeUpdates;
-(void)_stopVirtualGarageUpdates;
-(void)addObserver:(id)arg0 ;
-(void)audioManager:(id)arg0 didActivateAudioSession:(BOOL)arg1 ;
-(void)audioManager:(id)arg0 didStartSpeakingPrompt:(id)arg1 ;
-(void)dealloc;
-(void)didChangeUserOptionsFrom:(id)arg0 to:(id)arg1 ;
-(void)disableNavigationCapability:(NSUInteger)arg0 ;
-(void)enableNavigationCapability:(NSUInteger)arg0 ;
-(void)forceReroute;
-(void)guidanceManager:(id)arg0 announce:(id)arg1 isImportant:(BOOL)arg2 shortPromptType:(NSUInteger)arg3 ignorePromptStyle:(BOOL)arg4 stage:(NSUInteger)arg5 hasSecondaryManeuver:(BOOL)arg6 completionBlock:(id)arg7 ;
-(void)guidanceManager:(id)arg0 didProcessSpeechEvent:(id)arg1 ;
-(void)guidanceManager:(id)arg0 hideJunctionViewForId:(id)arg1 ;
-(void)guidanceManager:(id)arg0 hideLaneDirectionsForId:(id)arg1 ;
-(void)guidanceManager:(id)arg0 newGuidanceEventFeedback:(id)arg1 ;
-(void)guidanceManager:(id)arg0 showJunctionView:(id)arg1 ;
-(void)guidanceManager:(id)arg0 showLaneDirections:(id)arg1 ;
-(void)guidanceManager:(id)arg0 triggerHaptics:(int)arg1 ;
-(void)guidanceManager:(id)arg0 updateSignsWithARInfo:(id)arg1 ;
-(void)guidanceManager:(id)arg0 updateSignsWithInfo:(id)arg1 ;
-(void)guidanceManager:(id)arg0 updatedGuidanceEventFeedback:(id)arg1 ;
-(void)guidanceManager:(id)arg0 usePersistentDisplay:(BOOL)arg1 ;
-(void)guidanceManager:(id)arg0 willAnnounce:(NSUInteger)arg1 inSeconds:(CGFloat)arg2 ;
-(void)guidanceManager:(id)arg0 willProcessSpeechEvent:(id)arg1 ;
-(void)guidanceManagerBeginGuidanceUpdate:(id)arg0 ;
-(void)guidanceManagerEndGuidanceUpdate:(id)arg0 ;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidReset:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg0 withError:(id)arg1 ;
-(void)locationManagerUpdatedHeading:(id)arg0 ;
-(void)locationManagerUpdatedLocation:(id)arg0 ;
-(void)locationTracker:(id)arg0 didArriveAtWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)locationTracker:(id)arg0 didChangeState:(int)arg1 ;
-(void)locationTracker:(id)arg0 didEnterPreArrivalStateForWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)locationTracker:(id)arg0 didFailRerouteWithError:(id)arg1 ;
-(void)locationTracker:(id)arg0 didReachETAUpdatePosition:(id)arg1 ;
-(void)locationTracker:(id)arg0 didReceiveRouteSignalStrength:(NSUInteger)arg1 ;
-(void)locationTracker:(id)arg0 didReceiveTransitAlert:(id)arg1 ;
-(void)locationTracker:(id)arg0 didReroute:(id)arg1 newAlternateRoutes:(id)arg2 rerouteReason:(NSUInteger)arg3 request:(id)arg4 response:(id)arg5 ;
-(void)locationTracker:(id)arg0 didResumeNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)locationTracker:(id)arg0 didSuppressReroute:(id)arg1 ;
-(void)locationTracker:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 request:(id)arg3 response:(id)arg4 ;
-(void)locationTracker:(id)arg0 didUpdateAlternateRoutes:(id)arg1 ;
-(void)locationTracker:(id)arg0 didUpdateETAForRoute:(id)arg1 ;
-(void)locationTracker:(id)arg0 didUpdateMatchedLocation:(id)arg1 ;
-(void)locationTracker:(id)arg0 invalidatedTrafficIncidentAlert:(id)arg1 ;
-(void)locationTracker:(id)arg0 matchedToStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)locationTracker:(id)arg0 receivedTrafficIncidentAlert:(id)arg1 responseCallback:(id)arg2 ;
-(void)locationTracker:(id)arg0 shouldShowChargingInfoForWaypoint:(id)arg1 ;
-(void)locationTracker:(id)arg0 updatedTrafficIncidentAlert:(id)arg1 ;
-(void)locationTrackerDidArrive:(id)arg0 ;
-(void)locationTrackerDidCancelReroute:(id)arg0 ;
-(void)locationTrackerDidEnterPreArrivalState:(id)arg0 ;
-(void)locationTrackerDidTimeoutInArrivalRegion:(id)arg0 ;
-(void)locationTrackerWillReroute:(id)arg0 ;
-(void)motionContextDidUpdateMotion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resumeOriginalDestination;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg0 ;
-(void)setJunctionViewImageWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)startNavigationSessionWithDetails:(id)arg0 ;
-(void)stopCurrentGuidancePrompt;
-(void)stopNavigationSessionWithReason:(NSUInteger)arg0 ;
-(void)switchToRoute:(id)arg0 ;
-(void)timeAndDistanceUpdater:(id)arg0 currentStepIndex:(NSUInteger)arg1 didUpdateDistanceUntilManeuver:(CGFloat)arg2 timeUntilManeuver:(CGFloat)arg3 ;
-(void)timeAndDistanceUpdater:(id)arg0 didUpdateDisplayETA:(id)arg1 remainingDistance:(id)arg2 ;
-(void)traceJumpedInTime;
-(void)tracePlayer:(id)arg0 didJumpToRouteResponse:(id)arg1 request:(id)arg2 origin:(id)arg3 destination:(id)arg4 ;
-(void)tracePlayer:(id)arg0 didPlayAtTime:(CGFloat)arg1 ;
-(void)tracePlayer:(id)arg0 didReceiveLocationError:(id)arg1 ;
-(void)tracePlayer:(id)arg0 didSeekToTime:(CGFloat)arg1 fromTime:(CGFloat)arg2 location:(id)arg3 ;
-(void)tracePlayer:(id)arg0 didSeekToTransportType:(int)arg1 ;
-(void)tracePlayer:(id)arg0 didUpdateHeading:(id)arg1 ;
-(void)tracePlayer:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)tracePlayer:(id)arg0 didUpdateMotion:(NSUInteger)arg1 exitType:(NSUInteger)arg2 confidence:(NSUInteger)arg3 ;
-(void)tracePlayer:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)tracePlayer:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)tracePlayerDidPause:(id)arg0 ;
-(void)tracePlayerDidPauseLocationUpdates:(id)arg0 ;
-(void)tracePlayerDidResume:(id)arg0 ;
-(void)tracePlayerDidResumeLocationUpdates:(id)arg0 ;
-(void)tracePlayerDidStart:(id)arg0 ;
-(void)tracePlayerDidStayOnRoute:(id)arg0 ;
-(void)tracePlayerDidStop:(id)arg0 ;
-(void)updateDestination:(id)arg0 ;
-(void)updateManager:(id)arg0 didReceiveETAResponse:(id)arg1 ;
-(void)updateManager:(id)arg0 didReceiveTransitError:(id)arg1 ;
-(void)updateManager:(id)arg0 didReceiveTransitUpdateResponse:(id)arg1 ;
-(void)updateManager:(id)arg0 didReceiveTransitUpdates:(id)arg1 ;
-(void)updateManager:(id)arg0 willSendETARequest:(id)arg1 ;
-(void)updateManager:(id)arg0 willSendTransitUpdateRequestForRouteIDs:(id)arg1 ;
-(void)updateManager:(id)arg0 willSendTransitUpdateRequests:(id)arg1 ;
-(void)updateWithInitialLocation:(id)arg0 ;
-(void)vehicleMonitorDidDisconnectFromVehicle:(id)arg0 ;


@end


#endif