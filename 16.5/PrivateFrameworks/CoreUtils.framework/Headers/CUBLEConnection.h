// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUBLECONNECTION_H
#define CUBLECONNECTION_H

@class CBCentralManager, CBPeripheral, NSMutableArray, NSString, NSUUID, CBL2CAPChannel;
@protocol CBCentralManagerDelegate, CBPeripheralDelegate, CUReadWriteRequestable, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUReadRequest.h"
#import "CUWriteRequest.h"

@interface CUBLEConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CUReadWriteRequestable>

 {
    id *_activateCompletion;
    CBCentralManager *_centralManager;
    BOOL _guardConnected;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CBPeripheral *_peripheral;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    *LogCategory _ucat;
}


@property (copy, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (nonatomic) NSInteger clientUseCase; // ivar: _clientUseCase
@property (nonatomic) int connectionLatency; // ivar: _connectionLatency
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short destinationPSM; // ivar: _destinationPSM
@property (copy, nonatomic) NSUUID *destinationUUID; // ivar: _destinationUUID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) CBL2CAPChannel *l2capChannel; // ivar: _l2capChannel
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *serverInvalidationHandler; // ivar: _serverInvalidationHandler
@property (readonly) Class superclass;


-(BOOL)_prepareWriteRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_processReadStatus;
-(BOOL)_runConnectStart;
-(BOOL)_runSetupChannel;
-(BOOL)_setupIOAndReturnError:(*id)arg0 ;
-(BOOL)_startConnectingAndReturnError:(*id)arg0 ;
-(BOOL)activateDirectAndReturnError:(*id)arg0 ;
-(id)init;
-(void)_abortReadsWithError:(id)arg0 ;
-(void)_abortWritesWithError:(id)arg0 ;
-(void)_completeReadRequest:(id)arg0 error:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg0 error:(id)arg1 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_prepareReadRequest:(id)arg0 ;
-(void)_processReads:(BOOL)arg0 ;
-(void)_processWrites;
-(void)_reportError:(id)arg0 ;
-(void)_run;
-(void)activateWithCompletion:(id)arg0 ;
-(void)centralManager:(id)arg0 didConnectPeripheral:(id)arg1 ;
-(void)centralManager:(id)arg0 didFailToConnectPeripheral:(id)arg1 error:(id)arg2 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)peripheral:(id)arg0 didOpenL2CAPChannel:(id)arg1 error:(id)arg2 ;
-(void)readWithRequest:(id)arg0 ;
-(void)writeEndOfDataWithCompletion:(id)arg0 ;
-(void)writeWithRequest:(id)arg0 ;


@end


#endif