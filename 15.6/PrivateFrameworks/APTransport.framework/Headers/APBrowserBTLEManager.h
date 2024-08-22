// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APBROWSERBTLEMANAGER_H
#define APBROWSERBTLEMANAGER_H

@class NSMutableDictionary, CBDiscovery, NSString;
@protocol APBluetoothClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "APBluetoothClient.h"

@interface APBrowserBTLEManager : NSObject <APBluetoothClientDelegate>

 {
    unsigned short _btleMode;
    BOOL _p2pSoloSupported;
    BOOL _p2pSoloSupportedIsSet;
}


@property (retain, nonatomic) APBluetoothClient *btleClient; // ivar: _btleClient
@property (retain, nonatomic) NSMutableDictionary *btleDevices; // ivar: _btleDevices
@property (retain, nonatomic) CBDiscovery *btleDiscoverer; // ivar: _btleDiscoverer
@property (nonatomic) int btleDiscovererSeed; // ivar: _btleDiscovererSeed
@property (nonatomic) *void btleDiscoveryManagerToken; // ivar: _btleDiscoveryManagerToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *void eventHandlerContext; // ivar: _eventHandlerContext
@property (nonatomic) *unk eventHandlerFunc; // ivar: _eventHandlerFunc
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAdvertising; // ivar: _isAdvertising
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isInvalidated; // ivar: _isInvalidated
@property (nonatomic) BOOL isScanning; // ivar: _isScanning
@property (nonatomic) BOOL isSoloBeaconDisabled; // ivar: _isSoloBeaconDisabled
@property (nonatomic) *OpaqueAPBrowserBTLEManager managerRef; // ivar: _managerRef
@property (nonatomic) BOOL preferencesUpdated; // ivar: _preferencesUpdated
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)stringForBTLEMode:(unsigned short)arg0 ;
+(int)createEventInfoDictionary:(*id)arg0 withDeviceID:(id)arg1 IPAddress:(id)arg2 port:(id)arg3 supportsSolo:(id)arg4 rssi:(id)arg5 ;
-(BOOL)shouldAdvertiseSourcePresence;
-(NSUInteger)nearbySoloDevicesCount;
-(id)createBTLEDiscoverer;
-(id)init;
-(int)copyShowInfo:(*id)arg0 verbose:(BOOL)arg1 ;
-(int)dispatchEvent:(unsigned int)arg0 withEventInfo:(id)arg1 ;
-(int)ensureAdvertisingStarted;
-(int)ensureAdvertisingStopped;
-(int)ensureBTLEClientInitialized;
-(int)ensurePreferencesUpdatedWithShouldForce:(BOOL)arg0 ;
-(int)ensureScanningStarted;
-(int)ensureScanningStopped;
-(int)ensureScanningStoppedWithSeed:(int)arg0 ;
-(int)getBTLEMode:(*unsigned short)arg0 ;
-(int)handleFoundDevice:(id)arg0 withAdvertisementData:(struct ? *)arg1 rssi:(int)arg2 ;
-(int)handleLostDevice:(id)arg0 ;
-(int)invalidate;
-(int)setBTLEMode:(unsigned short)arg0 ;
-(int)setEventHandler:(*unk)arg0 context:(*void)arg1 managerRef:(struct OpaqueAPBrowserBTLEManager *)arg2 ;
-(int)setSupportsSolo:(BOOL)arg0 ;
-(int)startMode:(unsigned short)arg0 ;
-(int)stop;
-(int)update;
-(void)airPlaySolo:(id)arg0 failedToStartAdvertisingWithError:(id)arg1 ;
-(void)airPlaySolo:(id)arg0 failedToStartScanningWithError:(id)arg1 ;
-(void)airPlaySolo:(id)arg0 foundDevice:(id)arg1 withData:(id)arg2 ;
-(void)airPlaySoloDidUpdateState:(id)arg0 ;
-(void)airPlaySoloStartedAdvertising:(id)arg0 ;
-(void)airPlaySoloStartedScanning:(id)arg0 ;
-(void)airPlaySoloStoppedAdvertising:(id)arg0 ;
-(void)airPlaySoloStoppedScanning:(id)arg0 ;
-(void)dealloc;
-(void)foundDevice:(id)arg0 ;


@end


#endif