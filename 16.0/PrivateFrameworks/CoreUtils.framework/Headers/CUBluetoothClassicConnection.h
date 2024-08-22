// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUBLUETOOTHCLASSICCONNECTION_H
#define CUBLUETOOTHCLASSICCONNECTION_H

@class NSMutableArray, NSString, CBL2CAPChannel;
@protocol CUReadWriteRequestable, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUReadRequest.h"
#import "CUWriteRequest.h"

@interface CUBluetoothClassicConnection : NSObject <CUReadWriteRequestable>

 {
    id *_activateCompletion;
    BOOL _btConnected;
    char _btDeviceAddrStr;
    *BTSessionImpl _btSession;
    BOOL _btSessionAttaching;
    BOOL _btSessionNeeded;
    BOOL _btSessionStarted;
    BOOL _btServiceAddCallbacks;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    *LogCategory _ucat;
}


@property (nonatomic) unsigned int connectionFlags; // ivar: _connectionFlags
@property (copy, nonatomic) NSString *destinationPeer; // ivar: _destinationPeer
@property (copy, nonatomic) NSString *destinationService; // ivar: _destinationService
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) CBL2CAPChannel *l2capChannel; // ivar: _l2capChannel
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int requiredServices; // ivar: _requiredServices
@property (copy, nonatomic) id *serverInvalidationHandler; // ivar: _serverInvalidationHandler


-(BOOL)_prepareWriteRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_processReadStatus;
-(BOOL)_runBTSessionStart;
-(BOOL)_runConnectStart;
-(BOOL)_runOpenChannelStart;
-(BOOL)_runSetupChannel;
-(BOOL)_setupIOAndReturnError:(*id)arg0 ;
-(BOOL)_startConnectingAndReturnError:(*id)arg0 ;
-(BOOL)activateDirectAndReturnError:(*id)arg0 ;
-(id)init;
-(struct BTDeviceImpl *)_btDeviceWithID:(id)arg0 error:(*id)arg1 ;
-(void)_abortReadsWithError:(id)arg0 ;
-(void)_abortWritesWithError:(id)arg0 ;
-(void)_btEnsureStopped;
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
-(void)dealloc;
-(void)invalidate;
-(void)readWithRequest:(id)arg0 ;
-(void)writeEndOfDataWithCompletion:(id)arg0 ;
-(void)writeWithRequest:(id)arg0 ;


@end


#endif