// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCIAP2SHIMSERVER_H
#define ACCIAP2SHIMSERVER_H

@class NSMutableDictionary, NSLock;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface ACCiAP2ShimServer : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessoryViaConnectionIDList; // ivar: _accessoryViaConnectionIDList
@property (retain, nonatomic) NSMutableDictionary *accessoryViaKeyUIDList; // ivar: _accessoryViaKeyUIDList
@property (readonly) NSLock *clientLock; // ivar: _clientLock
@property (readonly) NSMutableDictionary *clients; // ivar: _clients
@property (retain, nonatomic) NSMutableDictionary *delegateList; // ivar: _delegateList
@property (readonly) int iap2AvailableNotifyToken; // ivar: _iap2AvailableNotifyToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *iap2dhighPriorityRootQueue; // ivar: _iap2dhighPriorityRootQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalListenerQueue; // ivar: _internalListenerQueue
@property (readonly, nonatomic) BOOL isShuttingDown; // ivar: _isShuttingDown
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *listQueue; // ivar: _listQueue
@property (readonly, nonatomic) NSObject<OS_xpc_object> *listener; // ivar: _listener
@property (readonly) __serverFlags serverFlags; // ivar: _serverFlags


+(id)sharedInstance;
+(id)stringForClientID:(unsigned int)arg0 ;
+(void)postNSDistributeNotificationType:(id)arg0 notifyDict:(id)arg1 ;
+(void)postNotifydNotificationType:(id)arg0 ;
+(void)postiAP2AppNotificationType:(id)arg0 notifyDict:(id)arg1 ;
+(void)postiAP2NotificationType:(id)arg0 notifyDict:(id)arg1 ;
+(void)resetServerState;
-(BOOL)processXPCMessage:(id)arg0 connection:(id)arg1 ;
-(id)_findAccessoryForAccessoryUID:(id)arg0 andKeyTag:(id)arg1 ;
-(id)_findAccessoryForConnectionID:(unsigned int)arg0 ;
-(id)_findAccessoryForConnectionID:(unsigned int)arg0 andKeyTag:(id)arg1 ;
-(id)findAccessoryForAccessoryUID:(id)arg0 andKeyTag:(id)arg1 ;
-(id)findAccessoryForConnectionID:(unsigned int)arg0 ;
-(id)findAccessoryForConnectionID:(unsigned int)arg0 andKeyTag:(id)arg1 ;
-(id)findClientWithID:(unsigned int)arg0 ;
-(id)findClientWithXPCConnection:(id)arg0 ;
-(id)init;
-(unsigned int)addClientWithCapabilities:(unsigned int)arg0 auditToken:(struct ? )arg1 currentClientID:(unsigned int)arg2 xpcConnection:(id)arg3 eaProtocols:(id)arg4 notifyOfAlreadyConnectedAccessories:(BOOL)arg5 andBundleId:(id)arg6 ;
-(unsigned int)generateClientID;
-(void)_addAccessory:(id)arg0 ;
-(void)_addDelegate:(id)arg0 ;
-(void)_attachAccessory:(id)arg0 ;
-(void)_detachAccessory:(id)arg0 ;
-(void)_iterateAccessories:(id)arg0 ;
-(void)_iterateDelegates:(id)arg0 ;
-(void)_pollForDeathAfterPromptCompletes;
-(void)_removeAccessory:(id)arg0 ;
-(void)_removeDelegate:(id)arg0 ;
-(void)_resetServerState;
-(void)_startServer;
-(void)_stopServer;
-(void)_takeClientAssertionsForAccessoryConnection;
-(void)_takeClientAssertionsForAccessoryDisconnection;
-(void)addAccessory:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)iterateAccessoriesAsync:(id)arg0 ;
-(void)iterateAccessoriesSync:(id)arg0 ;
-(void)iterateDelegatesAsync:(id)arg0 ;
-(void)iterateDelegatesSync:(id)arg0 ;
-(void)notifyEAClient:(id)arg0 ofAccessoryEvent:(char *)arg1 accessory:(id)arg2 ;
-(void)notifyEAClientsOfAccessoryConnection:(id)arg0 ;
-(void)notifyEAClientsOfAccessoryDisconnection:(id)arg0 ;
-(void)notifyEAClientsOfAccessoryEvent:(char *)arg0 accessory:(id)arg1 ;
-(void)notifyEAClientsOfAccessoryReconnection:(id)arg0 ;
-(void)processDetachXPCConnection:(id)arg0 ;
-(void)removeAccessory:(id)arg0 ;
-(void)removeAllClients;
-(void)removeClientForXPCConnection:(id)arg0 ;
-(void)removeClientWithID:(unsigned int)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)startServer;
-(void)stopServer;


@end


#endif