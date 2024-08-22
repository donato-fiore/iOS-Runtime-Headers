// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDRESOURCEPREFETCHMANAGER_H
#define PLCLOUDRESOURCEPREFETCHMANAGER_H

@class NSDictionary, NSDate, PLVolumeInfo;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"
#import "PLCloudPhotoLibraryManager.h"
#import "PLCloudResourcePruneManager.h"
#import "PLPrefetchConfiguration.h"

@interface PLCloudResourcePrefetchManager : NSObject {
    PLPhotoLibrary *_photoLibrary;
    PLCloudPhotoLibraryManager *_cplManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDictionary *_inflightResources;
    NSInteger _prefetchMode;
    NSInteger _prefetchOptimizeMode;
    NSDate *_lastCheckCPLBGDownloadDate;
    BOOL _enqueuedCheckCPLBGDownload;
    NSObject<OS_dispatch_queue> *_workQueue;
    PLVolumeInfo *_volumeInfo;
    NSDate *_initialSyncDate;
    NSDate *_lastCompletePrefetchDate;
    PLPrefetchConfiguration *_prefetchConfiguration;
}




+(id)_descriptionForPrefetchMode:(NSInteger)arg0 ;
+(id)_identifierForResourceDownload:(id)arg0 ;
+(id)_overridePrefetchMode;
+(id)descriptionForPrefetchPhase:(NSUInteger)arg0 ;
-(BOOL)_canPrefetch;
-(BOOL)_isInflightResourceIdentifier:(id)arg0 ;
-(BOOL)_isPrefetchDisabled;
-(BOOL)_prefetchIsEnabledForPhase:(NSUInteger)arg0 ;
-(NSInteger)_diskSpaceBudgetForPrefetchPhase:(NSUInteger)arg0 ;
-(NSInteger)_diskSpaceBudgetForPrefetchPhase:(NSUInteger)arg0 prefetchOptimizeMode:(NSInteger)arg1 ;
-(NSInteger)_prefetchOptimizeModeBasedOnLibrarySize;
-(NSInteger)_totalSizeOfLocallyAvailableOriginalResources;
-(NSInteger)_totalSizeOfOriginalResources;
-(NSInteger)_totalSizeOfOriginalResourcesForPrefetchWithPredicate:(id)arg0 ;
-(NSUInteger)_countOfAllInflightResources;
-(NSUInteger)_countOfInflightResourcesForPrefetchPhase:(NSUInteger)arg0 ;
-(NSUInteger)_intentForPrefetchPhase:(NSUInteger)arg0 ;
-(NSUInteger)_smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(NSInteger)arg0 ;
-(id)_allInflightResourceIdentifiers;
-(id)_inflightResourceIdentifiersForPrefetchPhase:(NSUInteger)arg0 ;
-(id)_prefetchStatusForDebug:(BOOL)arg0 ;
-(id)_volumeInfo;
-(id)init;
-(id)initWithCPLManager:(id)arg0 pruneManager:(id)arg1 library:(id)arg2 ;
-(id)prefetchStatusForDebug:(BOOL)arg0 ;
-(void)_addInflightResourceIdentifier:(id)arg0 prefetchPhase:(NSUInteger)arg1 cplResource:(id)arg2 ;
-(void)_checkCPLBackgroundDownloadOperations;
-(void)_cleanupInflightResources;
-(void)_enqueueCheckCPLBGDownloadFromNow:(id)arg0 withReason:(id)arg1 ;
-(void)_handlePrefetchError:(id)arg0 forPLCloudResourceWithObjectID:(id)arg1 ;
-(void)_incrementPrefetchCountForPrefetchPhase:(NSUInteger)arg0 resources:(id)arg1 ;
-(void)_prefetchResources:(id)arg0 prefetchPhase:(NSUInteger)arg1 shouldAutoPefetchNextBatch:(BOOL)arg2 ;
-(void)_reloadDefaultDownload;
-(void)_reloadDownloadOriginalsSetting;
-(void)_removeAllInflightResourceIdentifiers;
-(void)_removeInflightResourceIdentifier:(id)arg0 prefetchPhase:(NSUInteger)arg1 cplResource:(id)arg2 ;
-(void)_resourcesToPrefetchWithPrefetchPhase:(NSUInteger)arg0 applyPerPrefetchLimit:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_resourcesWithPredicate:(id)arg0 limit:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg0 block:(id)arg1 ;
-(void)_setLastCompletePrefetchDate:(id)arg0 ;
-(void)_startAutomaticPrefetch;
-(void)_startPrefetchNextBatch;
-(void)_writeDownloadFinishedMarkerIfNeeded;
-(void)clearPrefetchState;
-(void)handleCPLConfigurationChange;
-(void)handleCPLStatusChange;
-(void)handleOptimizeModeChange;
-(void)invalidate;
-(void)prefetchResourcesWithPredicates:(id)arg0 prefetchPhase:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)startAutomaticPrefetch;
-(void)stop;


@end


#endif