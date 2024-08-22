// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARREMOTESERVICE_H
#define ARREMOTESERVICE_H

@class NSMutableDictionary, NSString;
@protocol ARServerConnectionDelegate, ARNamedService, ARRemoteServiceBaseProtocol, ARRemoteServiceAnchorDelegate, OS_dispatch_semaphore, ARDaemonServiceBaseProtocol;

#import <Foundation/Foundation.h>

#import "ARServerConnection.h"

@interface ARRemoteService : NSObject <ARServerConnectionDelegate, ARNamedService, ARRemoteServiceBaseProtocol>

 {
    NSMutableDictionary *_anchorsByIdentifier;
    os_unfair_lock_s _anchorsLock;
}


@property (weak) NSObject<ARRemoteServiceAnchorDelegate> *anchorDelegate; // ivar: _anchorDelegate
@property (retain) ARServerConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *connectionSemaphore; // ivar: _connectionSemaphore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<ARDaemonServiceBaseProtocol> *service; // ivar: _service
@property NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (retain) NSObject<ARDaemonServiceBaseProtocol> *syncService; // ivar: _syncService


+(BOOL)isSupported;
+(id)_runningServices;
+(id)daemonServiceInterface;
+(id)remoteServiceInterface;
-(BOOL)removeAnchors:(id)arg0 ;
-(BOOL)updateAnchorWithIdentifier:(id)arg0 updateBlock:(id)arg1 ;
-(BOOL)updateAnchors:(id)arg0 ;
-(BOOL)waitUntilStarted:(NSUInteger)arg0 ;
-(id)allAnchors;
-(id)clientProcessName;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(id)initWithDaemon:(id)arg0 startConnection:(BOOL)arg1 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 startConnection:(BOOL)arg1 ;
-(id)initWithMachServiceName:(id)arg0 exportedInterface:(id)arg1 remoteObjectInterface:(id)arg2 ;
-(id)initWithMachServiceName:(id)arg0 exportedInterface:(id)arg1 remoteObjectInterface:(id)arg2 endpoint:(id)arg3 ;
-(id)initWithMachServiceName:(id)arg0 exportedInterface:(id)arg1 remoteObjectInterface:(id)arg2 endpoint:(id)arg3 startConnection:(BOOL)arg4 ;
-(int)clientProcessIdentifier;
-(void)_commonInit;
-(void)_connect;
-(void)_didAddAnchors:(id)arg0 ;
-(void)_didRemoveAnchors:(id)arg0 ;
-(void)_didUpdateAnchors:(id)arg0 ;
-(void)invalidate;
-(void)reconnect;
-(void)serverConnectionInterrupted:(id)arg0 ;
-(void)serverConnectionInvalidated:(id)arg0 ;
-(void)serviceConfiguredWithError:(id)arg0 ;
-(void)serviceDidReconnect:(BOOL)arg0 ;


@end


#endif