// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPDOBJECTDISCOVERYMANAGER_H
#define WPDOBJECTDISCOVERYMANAGER_H

@class NSUUID, NSDictionary, CBCentralManager, NSMutableSet, NSString, NSArray, CBPeripheralManager, NSMutableDictionary;
@protocol CBPeripheralManagerDelegate, CBCentralManagerDelegate, WPDObjectDiscoveryAdvertiser, WPDObjectDiscoveryScanner, OS_dispatch_source, OS_dispatch_queue;


#import "WPDManager.h"
#import "WPAdvertisingRequest.h"

@interface WPDObjectDiscoveryManager : WPDManager <CBPeripheralManagerDelegate, CBCentralManagerDelegate, WPDObjectDiscoveryAdvertiser, WPDObjectDiscoveryScanner>



@property (readonly, nonatomic) BOOL advAllowlisted; // ivar: _advAllowlisted
@property int advBuffersToRead; // ivar: _advBuffersToRead
@property (weak) NSUUID *advertClientUUID; // ivar: _advertClientUUID
@property NSUInteger advertHash; // ivar: _advertHash
@property (retain) NSDictionary *advertOptions; // ivar: _advertOptions
@property (retain) WPAdvertisingRequest *advertRequest; // ivar: _advertRequest
@property BOOL advertising; // ivar: _advertising
@property (retain) CBCentralManager *centralManager; // ivar: _centralManager
@property (retain) NSMutableSet *currentScanners; // ivar: _currentScanners
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSArray *matchActionRules; // ivar: _matchActionRules
@property (retain) NSArray *nearbyTokensRequest; // ivar: _nearbyTokensRequest
@property (retain) CBPeripheralManager *peripheralManager; // ivar: _peripheralManager
@property (readonly, nonatomic) BOOL scanAllowlisted; // ivar: _scanAllowlisted
@property (retain) NSDictionary *scanOptions; // ivar: _scanOptions
@property (retain) NSMutableDictionary *scanRequests; // ivar: _scanRequests
@property (retain) NSObject<OS_dispatch_source> *scanStopTimer; // ivar: _scanStopTimer
@property BOOL scanning; // ivar: _scanning
@property BOOL scanningDisabled; // ivar: _scanningDisabled
@property (readonly, weak) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue
@property (readonly) Class superclass;


-(BOOL)advertOptionsChanged:(id)arg0 ;
-(BOOL)changedScanOptions:(id)arg0 Clients:(id)arg1 ;
-(BOOL)updateAdvertisingOptionsWithError:(*id)arg0 ;
-(BOOL)updateScanRules;
-(id)addAdvertisingRequest:(id)arg0 forClient:(id)arg1 ;
-(id)addScanRequest:(id)arg0 forClient:(id)arg1 ;
-(id)generateStateDumpStrings;
-(id)getScanRequestsForClient:(id)arg0 ;
-(id)initWithServer:(id)arg0 ;
-(id)removeAdvertisingRequest:(id)arg0 forClient:(id)arg1 ;
-(id)rulesFromTokens:(id)arg0 ;
-(id)updateAdvertiser;
-(void)activateADVBuffer;
-(void)addScanStopTimer;
-(void)cancelScanStopTimer;
-(void)centralManager:(id)arg0 didDiscoverMultiplePeripherals:(id)arg1 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManager:(id)arg0 didFailToScanWithError:(id)arg1 ;
-(void)cleanup;
-(void)deactivateADVBuffer;
-(void)forceReadADVBuffer:(id)arg0 ;
-(void)peripheralManager:(id)arg0 didStopAdvertisingWithError:(id)arg1 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg0 error:(id)arg1 ;
-(void)removeAdvertisingRequestsForClient:(id)arg0 ;
-(void)removeScanRequestsForClient:(id)arg0 ;
-(void)resetAdvertiser;
-(void)startAdvertiser;
-(void)stopAdvertiser;
-(void)update;
-(void)updateClientsWithReports:(id)arg0 ;
-(void)updateNearbyTokens:(id)arg0 ;
-(void)updateReports:(id)arg0 Peripheral:(id)arg1 AdvertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)updateReports:(id)arg0 fromReport:(id)arg1 ;
-(void)updateScanner;


@end


#endif