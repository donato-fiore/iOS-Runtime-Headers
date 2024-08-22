// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASERVICEMANAGER_H
#define SASERVICEMANAGER_H

@class SPBeaconManager, SPOwnerSession, NSHashTable, NSString, NSDate, RTRoutineManager;
@protocol SAServiceServiceProtocol, SAServiceClientProtocol, SPSeparationMonitoringProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SAAnalytics.h"
#import "SAAudioAccessory.h"
#import "SAService.h"

@interface SAServiceManager : NSObject <SAServiceServiceProtocol, SAServiceClientProtocol>

 {
    SPBeaconManager *_beaconManager;
    SPOwnerSession *_ownerSession;
    NSObject<SPSeparationMonitoringProtocol> *_separationMonitoringSession;
}


@property (retain, nonatomic) SAAnalytics *analytics; // ivar: _analytics
@property (retain, nonatomic) SAAudioAccessory *audioAcccessory; // ivar: _audioAcccessory
@property (retain, nonatomic) NSHashTable *clients; // ivar: _clients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAttemptedToIngestLastVisitAtStartup; // ivar: _hasAttemptedToIngestLastVisitAtStartup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *nextAnalyticsSubmission; // ivar: _nextAnalyticsSubmission
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) RTRoutineManager *routineManager; // ivar: _routineManager
@property (retain, nonatomic) SAService *service; // ivar: _service
@property (readonly) Class superclass;


+(NSUInteger)convertBeaconToDeviceType:(id)arg0 ;
+(NSUInteger)convertCLReferenceFrameToSAReferenceFrame:(int)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_fetchAndIngestLastVisit;
-(void)_ingestVisit:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)dealloc;
-(void)didFetchAllDevices:(id)arg0 ;
-(void)didFetchAllSafeLocations:(id)arg0 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)separationAlertsService:(id)arg0 addGeofence:(id)arg1 ;
-(void)separationAlertsService:(id)arg0 cancelSATimeEventForAlarm:(id)arg1 ;
-(void)separationAlertsService:(id)arg0 enableMonitoringForSeparations:(BOOL)arg1 ;
-(void)separationAlertsService:(id)arg0 notifySeparationsForDevices:(id)arg1 withLocation:(id)arg2 withContext:(id)arg3 ;
-(void)separationAlertsService:(id)arg0 removeGeofence:(id)arg1 ;
-(void)separationAlertsService:(id)arg0 requestBluetoothScanForTypes:(NSUInteger)arg1 ;
-(void)separationAlertsService:(id)arg0 requestLocationForType:(NSUInteger)arg1 ;
-(void)separationAlertsService:(id)arg0 requestStateForRegion:(id)arg1 ;
-(void)separationAlertsService:(id)arg0 scheduleSATimeEvent:(CGFloat)arg1 forAlarm:(id)arg2 ;
-(void)separationAlertsServiceFetchLastVisit:(id)arg0 ;
-(void)separationAlertsServiceStartBackgroundScanning:(id)arg0 ;
-(void)separationAlertsServiceStopBackgroundScanning:(id)arg0 ;
-(void)separationAlertsServiceStopLongAggressiveScan:(id)arg0 ;


@end


#endif