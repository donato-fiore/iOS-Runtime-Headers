// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNNAVIGATIONPROXYUPDATER_H
#define MNNAVIGATIONPROXYUPDATER_H

@class GEONavigationProxy, NSString;
@protocol MNNavigationSessionObserver;

#import <Foundation/Foundation.h>

#import "MNCompanionNavigationAdapter.h"

@interface MNNavigationProxyUpdater : NSObject <MNNavigationSessionObserver>

 {
    GEONavigationProxy *_navigationProxy;
    MNCompanionNavigationAdapter *_companionNavigationAdapter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(int)_geoNavigationTypeForNavigationType:(int)arg0 ;
-(void)enteredRoutePreviewWithTransportType:(int)arg0 ;
-(void)navigationSession:(id)arg0 currentStepIndex:(NSUInteger)arg1 didUpdateDistanceUntilManeuver:(CGFloat)arg2 timeUntilManeuver:(CGFloat)arg3 ;
-(void)navigationSession:(id)arg0 currentStepIndex:(NSUInteger)arg1 didUpdateDistanceUntilSign:(CGFloat)arg2 timeUntilSign:(CGFloat)arg3 ;
-(void)navigationSession:(id)arg0 didArriveAtWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didChangeNavigationState:(int)arg1 ;
-(void)navigationSession:(id)arg0 didEnableGuidancePrompts:(BOOL)arg1 ;
-(void)navigationSession:(id)arg0 didReroute:(id)arg1 withLocation:(id)arg2 withAlternateRoutes:(id)arg3 rerouteReason:(NSUInteger)arg4 ;
-(void)navigationSession:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 ;
-(void)navigationSession:(id)arg0 didUpdateDestination:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateDisplayETA:(id)arg1 remainingDistance:(id)arg2 ;
-(void)navigationSession:(id)arg0 didUpdateETAResponseForRoute:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateMatchedLocation:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateStepNameInfo:(id)arg1 ;
-(void)navigationSession:(id)arg0 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg1 ;
-(void)navigationSession:(id)arg0 matchedToStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 triggerHaptics:(int)arg1 ;
-(void)navigationSession:(id)arg0 willAnnounce:(NSUInteger)arg1 inSeconds:(CGFloat)arg2 ;
-(void)navigationSessionStarted:(id)arg0 navigationType:(int)arg1 ;
-(void)navigationSessionStopped:(id)arg0 ;
-(void)setDisplayedStepIndex:(NSUInteger)arg0 ;
-(void)setIsConnectedToCarplay:(BOOL)arg0 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg0 ;
-(void)setVoiceGuidance:(NSUInteger)arg0 ;
-(void)updateClusteredSectionSelectedRideForNavigationSession:(id)arg0 ;


@end


#endif