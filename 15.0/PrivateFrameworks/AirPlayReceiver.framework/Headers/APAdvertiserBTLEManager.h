// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APADVERTISERBTLEMANAGER_H
#define APADVERTISERBTLEMANAGER_H

@class WPAirPlaySolo, NSString, NSMutableDictionary;
@protocol WPAirPlaySoloDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APAdvertiserBTLEManager : NSObject <WPAirPlaySoloDelegate>

 {
    ? _advertisementData;
    unsigned short _btleMode;
    BOOL _isP2PAllowed;
    BOOL _p2pSolo;
    BOOL _p2pSoloQueried;
    NSObject<OS_dispatch_source> *_p2pSoloQueryTimer;
}


@property (retain, nonatomic) WPAirPlaySolo *btleServer; // ivar: _btleServer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *void eventHandlerContext; // ivar: _eventHandlerContext
@property (nonatomic) *unk eventHandlerFunc; // ivar: _eventHandlerFunc
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (nonatomic) BOOL isAdvertising; // ivar: _isAdvertising
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isScanning; // ivar: _isScanning
@property (nonatomic) *OpaqueAPAdvertiserBTLEManager managerRef; // ivar: _managerRef
@property (nonatomic) *__SCDynamicStore scStore; // ivar: _scStore
@property (nonatomic) unsigned char seed; // ivar: _seed
@property (retain, nonatomic) NSMutableDictionary *soloDevices; // ivar: _soloDevices
@property (nonatomic) NSObject<OS_dispatch_source> *staleDevicesTimer; // ivar: _staleDevicesTimer
@property (readonly) Class superclass;
@property (nonatomic) int touchSetupActiveNotifyToken; // ivar: _touchSetupActiveNotifyToken


-(id)init;
-(id)stringForBTLEMode:(unsigned short)arg0 ;
-(int)getBTLEMode:(*unsigned short)arg0 ;
-(int)setBTLEMode:(unsigned short)arg0 ;
-(int)setIsP2PAllowed:(BOOL)arg0 ;
-(int)setProperty:(id)arg0 withValue:(id)arg1 ;
-(int)showDebugWithDataBuffer:(struct ? *)arg0 verbose:(BOOL)arg1 ;
-(int)start;
-(int)startListeningForNetworkChanges;
-(int)startP2PSoloQueryTimer;
-(int)startStaleDeviceTimer;
-(int)stop;
-(int)stopListeningForNetworkChanges;
-(int)supportsSolo:(*BOOL)arg0 ;
-(int)update;
-(int)updatePreferences;
-(int)updateSupportsSoloAndForceReadFromPrefs:(BOOL)arg0 ;
-(void)airPlaySolo:(id)arg0 failedToStartAdvertisingWithError:(id)arg1 ;
-(void)airPlaySolo:(id)arg0 failedToStartScanningWithError:(id)arg1 ;
-(void)airPlaySolo:(id)arg0 foundDevice:(id)arg1 withData:(id)arg2 ;
-(void)airPlaySoloDidUpdateState:(id)arg0 ;
-(void)airPlaySoloStartedAdvertising:(id)arg0 ;
-(void)airPlaySoloStartedScanning:(id)arg0 ;
-(void)airPlaySoloStoppedAdvertising:(id)arg0 ;
-(void)airPlaySoloStoppedScanning:(id)arg0 ;
-(void)dealloc;
-(void)dispatchEvent:(unsigned int)arg0 ;
-(void)handleP2PSoloQueryTimerCancelled;
-(void)handleP2PSoloQueryTimerFired;
-(void)invalidate;
-(void)startAdvertising;
-(void)startScanning;
-(void)stopAdvertising;
-(void)stopScanning;
-(void)updateAdvertisementData;


@end


#endif