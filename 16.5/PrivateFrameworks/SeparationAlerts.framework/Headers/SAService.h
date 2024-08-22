// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASERVICE_H
#define SASERVICE_H

@class NSHashTable, NSString;
@protocol SAMonitoringSessionManagerClientProtocol, SAFenceManagerClientProtocol, SAPowerLogClientProtocol, SAServiceServiceProtocol, SAGeoFenceRequestProtocol, SABluetoothScanRequestProtocol, SALocationRequestProtocol, SATimeEventRequestProtocol;

#import <Foundation/Foundation.h>

#import "SATime.h"
#import "SADeviceRecord.h"
#import "SAFenceManager.h"
#import "SAMonitoringSessionManager.h"
#import "SAPersistenceManager.h"
#import "SAPowerLog.h"
#import "SATravelTypeClassifier.h"
#import "SAWithYouDetector.h"

@interface SAService : NSObject <SAMonitoringSessionManagerClientProtocol, SAFenceManagerClientProtocol, SAPowerLogClientProtocol, SAServiceServiceProtocol, SAGeoFenceRequestProtocol, SABluetoothScanRequestProtocol, SALocationRequestProtocol, SATimeEventRequestProtocol>



@property (retain, nonatomic) NSHashTable *clients; // ivar: _clients
@property (retain, nonatomic) SATime *clock; // ivar: _clock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SADeviceRecord *deviceRecord; // ivar: _deviceRecord
@property (retain, nonatomic) SAFenceManager *fenceManager; // ivar: _fenceManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAMonitoringSessionManager *monitoringSessionManager; // ivar: _monitoringSessionManager
@property (retain, nonatomic) SAPersistenceManager *persistenceManager; // ivar: _persistenceManager
@property (retain, nonatomic) SAPowerLog *powerLogger; // ivar: _powerLogger
@property (readonly) Class superclass;
@property (retain, nonatomic) SATravelTypeClassifier *travelTypeClassifier; // ivar: _travelTypeClassifier
@property (retain, nonatomic) SAWithYouDetector *withYouDetector; // ivar: _withYouDetector


-(id)initWithAnalytics:(id)arg0 isReplay:(BOOL)arg1 audioAccessoryManager:(id)arg2 ;
-(void)addClient:(id)arg0 ;
-(void)addGeofence:(id)arg0 ;
-(void)cancelSATimeEventForAlarm:(id)arg0 ;
-(void)enableMonitoringForSeparations:(BOOL)arg0 ;
-(void)fetchLastVisit;
-(void)ingestTAEvent:(id)arg0 ;
-(void)notifySeparationsForDevices:(id)arg0 withLocation:(id)arg1 withContext:(id)arg2 ;
-(void)removeClient:(id)arg0 ;
-(void)removeGeofence:(id)arg0 ;
-(void)requestBluetoothScanForTypes:(NSUInteger)arg0 ;
-(void)requestLocationForType:(NSUInteger)arg0 ;
-(void)requestStateForRegion:(id)arg0 ;
-(void)scheduleSATimeEvent:(CGFloat)arg0 forAlarm:(id)arg1 ;
-(void)startBackgroundScanning;
-(void)stopBackgroundScanning;
-(void)stopLongAggressiveScan;
-(void)updatedMonitoringState:(NSUInteger)arg0 forDeviceUUID:(id)arg1 ;


@end


#endif