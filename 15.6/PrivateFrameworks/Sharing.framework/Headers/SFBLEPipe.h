// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFBLEPIPE_H
#define SFBLEPIPE_H

@class CBCentralManager, NSMutableData, NSData, NSMutableArray, CBScalablePipe, CBScalablePipeManager, NSMutableDictionary, NSDate, NSString;
@protocol CBCentralManagerDelegate, CBScalablePipeManagerDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFBLEData.h"

@interface SFBLEPipe : NSObject <CBCentralManagerDelegate, CBScalablePipeManagerDelegate>

 {
    BOOL _activateCalled;
    CBCentralManager *_btCentral;
    *channel _btChannel;
    BOOL _btConnected;
    BOOL _btConnecting;
    BOOL _btEndpointRegistering;
    BOOL _btEndpointRegistered;
    int _btFD;
    unsigned char _btReadHeader;
    NSMutableData *_btReadPayload;
    NSUInteger _btReadLen;
    NSUInteger _btReadOffset;
    *channel_ring_desc _btReadRing;
    NSObject<OS_dispatch_source> *_btReadSource;
    NSData *_btWriteData;
    SFBLEData *_btWriteItem;
    NSUInteger _btWriteLen;
    NSUInteger _btWriteOffset;
    char * _btWritePtr;
    NSMutableArray *_btWriteQueue;
    *channel_ring_desc _btWriteRing;
    NSObject<OS_dispatch_source> *_btWriteSource;
    BOOL _btWriteSuspended;
    CBScalablePipe *_btPipe;
    NSInteger _btPipePriority;
    CBScalablePipeManager *_btPipeManager;
    NSMutableDictionary *_frameHandlers;
    BOOL _invalidateCalled;
    NSDate *_lastDisconnectDate;
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *bluetoothStateChangedHandler; // ivar: _bluetoothStateChangedHandler
@property (readonly, nonatomic) NSInteger connectionState;
@property (copy, nonatomic) id *connectionStateChangedHandler; // ivar: _connectionStateChangedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *frameHandler; // ivar: _frameHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL manualConnect; // ivar: _manualConnect
@property (readonly) Class superclass;


-(id)_defaultPairedDeviceBluetoothIdentifier;
-(id)getPeerUUID;
-(id)init;
-(id)initWithPriority:(NSInteger)arg0 ;
-(void)_activate;
-(void)_frameHandler:(unsigned char)arg0 data:(id)arg1 ;
-(void)_invalidate;
-(void)_readHandler;
-(void)_sendFrameType:(unsigned char)arg0 payload:(id)arg1 completion:(id)arg2 ;
-(void)_setupIfNeeded;
-(void)_setupPipe:(id)arg0 ;
-(void)_tearDownPipe;
-(void)_writeHandler;
-(void)activate;
-(void)addFrameHandlerForType:(unsigned char)arg0 handler:(id)arg1 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didDisconnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeFrameHandlerForType:(unsigned char)arg0 ;
-(void)scalablePipeManager:(id)arg0 didRegisterEndpoint:(id)arg1 error:(id)arg2 ;
-(void)scalablePipeManager:(id)arg0 didUnregisterEndpoint:(id)arg1 ;
-(void)scalablePipeManager:(id)arg0 pipeDidConnect:(id)arg1 ;
-(void)scalablePipeManager:(id)arg0 pipeDidDisconnect:(id)arg1 error:(id)arg2 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg0 ;
-(void)sendFrameType:(unsigned char)arg0 payload:(id)arg1 completion:(id)arg2 ;
-(void)sendFrameTypeDirect:(unsigned char)arg0 payload:(id)arg1 completion:(id)arg2 ;


@end


#endif