// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TATRACKINGAVOIDANCESERVICEMANAGER_H
#define TATRACKINGAVOIDANCESERVICEMANAGER_H

@class NSHashTable, NSString, RTRoutineManager, NSUUID;
@protocol TATrackingAvoidanceServiceObserver, TATrackingAvoidanceServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TAAnalyticsManager.h"
#import "TAPersistenceManager.h"
#import "TATrackingAvoidanceService.h"
#import "TASettings.h"
#import "TATrackingAvoidanceServiceStateContext.h"

@interface TATrackingAvoidanceServiceManager : NSObject <TATrackingAvoidanceServiceObserver, TATrackingAvoidanceServiceProtocol>



@property (retain, nonatomic) TAAnalyticsManager *analyticsManager; // ivar: _analyticsManager
@property (retain, nonatomic) NSHashTable *dataSources; // ivar: _dataSources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) TAPersistenceManager *persistenceManager; // ivar: _persistenceManager
@property (nonatomic) NSUInteger persistenceManagerLastSaveTime; // ivar: _persistenceManagerLastSaveTime
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) RTRoutineManager *routineManager; // ivar: _routineManager
@property (retain, nonatomic) TATrackingAvoidanceService *service; // ivar: _service
@property (retain, nonatomic) TASettings *serviceSettings; // ivar: _serviceSettings
@property (retain, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (readonly) NSUInteger state; // ivar: _state
@property (retain, nonatomic) TATrackingAvoidanceServiceStateContext *stateContext; // ivar: _stateContext
@property (readonly) Class superclass;


+(id)managerStateToString:(NSUInteger)arg0 ;
-(BOOL)_shouldSuspendAvengerScanner;
-(BOOL)_shouldTerminateService;
-(id)initWithQueue:(id)arg0 settings:(id)arg1 ;
-(void)_changeSession;
-(void)_fetchAndIngestLastVisit;
-(void)_fetchAndIngestNextPredictedLocationOfInterestFromLocation:(id)arg0 startDate:(id)arg1 interval:(CGFloat)arg2 ;
-(void)_fetchAndIngestNextPredictedLocationOfInterestWithCurrentVisitState;
-(void)_fetchStoreAndSave;
-(void)_handleStateUpdateIfNecessary;
-(void)_loadAndBootstrap;
-(void)_onAirplaneMode:(BOOL)arg0 ;
-(void)_onAllowSimulatedEvents:(BOOL)arg0 ;
-(void)_onBatterySaverMode:(BOOL)arg0 ;
-(void)_onDeviceUnlockedSinceBoot:(BOOL)arg0 ;
-(void)_onHasKoreaCountryCode:(BOOL)arg0 ;
-(void)_onHighThermalState:(BOOL)arg0 ;
-(void)_onLocationAndPrivacyReset:(BOOL)arg0 ;
-(void)_onLocationServicesEnabled:(BOOL)arg0 ;
-(void)_onLocationSimulationInProgress:(BOOL)arg0 ;
-(void)_onServiceEnabled:(BOOL)arg0 ;
-(void)_onUserLocationInsideKorea:(BOOL)arg0 ;
-(void)_registerForAvengerScanner;
-(void)_registerForTATrackingAvoidanceServiceWithSettings:(id)arg0 ;
-(void)_schedulePeriodicSaveAfterTimeInterval:(CGFloat)arg0 ;
-(void)_setLastSaveTime;
-(void)_unregisterForAvengerScanner;
-(void)_unregisterForTATrackingAvoidanceService;
-(void)addDataSource:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)notifyObserversOfStateChangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)onUpdatedSettings:(id)arg0 ;
-(void)removeDataSource:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)trackingAvoidanceService:(id)arg0 didFindSuspiciousDevices:(id)arg1 ;
-(void)trackingAvoidanceService:(id)arg0 didStageSuspiciousDevices:(id)arg1 ;
-(void)trackingAvoidanceService:(id)arg0 didUpdateSuspiciousDevices:(id)arg1 ;
-(void)trackingAvoidanceService:(id)arg0 requestingAdditionalInformation:(id)arg1 ;
-(void)visitStateChangedForTrackingAvoidanceService:(id)arg0 ;


@end


#endif