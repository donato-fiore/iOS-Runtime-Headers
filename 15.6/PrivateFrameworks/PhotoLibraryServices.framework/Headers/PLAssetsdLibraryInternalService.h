// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDLIBRARYINTERNALSERVICE_H
#define PLASSETSDLIBRARYINTERNALSERVICE_H

@class NSString;
@protocol PLAssetsdLibraryInternalServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"
#import "PLAssetsdConnectionAuthorization.h"

@interface PLAssetsdLibraryInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryInternalServiceProtocol>

 {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_assetCountInManagedObjectContext:(id)arg0 forSyncedAssets:(BOOL)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg0 connectionAuthorization:(id)arg1 ;
-(void)applyGraphUpdates:(id)arg0 supportingData:(id)arg1 reply:(id)arg2 ;
-(void)applySearchIndexUpdates:(id)arg0 reply:(id)arg1 ;
-(void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
-(void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(id)arg0 ;
-(void)deleteiTunesSyncedContentWithCompletionHandler:(id)arg0 ;
-(void)forceRunBackgroundJobsOnLibraryPath:(id)arg0 priority:(int)arg1 completionHandler:(id)arg2 ;
-(void)getAssetCountsWithReply:(id)arg0 ;
-(void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(id)arg0 ;
-(void)getBackgroundJobServiceStateWithReply:(id)arg0 ;
-(void)getBackgroundJobServiceStatusCenterDumpWithReply:(id)arg0 ;
-(void)getLibrarySizesFromDB:(BOOL)arg0 reply:(id)arg1 ;
-(void)getSearchIndexProgressWithReply:(id)arg0 ;
-(void)getSizeOfResourcesToUploadByCPLWithReply:(id)arg0 ;
-(void)invalidateBehavioralScoreOnAllAssetsWithReply:(id)arg0 ;
-(void)invalidateReverseLocationDataOnAllAssetsWithReply:(id)arg0 ;
-(void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)arg0 reply:(id)arg1 ;
-(void)metricsForLibraryAtURL:(id)arg0 reply:(id)arg1 ;
-(void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg0 reply:(id)arg1 ;
-(void)reloadMomentGenerationOptions;
-(void)repairMemoriesWithUUIDs:(id)arg0 reply:(id)arg1 ;
-(void)resetLimitedLibraryAccessForApplication:(id)arg0 completionHandler:(id)arg1 ;
-(void)setAssetKeywords:(id)arg0 forAssetUUID:(id)arg1 reply:(id)arg2 ;
-(void)setFetchFilterWithAssets:(id)arg0 forApplication:(id)arg1 withAuditToken:(struct ? )arg2 completionHandler:(id)arg3 ;
-(void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(void)updateAssetLocationDataWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)waitForSearchIndexExistenceWithReply:(id)arg0 ;


@end


#endif