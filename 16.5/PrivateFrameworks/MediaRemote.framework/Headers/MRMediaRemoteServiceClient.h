// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRMEDIAREMOTESERVICECLIENT_H
#define MRMEDIAREMOTESERVICECLIENT_H

@class NSMutableSet, NSHashTable, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRAVRoutingClientController.h"
#import "MRPlayerPath.h"
#import "MRNotificationServiceClient.h"
#import "MRNowPlayingSessionServiceClient.h"
#import "MRNotificationClient.h"
#import "MRMediaRemoteService.h"

@interface MRMediaRemoteServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    MRAVRoutingClientController *_routingClientController;
    MRPlayerPath *_activePlayerPath;
    MRPlayerPath *_currentSessionPlayerPath;
    NSMutableSet *_playerPathInvalidationHandlers;
    NSHashTable *_weakEndpointObservers;
    NSHashTable *_weakNowPlayingControllers;
    NSHashTable *_weakDiscoverySessions;
    NSHashTable *_weakEndpoints;
    NSHashTable *_weakExternalDevices;
    MRNotificationServiceClient *_notificationService;
    MRNowPlayingSessionServiceClient *_nowPlayingSessionService;
}


@property (retain, nonatomic) MRPlayerPath *activePlayerPath;
@property (retain, nonatomic) MRPlayerPath *currentSessionPlayerPath;
@property (readonly, nonatomic) MRNotificationClient *notificationClient; // ivar: _notificationClient
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue; // ivar: _playbackQueueDispatchQueue
@property (readonly, nonatomic) NSArray *registeredOrigins; // ivar: _registeredOrigins
@property (readonly, nonatomic) MRMediaRemoteService *service; // ivar: _service
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;


+(id)sharedServiceClient;
-(id)addPlayerPathInvalidationHandler:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(void)addDiscoverySession:(id)arg0 ;
-(void)addDistantEndpoint:(id)arg0 ;
-(void)addDistantExternalDevice:(id)arg0 ;
-(void)addEndpointObserver:(id)arg0 ;
-(void)addNowPlayingController:(id)arg0 ;
-(void)dealloc;
-(void)fetchPickableRoutesWithCategory:(id)arg0 completion:(id)arg1 ;
-(void)processPlayerPathInvalidationHandlersWithBlock:(id)arg0 ;
-(void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg0 ;
-(void)removeDiscoverySession:(id)arg0 ;
-(void)removeDistantEndpoint:(id)arg0 ;
-(void)removeDistantExternalDevice:(id)arg0 ;
-(void)removeEndpointObserver:(id)arg0 ;
-(void)removeInvalidationHandler:(id)arg0 ;
-(void)removeNowPlayingController:(id)arg0 ;


@end


#endif