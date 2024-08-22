// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDUSERCONTEXTSERVICE_H
#define _CDUSERCONTEXTSERVICE_H

@class NSMutableSet, NSString, NSMutableDictionary, NSXPCListener, _CDXPCEventPublisher;
@protocol NSXPCListenerDelegate, _CDXPCEventPublisherDelegate, _CDContextPersisting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDInMemoryUserContext.h"

@interface _CDUserContextService : NSObject <NSXPCListenerDelegate, _CDXPCEventPublisherDelegate>



@property (retain, nonatomic) NSMutableSet *clients; // ivar: _clients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *firedRegistrationInfos; // ivar: _firedRegistrationInfos
@property (retain, nonatomic) NSMutableSet *firedRegistrations; // ivar: _firedRegistrations
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) _CDXPCEventPublisher *mdcsEventPublisher; // ivar: _mdcsEventPublisher
@property (retain, nonatomic) NSMutableDictionary *mdcsEventSubscribersByToken; // ivar: _mdcsEventSubscribersByToken
@property (retain, nonatomic) _CDXPCEventPublisher *notificationEventPublisher; // ivar: _notificationEventPublisher
@property (retain, nonatomic) NSMutableDictionary *notificationEventSubscribersByClientIdentifier; // ivar: _notificationEventSubscribersByClientIdentifier
@property (retain, nonatomic) NSMutableDictionary *notificationEventSubscribersByToken; // ivar: _notificationEventSubscribersByToken
@property (retain, nonatomic) NSMutableSet *openRegistrations; // ivar: _openRegistrations
@property (retain, nonatomic) NSObject<_CDContextPersisting> *persistence; // ivar: _persistence
@property (readonly, nonatomic) NSMutableDictionary *remoteDevicesByDeviceID; // ivar: _remoteDevicesByDeviceID
@property (nonatomic) BOOL remoteDevicesHaveBeenActivated; // ivar: _remoteDevicesHaveBeenActivated
@property (readonly) Class superclass;
@property (retain, nonatomic) _CDInMemoryUserContext *userContext; // ivar: _userContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstanceWithPersistence:(id)arg0 ;
+(id)sharedInstanceWithSharedMemoryStore:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)setMappingObject:(id)arg0 forContextualKeyPath:(id)arg1 ;
-(NSUInteger)tokenForSourceDeviceUUID:(id)arg0 ;
-(id)initWithListener:(id)arg0 withPersistence:(id)arg1 withStorage:(id)arg2 withStore:(id)arg3 ;
-(id)initWithListener:(id)arg0 withStorage:(id)arg1 withStore:(id)arg2 ;
-(id)obtainFiredRegistrationMatchingRegistration:(id)arg0 info:(*id)arg1 ;
-(id)proxySourceDeviceUUIDForUserID:(unsigned int)arg0 ;
-(id)subscriberForSourceDeviceUUID:(id)arg0 ;
-(id)subscribersForClientIdentifier:(id)arg0 ;
-(void)addOpenRegistration:(id)arg0 ;
-(void)addProxyWithSourceDeviceUUID:(id)arg0 ;
-(void)addSubscriber:(id)arg0 ;
-(void)clientWasInterrupted:(id)arg0 ;
-(void)deleteSavedData;
-(void)fetchProxySourceDeviceUUIDFromSubscriber:(id)arg0 ;
-(void)informClientOfFiredRegistration:(id)arg0 info:(id)arg1 ;
-(void)regenerateState;
-(void)removeOpenRegistration:(id)arg0 ;
-(void)removeSubscriberWithToken:(NSUInteger)arg0 streamName:(id)arg1 ;
-(void)removeTokenForUserID:(unsigned int)arg0 ;
-(void)requestActivateDevicesFromAllSubscribersWithHandler:(id)arg0 ;
-(void)requestActivateDevicesFromSubscriber:(id)arg0 withHandler:(id)arg1 ;
-(void)sendEvent:(id)arg0 toClient:(id)arg1 handler:(id)arg2 ;
-(void)sendEvent:(id)arg0 toClient:(id)arg1 replyHandler:(id)arg2 ;
-(void)sendEvent:(id)arg0 toProxy:(id)arg1 handler:(id)arg2 ;
-(void)sendEvent:(id)arg0 toProxy:(id)arg1 replyHandler:(id)arg2 ;
-(void)setProxySourceDeviceUUID:(id)arg0 forUserID:(unsigned int)arg1 ;
-(void)setToken:(NSUInteger)arg0 forUserID:(unsigned int)arg1 ;
-(void)start;


@end


#endif