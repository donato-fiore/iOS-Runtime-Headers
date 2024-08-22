// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPACCESSORYSERVERBROWSERWIPROXBTLE_H
#define HAPACCESSORYSERVERBROWSERWIPROXBTLE_H

@class HMFObject, NSMutableSet, NSString, NSMapTable, WPHomeKit;
@protocol WPHomeKitDelegate, HMFLogging, HAPAccessoryServerBrowserWiProxBTLEDelegate, OS_dispatch_queue;



@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject <WPHomeKitDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_trackedPeripherals;
    NSMutableSet *_trackedIdentifiers;
}


@property (nonatomic) NSInteger currentScanState; // ivar: _currentScanState
@property (nonatomic) NSInteger currentScanType; // ivar: _currentScanType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HAPAccessoryServerBrowserWiProxBTLEDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) NSMapTable *reachabilityScanTuples; // ivar: _reachabilityScanTuples
@property (nonatomic) unsigned char routeMode; // ivar: _routeMode
@property (nonatomic) BOOL scanInBackground; // ivar: _scanInBackground
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, nonatomic) WPHomeKit *wpHomeKit; // ivar: _wpHomeKit


+(id)logCategory;
-(BOOL)removeTrackedPeripheralWithStableIdentifier:(id)arg0 ;
-(NSUInteger)_getLinkQuality:(id)arg0 ;
-(id)_lock_trackedPeripheralWithIdentifier:(id)arg0 ;
-(id)_parseAdvertisementData:(id)arg0 forPeripheral:(id)arg1 RSSI:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)logIdentifier;
-(id)trackedIdentifiers;
-(id)trackedPeripheralForIdentifier:(id)arg0 ;
-(id)trackedPeripheralWithIdentifier:(id)arg0 ;
-(id)trackedPeripherals;
-(void)_probeReachabilityForTrackedAccessories;
-(void)_removeTrackedPeripheral:(id)arg0 ;
-(void)_reportHAPPeripheral:(id)arg0 ;
-(void)_startBrowsingForHAPBLEAccessories;
-(void)_startScanningWithScanType:(NSInteger)arg0 ;
-(void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg0 restartScan:(BOOL)arg1 ;
-(void)_stopBrowsingForHAPBLEAccessories:(BOOL)arg0 ;
-(void)_stopScanning;
-(void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg0 ;
-(void)homeKit:(id)arg0 failedToStartScanningWithError:(id)arg1 ;
-(void)homeKit:(id)arg0 foundDevice:(id)arg1 withData:(id)arg2 ;
-(void)homeKit:(id)arg0 foundDevice:(id)arg1 withData:(id)arg2 RSSI:(id)arg3 ;
-(void)homeKit:(id)arg0 foundDevice:(id)arg1 withData:(id)arg2 RSSI:(id)arg3 type:(NSInteger)arg4 ;
-(void)homeKitDidUpdateState:(id)arg0 ;
-(void)homeKitStartedScanning:(id)arg0 ;
-(void)homeKitStoppedScanning:(id)arg0 ;
-(void)pauseScans;
-(void)probeReachabilityForTrackedAccessoriesWithScanTuples:(id)arg0 ;
-(void)resetLastSeenForTrackedAccessories:(id)arg0 ;
-(void)restartScans;
-(void)retrieveStateForTrackedAccessoryWithIdentifier:(id)arg0 stateNumber:(*id)arg1 isReachable:(*BOOL)arg2 linkQuality:(*NSUInteger)arg3 lastSeen:(*id)arg4 ;
-(void)startBrowsingForHAPBLEAccessories;
-(void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg0 ;
-(void)stopBrowsingForHAPBLEAccessories:(BOOL)arg0 ;
-(void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg0 ;
-(void)updateStateForIdentifier:(id)arg0 stateNumber:(id)arg1 ;


@end


#endif