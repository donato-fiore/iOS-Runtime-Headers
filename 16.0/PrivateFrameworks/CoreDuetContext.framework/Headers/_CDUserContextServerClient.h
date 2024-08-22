// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDUSERCONTEXTSERVERCLIENT_H
#define _CDUSERCONTEXTSERVERCLIENT_H

@class NSXPCConnection, NSString, NSMutableDictionary, NSMutableSet;
@protocol _CDUserContextServer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDUserContextService.h"
#import "_CDInMemoryUserContext.h"

@interface _CDUserContextServerClient : NSObject <_CDUserContextServer>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activateMonitorQueue; // ivar: _activateMonitorQueue
@property (retain, nonatomic) NSXPCConnection *clientConnection; // ivar: _clientConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *devicesToActivateByRemoteUserContextProxySourceDeviceUUID; // ivar: _devicesToActivateByRemoteUserContextProxySourceDeviceUUID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *nonWakingRegistration; // ivar: _nonWakingRegistration
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) _CDUserContextService *service; // ivar: _service
@property (readonly) Class superclass;
@property (retain, nonatomic) _CDInMemoryUserContext *userContext; // ivar: _userContext
@property (retain, nonatomic) NSMutableSet *wakingRegistrations; // ivar: _wakingRegistrations


+(id)clientInterface;
+(id)clientOfService:(id)arg0 withConnection:(id)arg1 andContext:(id)arg2 ;
+(id)serverInterface;
-(BOOL)isMDCSNeededForKeyPath:(id)arg0 ;
-(BOOL)isMDCSNeededForKeyPathInKeyPaths:(id)arg0 ;
-(id)deviceIDsForDeviceTypes:(NSUInteger)arg0 ;
-(id)deviceIDsSortedByRemoteUserContextProxySourceDeviceUUIDFromDeviceIDs:(id)arg0 ;
-(id)initForService:(id)arg0 withConnection:(id)arg1 andContext:(id)arg2 ;
-(id)keyPathsSortedByDeviceID:(id)arg0 ;
-(id)remoteDeviceIDs;
-(id)remoteDeviceIDsForRemoteUserContextProxySourceDeviceUUID:(id)arg0 ;
-(id)remoteDevices;
-(id)remoteDevicesForRemoteUserContextProxySourceDeviceUUID:(id)arg0 ;
-(id)remoteUserContextProxySourceDeviceUUIDByDeviceID;
-(id)remoteUserContextProxySourceDeviceUUIDForKeyPath:(id)arg0 ;
-(void)_hasKnowledgeOfPath:(id)arg0 handler:(id)arg1 ;
-(void)_propertiesOfPath:(id)arg0 handler:(id)arg1 ;
-(void)_propertiesOfRemotePath:(id)arg0 handler:(id)arg1 ;
-(void)_valueForPath:(id)arg0 handler:(id)arg1 ;
-(void)_valueForRemotePath:(id)arg0 handler:(id)arg1 ;
-(void)_valuesForPaths:(id)arg0 handler:(id)arg1 ;
-(void)activateDevices:(id)arg0 remoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(void)addObjects:(id)arg0 andRemoveObjects:(id)arg1 forArrayAtPath:(id)arg2 handler:(id)arg3 ;
-(void)addObjects:(id)arg0 toArrayAtPath:(id)arg1 handler:(id)arg2 ;
-(void)deactivateDevices:(id)arg0 remoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(void)dealloc;
-(void)deregisterAllCallbacks:(BOOL)arg0 ;
-(void)deregisterCallback:(id)arg0 ;
-(void)evaluatePredicate:(id)arg0 handler:(id)arg1 ;
-(void)fetchPropertiesOfRemoteKeyPaths:(id)arg0 handler:(id)arg1 ;
-(void)fetchPropertiesOfRemoteKeyPaths:(id)arg0 remoteUserContextProxySourceDeviceUUID:(id)arg1 handler:(id)arg2 ;
-(void)handlePreviouslyFiredRegistration:(id)arg0 info:(id)arg1 ;
-(void)hasKnowledgeOfPath:(id)arg0 handler:(id)arg1 ;
-(void)performRegistrationCallbackWithRegistration:(id)arg0 info:(id)arg1 ;
-(void)propertiesOfPath:(id)arg0 handler:(id)arg1 ;
-(void)propertiesOfRemotePath:(id)arg0 handler:(id)arg1 ;
-(void)proxyTokenDidUpdate;
-(void)registerCallback:(id)arg0 ;
-(void)removeObjects:(id)arg0 fromArrayAtPath:(id)arg1 handler:(id)arg2 ;
-(void)removeObjectsMatchingPredicate:(id)arg0 fromArrayAtPath:(id)arg1 handler:(id)arg2 ;
-(void)setObject:(id)arg0 forPath:(id)arg1 handler:(id)arg2 ;
-(void)setObject:(id)arg0 lastModifiedDate:(id)arg1 forContextualKeyPath:(id)arg2 handler:(id)arg3 ;
-(void)subscribeToContextValueNotificationsWithRegistration:(id)arg0 deviceIDs:(id)arg1 ;
-(void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(NSUInteger)arg0 ;
-(void)unsubscribeFromContextValueNotificationsWithRegistration:(id)arg0 deviceIDs:(id)arg1 ;
-(void)valuesForPaths:(id)arg0 handler:(id)arg1 ;
-(void)valuesForPaths:(id)arg0 inContextsMatching:(id)arg1 handler:(id)arg2 ;


@end


#endif