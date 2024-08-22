// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBCENTRALMANAGER_H
#define CBCENTRALMANAGER_H

@class NSMutableArray, NSMapTable;
@protocol CBCentralManagerDelegate;


#import "CBManager.h"

@interface CBCentralManager : CBManager {
    ? _delegateFlags;
    BOOL _observingKeyPaths;
}


@property (weak, nonatomic) NSObject<CBCentralManagerDelegate> *delegate; // ivar: _delegate
@property (retain) NSMutableArray *discoveredPeripherals; // ivar: _discoveredPeripherals
@property (nonatomic) BOOL isScanning; // ivar: _isScanning
@property (readonly, retain, nonatomic) NSMapTable *peripherals; // ivar: _peripherals


+(BOOL)supportsFeatures:(NSUInteger)arg0 ;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg0 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg0 ;
-(id)createPeripheralWithAddress:(id)arg0 andIdentifier:(id)arg1 ;
-(id)dataArrayToUUIDArray:(id)arg0 ;
-(id)getLPEMData:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 options:(id)arg2 ;
-(id)isApplicationConnectedToAnyPeripherals:(id)arg0 ;
-(id)peerWithInfo:(id)arg0 ;
-(id)peripheralWithIdentifier:(id)arg0 ;
-(id)peripheralWithInfo:(id)arg0 ;
-(id)retrieveAddressForPeripheral:(id)arg0 ;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg0 ;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg0 allowAll:(BOOL)arg1 ;
-(id)retrieveConnectingPeripherals;
-(id)retrievePairingInfoForPeripheral:(id)arg0 ;
-(id)retrievePeripheralWithAddress:(id)arg0 ;
-(id)retrievePeripheralsWithIdentifiers:(id)arg0 ;
-(id)retrieveState;
-(id)retrieveWhbCBPeripheralWithInfo:(id)arg0 ;
-(id)startConnectionEventCounterForPeripheral:(id)arg0 ;
-(id)stopConnectionEventCounterForPeripheral:(id)arg0 ;
-(unsigned short)getRemainingAdvancedMatchingRule;
-(unsigned short)getTotalSupportedAdvancedMatchingRules;
-(unsigned short)retrieveMaxConnectionForUsecase:(NSInteger)arg0 ;
-(void)HandleControllerBTClockUpdateMsg:(id)arg0 ;
-(void)HandleRssiDetectionUpdateMsg:(id)arg0 ;
-(void)addAdvancedMatchingRule:(id)arg0 ;
-(void)addIRKwithBTAddress:(id)arg0 irk:(id)arg1 ;
-(void)cancelPeripheralConnection:(id)arg0 ;
-(void)cancelPeripheralConnection:(id)arg0 force:(BOOL)arg1 ;
-(void)cancelPeripheralConnection:(id)arg0 options:(id)arg1 ;
-(void)connectPeripheral:(id)arg0 options:(id)arg1 ;
-(void)createOfflineLEPairing:(unsigned short)arg0 ;
-(void)dealloc;
-(void)deleteDevice:(id)arg0 ;
-(void)enablePrivateModeForPeripheral:(id)arg0 forDuration:(unsigned short)arg1 ;
-(void)enablePrivateModeForSessionWithIdentifier:(id)arg0 forDuration:(unsigned short)arg1 ;
-(void)forEachPeripheral:(id)arg0 ;
-(void)handleAdvertisingAddressChanged:(id)arg0 ;
-(void)handleAncsAuthChanged:(id)arg0 ;
-(void)handleApplicationActivityEvent:(id)arg0 ;
-(void)handleApplicationConnectionEventDidOccur:(id)arg0 ;
-(void)handleConnectionParametersUpdated:(id)arg0 ;
-(void)handleDidReceiveDataFromPeripheral:(id)arg0 ;
-(void)handleDidSendBytesToPeripheralwithError:(id)arg0 ;
-(void)handleMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)handlePeerMTUChanged:(id)arg0 ;
-(void)handlePeripheralCLReady:(id)arg0 ;
-(void)handlePeripheralConnectionCompleted:(id)arg0 ;
-(void)handlePeripheralConnectionStateUpdated:(id)arg0 ;
-(void)handlePeripheralDisconnectionCompleted:(id)arg0 ;
-(void)handlePeripheralDiscovered:(id)arg0 ;
-(void)handlePeripheralTrackingUpdated:(id)arg0 ;
-(void)handleReadyForUpdates:(id)arg0 ;
-(void)handleRestoringState:(id)arg0 ;
-(void)handleScanFailedToStartWithError:(id)arg0 ;
-(void)handleSupportedFeatures:(id)arg0 ;
-(void)handleZoneLost:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)orphanPeripherals;
-(void)pauseLeConnectionManager;
-(void)pauseScans;
-(void)randomizeAFHMapForPeripheral:(id)arg0 ;
-(void)registerForConnectionEventsWithOptions:(id)arg0 ;
-(void)removeAdvancedMatchingRule:(id)arg0 ;
-(void)removeIRKwithBTAddress:(id)arg0 ;
-(void)removeMultipleEntriesDuplicateFilter:(id)arg0 ;
-(void)removeSingleEntryDuplicateFilter:(id)arg0 ;
-(void)resumeLeConnectionManager;
-(void)resumeScans;
-(void)retrieveConnectedPeripherals;
-(void)retrieveConnectedPeripheralsWithServices:(id)arg0 completion:(id)arg1 ;
-(void)retrievePeripherals:(id)arg0 ;
-(void)retrievePeripheralsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)scanForPeripheralsWithServices:(id)arg0 options:(id)arg1 ;
-(void)sendData:(id)arg0 toPeripheral:(id)arg1 ;
-(void)setConnectionEventOptions:(id)arg0 ;
-(void)setDataLengthChange:(id)arg0 options:(id)arg1 ;
-(void)setDesiredConnectionLatency:(NSInteger)arg0 forPeripheral:(id)arg1 ;
-(void)setEnhancedScanEnable:(id)arg0 ;
-(void)setEnhancedSetScanParamtersMultiCore:(id)arg0 ;
-(void)setLESetPhy:(id)arg0 options:(id)arg1 ;
-(void)setLeAFHMap:(id)arg0 ;
-(void)setMatchActionRules:(id)arg0 ;
-(void)setRSSIStatisticsDetection:(id)arg0 options:(id)arg1 ;
-(void)startTrackingPeripheral:(id)arg0 options:(id)arg1 ;
-(void)stopScan;
-(void)stopTrackingPeripheral:(id)arg0 options:(id)arg1 ;
-(void)wipeDuplicateFilterList:(id)arg0 ;


@end


#endif