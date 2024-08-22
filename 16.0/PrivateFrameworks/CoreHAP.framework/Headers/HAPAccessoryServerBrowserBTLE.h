// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPACCESSORYSERVERBROWSERBTLE_H
#define HAPACCESSORYSERVERBROWSERBTLE_H

@class NSMutableOrderedSet, CBCentralManager, NSString, NSMapTable, NSMutableArray, HMFActivity;
@protocol CBCentralManagerDelegate, HAPAccessoryServerBrowserWiProxBTLEDelegate, HMFLogging, HAPAccessoryServerBrowserBTLEDelegate, OS_dispatch_queue, OS_dispatch_source;


#import "HAPAccessoryServerBrowser.h"
#import "CBConnectionsObserver.h"
#import "HAPAccessoryServerBrowserWiProxBTLE.h"

@interface HAPAccessoryServerBrowserBTLE : HAPAccessoryServerBrowser <CBCentralManagerDelegate, HAPAccessoryServerBrowserWiProxBTLEDelegate, HMFLogging>

 {
    NSMutableOrderedSet *_peripheralsWithConnectionRequests;
    NSMutableOrderedSet *_peripheralsPendingConnection;
}


@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: _centralManager
@property (retain, nonatomic) CBConnectionsObserver *connectionsObserver; // ivar: _connectionsObserver
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAPAccessoryServerBrowserBTLEDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMapTable *discoveredPeripheralsWithAccessories; // ivar: _discoveredPeripheralsWithAccessories
@property (retain, nonatomic) HAPAccessoryServerBrowserWiProxBTLE *hapWiProxBLEBrowser; // ivar: _hapWiProxBLEBrowser
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *identifersWithReachabilityScanTuples; // ivar: _identifersWithReachabilityScanTuples
@property (readonly, nonatomic, getter=isPerformingGeneralScan) BOOL performingGeneralScan; // ivar: _performingGeneralScan
@property (retain) NSMapTable *peripheralDisconnectionMonitorMap; // ivar: _peripheralDisconnectionMonitorMap
@property NSInteger peripheralDisconnectionTimeout; // ivar: _peripheralDisconnectionTimeout
@property (retain, nonatomic) NSMutableArray *powerOnCentralManagerCompletions; // ivar: _powerOnCentralManagerCompletions
@property (nonatomic) NSUInteger qosLimits; // ivar: _qosLimits
@property (copy, nonatomic) id *reachabilityCompletion; // ivar: _reachabilityCompletion
@property (retain, nonatomic) NSMapTable *recentlySeenPairedPeripherals; // ivar: _recentlySeenPairedPeripherals
@property (nonatomic) NSInteger scanState; // ivar: _scanState
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *targetedScanAccessoryIdentifiers; // ivar: _targetedScanAccessoryIdentifiers
@property (retain, nonatomic) HMFActivity *targetedScanActivity; // ivar: _targetedScanActivity
@property (retain, nonatomic) NSObject<OS_dispatch_source> *targetedScanTimer; // ivar: _targetedScanTimer


+(id)logCategory;
-(BOOL)_canStartScan;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)_hasPairedAccessoriesOfType:(NSUInteger)arg0 ;
-(BOOL)_hasRecentlySeenAccessoriesWithIdentifiers:(id)arg0 ;
-(BOOL)_shouldCreateHAPAccessoryServerWithIdentifier:(id)arg0 statusFlags:(id)arg1 stateNumber:(id)arg2 category:(id)arg3 configNumber:(id)arg4 name:(id)arg5 forPeripheral:(id)arg6 advertisementFormat:(NSUInteger)arg7 setupHash:(id)arg8 stateChanged:(*BOOL)arg9 connectReason:(*unsigned char)arg10 ;
-(BOOL)remoteBrowsingEnabled;
-(NSInteger)linkType;
-(NSUInteger)_parseAdvertisementData:(id)arg0 forPeripheral:(id)arg1 name:(*id)arg2 pairingUsername:(*id)arg3 statusFlags:(*id)arg4 stateNumber:(*id)arg5 category:(*id)arg6 configNumber:(*id)arg7 setupHash:(*id)arg8 ;
-(id)_blePeripheralForAccessoryServerIdentifier:(id)arg0 ;
-(id)_blePeripheralForCBPeripheral:(id)arg0 ;
-(id)_cachedCharacteristicForInstanceID:(id)arg0 identifier:(id)arg1 ;
-(id)_cbPeripheralForHAPBLEPeripheral:(id)arg0 routeMode:(*unsigned char)arg1 ;
-(id)_cbPeripheralForPeripheralUUID:(id)arg0 stableIdentifier:(id)arg1 routeMode:(*unsigned char)arg2 ;
-(id)_discoveredAccessoryServerTupleForBLEPeripheral:(id)arg0 shouldMerge:(BOOL)arg1 ;
-(id)_getDiscoveredPeripheralMatchingIdentifier:(id)arg0 ;
-(id)_recentlySeenPairedPeripheralTupleWithPeripheral:(id)arg0 ;
-(id)cachedAccessoryForIdentifier:(id)arg0 ;
-(id)hapCharacteristicsForEncryptedPayload:(id)arg0 identifier:(id)arg1 shouldConnect:(*BOOL)arg2 ;
-(id)initWithQueue:(id)arg0 ;
-(id)logIdentifier;
-(id)peripheralsPendingConnection;
-(id)peripheralsWithConnectionRequests;
-(id)retrieveCBPeripheralWithUUID:(id)arg0 blePeripheral:(id)arg1 ;
-(void)_addToActiveConnections:(id)arg0 ;
-(void)_addToPendingConnections:(id)arg0 ;
-(void)_callPowerOnCompletionsWithError:(id)arg0 ;
-(void)_connectHAPPeripheralWhenAllowed:(id)arg0 ;
-(void)_connectPendingConnections;
-(void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)arg0 name:(id)arg1 pairingUsername:(id)arg2 statusFlags:(id)arg3 stateNumber:(id)arg4 stateChanged:(BOOL)arg5 connectReason:(unsigned char)arg6 configNumber:(id)arg7 category:(id)arg8 connectionIdleTime:(unsigned char)arg9 format:(NSUInteger)arg10 setupHash:(id)arg11 encryptedPayload:(id)arg12 whbStableIdentifier:(id)arg13 ;
-(void)_didDiscoverPeripheral:(id)arg0 accessoryName:(id)arg1 pairingIdentifier:(id)arg2 format:(NSUInteger)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 category:(id)arg6 configNumber:(id)arg7 setupHash:(id)arg8 encryptedPayload:(id)arg9 whbStableIdentifier:(id)arg10 ;
-(void)_disconectFromHAPBLEPeripheral:(id)arg0 cbPeripheral:(id)arg1 ;
-(void)_discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)_forgetPairedAccesoryWithIdentifier:(id)arg0 ;
-(void)_handleTargetedScanTimeout;
-(void)_invalidTargettedScanActivity;
-(void)_matchAccessoryServerWithSetupID:(id)arg0 serverIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)_monitorDisconnectionOfHAPPeripheral:(id)arg0 peripheral:(id)arg1 ;
-(void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg0 error:(id)arg1 ;
-(void)_performTargetedScanForAccessoryWithIdentifier:(id)arg0 ;
-(void)_performTimedConnectionRequestForIdentifier:(id)arg0 ;
-(void)_performTimedScanForIdentifiers:(id)arg0 workQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)_powerOnCentralManagerWithCompletion:(id)arg0 ;
-(void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)arg0 onQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)_removeDiscoveredPeripheralsWithIdentifier:(id)arg0 ;
-(void)_removeFromActiveConnections:(id)arg0 ;
-(void)_removeFromPendingConnections:(id)arg0 ;
-(void)_removeIdentifiersForReachabilityScan;
-(void)_reportReachabilityForAccessoryWithIdentifier:(id)arg0 ;
-(void)_startBrowsingForLegacyHAPBTLE100Accessories;
-(void)_startDiscoveringAccessoryServers;
-(void)_startScanningForReachability:(id)arg0 ;
-(void)_stopActiveScanWithForce:(BOOL)arg0 ;
-(void)_stopMonitorDisconnectionOfCBPeripheral:(id)arg0 ;
-(void)_updateTargetedScanTimer;
-(void)accessoryServerBrowserBTLE:(id)arg0 didDiscoverHAPPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDisconnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)configureAccessoryWithIdentifier:(id)arg0 trackState:(BOOL)arg1 connectionPriority:(NSUInteger)arg2 ;
-(void)configureBTLEQoSLimits:(NSUInteger)arg0 ;
-(void)connectToBTLEAccessoryServer:(id)arg0 ;
-(void)connectedHAPPeripheral:(id)arg0 ;
-(void)deRegisterAccessoryWithIdentifier:(id)arg0 ;
-(void)disconnectFromBTLEAccessoryServer:(id)arg0 ;
-(void)disconnectedHAPPeripheral:(id)arg0 error:(id)arg1 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)failedToConnectHAPPeripheral:(id)arg0 error:(id)arg1 ;
-(void)markNotifyingCharacteristicUpdatedForIdentifier:(id)arg0 ;
-(void)matchAccessoryServerWithSetupID:(id)arg0 serverIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)pauseScans;
-(void)probeReachabilityForAccessoryServersWithIdentifiers:(id)arg0 onQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)removeCachedAccessoryWithIdentifier:(id)arg0 ;
-(void)resetLastSeenForAccessoryServersWithIdentifers:(id)arg0 ;
-(void)resetPairedAccessories;
-(void)retrieveCurrentStateForIdentifer:(id)arg0 stateNumber:(*id)arg1 isReachable:(*BOOL)arg2 linkQuality:(*NSUInteger)arg3 lastSeen:(*id)arg4 ;
-(void)saveCacheToDisk:(id)arg0 ;
-(void)setConnectionLatency:(NSInteger)arg0 forPeripheral:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg0 ;
-(void)updateBroadcastKeyForIdentifer:(id)arg0 key:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(CGFloat)arg3 ;
-(void)updateCachedStateForIdentifier:(id)arg0 stateNumber:(id)arg1 ;
-(void)updateRemoteBrowsing:(BOOL)arg0 shouldScan:(BOOL)arg1 ;
-(void)updateStateForIdentifier:(id)arg0 stateNumber:(id)arg1 ;


@end


#endif