// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRMEDIAREMOTESERVICECLIENT_H
#define MRMEDIAREMOTESERVICECLIENT_H

@class NSMutableArray, NSMutableSet, NSHashTable, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRAVRoutingClientController.h"
#import "MRPlayerPath.h"
#import "MRNotificationServiceClient.h"
#import "MRNowPlayingSessionServiceClient.h"
#import "MRNotificationClient.h"
#import "MRMediaRemoteService.h"

@interface MRMediaRemoteServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    MRPlayerPath *_activePlayerPath;
    MRPlayerPath *_currentSessionPlayerPath;
    NSMutableSet *_playerPathInvalidationHandlers;
    NSHashTable *_weakEndpointObservers;
    NSHashTable *_weakNowPlayingControllers;
    MRNotificationServiceClient *_notificationService;
    MRNowPlayingSessionServiceClient *_nowPlayingSessionService;
}


@property (retain, nonatomic) MRPlayerPath *activePlayerPath;
@property (retain, nonatomic) MRPlayerPath *currentSessionPlayerPath;
@property (readonly, nonatomic) MRNotificationClient *notificationClient; // ivar: _notificationClient
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue; // ivar: _playbackQueueDispatchQueue
@property (readonly, nonatomic) NSArray *registeredOrigins;
@property (readonly, nonatomic) MRMediaRemoteService *service; // ivar: _service
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;


+(id)sharedServiceClient;
-(BOOL)isOriginRegistered:(id)arg0 ;
-(id)addPlayerPathInvalidationHandler:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(void)addEndpointObserver:(id)arg0 ;
-(void)addNowPlayingController:(id)arg0 ;
-(void)dealloc;
-(void)fetchPickableRoutesWithCategory:(id)arg0 completion:(id)arg1 ;
-(void)processPlayerPathInvalidationHandlersWithBlock:(id)arg0 ;
-(void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg0 ;
-(void)registerOrigin:(id)arg0 withDeviceInfo:(id)arg1 completion:(id)arg2 ;
-(void)removeEndpointObserver:(id)arg0 ;
-(void)removeInvalidationHandler:(id)arg0 ;
-(void)removeNowPlayingController:(id)arg0 ;
-(void)unregisterAllOriginsWithCompletion:(id)arg0 ;
-(void)unregisterOrigin:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif