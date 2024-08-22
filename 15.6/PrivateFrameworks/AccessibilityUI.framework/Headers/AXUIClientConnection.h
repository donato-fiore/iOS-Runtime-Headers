// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUICLIENTCONNECTION_H
#define AXUICLIENTCONNECTION_H

@class AXAccessQueue, NSMutableDictionary, NSHashTable;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface AXUIClientConnection : NSObject

@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (retain, nonatomic) AXAccessQueue *connectionAccessQueue; // ivar: _connectionAccessQueue
@property (retain, nonatomic) NSMutableDictionary *registeredClients; // ivar: _registeredClients
@property (retain, nonatomic) AXAccessQueue *registeredClientsAccessQueue; // ivar: _registeredClientsAccessQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateObserverQueue; // ivar: _stateObserverQueue
@property (retain, nonatomic) NSHashTable *stateObservers; // ivar: _stateObservers
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection


+(id)sharedClientConnection;
-(id)_clientWithIdentifier:(id)arg0 ;
-(id)init;
-(void)_broadcastConnectedStateChange;
-(void)performBlockWithXPCConnection:(id)arg0 ;
-(void)registerClient:(id)arg0 withIdentifier:(id)arg1 ;
-(void)registerConnectionStateObserver:(id)arg0 ;
-(void)unregisterClient:(id)arg0 withIdentifier:(id)arg1 ;
-(void)unregisterConnectionStateObserver:(id)arg0 ;


@end


#endif