// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPROACTIVETILEDOWNLOADER_H
#define GEOPROACTIVETILEDOWNLOADER_H

@class NSString, NSDictionary, NSMutableArray, NSMapTable;
@protocol GEOBatchOpportunisticTileDownloaderDelegate, OS_dispatch_queue, GEOProactiveTileDownloaderDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "GEOTileDB.h"
#import "GEODataSaverTileLoaderManager.h"
#import "GEOResourceManifestManager.h"
#import "GEORequestCounter.h"
#import "GEOStaleTileUpdater.h"
#import "GEOBatchOpportunisticTileDownloader.h"
#import "GEOPowerAssertion.h"
#import "GEOXPCActivity.h"

@interface GEOProactiveTileDownloader : NSObject <GEOBatchOpportunisticTileDownloaderDelegate>

 {
    NSString *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id<GEOProactiveTileDownloaderDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    GEOTileDB *_diskCache;
    NSString *_startCountry;
    NSString *_startRegion;
    GEODataSaverTileLoaderManager *_dataSaverManager;
    GEOResourceManifestManager *_manifestManager;
    GEORequestCounter *_requestCounter;
    GEOOnce_s _didStart;
    GEOOnce_s _didFinish;
    NSDictionary *_testDownloaders;
    NSMutableArray *_remainingPolicies;
    GEOStaleTileUpdater *_staleUpdater;
    NSUInteger _currentPolicy;
    GEOBatchOpportunisticTileDownloader *_currentDownloader;
    BOOL _policyEnabled;
    GEOPowerAssertion *_powerAssertion;
    GEOXPCActivity *_activity;
    NSMapTable *_tileRequesterClasses;
    NSObject<OS_dispatch_source> *_deferCheckinTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_canUseXPCActivity;
+(BOOL)shouldDownloadTileType:(int)arg0 ;
+(BOOL)usesDiscretionaryDownloads;
+(NSUInteger)maximumDownloadBatchSize;
-(id)init;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 diskCache:(id)arg2 tileRequesterClasses:(id)arg3 ;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 diskCache:(id)arg2 tileRequesterClasses:(id)arg3 dataSaverManager:(id)arg4 manifestManager:(id)arg5 requestCounter:(id)arg6 downloaders:(id)arg7 ;
-(void)_clearPowerAssertion;
-(void)_clearXPCDeferralTimer;
-(void)_finish;
-(void)_pauseIfNecessary;
-(void)_registerXPCActivity;
-(void)_registerXPCDeferralTimer;
-(void)_start;
-(void)_startNextDownloader;
-(void)_takePowerAssertionIfNecessary;
-(void)_xpcActivityFired;
-(void)batchOpportunisticTileDownloader:(id)arg0 failedToLoadKey:(struct _GEOTileKey )arg1 error:(id)arg2 ;
// -(void)batchOpportunisticTileDownloader:(id)arg0 receivedData:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unk)arg3 etag:(unsigned int)arg4 forKey:(struct ? )arg5 userInfo:(id)arg6  ;
-(void)batchOpportunisticTileDownloaderDidFinish:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif