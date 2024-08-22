// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APADVERTISERBTLEMANAGER_H
#define APADVERTISERBTLEMANAGER_H

@class CBAdvertiser, CBDiscovery, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APAdvertiserBTLEManager : NSObject {
    unsigned short _btleMode;
    BOOL _requireAltBrowser;
    BOOL _isP2PAllowed;
    BOOL _p2pSolo;
    BOOL _p2pSoloQueried;
    NSObject<OS_dispatch_source> *_p2pSoloQueryTimer;
}


@property (retain, nonatomic) CBAdvertiser *btleAdvertiser; // ivar: _btleAdvertiser
@property (nonatomic) int btleAdvertiserSeed; // ivar: _btleAdvertiserSeed
@property (retain, nonatomic) CBDiscovery *btleDiscoverer; // ivar: _btleDiscoverer
@property (nonatomic) int btleDiscovererSeed; // ivar: _btleDiscovererSeed
@property (nonatomic) *void eventHandlerContext; // ivar: _eventHandlerContext
@property (nonatomic) *unk eventHandlerFunc; // ivar: _eventHandlerFunc
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (nonatomic) BOOL isAdvertising; // ivar: _isAdvertising
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isScanning; // ivar: _isScanning
@property (nonatomic) NSObject<OS_dispatch_source> *lostLegacyDeviceTimer; // ivar: _lostLegacyDeviceTimer
@property (nonatomic) *OpaqueAPAdvertiserBTLEManager managerRef; // ivar: _managerRef
@property (retain, nonatomic) NSMutableDictionary *pendingLostLegacyDevices; // ivar: _pendingLostLegacyDevices
@property (nonatomic) *__SCDynamicStore scStore; // ivar: _scStore
@property (nonatomic) unsigned char seed; // ivar: _seed
@property (nonatomic) unsigned int soloDeviceFlags; // ivar: _soloDeviceFlags
@property (retain, nonatomic) NSMutableDictionary *soloDevices; // ivar: _soloDevices
@property (nonatomic) int touchSetupActiveNotifyToken; // ivar: _touchSetupActiveNotifyToken


+(id)stringForBTLEMode:(unsigned short)arg0 ;
+(id)stringForBTLEState:(NSInteger)arg0 ;
-(BOOL)canAdvertise;
-(BOOL)shouldScanForSourceWithScreenOff;
-(NSInteger)btleManagerState;
-(id)createBTLEAdvertiser;
-(id)createBTLEDiscoverer;
-(id)init;
-(int)getBTLEMode:(*unsigned short)arg0 ;
-(int)setBTLEMode:(unsigned short)arg0 ;
-(int)setIsP2PAllowed:(BOOL)arg0 ;
-(int)setProperty:(id)arg0 withValue:(id)arg1 ;
-(int)setRequireAltBrowser:(BOOL)arg0 ;
-(int)showDebugWithDataBuffer:(struct ? *)arg0 verbose:(BOOL)arg1 ;
-(int)start;
-(int)startListeningForNetworkChanges;
-(int)startP2PSoloQueryTimer;
-(int)stop;
-(int)stopListeningForNetworkChanges;
-(int)supportsSolo:(*BOOL)arg0 ;
-(int)update;
-(int)updatePreferences;
-(int)updateSupportsSoloAndForceReadFromPrefs:(BOOL)arg0 ;
-(unsigned char)isAcceptableDeviceWithFlags:(unsigned char)arg0 ;
-(void)computeNearbyDeviceTypesAndDispatchEventIfNecessary;
-(void)dealloc;
-(void)dispatchEvent:(unsigned int)arg0 ;
-(void)handleFoundDevice:(id)arg0 ;
-(void)handleLostDevice:(id)arg0 withGoodbye:(BOOL)arg1 ;
-(void)handleP2PSoloQueryTimerCancelled;
-(void)handleP2PSoloQueryTimerFired;
-(void)invalidate;
-(void)removeExpiredDevices;
-(void)removeLostDeviceWithIdentifier:(id)arg0 ;
-(void)restartAdvertisingIfNecessary;
-(void)startAdvertising;
-(void)startScanning;
-(void)stopAdvertising;
-(void)stopAdvertisingWithSeed:(int)arg0 ;
-(void)stopScanning;
-(void)stopScanningWithSeed:(int)arg0 ;
-(void)updateLostLegacyDeviceTimer;


@end


#endif