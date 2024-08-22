// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTROUTINEMANAGER_H
#define RTROUTINEMANAGER_H

@class RTRoutineManagerRegistrantAction, NSString, NSXPCConnection;
@protocol RTFrameworkProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RTTokenBucket.h"
#import "RTEventAgentHelper.h"
#import "RTRoutineManagerRegistrantScenarioTrigger.h"

@interface RTRoutineManager : NSObject <RTFrameworkProtocol>



@property (retain, nonatomic) RTRoutineManagerRegistrantAction *actionRegistrant; // ivar: _actionRegistrant
@property (retain, nonatomic) RTTokenBucket *clientThrottle; // ivar: _clientThrottle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) RTEventAgentHelper *eventAgentHelper; // ivar: _eventAgentHelper
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *leechedLowConfidenceVisitHandler; // ivar: _leechedLowConfidenceVisitHandler
@property (copy, nonatomic) id *leechedVisitHandler; // ivar: _leechedVisitHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *restorationIdentifier; // ivar: _restorationIdentifier
@property (retain, nonatomic) RTRoutineManagerRegistrantScenarioTrigger *scenarioTriggerRegistrant; // ivar: _scenarioTriggerRegistrant
@property (readonly) Class superclass;
@property (nonatomic) BOOL targetUserSession; // ivar: _targetUserSession
@property (copy, nonatomic) id *vehicleEventsHandler; // ivar: _vehicleEventsHandler
@property (copy, nonatomic) id *visitHandler; // ivar: _visitHandler
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)defaultManager;
+(id)modeOfTransportationToString:(NSInteger)arg0 ;
+(id)routineModeToString:(NSInteger)arg0 ;
-(BOOL)selectorIsWhitelisted:(SEL)arg0 ;
-(id)_proxyForServicingSelector:(SEL)arg0 asynchronous:(BOOL)arg1 withErrorHandler:(id)arg2 ;
-(id)_proxyForServicingSelector:(SEL)arg0 withErrorHandler:(id)arg1 ;
-(id)init;
-(id)initWithRestorationIdentifier:(id)arg0 ;
-(id)initWithRestorationIdentifier:(id)arg0 targertUserSession:(BOOL)arg1 ;
-(id)initWithTargetUserSession:(BOOL)arg0 ;
-(void)_createConnection;
-(void)addLocationOfInterestOfType:(NSInteger)arg0 mapItem:(id)arg1 customLabel:(id)arg2 handler:(id)arg3 ;
-(void)clearAllVehicleEvents;
-(void)clearAllVehicleEvents:(id)arg0 ;
-(void)clearAllVehicleEventsWithHandler:(id)arg0 ;
-(void)clearRoutineWithHandler:(id)arg0 ;
-(void)createConnection;
-(void)dealloc;
-(void)engageInVehicleEventWithIdentifier:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateStoredLocationsWithOptions:(id)arg0 usingBlock:(id)arg1 ;
-(void)extendLifetimeOfVisitWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg0 handler:(id)arg1 ;
-(void)fetchAllLocationsOfInterestForSettingsWithHandler:(id)arg0 ;
-(void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(id)arg0 ;
-(void)fetchCloudSyncAuthorizationState:(id)arg0 ;
-(void)fetchCurrentPredictedLocationsOfInterestLookingBack:(CGFloat)arg0 lookingAhead:(CGFloat)arg1 handler:(id)arg2 ;
-(void)fetchEstimatedLocationAtDate:(id)arg0 handler:(id)arg1 ;
-(void)fetchEstimatedLocationAtDate:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)fetchFormattedPostalAddressesFromMeCard:(id)arg0 ;
-(void)fetchLastVehicleEventsWithHandler:(id)arg0 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchLocationsOfInterestOfType:(NSInteger)arg0 withHandler:(id)arg1 ;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg0 endDate:(id)arg1 withHandler:(id)arg2 ;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchLocationsOfInterestWithinDistance:(CGFloat)arg0 ofLocation:(id)arg1 withHandler:(id)arg2 ;
-(void)fetchMonitoredScenarioTriggerTypesWithHandler:(id)arg0 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg0 startDate:(id)arg1 timeInterval:(CGFloat)arg2 withHandler:(id)arg3 ;
-(void)fetchNextPredictedLocationsOfInterestWithHandler:(id)arg0 ;
-(void)fetchPathToDiagnosticFilesWithHandler:(id)arg0 ;
-(void)fetchPlaceInferencesWithOptions:(id)arg0 handler:(id)arg1 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg0 onDate:(id)arg1 withHandler:(id)arg2 ;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg0 location:(id)arg1 calendarIdentifier:(id)arg2 withHandler:(id)arg3 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg0 endDate:(id)arg1 withHandler:(id)arg2 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchRoutineEnabledWithHandler:(id)arg0 ;
-(void)fetchRoutineModeFromLocation:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchRoutineStateWithHandler:(id)arg0 ;
-(void)fetchStoredVisitsWithOptions:(id)arg0 handler:(id)arg1 ;
-(void)fetchTransitionsBetweenStartDate:(id)arg0 endDate:(id)arg1 handler:(id)arg2 ;
-(void)handleDaemonStart;
-(void)onLeechedLowConfidenceVisit:(id)arg0 withError:(id)arg1 ;
-(void)onLeechedVisit:(id)arg0 withError:(id)arg1 ;
-(void)onScenarioTrigger:(id)arg0 withError:(id)arg1 ;
-(void)onVehicleEvents:(id)arg0 error:(id)arg1 ;
-(void)onVisit:(id)arg0 withError:(id)arg1 ;
-(void)performBluePOIQueryLookingBack:(CGFloat)arg0 lookingAhead:(CGFloat)arg1 handler:(id)arg2 ;
-(void)removeLocationOfInterestWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)removeVisitWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)setRoutineEnabled:(BOOL)arg0 ;
-(void)setRoutineEnabled:(BOOL)arg0 withHandler:(id)arg1 ;
-(void)startLeechingLowConfidenceVisitsWithHandler:(id)arg0 ;
-(void)startLeechingVisitsWithHandler:(id)arg0 ;
-(void)startMonitoringScenarioTriggerOfType:(NSUInteger)arg0 withHandler:(id)arg1 ;
-(void)startMonitoringVehicleEventsWithHandler:(id)arg0 ;
-(void)startMonitoringVisitsWithHandler:(id)arg0 ;
-(void)stopLeechingLowConfidenceVisits;
-(void)stopLeechingVisits;
-(void)stopMonitoringNextPredictedLocationsOfInterest;
-(void)stopMonitoringScenarioTriggerOfType:(NSUInteger)arg0 ;
-(void)stopMonitoringVehicleEvents;
-(void)stopMonitoringVisits;
-(void)updateCloudSyncProvisionedForAccount:(BOOL)arg0 handler:(id)arg1 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg0 customLabel:(id)arg1 handler:(id)arg2 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg0 mapItem:(id)arg1 handler:(id)arg2 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg0 type:(NSInteger)arg1 customLabel:(id)arg2 handler:(id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg0 type:(NSInteger)arg1 handler:(id)arg2 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg0 type:(NSInteger)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(id)arg4 ;
-(void)updateVehicleEventWithIdentifier:(id)arg0 geoMapItem:(id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg0 location:(id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg0 notes:(id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg0 photo:(id)arg1 ;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg0 interaction:(NSUInteger)arg1 feedback:(id)arg2 ;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg0 interaction:(NSUInteger)arg1 feedback:(id)arg2 geoMapItem:(id)arg3 handler:(id)arg4 ;
-(void)vehicleEventAtLocation:(id)arg0 notes:(id)arg1 ;
-(void)vehicleEventAtLocation:(id)arg0 notes:(id)arg1 handler:(id)arg2 ;


@end


#endif