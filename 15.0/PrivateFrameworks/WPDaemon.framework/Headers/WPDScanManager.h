// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPDSCANMANAGER_H
#define WPDSCANMANAGER_H

@class CBController, CBCentralManager, NSMutableDictionary, NSIndexSet, NSString, NSMutableSet, NSDictionary, NSSet;
@protocol CBCentralManagerDelegate, OS_dispatch_queue;


#import "WPDManager.h"

@interface WPDScanManager : WPDManager <CBCentralManagerDelegate>



@property (retain) CBController *cbDiscoveryAsserter; // ivar: _cbDiscoveryAsserter
@property (retain) CBCentralManager *centralManager; // ivar: _centralManager
@property (retain) NSMutableDictionary *connectionsInProgress; // ivar: _connectionsInProgress
@property (retain) NSIndexSet *currentScanners; // ivar: _currentScanners
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRanging; // ivar: _isRanging
@property (retain) NSMutableDictionary *peerRequests; // ivar: _peerRequests
@property (retain) NSMutableSet *peripheralConnections; // ivar: _peripheralConnections
@property (readonly, nonatomic) NSIndexSet *rangingTypes; // ivar: _rangingTypes
@property (retain) NSDictionary *scanOptions; // ivar: _scanOptions
@property (retain) NSSet *scanRequestHashes; // ivar: _scanRequestHashes
@property (retain) NSMutableDictionary *scanRequests; // ivar: _scanRequests
@property (retain) NSSet *scanRuleHashes; // ivar: _scanRuleHashes
@property BOOL scanning; // ivar: _scanning
@property BOOL scanningDisabled; // ivar: _scanningDisabled
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue
@property (retain) NSMutableSet *spyScanClients; // ivar: _spyScanClients
@property (readonly) Class superclass;


+(NSInteger)zonesAvailableForType:(unsigned char)arg0 ;
-(BOOL)heySiriScanActive:(BOOL)arg0 ;
-(BOOL)isScannerTestMode;
-(BOOL)scanOptionsChanged:(id)arg0 ForRequests:(id)arg1 ;
-(BOOL)shallStop;
-(BOOL)startTrackingPeripheral:(id)arg0 ofType:(id)arg1 ;
-(BOOL)updateScanRules;
-(id)addPeerTrackingRequest:(id)arg0 forClient:(id)arg1 ;
-(id)addScanRequest:(id)arg0 forClient:(id)arg1 ;
-(id)connectToPeripheral:(id)arg0 fromClient:(id)arg1 withOptions:(id)arg2 ;
-(id)disconnectFromPeripheral:(id)arg0 withSubscribedCharacteristics:(id)arg1 forClient:(id)arg2 ;
-(id)generateStateDumpStrings;
-(id)getScanRequestsForClient:(id)arg0 ;
-(id)initWithServer:(id)arg0 ;
-(id)removePeerTrackingRequest:(id)arg0 checkZonesAvailable:(BOOL)arg1 forClient:(id)arg2 ;
-(id)removeScanRequest:(id)arg0 forClient:(id)arg1 ;
-(id)retrievePeripheralWithUUID:(id)arg0 ;
-(id)ruleHashesFromScanOptions:(id)arg0 ;
-(id)scanRequestHashesFromScanRequests:(id)arg0 ;
-(void)addSpyScanClient:(id)arg0 ;
-(void)assertCBDiscoveryScan:(BOOL)arg0 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDisconnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didDiscoverMultiplePeripherals:(id)arg1 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didFailToScanWithError:(id)arg1 ;
-(void)centralManager:(id)arg0 didFindPeripheral:(id)arg1 forType:(id)arg2 ;
-(void)centralManager:(id)arg0 didLosePeripheral:(id)arg1 forType:(id)arg2 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)cleanup;
-(void)clearExistingConnections;
-(void)disconnectFromCentral:(id)arg0 forClient:(id)arg1 ;
-(void)duplicateRulesGuard:(id)arg0 forRule:(id)arg1 ;
-(void)enableRanging:(BOOL)arg0 ;
-(void)logScanRequests:(id)arg0 method:(BOOL)arg1 window:(NSInteger)arg2 interval:(NSInteger)arg3 ;
-(void)logScanTypes:(id)arg0 method:(BOOL)arg1 window:(NSInteger)arg2 interval:(NSInteger)arg3 ;
-(void)reconcileScanRule:(id)arg0 withRule:(id)arg1 ;
-(void)removeAllPeerTrackingRequestsForClient:(id)arg0 ;
-(void)removeConflictingRequest:(id)arg0 forClient:(id)arg1 ;
-(void)removePeripheralConnection:(id)arg0 forClient:(id)arg1 ;
-(void)removePeripheralConnectionsForClient:(id)arg0 ;
-(void)removeScanRequestsForClient:(id)arg0 ;
-(void)removeSpyScanClient:(id)arg0 ;
-(void)stopTrackingPeripheral:(id)arg0 ofType:(id)arg1 ;
-(void)update;
-(void)updateScanner;


@end


#endif