// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNNAVIGATIONSESSIONMANAGER_H
#define MNNAVIGATIONSESSIONMANAGER_H

@class NSMutableDictionary, GEOApplicationAuditToken, NSString;
@protocol MNSessionUpdateManagerDelegate, MNNavigationSessionObserver, MNUserOptionsObserver, MNNavigationTraceManagerDelegate, MNNavigationSessionManagerDelegate;

#import <Foundation/Foundation.h>

#import "MNNavigationProxyUpdater.h"
#import "MNNavigationSession.h"
#import "MNRouteManager.h"
#import "MNSimulationLocationProvider.h"
#import "MNNavigationTraceManager.h"
#import "MNSessionUpdateManager.h"

@interface MNNavigationSessionManager : NSObject <MNSessionUpdateManagerDelegate, MNNavigationSessionObserver, MNUserOptionsObserver, MNNavigationTraceManagerDelegate>

 {
    MNNavigationProxyUpdater *_proxyUpdater;
    NSMutableDictionary *_trafficIncidentAlertCallbacks;
}


@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNNavigationSessionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MNNavigationSession *navigationSession; // ivar: _navigationSession
@property (readonly, nonatomic) MNRouteManager *routeManager; // ivar: _routeManager
@property (readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider; // ivar: _simulationLocationProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) MNNavigationTraceManager *traceManager; // ivar: _traceManager
@property (readonly, nonatomic) MNSessionUpdateManager *updateManager; // ivar: _updateManager


-(BOOL)repeatCurrentGuidance;
-(BOOL)repeatCurrentTrafficAlert;
-(BOOL)vibrateForPrompt:(NSUInteger)arg0 ;
-(BOOL)wantsETAUpdates;
-(NSUInteger)voiceGuidanceLevel;
-(id)_proxyUpdater;
-(id)init;
-(id)initWithAuditToken:(id)arg0 ;
-(id)routeInfoForUpdateManager:(id)arg0 ;
-(id)userLocationForUpdateManager:(id)arg0 ;
-(void)acceptReroute:(BOOL)arg0 forTrafficIncidentAlert:(id)arg1 ;
-(void)dealloc;
-(void)disableNavigationCapability:(NSUInteger)arg0 ;
-(void)enableNavigationCapability:(NSUInteger)arg0 ;
-(void)forceReroute;
-(void)navigationSession:(id)arg0 currentStepIndex:(NSUInteger)arg1 didUpdateDistanceUntilManeuver:(CGFloat)arg2 timeUntilManeuver:(CGFloat)arg3 ;
-(void)navigationSession:(id)arg0 currentStepIndex:(NSUInteger)arg1 didUpdateDistanceUntilSign:(CGFloat)arg2 timeUntilSign:(CGFloat)arg3 ;
-(void)navigationSession:(id)arg0 didActivateAudioSession:(BOOL)arg1 ;
-(void)navigationSession:(id)arg0 didArriveAtWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didChangeNavigationState:(int)arg1 ;
-(void)navigationSession:(id)arg0 didEnableGuidancePrompts:(BOOL)arg1 ;
-(void)navigationSession:(id)arg0 didEnterPreArrivalStateForWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didFailRerouteWithError:(id)arg1 ;
-(void)navigationSession:(id)arg0 didInvalidateTrafficIncidentAlert:(id)arg1 ;
-(void)navigationSession:(id)arg0 didProcessSpeechEvent:(id)arg1 ;
-(void)navigationSession:(id)arg0 didReachETAUpdatePosition:(id)arg1 ;
-(void)navigationSession:(id)arg0 didReceiveRouteSignalStrength:(NSUInteger)arg1 ;
-(void)navigationSession:(id)arg0 didReceiveTrafficIncidentAlert:(id)arg1 responseCallback:(id)arg2 ;
-(void)navigationSession:(id)arg0 didReceiveTransitAlert:(id)arg1 ;
-(void)navigationSession:(id)arg0 didReroute:(id)arg1 withLocation:(id)arg2 withAlternateRoutes:(id)arg3 rerouteReason:(NSUInteger)arg4 ;
-(void)navigationSession:(id)arg0 didResumeNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didStartSpeakingPrompt:(id)arg1 ;
-(void)navigationSession:(id)arg0 didStopWithReason:(NSUInteger)arg1 ;
-(void)navigationSession:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 ;
-(void)navigationSession:(id)arg0 didUpdateAlternateRoutes:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateDisplayETA:(id)arg1 remainingDistance:(id)arg2 ;
-(void)navigationSession:(id)arg0 didUpdateETAResponseForRoute:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateHeading:(CGFloat)arg1 accuracy:(CGFloat)arg2 ;
-(void)navigationSession:(id)arg0 didUpdateMatchedLocation:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateMotionType:(NSUInteger)arg1 confidence:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didUpdateTrafficIncidentAlert:(id)arg1 ;
-(void)navigationSession:(id)arg0 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg1 ;
-(void)navigationSession:(id)arg0 displayPrimaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 maneuverStepIndex:(NSUInteger)arg6 isSynthetic:(BOOL)arg7 ;
-(void)navigationSession:(id)arg0 displaySecondaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 ;
-(void)navigationSession:(id)arg0 hideJunctionViewForId:(id)arg1 ;
-(void)navigationSession:(id)arg0 hideLaneDirectionsForId:(id)arg1 ;
-(void)navigationSession:(id)arg0 matchedToStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 newGuidanceEventFeedback:(id)arg1 ;
-(void)navigationSession:(id)arg0 proceedToRouteDistance:(CGFloat)arg1 displayString:(id)arg2 closestStepIndex:(NSUInteger)arg3 ;
-(void)navigationSession:(id)arg0 shouldEndWithReason:(NSUInteger)arg1 ;
-(void)navigationSession:(id)arg0 showJunctionView:(id)arg1 ;
-(void)navigationSession:(id)arg0 showLaneDirections:(id)arg1 ;
-(void)navigationSession:(id)arg0 triggerHaptics:(int)arg1 ;
-(void)navigationSession:(id)arg0 updateSignsWithARInfo:(id)arg1 ;
-(void)navigationSession:(id)arg0 updateSignsWithInfo:(id)arg1 ;
-(void)navigationSession:(id)arg0 updatedGuidanceEventFeedback:(id)arg1 ;
-(void)navigationSession:(id)arg0 usePersistentDisplay:(BOOL)arg1 ;
-(void)navigationSession:(id)arg0 willAnnounce:(NSUInteger)arg1 inSeconds:(CGFloat)arg2 ;
-(void)navigationSession:(id)arg0 willProcessSpeechEvent:(id)arg1 ;
-(void)navigationSessionBeginGuidanceUpdate:(id)arg0 ;
-(void)navigationSessionDidArrive:(id)arg0 ;
-(void)navigationSessionDidCancelReroute:(id)arg0 ;
-(void)navigationSessionDidEnterPreArrivalState:(id)arg0 ;
-(void)navigationSessionEndGuidanceUpdate:(id)arg0 ;
-(void)navigationSessionHideSecondaryStep:(id)arg0 ;
-(void)navigationSessionWillPause:(id)arg0 ;
-(void)navigationSessionWillReroute:(id)arg0 ;
-(void)navigationSessionWillResumeFromPause:(id)arg0 ;
-(void)navigationTraceManager:(id)arg0 didUpdateTracePlaybackDetails:(id)arg1 ;
-(void)navigationTraceManagerDidFailToRecordTrace:(id)arg0 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)recordPedestrianTracePath:(id)arg0 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg0 ;
-(void)resumeOriginalDestination;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)setDisplayedStepIndex:(NSUInteger)arg0 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg0 ;
-(void)setIsConnectedToCarplay:(BOOL)arg0 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg0 ;
-(void)setJunctionViewImageWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)setRideIndex:(NSUInteger)arg0 forSegmentIndex:(NSUInteger)arg1 ;
-(void)setRoutesForPreview:(id)arg0 selectedRouteIndex:(NSUInteger)arg1 ;
-(void)setTraceIsPlaying:(BOOL)arg0 ;
-(void)setTracePlaybackSpeed:(CGFloat)arg0 ;
-(void)setTracePosition:(CGFloat)arg0 ;
-(void)setVoiceGuidanceLevel:(NSUInteger)arg0 ;
-(void)startNavigationWithDetails:(id)arg0 ;
-(void)stopCurrentGuidancePrompt;
-(void)stopNavigationWithReason:(NSUInteger)arg0 ;
-(void)switchToRoute:(id)arg0 ;
-(void)updateDestination:(id)arg0 ;
-(void)updateForStartNavigation:(id)arg0 ;
-(void)updateManager:(id)arg0 didReceiveETAResponse:(id)arg1 ;
-(void)updateManager:(id)arg0 didReceiveTransitError:(id)arg1 ;
-(void)updateManager:(id)arg0 didReceiveTransitUpdateResponse:(id)arg1 ;
-(void)updateManager:(id)arg0 didReceiveTransitUpdates:(id)arg1 ;
-(void)updateManager:(id)arg0 willSendETARequest:(id)arg1 ;
-(void)updateManager:(id)arg0 willSendTransitUpdateRequestForRouteIDs:(id)arg1 ;
-(void)updateManager:(id)arg0 willSendTransitUpdateRequests:(id)arg1 ;
-(void)updateWithInitialLocation:(id)arg0 ;
-(void)userOptionsEngine:(id)arg0 didChangeFrom:(id)arg1 to:(id)arg2 ;


@end


#endif