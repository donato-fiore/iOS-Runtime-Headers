// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLUETOOTHBRIDGE_H
#define BLUETOOTHBRIDGE_H

@class SFDeviceDiscovery;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BluetoothBridge : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *connectedSemaphore; // ivar: _connectedSemaphore
@property (retain) SFDeviceDiscovery *deviceDiscovery; // ivar: _deviceDiscovery
@property (retain) NSObject<OS_dispatch_semaphore> *disconnectedSemaphore; // ivar: _disconnectedSemaphore
@property (nonatomic) *OpaqueFigEndpointManager manager; // ivar: _manager
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property *BTSessionImpl session; // ivar: _session
@property BOOL targetUserSession; // ivar: _targetUserSession


+(id)sharedBluetoothBridge;
-(BOOL)isAppleAudioDevice:(struct BTDeviceImpl *)arg0 ;
-(BOOL)isAudioDevice:(struct BTDeviceImpl *)arg0 ;
-(BOOL)isConnected:(struct BTDeviceImpl *)arg0 ;
-(BOOL)isHALPublished:(unsigned char)arg0 device:(struct BTDeviceImpl *)arg1 ;
-(BOOL)isPaired:(struct BTDeviceImpl *)arg0 ;
-(id)addressFromDevice:(struct BTDeviceImpl *)arg0 ;
-(id)init;
-(id)nameFromDevice:(struct BTDeviceImpl *)arg0 ;
-(struct BTDeviceImpl *)deviceFromAddress:(id)arg0 ;
-(struct BTDeviceImpl *)deviceFromAddressString:(id)arg0 ;
-(struct __CFDictionary *)createDescriptionWithDevice:(struct BTDeviceImpl *)arg0 ;
-(unsigned char)supportedFormats:(struct BTDeviceImpl *)arg0 ;
-(void)addListeners;
-(void)connectToAddress:(id)arg0 completionHandler:(id)arg1 ;
-(void)descriptionAddNearby:(struct __CFDictionary *)arg0 nearby:(BOOL)arg1 batterySingle:(CGFloat)arg2 batteryLeft:(CGFloat)arg3 batteryRight:(CGFloat)arg4 batteryCase:(CGFloat)arg5 ;
-(void)deviceConnected:(struct BTDeviceImpl *)arg0 ;
-(void)deviceDisconnected:(struct BTDeviceImpl *)arg0 ;
-(void)deviceSettingChanged:(id)arg0 ;
-(void)disconnectFromAddress:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeListeners;
-(void)setListeningModeForDevice:(id)arg0 listeningMode:(unsigned int)arg1 ;
-(void)setSpatialAudioAllowed:(id)arg0 enable:(BOOL)arg1 ;
-(void)setSpatialAudioMode:(id)arg0 mode:(unsigned char)arg1 ;
-(void)startLEScanning:(BOOL)arg0 ;
-(void)stopLEScanning;


@end


#endif