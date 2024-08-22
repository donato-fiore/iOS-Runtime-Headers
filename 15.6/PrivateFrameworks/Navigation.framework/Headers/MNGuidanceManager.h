// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNGUIDANCEMANAGER_H
#define MNGUIDANCEMANAGER_H

@class NSMutableDictionary, NSMutableSet, GEOComposedRoute, NSMutableArray, NSDictionary, GEOComposedGuidanceEvent, NSArray, NSString;
@protocol MNTimeManagerObserver, MNGuidanceManagerDelegate;

#import <Foundation/Foundation.h>

#import "MNAnnouncementEngine.h"
#import "MNAnnouncementPlanEvent.h"
#import "MNGuidanceSignInfo.h"
#import "MNJunctionViewImageLoader.h"
#import "MNLocation.h"

@interface MNGuidanceManager : NSObject <MNTimeManagerObserver>

 {
    MNAnnouncementEngine *_announcementEngine;
    NSMutableDictionary *_announcementsSpoken;
    NSMutableSet *_exclusiveSetAnnouncementsSpoken;
    NSMutableDictionary *_specialSpokenEvents;
    NSMutableDictionary *_specialSignEvents;
    NSMutableDictionary *_specialAREvents;
    GEOComposedRoute *_route;
    NSMutableArray *_events;
    NSDictionary *_eventIndexes;
    GEOComposedGuidanceEvent *_nextEvent;
    BOOL _hasBeenOnRouteOnce;
    BOOL _canSpeakReturnToRouteAnnouncement;
    CGFloat _timeLastAnnouncementStarted;
    CGFloat _timeLastAnnouncementEnded;
    BOOL _hasPersistentEvents;
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;
    NSMutableDictionary *_hapticsTriggered;
    MNGuidanceSignInfo *_signInfo;
    NSArray *_arEvents;
    NSArray *_previousSignEvents;
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;
    MNJunctionViewImageLoader *_junctionViewImageLoader;
    GEOComposedGuidanceEvent *_pendingJunctionViewGuidanceEvent;
    GEOComposedGuidanceEvent *_currentJunctionViewGuidanceEvent;
    NSMutableArray *_validEvents;
    NSMutableDictionary *_feedback;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNGuidanceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *events;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInPreArrivalState; // ivar: _isInPreArrivalState
@property (retain, nonatomic) MNLocation *location; // ivar: _location
@property (nonatomic) BOOL shouldShowChargingInfo; // ivar: _shouldShowChargingInfo
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (readonly) Class superclass;


-(BOOL)_considerArrivalAnnouncementsForLocation:(id)arg0 ;
-(BOOL)_considerChargingAnnouncementsForLocation:(id)arg0 ;
-(BOOL)_considerGetOnRouteAnnouncementsForLocation:(id)arg0 ;
-(BOOL)_considerOtherSpecialAnnouncementsForLocation:(id)arg0 ;
-(BOOL)_considerStartingAnnouncementsForLocation:(id)arg0 ;
-(BOOL)_eventWasSpoken:(id)arg0 ;
-(BOOL)_guidanceEventIsSpecial:(id)arg0 ;
-(BOOL)_hasPersistentEvents;
-(BOOL)_isEVChargingEvent:(id)arg0 ;
-(BOOL)_isValidEvent:(id)arg0 ;
-(BOOL)repeatLastGuidanceAnnouncement:(id)arg0 ;
-(CGFloat)_adjustedVehicleSpeed;
-(CGFloat)_distanceToEndOfRoute;
-(CGFloat)_distanceToManeuverStart;
-(CGFloat)_distanceToRouteCoordinate:(struct ? )arg0 ;
-(CGFloat)_headingForArEvent:(id)arg0 ;
-(CGFloat)_timeRemainingForEvent:(id)arg0 ;
-(CGFloat)_timeUntilEventTrigger:(id)arg0 ;
-(CGFloat)durationOfEvent:(id)arg0 announcementIndex:(NSUInteger)arg1 distance:(CGFloat)arg2 ;
-(CGFloat)timeSinceLastAnnouncement;
-(CGFloat)timeUntilNextAnnouncement;
-(id)_arrivalARGuidanceEventsForLeg:(NSUInteger)arg0 ;
-(id)_closestContinueAREventToRouteCoordinate:(struct ? )arg0 ;
-(id)_createArGuidanceInfosForEvent:(id)arg0 forStep:(id)arg1 ;
-(id)_durationsForEvent:(id)arg0 ;
-(id)_junctionViewEvents;
-(id)_nextJunctionViewGuidanceEvent;
-(id)_nextLaneGuidanceEvent;
-(id)_selectAnnouncementForEvent:(id)arg0 withTimeRemaining:(CGFloat)arg1 withMinIndex:(NSUInteger)arg2 selectedIndex:(*NSUInteger)arg3 ;
-(id)_serverStringDictionaryForChargingEvent:(id)arg0 ;
-(id)_serverStringDictionaryForEvent:(id)arg0 distance:(CGFloat)arg1 validDistance:(CGFloat)arg2 spoken:(BOOL)arg3 ;
-(id)_signForGuidanceEvent:(id)arg0 isPrimary:(BOOL)arg1 shouldOverridePrimaryDistances:(BOOL)arg2 distance:(*CGFloat)arg3 ;
-(id)_sortedSignEventsFromValidSignEvents:(id)arg0 ;
-(id)_specialAREvents:(int)arg0 forLeg:(NSUInteger)arg1 ;
-(id)_specialSignEvents:(int)arg0 forLeg:(NSUInteger)arg1 ;
-(id)_specialSpokenEvents:(int)arg0 forLegIndex:(NSUInteger)arg1 ;
-(id)_spokenEventsRemainingInStep;
-(id)_validEventsForARGuidance;
-(id)_validEventsForSignGuidance:(*BOOL)arg0 ;
-(id)initWithRouteInfo:(id)arg0 andIsReconnecting:(BOOL)arg1 announcementsToIgnore:(id)arg2 ;
-(int)_indexForEventUUID:(id)arg0 ;
-(int)_maneuverTypeForAREvent:(id)arg0 ;
-(unsigned int)_trafficColorForRoute:(id)arg0 traffic:(id)arg1 distanceRemaining:(CGFloat)arg2 ;
-(void)_considerARGuidance;
-(void)_considerAnnouncements;
-(void)_considerHaptics;
-(void)_considerJunctionViewGuidance;
-(void)_considerLaneGuidance;
-(void)_considerPersistence;
-(void)_considerSignGuidance;
-(void)_filterValidEvents;
-(void)_handleJunctionViewInfo:(id)arg0 ;
-(void)_initSpecialGuidanceEventsForRoute:(id)arg0 ;
-(void)_markEventSpoken:(id)arg0 ;
-(void)_notifyAnalyticsForNewEvents:(id)arg0 previousEvents:(id)arg1 ;
-(void)_notifySpeechEvent:(id)arg0 variant:(NSUInteger)arg1 ignorePromptStyle:(BOOL)arg2 ;
-(void)_planAnnouncements;
-(void)_resetLastAnnouncementTime;
-(void)dealloc;
-(void)reset;
-(void)setJunctionViewImageWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)stop;
-(void)timeManagerDidChangeProvider:(id)arg0 ;
-(void)updateDestination:(id)arg0 ;
-(void)updateForReroute:(id)arg0 ;
-(void)updateGuidanceForLocation:(id)arg0 navigatorState:(int)arg1 ;


@end


#endif