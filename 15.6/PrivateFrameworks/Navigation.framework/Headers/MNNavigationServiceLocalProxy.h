// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNNAVIGATIONSERVICELOCALPROXY_H
#define MNNAVIGATIONSERVICELOCALPROXY_H

@class NSString;
@protocol MNNavigationStateObserver, MNNavigationSessionManagerDelegate, MNNavigationServiceProxy, MNNavigationServiceClientInterface;

#import <Foundation/Foundation.h>


@interface MNNavigationServiceLocalProxy : NSObject <MNNavigationStateObserver, MNNavigationSessionManagerDelegate, MNNavigationServiceProxy>

 {
    NSUInteger _navigationServiceState;
    id *_navigationServiceActiveBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNNavigationServiceClientInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_serviceStateForStateType:(NSUInteger)arg0 ;
-(id)init;
-(void)acceptReroute:(BOOL)arg0 forTrafficIncidentAlert:(id)arg1 ;
-(void)changeUserOptions:(id)arg0 ;
-(void)checkinForNavigationService:(id)arg0 ;
-(void)dealloc;
-(void)disableNavigationCapability:(NSUInteger)arg0 ;
-(void)enableNavigationCapability:(NSUInteger)arg0 ;
-(void)forceReroute;
-(void)interfaceHashesWithHandler:(id)arg0 ;
-(void)navigationSessionManager:(id)arg0 currentStepIndex:(NSUInteger)arg1 didUpdateDistanceUntilManeuver:(CGFloat)arg2 timeUntilManeuver:(CGFloat)arg3 ;
-(void)navigationSessionManager:(id)arg0 currentStepIndex:(NSUInteger)arg1 didUpdateDistanceUntilSign:(CGFloat)arg2 timeUntilSign:(CGFloat)arg3 ;
-(void)navigationSessionManager:(id)arg0 didArriveAtWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSessionManager:(id)arg0 didChangeNavigationState:(int)arg1 ;
-(void)navigationSessionManager:(id)arg0 didChangeVoiceGuidanceLevel:(NSUInteger)arg1 ;
-(void)navigationSessionManager:(id)arg0 didEnableGuidancePrompts:(BOOL)arg1 ;
-(void)navigationSessionManager:(id)arg0 didEnterPreArrivalStateForWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSessionManager:(id)arg0 didFailRerouteWithError:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didInvalidateTrafficIncidentAlert:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didProcessSpeechEvent:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didReceiveRouteSignalStrength:(NSUInteger)arg1 ;
-(void)navigationSessionManager:(id)arg0 didReceiveTrafficIncidentAlert:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didReceiveTransitAlert:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didReceiveTransitUpdates:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didRerouteWithRoute:(id)arg1 location:(id)arg2 withAlternateRoutes:(id)arg3 ;
-(void)navigationSessionManager:(id)arg0 didResumeNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSessionManager:(id)arg0 didStartSpeakingPrompt:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didStartUsingVoiceLanguage:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didStopWithReason:(NSUInteger)arg1 ;
-(void)navigationSessionManager:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 ;
-(void)navigationSessionManager:(id)arg0 didUpdateAlternateRoutes:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didUpdateDisplayETA:(id)arg1 remainingDistance:(id)arg2 ;
-(void)navigationSessionManager:(id)arg0 didUpdateDisplayedStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationSessionManager:(id)arg0 didUpdateETAResponseForRoute:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didUpdateHeading:(CGFloat)arg1 accuracy:(CGFloat)arg2 ;
-(void)navigationSessionManager:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didUpdateMotionType:(NSUInteger)arg1 confidence:(NSUInteger)arg2 ;
-(void)navigationSessionManager:(id)arg0 didUpdatePreviewRoutes:(id)arg1 withSelectedRouteIndex:(NSUInteger)arg2 ;
-(void)navigationSessionManager:(id)arg0 didUpdateRouteWithNewRideSelection:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didUpdateStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationSessionManager:(id)arg0 didUpdateTracePlaybackDetails:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 didUpdateTrafficIncidentAlert:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg1 ;
-(void)navigationSessionManager:(id)arg0 displayPrimaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 maneuverStepIndex:(NSUInteger)arg6 isSynthetic:(BOOL)arg7 ;
-(void)navigationSessionManager:(id)arg0 displaySecondaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 ;
-(void)navigationSessionManager:(id)arg0 hideJunctionViewForId:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 hideLaneDirectionsForId:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 newGuidanceEventFeedback:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 proceedToRouteDistance:(CGFloat)arg1 displayString:(id)arg2 closestStepIndex:(NSUInteger)arg3 ;
-(void)navigationSessionManager:(id)arg0 shouldEndWithReason:(NSUInteger)arg1 ;
-(void)navigationSessionManager:(id)arg0 showJunctionView:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 showLaneDirections:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 triggerHaptics:(int)arg1 ;
-(void)navigationSessionManager:(id)arg0 updateSignsWithARInfo:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 updateSignsWithInfo:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 updatedGuidanceEventFeedback:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 usePersistentDisplay:(BOOL)arg1 ;
-(void)navigationSessionManager:(id)arg0 willAnnounce:(NSUInteger)arg1 inSeconds:(CGFloat)arg2 ;
-(void)navigationSessionManager:(id)arg0 willProcessSpeechEvent:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 willSendTransitUpdateRequestForRouteIDs:(id)arg1 ;
-(void)navigationSessionManager:(id)arg0 willStartNavigationWithRoute:(id)arg1 navigationType:(int)arg2 request:(id)arg3 response:(id)arg4 ;
-(void)navigationSessionManagerBeginGuidanceUpdate:(id)arg0 ;
-(void)navigationSessionManagerDidArrive:(id)arg0 ;
-(void)navigationSessionManagerDidCancelReroute:(id)arg0 ;
-(void)navigationSessionManagerDidEnterPreArrivalState:(id)arg0 ;
-(void)navigationSessionManagerEndGuidanceUpdate:(id)arg0 ;
-(void)navigationSessionManagerHideSecondaryStep:(id)arg0 ;
-(void)navigationSessionManagerWillPause:(id)arg0 ;
-(void)navigationSessionManagerWillReroute:(id)arg0 ;
-(void)navigationSessionManagerWillResumeFromPause:(id)arg0 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)recordPedestrianTracePath:(id)arg0 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg0 ;
-(void)repeatCurrentGuidanceWithReply:(id)arg0 ;
-(void)repeatCurrentTrafficAlertWithReply:(id)arg0 ;
-(void)reset;
-(void)resumeOriginalDestination;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)setDisplayedStepIndex:(NSUInteger)arg0 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg0 ;
-(void)setGuidanceType:(NSUInteger)arg0 ;
-(void)setHeadingOrientation:(int)arg0 ;
-(void)setIsConnectedToCarplay:(BOOL)arg0 ;
-(void)setJunctionViewImageWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)setRideIndex:(NSUInteger)arg0 forSegmentIndex:(NSUInteger)arg1 ;
-(void)setRoutesForPreview:(id)arg0 selectedRouteIndex:(NSUInteger)arg1 ;
-(void)setTraceIsPlaying:(BOOL)arg0 ;
-(void)setTracePlaybackSpeed:(CGFloat)arg0 ;
-(void)setTracePosition:(CGFloat)arg0 ;
-(void)start;
-(void)startNavigationWithDetails:(id)arg0 activeBlock:(id)arg1 ;
-(void)stateManager:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)stateManager:(id)arg0 willChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)stopCurrentGuidancePrompt;
-(void)stopNavigationWithReason:(NSUInteger)arg0 ;
-(void)switchToRoute:(id)arg0 ;
-(void)updateDestination:(id)arg0 ;
-(void)vibrateForPrompt:(NSUInteger)arg0 withReply:(id)arg1 ;


@end


#endif