// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDSERVER_H
#define PLASSETSDSERVER_H

@class NSXPCListener, PLXPCMessageLogger, NSMutableSet, NSXPCInterface, PFStateCaptureHandler, NSString;
@protocol NSXPCListenerDelegate, PFStateCaptureProvider, PLPhotoLibraryDaemonService;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundleController.h"
#import "PLBackgroundJobService.h"
#import "PLDistributedNotificationHandler.h"
#import "PLTCCObserver.h"
#import "PLCacheDeleteRegistration.h"

@interface PLAssetsdServer : NSObject <NSXPCListenerDelegate, PFStateCaptureProvider>

 {
    NSXPCListener *_listener;
    PLXPCMessageLogger *_connectionLogger;
    os_unfair_lock_s _servicesLock;
    NSMutableSet *_services;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLBackgroundJobService *_backgroundJobService;
    PLDistributedNotificationHandler *_distributedNotificationHandler;
    PLTCCObserver *_tccObserver;
    NSXPCInterface *_assetsdInterface;
    PLCacheDeleteRegistration *_cacheDeleteRegistration;
    PFStateCaptureHandler *_stateHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConfiguredForUnitTesting; // ivar: _isConfiguredForUnitTesting
@property (nonatomic) ? resourceCacheMetrics; // ivar: _resourceCacheMetrics
@property (retain, nonatomic) NSObject<PLPhotoLibraryDaemonService> *searchSpotlightReciever; // ivar: _searchSpotlightReciever
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<PLPhotoLibraryDaemonService> *syndicationPreferencesListener; // ivar: _syndicationPreferencesListener
@property (retain, nonatomic) NSObject<PLPhotoLibraryDaemonService> *syndicationSpotlightReceiver; // ivar: _syndicationSpotlightReceiver
@property (nonatomic) int systemLibraryChangeToken; // ivar: _systemLibraryChangeToken


+(id)sharedServer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)stateCaptureDictionary;
-(void)_checkInWithLaunchd;
-(void)_collectCacheMetricsDataFromService:(id)arg0 ;
-(void)_startObservingSystemLibraryChanges;
-(void)addService:(id)arg0 ;
-(void)handleInterruption:(id)arg0 ;
-(void)handleInvalidation:(id)arg0 ;
-(void)logStatus;
-(void)removeService:(id)arg0 ;
-(void)start;
-(void)stopObservingSystemLibraryChanges;


@end


#endif