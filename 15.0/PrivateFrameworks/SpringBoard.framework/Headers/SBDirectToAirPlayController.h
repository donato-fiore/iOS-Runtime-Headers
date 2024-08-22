// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDIRECTTOAIRPLAYCONTROLLER_H
#define SBDIRECTTOAIRPLAYCONTROLLER_H

@class SBSStatusBarStyleOverridesAssertion, NSString, NSMutableDictionary, NSMutableSet, MPMediaControlsStatusBarStyleOverridesCoordinator, AVExternalPlaybackMonitor, AVRoutingSessionManager, AVRoutingSessionDestination, NSArray;
@protocol SBMainDisplaySceneManagerObserver, SBAVSystemControllerDirectToAirPlayObserver, SBControlCenterObserver;

#import <Foundation/Foundation.h>

#import "_SBDirectToAirPlayPolicyState.h"

@interface SBDirectToAirPlayController : NSObject <SBMainDisplaySceneManagerObserver, SBAVSystemControllerDirectToAirPlayObserver, SBControlCenterObserver>

 {
    SBSStatusBarStyleOverridesAssertion *_directToAirPlayStatusBarStyleOverrideAssertion;
    NSString *_directToAirPlayStatusBarStyleOverrideAssertionCorrespondingBundleID;
    NSMutableDictionary *_directToAirPlayPlayingBundleIDsToRouteNames;
    NSMutableDictionary *_directToAirPlayReadyBundleIDsToRouteNames;
    NSMutableSet *_directToAirPlayIneligibleBundleIDs;
    NSMutableSet *_directToAirPlayEligibleBundleIDs;
    BOOL _controlCenterReportsItselfAsPresented;
    BOOL _currentRoutingSessionEstablishedAutomaticallyFromLikelyDestination;
    BOOL _externalPlaybackIsActive;
    BOOL _externalPlaybackIsPlaying;
    MPMediaControlsStatusBarStyleOverridesCoordinator *_mediaControlsCoordinator;
    AVExternalPlaybackMonitor *_externalPlaybackMonitor;
    AVRoutingSessionManager *_routingSessionManager;
    AVRoutingSessionDestination *_currentRoutingSessionDestination;
    NSArray *_likelyExternalPlaybackDestinations;
    _SBDirectToAirPlayPolicyState *_currentState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_mediaControllerSaysWeHaveAWiredRoute;
+(BOOL)directToAirPlayIsAvailable;
-(id)_captureCurrentPolicyState;
-(id)_currentExternalRouteNames;
-(id)_externalRouteNamesForDestination:(id)arg0 ;
-(id)init;
-(void)_acquireDirectToAirPlayStatusBarStyleOverrideForApplicationWithBundleID:(id)arg0 playing:(BOOL)arg1 completion:(id)arg2 ;
-(void)_clearDirectToAirPlayStatusBarAssertion;
-(void)_evaluateDirectToAirPlayImplicationsOfAppBecomingBackground:(id)arg0 ;
-(void)_evaluateDirectToAirPlayImplicationsOfAppBecomingForeground:(id)arg0 ;
-(void)_evaluatePolicyForDirectToAirplayAlert;
-(void)_main_evaluatePolicyForDirectToAirplayAlert;
-(void)_rollBannerActionForReadyBundleID:(id)arg0 sceneHandle:(id)arg1 ;
-(void)_updateRouteNamesForPlayingAndReadyApps;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(void)currentExternalDestinationDidChange:(id)arg0 ;
-(void)externalAirPlayVideoActiveDidChange:(id)arg0 ;
-(void)externalAirPlayVideoPlayingDidChange:(id)arg0 ;
-(void)externalDisplayChanged:(id)arg0 ;
-(void)likelyExternalDestinationsDidChange:(id)arg0 ;
-(void)lockStateChanged:(id)arg0 ;
-(void)sceneManager:(id)arg0 didAddExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)sceneManager:(id)arg0 didRemoveExternalForegroundApplicationSceneHandle:(id)arg1 ;


@end


#endif