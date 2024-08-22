// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMONITORINGSESSIONMANAGER_H
#define SAMONITORINGSESSIONMANAGER_H

@class NSDate, NSHashTable, NSMutableDictionary, NSMutableSet, TALocationLite, NSUUID;
@protocol SAMonitoringSessionManagerServiceProtocol, SAScenarioClassifierClientProtocol, SAWithYouDetectorClientProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol, SAAnalyticsServiceProtocol, SATimeServiceProtocol, TAEventProtocol, SAFenceManagerServiceProtocol><SAFenceManagerRequestProtocol, SAGeoFenceRequestProtocol, SATravelTypeClassifierServiceProtocol, SAWithYouDetectorServiceProtocol;

#import <Foundation/Foundation.h>

#import "SADeviceRecord.h"
#import "SAPersistenceManager.h"

@interface SAMonitoringSessionManager : NSObject <SAMonitoringSessionManagerServiceProtocol, SAScenarioClassifierClientProtocol, SAWithYouDetectorClientProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol>



@property (retain, nonatomic) NSObject<SAAnalyticsServiceProtocol> *analytics; // ivar: _analytics
@property (nonatomic) NSInteger caBroughtOutOnTravel; // ivar: _caBroughtOutOnTravel
@property (nonatomic) NSUInteger caCurrentVehicularState; // ivar: _caCurrentVehicularState
@property (nonatomic) BOOL caIsVehicularBTHintOn; // ivar: _caIsVehicularBTHintOn
@property (retain, nonatomic) NSDate *caLastAlertDate; // ivar: _caLastAlertDate
@property (retain, nonatomic) NSHashTable *clients; // ivar: _clients
@property (weak, nonatomic) NSObject<SATimeServiceProtocol> *clock; // ivar: _clock
@property (retain, nonatomic) NSObject<TAEventProtocol> *currentVisitOrLOIEvent; // ivar: _currentVisitOrLOIEvent
@property (retain, nonatomic) SADeviceRecord *deviceRecord; // ivar: _deviceRecord
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDtoAlertContext; // ivar: _deviceUUIDtoAlertContext
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDtoMonitoringSession; // ivar: _deviceUUIDtoMonitoringSession
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDtoSafeLocationUUIDs; // ivar: _deviceUUIDtoSafeLocationUUIDs
@property (retain, nonatomic) NSMutableDictionary *devices; // ivar: _devices
@property (retain, nonatomic) NSMutableSet *devicesWithPendingTransition; // ivar: _devicesWithPendingTransition
@property (retain, nonatomic) NSMutableSet *devicesWithToBePopulatedTrackedTravelingStartLocation; // ivar: _devicesWithToBePopulatedTrackedTravelingStartLocation
@property (nonatomic) NSUInteger disabledReasons; // ivar: _disabledReasons
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSObject<SAFenceManagerServiceProtocol><SAFenceManagerRequestProtocol> *fenceManager; // ivar: _fenceManager
@property (retain, nonatomic) NSObject<SAGeoFenceRequestProtocol> *fenceRequestServicer; // ivar: _fenceRequestServicer
@property (nonatomic) BOOL isCompanionConnected; // ivar: _isCompanionConnected
@property (retain, nonatomic) TALocationLite *lastLocation; // ivar: _lastLocation
@property (retain, nonatomic) NSUUID *nextScheduledAlarmForPersistenceWrite; // ivar: _nextScheduledAlarmForPersistenceWrite
@property (retain, nonatomic) SAPersistenceManager *persistenceManager; // ivar: _persistenceManager
@property (retain, nonatomic) NSObject<TAEventProtocol> *previousVisitOrLOIEvent; // ivar: _previousVisitOrLOIEvent
@property (nonatomic) BOOL requestedPeriodicScan; // ivar: _requestedPeriodicScan
@property (retain, nonatomic) NSMutableDictionary *safeLocations; // ivar: _safeLocations
@property (retain, nonatomic) NSUUID *scheduledAlarmForForceUpdateWithYouStatus; // ivar: _scheduledAlarmForForceUpdateWithYouStatus
@property (nonatomic) BOOL standby; // ivar: _standby
@property (retain, nonatomic) NSDate *timeOfAttemptToLoadFromPersistence; // ivar: _timeOfAttemptToLoadFromPersistence
@property (retain, nonatomic) NSObject<SATravelTypeClassifierServiceProtocol> *travelTypeClassifier; // ivar: _travelTypeClassifier
@property (retain, nonatomic) NSObject<SAWithYouDetectorServiceProtocol> *withYouDetector; // ivar: _withYouDetector


+(id)convertSAMonitoringSessionStateToString:(NSUInteger)arg0 ;
+(id)createLocationFromCircularRegion:(id)arg0 forDevice:(id)arg1 withContext:(NSUInteger)arg2 ;
-(BOOL)_isOnlyMonitoringDisconnectedCompanionDevice;
-(BOOL)addTravelFenceForDevice:(id)arg0 ;
-(BOOL)allDevicesInSafeLocation;
-(BOOL)anyDeviceInUnsafeLocation;
-(BOOL)deviceShouldTransitionWithLastScenarioChangeDate:(id)arg0 lastWithYouDate:(id)arg1 ;
-(BOOL)enoughTimeHasPassedBeforeSurfacingAlert:(id)arg0 forAlertForDevice:(id)arg1 ;
-(BOOL)isAnyInTrackedInUnsafeLocation;
-(BOOL)isAnyTrackedWhileTraveling;
-(BOOL)isWithinCurrentVisitOrLOI:(id)arg0 ;
-(BOOL)needPeriodicScan;
-(BOOL)shouldIssueBookendedNotificationBasedOnLocationForDevice:(id)arg0 ;
-(BOOL)shouldIssueBookendedNotificationBasedOnTimeForDevice:(id)arg0 ;
-(BOOL)shouldIssueBookendedNotificationForDevice:(id)arg0 ;
-(CGFloat)minimumTimeSinceScenarioTransitionForAlertForDevice:(id)arg0 ;
-(NSInteger)determineTrackedTravelingCount;
-(NSUInteger)convertSADeviceTypeForCoreAnalytics:(id)arg0 ;
-(NSUInteger)scenarioClassForDeviceUUID:(id)arg0 ;
-(NSUInteger)stateForDeviceUUID:(id)arg0 ;
-(id)computeRemovedSafeLocations:(id)arg0 ;
-(id)initWithWithYouDetector:(id)arg0 fenceRequestServicer:(id)arg1 fenceManager:(id)arg2 travelTypeClassifier:(id)arg3 clock:(id)arg4 deviceRecord:(id)arg5 analytics:(id)arg6 persistenceManager:(id)arg7 ;
-(void)addClient:(id)arg0 ;
-(void)addDevice:(id)arg0 isLastDeviceEvent:(BOOL)arg1 ;
-(void)addDevicesIfNeededPerEvent:(id)arg0 ;
-(void)addDisableReason:(NSUInteger)arg0 ;
-(void)addSafeLocation:(id)arg0 forDeviceUUID:(id)arg1 ;
-(void)addSafeLocationsIfNeededPerNewSet:(id)arg0 forDevice:(id)arg1 ;
-(void)alarmFiredForUUID:(id)arg0 ;
-(void)attemptToPopulateTrackedTravelingStartLocationForDevice:(id)arg0 ;
-(void)bootstrapMonitoringSessionRecord:(id)arg0 ;
-(void)cancelMonitoringDevice:(id)arg0 ;
-(void)changeMonitoringSessionState:(id)arg0 toState:(NSUInteger)arg1 ;
-(void)checkReunion:(NSUInteger)arg0 to:(NSUInteger)arg1 forDeviceWithUUID:(id)arg2 ;
-(void)configureBackgroundScanning;
-(void)createMonitoringDevice:(id)arg0 ;
-(void)didChangeScenarioClassFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 forDevice:(id)arg2 ;
-(void)didChangeTravelTypeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 hints:(NSUInteger)arg2 ;
-(void)didForceUpdateWithYouStatus;
-(void)forceStandbyMode:(id)arg0 ;
-(void)handleGeofenceEvent:(id)arg0 ;
-(void)handleGeofenceExitedForDeviceUUID:(id)arg0 ;
-(void)handleModifiedSafeLocation:(id)arg0 ;
-(void)handleModifiedSafeLocation:(id)arg0 forDeviceUUID:(id)arg1 ;
-(void)handleNewSafeLocation:(id)arg0 ;
-(void)handleRemovedSafeLocation:(id)arg0 ;
-(void)handleSeparationForDeviceUUID:(id)arg0 withSafeLocationRecommendation:(id)arg1 context:(id)arg2 ;
-(void)handleSystemStateChanged:(id)arg0 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)modifyDevice:(id)arg0 ;
-(void)notifyEarlyLeftBehind:(id)arg0 ;
-(void)notifyLeftBehind:(id)arg0 withRegion:(id)arg1 isEarlyVehicularTrigger:(BOOL)arg2 ;
-(void)notifyWhenLeftBehind:(id)arg0 ;
-(void)notifyWhileTraveling:(id)arg0 isBookendingTravel:(BOOL)arg1 ;
-(void)removeAndStopSafeLocationsForDeviceUUID:(id)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)removeDeviceWithUUID:(id)arg0 isLastDeviceEvent:(BOOL)arg1 ;
-(void)removeDevicesIfNeededPerEvent:(id)arg0 ;
-(void)removeDisableReason:(NSUInteger)arg0 ;
-(void)removeSafeLocation:(id)arg0 forDeviceUUID:(id)arg1 ;
-(void)removeSafeLocationsIfNeededPerNewSet:(id)arg0 forDevice:(id)arg1 ;
-(void)removeTravelFenceForDevice:(id)arg0 ;
-(void)requestToFetchLastVisit;
-(void)requestToStartBackgroundScanning;
-(void)requestToStopBackgroundScanning;
-(void)scheduleNextForceUpdateWithYouStatus;
-(void)startPeriodicScans;
-(void)startPeriodicScansIfNeeded;
-(void)startSafeLocation:(id)arg0 forDevice:(id)arg1 ;
-(void)stopPeriodicScans;
-(void)stopPeriodicScansIfNotNeeded;
-(void)stopSafeLocation:(id)arg0 forDevice:(id)arg1 ;
-(void)storeSeparationLocation:(id)arg0 ;
-(void)updateDevicesWithSafeLocations:(id)arg0 ;
-(void)updateLocation:(id)arg0 ;
-(void)updateSafeLocations:(id)arg0 ;
-(void)updatedWithYouStatusFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 forDeviceWithUUID:(id)arg2 ;


@end


#endif