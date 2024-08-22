// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSXPCCONNECTOR_H
#define PDSXPCCONNECTOR_H

@class NSString, NSError;
@protocol PDSRemoteVendor, PDSXPCConnection, PDSXPCConnectionVendor, PDSXPCHandshake><NSXPCProxyCreating, PDSXPCInterfaceVendor, PDSRemoteInternal><NSXPCProxyCreating, PDSRemote><NSXPCProxyCreating, PDSRemoteInternal, PDSRemote;

#import <Foundation/Foundation.h>


@interface PDSXPCConnector : NSObject <PDSRemoteVendor>



@property (retain, nonatomic) NSObject<PDSXPCConnection> *XPCConnection; // ivar: _XPCConnection
@property (retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain, nonatomic) NSError *connectionError; // ivar: _connectionError
@property (retain, nonatomic) NSObject<PDSXPCConnectionVendor> *connectionVendor; // ivar: _connectionVendor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PDSXPCHandshake><NSXPCProxyCreating> *handshakeProxy; // ivar: _handshakeProxy
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PDSXPCInterfaceVendor> *interfaceVendor; // ivar: _interfaceVendor
@property (retain, nonatomic) NSObject<PDSRemoteInternal><NSXPCProxyCreating> *internalRemoteObject; // ivar: _internalRemoteObject
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSObject<PDSRemote><NSXPCProxyCreating> *remoteObject; // ivar: _remoteObject
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<PDSRemoteInternal> *syncInternalRemoteObject; // ivar: _syncInternalRemoteObject
@property (retain, nonatomic) NSObject<PDSRemote> *syncRemoteObject; // ivar: _syncRemoteObject


-(BOOL)validateConnectionWithError:(*id)arg0 ;
-(id)_genericProxyWithError:(*id)arg0 remoteBlock:(id)arg1 ;
// -(id)_genericSyncProxyWithErrorHandler:(id)arg0 localStorage:(unk)arg1 remoteBlock:(*id)arg2  ;
-(id)_lockedPerformConnectWithBlock:(id)arg0 ;
-(id)initWithClientID:(id)arg0 ;
-(id)initWithClientID:(id)arg0 interfaceVendor:(id)arg1 connectionVendor:(id)arg2 ;
-(id)internalRemoteObjectProxyWithError:(*id)arg0 ;
-(id)remoteObjectProxyWithError:(*id)arg0 ;
-(id)synchronousInternalRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;


@end


#endif