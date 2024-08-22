// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARREMOTESERVICE_H
#define ARREMOTESERVICE_H

@class NSMutableDictionary, NSString;
@protocol ARServerConnectionDelegate, ARNamedService, ARRemoteServiceBaseProtocol, OS_dispatch_queue, OS_dispatch_group, OS_os_activity, ARRemoteServiceAnchorDelegate, ARDaemonServiceBaseProtocol;

#import <Foundation/Foundation.h>

#import "ARServerConnection.h"

@interface ARRemoteService : NSObject <ARServerConnectionDelegate, ARNamedService, ARRemoteServiceBaseProtocol>

 {
    NSMutableDictionary *_anchorsByIdentifier;
    os_unfair_lock_s _anchorsLock;
    NSObject<OS_dispatch_queue> *_asyncServiceQueue;
    NSObject<OS_dispatch_group> *_connectionDispatchGroup;
    os_unfair_lock_s _connectionDispatchGroupLock;
    NSObject<OS_dispatch_queue> *_dispatchChannelQueue;
    NSObject<OS_os_activity> *_remoteServiceActivity;
    NSUInteger _traceIdentifier;
    BOOL _isAnchorProviding;
}


@property (weak) NSObject<ARRemoteServiceAnchorDelegate> *anchorDelegate; // ivar: _anchorDelegate
@property (retain) ARServerConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<ARDaemonServiceBaseProtocol> *service; // ivar: _service
@property NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (retain) NSObject<ARDaemonServiceBaseProtocol> *syncService; // ivar: _syncService


+(BOOL)isSupported;
+(BOOL)isSupportedWithError:(*id)arg0 ;
+(id)_runningServices;
+(id)createDaemonServiceInterface:(id)arg0 ;
+(id)createRemoteServiceInterface:(id)arg0 ;
+(id)daemonServiceInterface;
+(id)remoteServiceInterface;
-(BOOL)_waitUntilStarted:(NSUInteger)arg0 ;
-(BOOL)waitUntilStarted:(NSUInteger)arg0 ;
-(id)clientProcessName;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(id)initWithDaemon:(id)arg0 startConnection:(BOOL)arg1 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 startConnection:(BOOL)arg1 ;
-(id)initWithMachServiceName:(id)arg0 exportedInterface:(id)arg1 remoteObjectInterface:(id)arg2 ;
-(id)initWithMachServiceName:(id)arg0 exportedInterface:(id)arg1 remoteObjectInterface:(id)arg2 endpoint:(id)arg3 ;
-(id)initWithMachServiceName:(id)arg0 exportedInterface:(id)arg1 remoteObjectInterface:(id)arg2 endpoint:(id)arg3 startConnection:(BOOL)arg4 queue:(id)arg5 ;
-(id)initWithQueue:(id)arg0 ;
-(int)clientProcessIdentifier;
-(void)_commonInit;
-(void)_startService;
-(void)asyncServiceWithCallback:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)reconnect;
-(void)serverConnectionInterrupted:(id)arg0 ;
-(void)serverConnectionInvalidated:(id)arg0 ;
-(void)serviceConfiguredWithCompletionHandler:(id)arg0 ;
-(void)serviceConfiguredWithError:(id)arg0 ;
-(void)serviceDidReconnect:(BOOL)arg0 ;
-(void)syncServiceWithTimeout:(NSUInteger)arg0 callback:(id)arg1 ;


@end


#endif