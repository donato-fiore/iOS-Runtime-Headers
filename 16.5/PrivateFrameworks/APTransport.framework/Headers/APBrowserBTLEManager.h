// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APBROWSERBTLEMANAGER_H
#define APBROWSERBTLEMANAGER_H

@class CBAdvertiser, NSMutableDictionary, CBDiscovery;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APBrowserBTLEManager : NSObject {
    unsigned short _btleMode;
    BOOL _p2pSoloSupported;
    BOOL _p2pSoloSupportedIsSet;
}


@property (nonatomic) BOOL browseForAltReceiver; // ivar: _browseForAltReceiver
@property (retain, nonatomic) CBAdvertiser *btleAdvertiser; // ivar: _btleAdvertiser
@property (nonatomic) int btleAdvertiserSeed; // ivar: _btleAdvertiserSeed
@property (retain, nonatomic) NSMutableDictionary *btleDevices; // ivar: _btleDevices
@property (retain, nonatomic) CBDiscovery *btleDiscoverer; // ivar: _btleDiscoverer
@property (nonatomic) int btleDiscovererSeed; // ivar: _btleDiscovererSeed
@property (nonatomic) *void btleDiscoveryManagerToken; // ivar: _btleDiscoveryManagerToken
@property (nonatomic) *void eventHandlerContext; // ivar: _eventHandlerContext
@property (nonatomic) *unk eventHandlerFunc; // ivar: _eventHandlerFunc
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (nonatomic) BOOL isAdvertising; // ivar: _isAdvertising
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isInvalidated; // ivar: _isInvalidated
@property (nonatomic) BOOL isScanning; // ivar: _isScanning
@property (nonatomic) BOOL isSoloBeaconDisabled; // ivar: _isSoloBeaconDisabled
@property (nonatomic) *OpaqueAPBrowserBTLEManager managerRef; // ivar: _managerRef
@property (nonatomic) BOOL preferencesUpdated; // ivar: _preferencesUpdated
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)stringForBTLEMode:(unsigned short)arg0 ;
+(id)stringForBTLEState:(NSInteger)arg0 ;
+(int)createEventInfoDictionary:(*id)arg0 withDeviceID:(id)arg1 IPAddress:(id)arg2 port:(id)arg3 supportsSolo:(id)arg4 rssi:(id)arg5 ;
-(BOOL)shouldAdvertiseSourcePresence;
-(NSInteger)btleManagerState;
-(NSUInteger)nearbySoloDevicesCount;
-(id)createBTLEAdvertiser;
-(id)createBTLEDiscoverer;
-(id)init;
-(int)copyShowInfo:(*id)arg0 verbose:(BOOL)arg1 ;
-(int)dispatchEvent:(unsigned int)arg0 withEventInfo:(id)arg1 ;
-(int)ensureAdvertisingStarted;
-(int)ensureAdvertisingStopped;
-(int)ensureAdvertisingStoppedWithSeed:(int)arg0 ;
-(int)ensurePreferencesUpdatedWithShouldForce:(BOOL)arg0 ;
-(int)ensureScanningStarted;
-(int)ensureScanningStopped;
-(int)ensureScanningStoppedWithSeed:(int)arg0 ;
-(int)getBTLEMode:(*unsigned short)arg0 ;
-(int)handleFoundDevice:(id)arg0 ;
-(int)handleLostDevice:(id)arg0 ;
-(int)invalidate;
-(int)setBTLEMode:(unsigned short)arg0 ;
-(int)setEventHandler:(*unk)arg0 context:(*void)arg1 managerRef:(struct OpaqueAPBrowserBTLEManager *)arg2 ;
-(int)setSupportsSolo:(BOOL)arg0 ;
-(int)startMode:(unsigned short)arg0 ;
-(int)stop;
-(int)update;
-(void)dealloc;


@end


#endif