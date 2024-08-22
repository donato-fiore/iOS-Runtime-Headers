// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPXPCCONNECTIONLISTENER_H
#define HKSPXPCCONNECTIONLISTENER_H

@class NSMutableSet, NSArray, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, BSDescriptionProviding, HKSPXPCConnectionListenerDelegate;

#import <Foundation/Foundation.h>

#import "HKSPXPCConnectionInfo.h"
#import "HKSPXPCClient.h"

@interface HKSPXPCConnectionListener : NSObject <NSXPCListenerDelegate, BSDescriptionProviding>



@property (readonly, nonatomic) os_unfair_lock_s clientLock; // ivar: _clientLock
@property (readonly, nonatomic) NSMutableSet *connectedClientSet; // ivar: _connectedClientSet
@property (readonly, nonatomic) NSArray *connectedClients;
@property (readonly, nonatomic) HKSPXPCConnectionInfo *connectionInfo; // ivar: _connectionInfo
@property (readonly, nonatomic) NSXPCListener *connectionListener; // ivar: _connectionListener
@property (readonly, nonatomic) HKSPXPCClient *currentClient;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKSPXPCConnectionListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)listenerWithConnectionInfo:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_clientIdentifierProviderForClientLink:(id)arg0 ;
-(id)_clientWithConnection:(id)arg0 clientLink:(id)arg1 ;
-(id)_currentClientForConnection:(id)arg0 ;
-(id)connectedClientsWithPID:(int)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithConnectionInfo:(id)arg0 ;
-(id)initWithConnectionInfo:(id)arg0 connectionListener:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_didInterruptConnection;
-(void)_didInvalidateConnection:(id)arg0 ;
-(void)_lock_logConnectedClients;
-(void)_withLock:(id)arg0 ;
-(void)addClientConnection:(id)arg0 clientLink:(id)arg1 ;
-(void)dealloc;
// -(void)performRemoteBlock:(id)arg0 onClient:(unk)arg1  ;
-(void)performRemoteBlockOnClients:(id)arg0 ;
// -(void)performRemoteBlockOnClients:(id)arg0 passingTest:(unk)arg1  ;
-(void)removeClientConnection:(id)arg0 ;
-(void)startListening;


@end


#endif