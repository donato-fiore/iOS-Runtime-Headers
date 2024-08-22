// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOOPPORTUNISTICSUBSCRIPTIONDATASOURCE_H
#define GEOOPPORTUNISTICSUBSCRIPTIONDATASOURCE_H

@class NSString, NSArray;
@protocol GEOMapDataSubscriptionDownloaderDelegate, GEOOpportunisticDataSource, OS_dispatch_queue, OS_dispatch_group, GEOOpportunisticDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "GEOTileDB.h"
#import "GEOMapDataSubscriptionManager.h"
#import "GEOResourceManifestManager.h"
#import "GEORequestCounter.h"
#import "GEOMapDataSubscriptionDownloader.h"

@interface GEOOpportunisticSubscriptionDataSource : NSObject <GEOMapDataSubscriptionDownloaderDelegate, GEOOpportunisticDataSource>

 {
    NSString *_sessionIdentifier;
    GEOTileDB *_diskCache;
    GEOMapDataSubscriptionManager *_subscriptionManager;
    GEOResourceManifestManager *_manifestManager;
    GEORequestCounter *_requestCounter;
    unsigned char _requestCounterPolicy;
    id *_tileRequesterCreationBlock;
    NSUInteger _numberOfTilesOriginallyConsidered;
    NSUInteger _numberOfTilesAttempted;
    NSUInteger _successfulTiles;
    NSUInteger _failedTiles;
    NSArray *_subscriptionsToLoad;
    NSUInteger _currentSubscriptionIndex;
    GEOMapDataSubscriptionDownloader *_currentDownloader;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_group> *_preparationGroup;
    GEOOnce_s _started;
    GEOOnce_s _finished;
    BOOL _paused;
    BOOL _canceled;
}


@property (readonly, nonatomic) NSUInteger bytesDownloaded; // ivar: _bytesDownloaded
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOOpportunisticDataSourceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)policy;
-(id)initWithSessionIdentifier:(id)arg0 diskCache:(id)arg1 subscriptionManager:(id)arg2 manifestManager:(id)arg3 requestCounter:(id)arg4 requestCounterPolicy:(unsigned char)arg5 tileRequesterCreationBlock:(id)arg6 ;
-(void)_finish;
-(void)_startNextSubscriptionIfPossible;
-(void)cancel;
-(void)pause;
-(void)resume;
-(void)subscriptionDownloader:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif