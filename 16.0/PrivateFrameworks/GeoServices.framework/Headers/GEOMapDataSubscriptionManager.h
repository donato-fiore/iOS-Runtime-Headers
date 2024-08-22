// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPDATASUBSCRIPTIONMANAGER_H
#define GEOMAPDATASUBSCRIPTIONMANAGER_H

@class NSString;
@protocol GEOMapDataSubscriptionDownloadManagerDelegate, GEOMapDataSubscriptionPersistence, GEOMapDataSubscriptionDownloadManager;

#import <Foundation/Foundation.h>

#import "GEOObserverHashTable.h"

@interface GEOMapDataSubscriptionManager : NSObject <GEOMapDataSubscriptionDownloadManagerDelegate>

 {
    id<GEOMapDataSubscriptionPersistence> *_persistence;
    id<GEOMapDataSubscriptionDownloadManager> *_downloadManager;
    GEOObserverHashTable *_stateObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
+(void)_setSharedManagerUseLocalPersistence:(BOOL)arg0 ;
-(id)init;
-(id)initWithPersistence:(id)arg0 downloadManager:(id)arg1 ;
-(void)_addStateObserver:(id)arg0 ;
-(void)_addSubscriptionWithIdentifier:(id)arg0 auditToken:(id)arg1 dataTypes:(NSUInteger)arg2 policy:(NSInteger)arg3 region:(id)arg4 expirationDate:(id)arg5 callbackQueue:(id)arg6 completionHandler:(id)arg7 ;
-(void)_externallyManagedDownloaderDidFinish:(id)arg0 withError:(id)arg1 ;
-(void)_registerExternallyManagedDownloader:(id)arg0 ;
-(void)_removeStateObserver:(id)arg0 ;
-(void)addSubscriptionWithIdentifier:(id)arg0 dataTypes:(NSUInteger)arg1 policy:(NSInteger)arg2 region:(id)arg3 expirationDate:(id)arg4 callbackQueue:(id)arg5 completionHandler:(id)arg6 ;
-(void)cancelDownloadForSubscriptionIdentifier:(id)arg0 ;
-(void)cancelDownloadForSubscriptionIdentifiers:(id)arg0 ;
-(void)downloadManager:(id)arg0 didUpdateState:(id)arg1 forIdentifier:(id)arg2 ;
-(void)fetchAllSubscriptionsWithCallbackQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchStateForSubscriptionWithIdentifier:(id)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchSubscriptionsWithIdentifiers:(id)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSubscriptionWithIdentifier:(id)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)startDownloadForSubscriptionIdentifier:(id)arg0 ;
-(void)startDownloadForSubscriptionIdentifiers:(id)arg0 ;


@end


#endif