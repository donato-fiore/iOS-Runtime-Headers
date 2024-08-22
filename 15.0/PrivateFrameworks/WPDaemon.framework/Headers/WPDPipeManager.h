// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPDPIPEMANAGER_H
#define WPDPIPEMANAGER_H

@class NSMutableDictionary, NSString, CBScalablePipeManager;
@protocol CBScalablePipeManagerDelegate, NSStreamDelegate, OS_dispatch_queue;


#import "WPDManager.h"

@interface WPDPipeManager : WPDManager <CBScalablePipeManagerDelegate, NSStreamDelegate>



@property (retain) NSMutableDictionary *connectionInitiators; // ivar: _connectionInitiators
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *endpointsDict; // ivar: _endpointsDict
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *peerPipesDict; // ivar: _peerPipesDict
@property (retain) CBScalablePipeManager *pipeManager; // ivar: _pipeManager
@property (weak) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)sendVersionInfo:(id)arg0 ;
-(NSInteger)writeDataToPipe:(id)arg0 pipe:(id)arg1 ;
-(id)generateStateDumpStrings;
-(id)initWithServer:(id)arg0 ;
-(id)pipeInfo:(id)arg0 forClient:(id)arg1 ;
-(id)pipeManagerState:(NSInteger)arg0 ;
-(id)streamEvent:(NSUInteger)arg0 ;
-(void)channelHasData:(id)arg0 ;
-(void)handleIncomingPipeData:(id)arg0 data:(char *)arg1 dataSize:(NSInteger)arg2 ;
-(void)invalidatePipeInfo:(id)arg0 forPeer:(id)arg1 ;
-(void)receivedAck:(id)arg0 data:(char *)arg1 dataSize:(NSInteger)arg2 ;
-(void)receivedConnectStatus:(id)arg0 data:(char *)arg1 dataSize:(NSInteger)arg2 ;
-(void)receivedError:(id)arg0 data:(char *)arg1 dataSize:(NSInteger)arg2 ;
-(void)receivedPayload:(id)arg0 data:(char *)arg1 dataSize:(NSInteger)arg2 ;
-(void)receivedVersionInfo:(id)arg0 data:(char *)arg1 dataSize:(NSInteger)arg2 ;
-(void)registerEndpoint:(id)arg0 requireAck:(BOOL)arg1 requireEncryption:(BOOL)arg2 forClient:(id)arg3 ;
-(void)scalablePipeManager:(id)arg0 didRegisterEndpoint:(id)arg1 error:(id)arg2 ;
-(void)scalablePipeManager:(id)arg0 didUnregisterEndpoint:(id)arg1 ;
-(void)scalablePipeManager:(id)arg0 pipeDidConnect:(id)arg1 ;
-(void)scalablePipeManager:(id)arg0 pipeDidDisconnect:(id)arg1 error:(id)arg2 ;
-(void)sendAck:(id)arg0 errorCode:(unsigned char)arg1 ;
-(void)sendChannelData:(id)arg0 ;
-(void)sendConnectStatus:(id)arg0 connectStatus:(unsigned char)arg1 ;
-(void)sendData:(id)arg0 forPeer:(id)arg1 forClient:(id)arg2 ;
-(void)sendErrorResponse:(id)arg0 errorCode:(unsigned char)arg1 ;
-(void)sendRemainingData:(id)arg0 wpClient:(id)arg1 ;
-(void)setConnectionInitiator:(BOOL)arg0 forPeer:(id)arg1 forClient:(id)arg2 ;
-(void)setPipeClientConnectionStatus:(BOOL)arg0 forPeer:(id)arg1 forClient:(id)arg2 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)unregisterEndpoint:(id)arg0 forClient:(id)arg1 ;
-(void)update;


@end


#endif