// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNNAVIGATIONSERVICE_H
#define MNNAVIGATIONSERVICE_H

@class NSSet, NSUUID, NSMutableDictionary, NSArray, GEODirectionsRequest, GEODirectionsResponse, NSString, GEOComposedWaypoint, GEOComposedRoute;
@protocol GEOPListStateCapturing, MNNavigationServiceClientInterface, MNNavigationServiceProxy;

#import <Foundation/Foundation.h>

#import "MNObserverHashTable.h"
#import "MNNavigationServiceRemoteProxy.h"
#import "MNNavigationClientProxy.h"
#import "MNGuidanceLaneInfo.h"
#import "MNBatteryChargeInfo.h"
#import "MNUserOptions.h"
#import "MNNavigationDetails.h"
#import "MNDisplayETAInfo.h"
#import "MNLocation.h"
#import "MNRouteDistanceInfo.h"

@interface MNNavigationService : NSObject <GEOPListStateCapturing, MNNavigationServiceClientInterface>

 {
    MNObserverHashTable *_navigationObservers;
    id<MNNavigationServiceProxy> *_proxy;
    MNNavigationServiceRemoteProxy *_remoteProxy;
    MNNavigationClientProxy *_clientProxy;
    NSSet *_realtimeUpdates;
    NSUUID *_uuid;
    NSMutableDictionary *_disabledCapabilities;
    NSUInteger _stateCaptureHandle;
}


@property (readonly, nonatomic) MNGuidanceLaneInfo *activeLaneInfo;
@property (readonly, nonatomic) NSArray *alternateRoutes;
@property (readonly, nonatomic) MNBatteryChargeInfo *batteryChargeInfo;
@property (retain) MNUserOptions *cachedUserOptions; // ivar: _cachedUserOptions
@property (readonly, nonatomic) GEODirectionsRequest *currentRequest;
@property (readonly, nonatomic) GEODirectionsResponse *currentResponse;
@property (readonly, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger desiredNavigationType;
@property (readonly, nonatomic) int desiredTransportType;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) NSString *destinationName;
@property (readonly) MNNavigationDetails *details;
@property (retain) MNNavigationDetails *details; // ivar: _details
@property (readonly, nonatomic) MNDisplayETAInfo *displayEtaInfo;
@property (readonly, nonatomic) NSUInteger displayedStepIndex;
@property (readonly, nonatomic) CGFloat distanceUntilManeuver;
@property (readonly, nonatomic) CGFloat distanceUntilSign;
@property (nonatomic) BOOL guidancePromptsEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isDetour;
@property (readonly, nonatomic) BOOL isInNavigatingState;
@property (readonly, nonatomic) BOOL isInPreArrivalState;
@property (readonly, nonatomic) BOOL isResumingMultipointRoute;
@property (readonly, nonatomic) BOOL isTrackingCurrentLocation;
@property (readonly, nonatomic) MNLocation *lastLocation;
@property (readonly, nonatomic, getter=isNavigatingFromTrace) BOOL navigatingFromTrace;
@property (readonly, nonatomic) int navigationState;
@property (readonly, nonatomic) int navigationTransportType;
@property (readonly, nonatomic) NSInteger navigationType;
@property (readonly, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) GEOComposedWaypoint *originalDestination;
@property (readonly, nonatomic) NSString *originalDestinationName;
@property (readonly, nonatomic) GEOComposedWaypoint *originalOrigin;
@property (readonly, nonatomic) NSUInteger reconnectionRouteIndex;
@property (readonly, nonatomic) MNRouteDistanceInfo *remainingDistanceInfo;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) NSUInteger routeIndex;
@property (readonly, nonatomic) NSInteger simulationType;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly, nonatomic) NSUInteger stepIndex;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeUntilManeuver;
@property (readonly, nonatomic) CGFloat timeUntilSign;
@property (readonly, nonatomic) NSArray *traceBookmarks;
@property (readonly, nonatomic) CGFloat traceDuration;
@property (nonatomic) BOOL traceIsPlaying;
@property (readonly, nonatomic) NSString *tracePath;
@property (nonatomic) CGFloat tracePosition;


+(NSUInteger)_hashForProtocol:(id)arg0 ;
+(NSUInteger)clientInterfaceHash;
+(NSUInteger)daemonInterfaceHash;
+(id)sharedService;
-(BOOL)isOpenForClient:(id)arg0 ;
-(BOOL)startNavigationWithDetails:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)alternateRouteIndexForRoute:(id)arg0 ;
-(id)_clientProxy;
-(id)batteryChargeInfoForRoute:(id)arg0 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)displayETAInfoForRoute:(id)arg0 ;
-(id)etaRouteForRoute:(id)arg0 ;
-(id)initPrivate;
-(id)realtimeUpdatesForAllRoutes;
-(id)realtimeUpdatesForRoutes:(id)arg0 ;
-(id)remainingDistanceInfoForRoute:(id)arg0 ;
-(id)ticketForDirectionsRequest:(id)arg0 ;
-(id)userOptions;
-(void)advanceToNextLeg;
-(void)changeUserOptions:(id)arg0 ;
-(void)closeForClient:(id)arg0 ;
-(void)dealloc;
-(void)disableNavigationCapability:(NSUInteger)arg0 reason:(NSUInteger)arg1 ;
-(void)enableNavigationCapability:(NSUInteger)arg0 reason:(NSUInteger)arg1 ;
-(void)insertWaypoint:(id)arg0 ;
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
-(void)navigationServiceProxy:(id)arg0 didResumeNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 reason:(NSUInteger)arg3 ;
-(void)navigationServiceProxy:(id)arg0 didStartSpeakingPrompt:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didStartUsingVoiceLanguage:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateAlternateRoutes:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateDisplayETA:(id)arg1 remainingDistance:(id)arg2 batteryChargeInfo:(id)arg3 ;
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
-(void)navigationServiceProxy:(id)arg0 willEndWithReason:(NSUInteger)arg1 ;
-(void)navigationServiceProxy:(id)arg0 willProcessSpeechEvent:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 willRequestRealtimeUpdatesForRouteIDs:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 willStartNavigationWithRoute:(id)arg1 navigationType:(NSInteger)arg2 request:(id)arg3 response:(id)arg4 simulationType:(NSInteger)arg5 isResumingMultipointRoute:(BOOL)arg6 ;
-(void)navigationServiceProxyBeginGuidanceUpdate:(id)arg0 ;
-(void)navigationServiceProxyDidArrive:(id)arg0 ;
-(void)navigationServiceProxyDidCancelReroute:(id)arg0 ;
-(void)navigationServiceProxyDidEnterPreArrivalState:(id)arg0 ;
-(void)navigationServiceProxyEndGuidanceUpdate:(id)arg0 ;
-(void)navigationServiceProxyHideSecondaryStep:(id)arg0 ;
-(void)navigationServiceProxyWillPauseNavigation:(id)arg0 ;
-(void)navigationServiceProxyWillReroute:(id)arg0 ;
-(void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg0 ;
-(void)openForClient:(id)arg0 ;
-(void)pauseRealtimeUpdates;
-(void)recordPedestrianTracePath:(id)arg0 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)removeWaypointAtIndex:(NSUInteger)arg0 ;
-(void)repeatCurrentGuidance:(id)arg0 ;
-(void)repeatCurrentTrafficAlert:(id)arg0 ;
-(void)rerouteWithWaypoints:(id)arg0 ;
-(void)resumeOriginalDestination;
-(void)resumeRealtimeUpdates;
-(void)setGuidanceType:(NSUInteger)arg0 ;
-(void)setIsConnectedToCarplay:(BOOL)arg0 ;
-(void)setJunctionViewImageWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)setRideIndex:(NSUInteger)arg0 forSegmentIndex:(NSUInteger)arg1 ;
-(void)setSimulationPosition:(CGFloat)arg0 ;
-(void)setSimulationSpeedMultiplier:(CGFloat)arg0 ;
-(void)setSimulationSpeedOverride:(CGFloat)arg0 ;
-(void)setTracePlaybackSpeed:(CGFloat)arg0 ;
-(void)stopCurrentGuidancePrompt;
-(void)stopNavigationWithReason:(NSUInteger)arg0 ;
-(void)switchToRoute:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateDestination:(id)arg0 ;
-(void)vibrateForPrompt:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif