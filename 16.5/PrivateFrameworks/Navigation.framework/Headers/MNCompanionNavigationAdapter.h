// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNCOMPANIONNAVIGATIONADAPTER_H
#define MNCOMPANIONNAVIGATIONADAPTER_H

@class NSString, GEOComposedRoute, GEOLocation, GEORouteMatch, GEONavigationGuidanceState, GEOCompanionRouteDetails, GEOCompanionRouteStatus, NSArray, NSTimer;
@protocol MNNavigationServiceObserver, MNNavigationSessionObserver, GEOServerFormattedStepStringFormatter, MNCompanionNavigationDelegate;

#import <Foundation/Foundation.h>

#import "MNCompanionNavigationXPCConnection.h"

@interface MNCompanionNavigationAdapter : NSObject <MNNavigationServiceObserver, MNNavigationSessionObserver>

 {
    NSString *_destinationName;
    GEOComposedRoute *_route;
    GEOLocation *_lastLocation;
    BOOL _locationUnreliable;
    GEORouteMatch *_routeMatch;
    NSString *_currentRoadName;
    BOOL _guidancePromptsEnabled;
    NSUInteger _displayedStepIndex;
    CGFloat _positionFromManeuver;
    ? _positionFromDestination;
    NSUInteger _announcementStage;
    NSUInteger _nextAnnouncementStage;
    CGFloat _timeUntilNextAnnouncement;
    GEONavigationGuidanceState *_guidanceState;
    BOOL _isNavigatingInLowGuidance;
    BOOL _isConnectedToCarplay;
    GEOCompanionRouteDetails *_companionRouteDetails;
    GEOCompanionRouteStatus *_companionRouteStatus;
    NSArray *_companionRouteUpdates;
    BOOL _shouldSendRouteWithStatus;
    NSTimer *_coalescedRouteStatusTimer;
    NSTimer *_coalescedRouteUpdatesTimer;
    MNCompanionNavigationXPCConnection *_connection;
    id<GEOServerFormattedStepStringFormatter> *_formatter;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNCompanionNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isInvalidated;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithNavigationSession:(id)arg0 ;
-(void)_cancelScheduledRouteStatus;
-(void)_cancelScheduledRouteUpdates;
-(void)_handleNavigationServiceStopped;
-(void)_markCurrentHapticsAsTriggered;
-(void)_populateInitialDistanceToManeuver;
-(void)_reloadRouteFromNavigationService:(id)arg0 ;
-(void)_reset;
-(void)_scheduleCoalescedRouteStatusUpdate;
-(void)_scheduleCoalescedRouteUpdates;
-(void)_sendRouteDetailsAndStatus;
-(void)_sendRouteStatus;
-(void)_sendRouteUpdates;
-(void)_setAnnouncementStage:(NSUInteger)arg0 ;
-(void)_setDestinationName:(id)arg0 ;
-(void)_setDisplayedStepIndex:(NSUInteger)arg0 ;
-(void)_setGuidancePromptsEnabled:(BOOL)arg0 ;
-(void)_setLastLocation:(id)arg0 ;
-(void)_setLocationUnreliable:(BOOL)arg0 ;
-(void)_setNavigationState:(int)arg0 ;
-(void)_setNextAnnouncementStage:(NSUInteger)arg0 timeUntilNextAnnouncement:(CGFloat)arg1 ;
-(void)_setPositionFromDestination:(struct ? )arg0 ;
-(void)_setPositionFromManeuver:(CGFloat)arg0 ;
-(void)_setRealtimeUpdates:(id)arg0 ;
-(void)_setRoute:(id)arg0 traffic:(id)arg1 isTrace:(BOOL)arg2 ;
-(void)_setRouteMatch:(id)arg0 ;
-(void)_setTransitAlightMessage:(id)arg0 ;
-(void)_triggerHaptics:(int)arg0 ;
-(void)_updateCompanionRouteStatus;
-(void)dealloc;
-(void)invalidate;
-(void)navigationService:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)navigationService:(id)arg0 didChangeNavigationState:(int)arg1 ;
-(void)navigationService:(id)arg0 didEnableGuidancePrompts:(BOOL)arg1 ;
-(void)navigationService:(id)arg0 didReceiveRealtimeUpdates:(id)arg1 ;
-(void)navigationService:(id)arg0 didReceiveTransitAlert:(id)arg1 ;
-(void)navigationService:(id)arg0 didReroute:(id)arg1 ;
-(void)navigationService:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 traffic:(id)arg3 ;
-(void)navigationService:(id)arg0 didUpdateDisplayETA:(id)arg1 remainingDistance:(id)arg2 batteryChargeInfo:(id)arg3 ;
-(void)navigationService:(id)arg0 didUpdateDisplayedStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationService:(id)arg0 didUpdateMatchedLocation:(id)arg1 ;
-(void)navigationService:(id)arg0 didUpdateStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationService:(id)arg0 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg1 ;
-(void)navigationService:(id)arg0 displayPrimaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 maneuverStepIndex:(NSUInteger)arg6 isSynthetic:(BOOL)arg7 ;
-(void)navigationService:(id)arg0 triggerHaptics:(int)arg1 ;
-(void)navigationService:(id)arg0 updateSignsWithInfo:(id)arg1 ;
-(void)navigationService:(id)arg0 willAnnounce:(NSUInteger)arg1 inSeconds:(CGFloat)arg2 ;
-(void)navigationServiceDidCancelReroute:(id)arg0 ;
-(void)navigationServiceDidSynchronize:(id)arg0 ;
-(void)navigationServiceWillReroute:(id)arg0 ;
-(void)navigationSession:(id)arg0 currentStepIndex:(NSUInteger)arg1 didUpdateDistanceUntilManeuver:(CGFloat)arg2 timeUntilManeuver:(CGFloat)arg3 ;
-(void)navigationSession:(id)arg0 didChangeNavigationState:(int)arg1 ;
-(void)navigationSession:(id)arg0 didEnableGuidancePrompts:(BOOL)arg1 ;
-(void)navigationSession:(id)arg0 didInsertWaypoint:(id)arg1 ;
-(void)navigationSession:(id)arg0 didRemoveWaypoint:(id)arg1 ;
-(void)navigationSession:(id)arg0 didReroute:(id)arg1 withLocation:(id)arg2 withAlternateRoutes:(id)arg3 rerouteReason:(NSUInteger)arg4 ;
-(void)navigationSession:(id)arg0 didRerouteWithWaypoints:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateDestination:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateDisplayETA:(id)arg1 remainingDistance:(id)arg2 batteryChargeInfo:(id)arg3 ;
-(void)navigationSession:(id)arg0 didUpdateMatchedLocation:(id)arg1 ;
-(void)navigationSession:(id)arg0 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg1 ;
-(void)navigationSession:(id)arg0 matchedToStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 triggerHaptics:(int)arg1 ;
-(void)navigationSession:(id)arg0 willAnnounce:(NSUInteger)arg1 inSeconds:(CGFloat)arg2 ;
-(void)navigationSessionDidCancelReroute:(id)arg0 ;
-(void)navigationSessionWillReroute:(id)arg0 ;
-(void)setIsConnectedToCarplay:(BOOL)arg0 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg0 ;
-(void)setVoiceGuidance:(NSUInteger)arg0 ;


@end


#endif