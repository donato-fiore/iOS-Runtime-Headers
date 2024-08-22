// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUBLUETOOTHSCALABLEPIPE_H
#define CUBLUETOOTHSCALABLEPIPE_H

@class CBScalablePipe, CBScalablePipeManager, NSMutableArray, NSString, NSUUID;
@protocol CBScalablePipeManagerDelegate, CUReadWriteRequestable, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUReadRequest.h"
#import "CUWriteRequest.h"

@interface CUBluetoothScalablePipe : NSObject <CBScalablePipeManagerDelegate, CUReadWriteRequestable>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    *channel _btChannel;
    BOOL _btEndpointRegistering;
    BOOL _btEndpointRegistered;
    int _btPeerHostState;
    BOOL _btPeerKVORegistered;
    CBScalablePipe *_btPipe;
    CBScalablePipeManager *_btPipeManager;
    *channel_ring_desc _btReadRing;
    char * _btReadLeftoverBuf;
    NSUInteger _btReadLeftoverMaxLen;
    char * _btReadLeftoverPtr;
    char * _btReadLeftoverEnd;
    *channel_ring_desc _btWriteRing;
    int _channelFD;
    CUReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readSuspended;
    CUWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeSuspended;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) int peerHostState; // ivar: _peerHostState
@property (copy, nonatomic) id *peerHostStateChangedHandler; // ivar: _peerHostStateChangedHandler
@property (copy, nonatomic) NSUUID *peerIdentifier; // ivar: _peerIdentifier
@property (nonatomic) int priority; // ivar: _priority
@property (readonly, nonatomic) int state; // ivar: _state
@property (copy, nonatomic) id *stateChangedHandler; // ivar: _stateChangedHandler
@property (readonly) Class superclass;


-(BOOL)_prepareWriteRequest:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_writeBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)init;
-(int)_readBytes:(char *)arg0 minLen:(NSUInteger)arg1 maxLen:(NSUInteger)arg2 offset:(*NSUInteger)arg3 ;
-(int)_writeIOArray:(struct iovec **)arg0 ioCount:(*int)arg1 ;
-(void)_abortReadsWithError:(id)arg0 ;
-(void)_abortWritesWithError:(id)arg0 ;
-(void)_completeReadRequest:(id)arg0 error:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg0 error:(id)arg1 ;
-(void)_ensureStarted;
-(void)_ensureStopped:(id)arg0 ;
-(void)_handleBTPeerHostStateChanged;
-(void)_invalidate;
-(void)_prepareReadRequest:(id)arg0 ;
-(void)_processReads;
-(void)_processWrites;
-(void)_setupPipe;
-(void)_tearDownPipe;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)readWithRequest:(id)arg0 ;
-(void)scalablePipeManager:(id)arg0 didRegisterEndpoint:(id)arg1 error:(id)arg2 ;
-(void)scalablePipeManager:(id)arg0 didUnregisterEndpoint:(id)arg1 ;
-(void)scalablePipeManager:(id)arg0 pipeDidConnect:(id)arg1 ;
-(void)scalablePipeManager:(id)arg0 pipeDidDisconnect:(id)arg1 error:(id)arg2 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg0 ;
-(void)writeWithRequest:(id)arg0 ;


@end


#endif