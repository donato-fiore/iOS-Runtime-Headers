// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPDATASUBSCRIPTIONLOCALDOWNLOADMANAGER_H
#define GEOMAPDATASUBSCRIPTIONLOCALDOWNLOADMANAGER_H

@class NSMutableArray, geo_isolater, NSMutableDictionary, NSString;
@protocol GEOMapDataSubscriptionDownloaderDelegate, GEOPListStateCapturing, GEOMapDataSubscriptionDownloadManager, OS_dispatch_queue, GEOMapDataSubscriptionDownloadManagerDelegate;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestManager.h"
#import "GEOTileDB.h"
#import "GEOMapDataSubscriptionDownloader.h"

@interface GEOMapDataSubscriptionLocalDownloadManager : NSObject <GEOMapDataSubscriptionDownloaderDelegate, GEOPListStateCapturing, GEOMapDataSubscriptionDownloadManager>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    GEOResourceManifestManager *_manifestManager;
    GEOTileDB *_tileDB;
    NSMutableArray *_pendingSubscriptionsToLoad;
    GEOMapDataSubscriptionDownloader *_currentDownloader;
    geo_isolater *_isolation;
    NSUInteger _stateCaptureHandle;
    NSMutableDictionary *_subscriptionStates;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOMapDataSubscriptionDownloadManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createDownloaderForSubscription:(id)arg0 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)initWithTileDB:(id)arg0 ;
-(void)cancelDownloadForSubscriptionIdentifiers:(id)arg0 ;
-(void)dealloc;
-(void)didAddSubscription:(id)arg0 ;
-(void)externallyManagedDownloaderDidFinish:(id)arg0 withError:(id)arg1 ;
-(void)fetchStateForSubscriptionWithIdentifier:(id)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerExternallyManagedDownloader:(id)arg0 ;
-(void)startDownloadForSubscriptionIdentifiers:(id)arg0 ;
-(void)subscriptionDownloader:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif