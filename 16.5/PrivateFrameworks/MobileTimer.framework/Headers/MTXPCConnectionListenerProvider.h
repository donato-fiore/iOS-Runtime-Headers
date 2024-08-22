// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTXPCCONNECTIONLISTENERPROVIDER_H
#define MTXPCCONNECTIONLISTENERPROVIDER_H

@class NSMutableSet, NSArray, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTXPCConnectionInfo.h"

@interface MTXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate>



@property (retain, nonatomic) NSMutableSet *clients; // ivar: _clients
@property (readonly, nonatomic) NSArray *connectedClients;
@property (retain, nonatomic) NSXPCListener *connectionListener; // ivar: _connectionListener
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTXPCConnectionInfo *info; // ivar: _info
@property (copy, nonatomic) NSString *requiredEntitlement; // ivar: _requiredEntitlement
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly) Class superclass;


+(id)providerWithConnectionInfo:(id)arg0 errorHandler:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_currentClientForConnection:(id)arg0 ;
-(id)currentClient;
-(id)initWithConnectionInfo:(id)arg0 errorHandler:(id)arg1 ;
-(void)_didInterruptConnection;
-(void)_didInvalidateConnection:(id)arg0 ;
// -(void)_performBlockOnClientInfos:(id)arg0 excludingClient:(unk)arg1  ;
-(void)addClientConnection:(id)arg0 clientLink:(id)arg1 ;
-(void)dealloc;
-(void)performBlockOnAllClients:(id)arg0 ;
// -(void)performBlockOnAllClients:(id)arg0 excludingClient:(unk)arg1  ;
// -(void)performBlockOnAllClients:(id)arg0 excludingCurrent:(unk)arg1  ;
// -(void)performBlockOnClientInfos:(id)arg0 excludeCurrent:(unk)arg1  ;
-(void)performBlockOnCurrentClient:(id)arg0 ;
-(void)removeClientConnection:(id)arg0 ;
-(void)startListening;
-(void)stopListening;


@end


#endif