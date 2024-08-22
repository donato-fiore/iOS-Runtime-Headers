// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNNAVIGATIONSTATEMANAGER_H
#define MNNAVIGATIONSTATEMANAGER_H

@class geo_isolater, GEOApplicationAuditToken, NSString;
@protocol MNNavigationStateInterface, MNNavigationSessionManagerDelegate;

#import <Foundation/Foundation.h>

#import "MNNavigationState.h"
#import "MNObserverHashTable.h"

@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface>

 {
    BOOL _isStarted;
    MNNavigationState *_currentState;
    MNObserverHashTable *_navigationStateObservers;
    geo_isolater *_isolater;
}


@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, nonatomic) MNNavigationState *currentState;
@property (readonly, nonatomic) NSUInteger currentStateType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isStarted;
@property (weak, nonatomic) NSObject<MNNavigationSessionManagerDelegate> *navigationDelegate; // ivar: _navigationDelegate
@property (readonly) Class superclass;


+(id)sharedManager;
-(NSUInteger)_stateTypeForState:(id)arg0 ;
-(id)_initialState;
-(id)init;
-(id)navSessionDestination;
-(void)_changeToDesiredLocationProviderTypeForState:(id)arg0 ;
-(void)_replayStateForNewObserver:(id)arg0 ;
-(void)acceptReroute:(BOOL)arg0 forTrafficIncidentAlert:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)changeUserOptions:(id)arg0 ;
-(void)checkinForNavigationService:(id)arg0 ;
-(void)dealloc;
-(void)disableNavigationCapability:(NSUInteger)arg0 ;
-(void)enableNavigationCapability:(NSUInteger)arg0 ;
-(void)forceReroute;
-(void)interfaceHashesWithHandler:(id)arg0 ;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)recordPedestrianTracePath:(id)arg0 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
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
-(void)stopCurrentGuidancePrompt;
-(void)stopNavigationWithReason:(NSUInteger)arg0 ;
-(void)switchToRoute:(id)arg0 ;
-(void)transitionToState:(id)arg0 ;
-(void)updateDestination:(id)arg0 ;
-(void)vibrateForPrompt:(NSUInteger)arg0 withReply:(id)arg1 ;


@end


#endif