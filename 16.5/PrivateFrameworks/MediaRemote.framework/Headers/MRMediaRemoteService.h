// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRMEDIAREMOTESERVICE_H
#define MRMEDIAREMOTESERVICE_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "MRXPCConnection.h"

@interface MRMediaRemoteService : NSObject {
    *? clientModule;
    *? browsableContentEndpoint;
    *? voiceRecordingEndpoint;
    *? televisionEndpoint;
    *? agentEndpoint;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *agentQueue; // ivar: _agentQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *browsableContentQueue; // ivar: _browsableContentQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackPriorityQueue; // ivar: _clientCallbackPriorityQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue; // ivar: _clientCallbackQueue
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (retain, nonatomic) MRXPCConnection *mrXPCConnection; // ivar: _mrXPCConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *televisionQueue; // ivar: _televisionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceInputQueue; // ivar: _voiceInputQueue


-(BOOL)deviceSupportsUISessions;
-(id)UIServerRelayEndpoint;
-(id)getActiveSystemEndpointUIDForType:(NSInteger)arg0 ;
-(struct CGSize )imageDimensionsForArtworkData:(id)arg0 ;
-(void)getDeviceInfoForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)resolvePlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;


@end


#endif