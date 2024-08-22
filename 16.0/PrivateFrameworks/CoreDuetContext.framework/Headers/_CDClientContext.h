// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDCLIENTCONTEXT_H
#define _CDCLIENTCONTEXT_H

@class NSString, NSXPCListenerEndpoint, NSMutableDictionary, NSCountedSet, NSXPCConnection;
@protocol _CDAsyncUserContext, _CDAsyncLocalContext, _CDUserContextServerMonitoring, OS_os_log, OS_dispatch_queue, _CDRemoteUserContextServer;

#import <Foundation/Foundation.h>


@interface _CDClientContext : NSObject <_CDAsyncUserContext, _CDAsyncLocalContext, _CDUserContextServerMonitoring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interrupted; // ivar: _interrupted
@property (retain, nonatomic) NSMutableDictionary *keyPathToValues; // ivar: _keyPathToValues
@property (retain, nonatomic) NSCountedSet *keyPathsWithRegistrationsForAnyChange; // ivar: _keyPathsWithRegistrationsForAnyChange
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSMutableDictionary *openRegistrationTokens; // ivar: _openRegistrationTokens
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // ivar: _registrationCallbackQueue
@property (retain, nonatomic) NSMutableDictionary *registrations; // ivar: _registrations
@property (retain, nonatomic) NSObject<_CDRemoteUserContextServer> *remoteUserContextProxy; // ivar: _remoteUserContextProxy
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcEventQueue; // ivar: _xpcEventQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // ivar: _xpcQueue


+(id)clientInterface;
+(id)serverInterface;
+(id)userContext;
+(id)userContextWithEndpoint:(id)arg0 ;
-(BOOL)addObjects:(id)arg0 andRemoveObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(BOOL)addObjects:(id)arg0 andRemoveObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 synchronous:(BOOL)arg3 responseQueue:(id)arg4 withCompletion:(id)arg5 ;
-(BOOL)addObjects:(id)arg0 toArrayAtKeyPath:(id)arg1 ;
-(BOOL)addObjects:(id)arg0 toArrayAtKeyPath:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(id)arg4 ;
-(BOOL)evaluatePredicate:(id)arg0 ;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg0 ;
-(BOOL)removeObjects:(id)arg0 fromArrayAtKeyPath:(id)arg1 ;
-(BOOL)removeObjects:(id)arg0 fromArrayAtKeyPath:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(id)arg4 ;
-(BOOL)setObject:(id)arg0 forContextualKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg0 forContextualKeyPath:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(id)arg4 ;
-(BOOL)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(BOOL)setObject:(id)arg0 lastModifiedDate:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(id)cachedValueIfClientHasRegistrationsForKeyPath:(id)arg0 ;
-(id)currentConnection;
-(id)defaultCallbackQueue;
-(id)initWithEndpoint:(id)arg0 ;
-(id)lastModifiedDateForContextualKeyPath:(id)arg0 ;
-(id)lastModifiedDateForContextualKeyPath:(id)arg0 synchronous:(BOOL)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;
-(id)localContext;
-(id)objectForContextualKeyPath:(id)arg0 ;
-(id)objectForContextualKeyPath:(id)arg0 synchronous:(BOOL)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtKeyPath:(id)arg1 ;
-(id)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtKeyPath:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(id)arg4 ;
-(id)valuesForKeyPaths:(id)arg0 ;
-(id)valuesForKeyPaths:(id)arg0 inContextsMatchingPredicate:(id)arg1 ;
-(id)valuesForKeyPaths:(id)arg0 synchronous:(BOOL)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;
-(void)activateDevices:(id)arg0 remoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg0 ;
-(void)addObjects:(id)arg0 andRemoveObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(id)arg4 ;
-(void)addObjects:(id)arg0 toArrayAtKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;
-(void)cleanupInternalReferencesToRegistration:(id)arg0 ;
-(void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)arg0 ;
-(void)deactivateDevices:(id)arg0 remoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(void)dealloc;
-(void)deregisterCallback:(id)arg0 ;
-(void)handleContextualChange:(id)arg0 info:(id)arg1 handler:(id)arg2 ;
-(void)handleFetchPropertiesEvent:(id)arg0 ;
-(void)handleFetchProxySourceDeviceUUIDEvent:(id)arg0 ;
-(void)handleKeepAliveEvent:(id)arg0 ;
-(void)handleMDCSEvent:(id)arg0 ;
-(void)handleNotificationEvent:(id)arg0 ;
-(void)handleRegistrationCompleted:(id)arg0 handler:(id)arg1 ;
-(void)handleRequestActivateDevicesEvent:(id)arg0 ;
-(void)handleSubscribeToContextValueNotificationsEvent:(id)arg0 ;
-(void)handleUnsubscribeFromContextValueNotificationsEvent:(id)arg0 ;
-(void)lastModifiedDateForContextualKeyPath:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)logFaultIfDeprecatedKeyPath:(id)arg0 ;
-(void)objectForContextualKeyPath:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)registerCallback:(id)arg0 ;
-(void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg0 ;
-(void)removeObjects:(id)arg0 fromArrayAtKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;
-(void)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;
-(void)retryTimes:(int)arg0 block:(id)arg1 ;
-(void)setCachedValueIfClientHasRegistrations:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setObject:(id)arg0 forContextualKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;
-(void)subscribeToEventStreams;
-(void)unprotectedSetUpXPCConnectionWithEndpoint:(id)arg0 ;
-(void)valuesForKeyPaths:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif