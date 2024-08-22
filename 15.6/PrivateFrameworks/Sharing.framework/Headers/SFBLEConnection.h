// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFBLECONNECTION_H
#define SFBLECONNECTION_H

@class NSMutableSet, CURetrier, NSMutableArray, WPNearby, NSString;
@protocol WPNearbyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFBLEData.h"
#import "SFBLEDevice.h"

@interface SFBLEConnection : NSObject <WPNearbyDelegate>

 {
    BOOL _activateCalled;
    NSMutableSet *_clients;
    BOOL _connected;
    BOOL _connecting;
    CGFloat _connectStartTime;
    CURetrier *_connectRetrier;
    SFBLEData *_currentData;
    NSMutableArray *_dataSendQueue;
    BOOL _invalidateCalled;
    WPNearby *_wpNearby;
    *LogCategory _ucat;
}


@property (nonatomic) BOOL acceptor; // ivar: _acceptor
@property (nonatomic) BOOL bleEncrypted; // ivar: _bleEncrypted
@property (copy, nonatomic) id *bluetoothBandwidthChangedHandler; // ivar: _bluetoothBandwidthChangedHandler
@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (readonly, nonatomic) NSInteger connectionState;
@property (copy, nonatomic) id *connectionStateChangedHandler; // ivar: _connectionStateChangedHandler
@property (copy, nonatomic) id *dataHandler; // ivar: _dataHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL latencyCritical; // ivar: _latencyCritical
@property (nonatomic) BOOL lePipeCapable; // ivar: _lePipeCapable
@property (retain, nonatomic) SFBLEDevice *peerDevice; // ivar: _peerDevice
@property (nonatomic) unsigned int sessionFlags; // ivar: _sessionFlags
@property (readonly) Class superclass;


-(BOOL)removeClient:(id)arg0 ;
-(id)initWithDevice:(id)arg0 acceptor:(BOOL)arg1 ;
-(void)_activate;
-(void)_cleanupQueuedData:(int)arg0 ;
-(void)_connectIfNeeded;
-(void)_invalidate;
-(void)_processQueuedData;
-(void)activate;
-(void)activateDirect;
-(void)addClient:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)nearby:(id)arg0 didConnectToPeer:(id)arg1 transport:(NSInteger)arg2 error:(id)arg3 ;
-(void)nearby:(id)arg0 didDisconnectFromPeer:(id)arg1 error:(id)arg2 ;
-(void)nearby:(id)arg0 didReceiveData:(id)arg1 fromPeer:(id)arg2 ;
-(void)nearby:(id)arg0 didSendData:(id)arg1 toPeer:(id)arg2 error:(id)arg3 ;
-(void)nearbyDidChangeBluetoothBandwidthState:(id)arg0 ;
-(void)nearbyDidUpdateState:(id)arg0 ;
-(void)sendData:(id)arg0 completion:(id)arg1 ;
-(void)sendDataDirect:(id)arg0 completion:(id)arg1 ;


@end


#endif