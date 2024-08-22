// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNNAVIGATIONSTATEGUIDANCE_H
#define MNNAVIGATIONSTATEGUIDANCE_H



#import "MNNavigationState.h"
#import "MNNavigationSessionManager.h"
#import "MNStartNavigationDetails.h"

@interface MNNavigationStateGuidance : MNNavigationState {
    MNNavigationSessionManager *_navigationSessionManager;
    MNStartNavigationDetails *_startDetails;
}




+(id)guidanceStateForStartDetails:(id)arg0 stateManager:(id)arg1 navigationSessionManager:(id)arg2 ;
-(BOOL)requiresHighMemoryThreshold;
-(BOOL)shouldClearStoredRoutes;
-(NSUInteger)desiredLocationProviderType;
-(id)clParameters;
-(id)currentDestination;
-(id)initWithStateManager:(id)arg0 navigationSessionManager:(id)arg1 startDetails:(id)arg2 ;
-(id)simulationLocationProvider;
-(id)traceManager;
-(void)acceptReroute:(BOOL)arg0 forTrafficIncidentAlert:(id)arg1 ;
-(void)disableNavigationCapability:(NSUInteger)arg0 ;
-(void)enableNavigationCapability:(NSUInteger)arg0 ;
-(void)enterState;
-(void)forceReroute;
-(void)leaveState;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)postEnterState;
-(void)preEnterState;
-(void)recordPedestrianTracePath:(id)arg0 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg0 ;
-(void)repeatCurrentGuidanceWithReply:(id)arg0 ;
-(void)repeatCurrentTrafficAlertWithReply:(id)arg0 ;
-(void)resumeOriginalDestination;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)setDisplayedStepIndex:(NSUInteger)arg0 ;
-(void)setIsConnectedToCarplay:(BOOL)arg0 ;
-(void)setJunctionViewImageWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)setRideIndex:(NSUInteger)arg0 forSegmentIndex:(NSUInteger)arg1 ;
-(void)setTraceIsPlaying:(BOOL)arg0 ;
-(void)setTracePlaybackSpeed:(CGFloat)arg0 ;
-(void)setTracePosition:(CGFloat)arg0 ;
-(void)stopCurrentGuidancePrompt;
-(void)stopNavigationWithReason:(NSUInteger)arg0 ;
-(void)switchToRoute:(id)arg0 ;
-(void)updateDestination:(id)arg0 ;
-(void)vibrateForPrompt:(NSUInteger)arg0 withReply:(id)arg1 ;


@end


#endif