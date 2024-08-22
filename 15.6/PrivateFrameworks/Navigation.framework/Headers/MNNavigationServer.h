// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNNAVIGATIONSERVER_H
#define MNNAVIGATIONSERVER_H

@class NSXPCListener, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate, MNNavigationServiceClientInterface;

#import <Foundation/Foundation.h>

#import "MNNavigationDetails.h"
#import "MNNavigationServiceLocalProxy.h"

@interface MNNavigationServer : NSObject <NSXPCListenerDelegate, MNNavigationServiceClientInterface>

 {
    NSXPCListener *_listener;
    NSMutableSet *_peers;
    NSMutableSet *_unEntitledPeers;
    MNNavigationDetails *_details;
    MNNavigationServiceLocalProxy *_localProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedServer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_defaultsDidChange;
-(void)_enumerateRemoteObjectsWithHandler:(id)arg0 ;
-(void)_peerDidDisconnect:(id)arg0 ;
-(void)_resetDetails;
-(void)dealloc;
-(void)navigationServiceProxy:(id)arg0 didActivateAudioSession:(BOOL)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didArriveAtWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didChangeNavigationState:(int)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didChangeVoiceGuidanceLevel:(NSUInteger)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didEnableGuidancePrompts:(BOOL)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didEndWithReason:(NSUInteger)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didEnterPreArrivalStateForWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didFailRerouteWithError:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didFailWithError:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didInvalidateTrafficIncidentAlert:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didProcessSpeechEvent:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didReceiveRealtimeUpdates:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didReceiveRouteSignalStrength:(NSUInteger)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didReceiveTrafficIncidentAlert:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didReceiveTransitAlert:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didRerouteWithRoute:(id)arg1 withLocation:(id)arg2 withAlternateRoutes:(id)arg3 ;
-(void)navigationServiceProxy:(id)arg0 didResumeNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didStartSpeakingPrompt:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didStartUsingVoiceLanguage:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateAlternateRoutes:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateDisplayETA:(id)arg1 remainingDistance:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateDisplayedStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateDistanceUntilManeuver:(CGFloat)arg1 timeUntilManeuver:(CGFloat)arg2 forStepIndex:(NSUInteger)arg3 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateDistanceUntilSign:(CGFloat)arg1 timeUntilSign:(CGFloat)arg2 forStepIndex:(NSUInteger)arg3 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateETAResponseForRoute:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateHeading:(CGFloat)arg1 accuracy:(CGFloat)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateMatchedLocation:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateMotionType:(NSUInteger)arg1 confidence:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateNavigationDetails:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didUpdatePreviewRoutes:(id)arg1 withSelectedRouteIndex:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateProceedToRouteDistance:(CGFloat)arg1 displayString:(id)arg2 closestStepIndex:(NSUInteger)arg3 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateRouteWithNewRideSelection:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateTracePlaybackDetails:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateTrafficIncidentAlert:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg1 ;
-(void)navigationServiceProxy:(id)arg0 displayPrimaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 maneuverStepIndex:(NSUInteger)arg6 isSynthetic:(BOOL)arg7 ;
-(void)navigationServiceProxy:(id)arg0 displaySecondaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 ;
-(void)navigationServiceProxy:(id)arg0 hideJunctionViewForId:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 hideLaneDirectionsForId:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 newGuidanceEventFeedback:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 showJunctionView:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 showLaneDirections:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 triggerHaptics:(int)arg1 ;
-(void)navigationServiceProxy:(id)arg0 updateSignsWithARInfo:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 updateSignsWithInfo:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 updatedGuidanceEventFeedback:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 usePersistentDisplay:(BOOL)arg1 ;
-(void)navigationServiceProxy:(id)arg0 willAnnounce:(NSUInteger)arg1 inSeconds:(CGFloat)arg2 ;
-(void)navigationServiceProxy:(id)arg0 willChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 willProcessSpeechEvent:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 willRequestRealtimeUpdatesForRouteIDs:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 willStartNavigationWithRoute:(id)arg1 navigationType:(int)arg2 request:(id)arg3 response:(id)arg4 ;
-(void)navigationServiceProxyBeginGuidanceUpdate:(id)arg0 ;
-(void)navigationServiceProxyDidArrive:(id)arg0 ;
-(void)navigationServiceProxyDidCancelReroute:(id)arg0 ;
-(void)navigationServiceProxyDidEnterPreArrivalState:(id)arg0 ;
-(void)navigationServiceProxyEndGuidanceUpdate:(id)arg0 ;
-(void)navigationServiceProxyHideSecondaryStep:(id)arg0 ;
-(void)navigationServiceProxyWillPauseNavigation:(id)arg0 ;
-(void)navigationServiceProxyWillReroute:(id)arg0 ;
-(void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg0 ;


@end


#endif