// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPROACTIVETILEDOWNLOADER_H
#define GEOPROACTIVETILEDOWNLOADER_H

@class NSString, NSDictionary, NSMutableArray, NSMapTable, geo_isolater;
@protocol GEOOpportunisticDataSourceDelegate, OS_dispatch_queue, GEOProactiveTileDownloaderDelegate, GEOOpportunisticDataSource, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "GEOTileDB.h"
#import "GEOResourceManifestManager.h"
#import "GEORequestCounter.h"
#import "GEOPowerAssertion.h"
#import "GEOXPCActivity.h"

@interface GEOProactiveTileDownloader : NSObject <GEOOpportunisticDataSourceDelegate>

 {
    NSString *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id<GEOProactiveTileDownloaderDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    GEOTileDB *_diskCache;
    GEOResourceManifestManager *_manifestManager;
    GEORequestCounter *_requestCounter;
    GEOOnce_s _didStart;
    GEOOnce_s _didFinish;
    NSDictionary *_testDownloaders;
    NSMutableArray *_remainingPolicies;
    NSUInteger _currentPolicy;
    id<GEOOpportunisticDataSource> *_currentDownloader;
    BOOL _policyEnabled;
    GEOPowerAssertion *_powerAssertion;
    GEOXPCActivity *_activity;
    NSMapTable *_tileRequesterClasses;
    NSObject<OS_dispatch_source> *_deferCheckinTimer;
    NSDictionary *_testPolicyEnabledOverrides;
    geo_isolater *_activityIsolation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_canUseXPCActivity;
+(BOOL)shouldDownloadTileType:(int)arg0 ;
+(NSUInteger)maximumDownloadBatchSize;
-(id)init;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 diskCache:(id)arg2 tileRequesterClasses:(id)arg3 ;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 diskCache:(id)arg2 tileRequesterClasses:(id)arg3 manifestManager:(id)arg4 requestCounter:(id)arg5 downloaders:(id)arg6 policyEnabledOverrides:(id)arg7 ;
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
-(void)cancel;
-(void)dataSourceDidFinish:(id)arg0 ;
-(void)start;


@end


#endif