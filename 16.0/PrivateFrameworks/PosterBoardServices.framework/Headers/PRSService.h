// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSSERVICE_H
#define PRSSERVICE_H

@class BSServiceConnection<BSServiceConnectionClient>;

#import <Foundation/Foundation.h>


@interface PRSService : NSObject {
    BSServiceConnection<BSServiceConnectionClient> *_serviceConnection;
}




-(id)_serviceInterfaceWithError:(*id)arg0 ;
-(id)init;
-(id)serviceNotificationCenterWithError:(*id)arg0 ;
-(void)_refreshPosterDescriptorsForExtension:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)_selectConfigurationAndRefreshSnapshot:(id)arg0 completion:(id)arg1 ;
-(void)associateConfigurationMatchingUUID:(id)arg0 focusModeActivityUUID:(id)arg1 completion:(id)arg2 ;
-(void)clearMigrationFlags:(id)arg0 ;
-(void)createAndSelectLegacyPosterConfigurationIfNeededWithCompletion:(id)arg0 ;
-(void)createPosterConfigurationForProviderIdentifier:(id)arg0 posterDescriptorIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)deleteDataStoreWithCompletion:(id)arg0 ;
-(void)deletePosterConfigurationsMatchingUUID:(id)arg0 completion:(id)arg1 ;
-(void)deletePosterDescriptorsForExtension:(id)arg0 completion:(id)arg1 ;
-(void)deleteSnapshots:(BOOL)arg0 completion:(id)arg1 ;
-(void)deleteTransientDataWithCompletion:(id)arg0 ;
-(void)exportPosterConfigurationMatchingUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchActiveConfiguration:(id)arg0 ;
-(void)fetchActivePosterConfiguration:(id)arg0 ;
-(void)fetchAssociatedHomeScreenPosterConfigurationUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchContentCutoutBoundsForActivePosterWithOrientation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchContentCutoutBoundsForPosterConfiguration:(id)arg0 orientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)fetchContentObstructionBoundsForActivePosterWithOrientation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchContentObstructionBoundsForPosterConfiguration:(id)arg0 orientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)fetchExtensionIdentifiersWithCompletion:(id)arg0 ;
-(void)fetchFocusUUIDForConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)fetchGallery:(id)arg0 ;
-(void)fetchLimitedOcclusionBoundsForPosterConfiguration:(id)arg0 orientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)fetchMaximalContentCutoutBoundsForOrientation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchObscurableBoundsForPosterConfiguration:(id)arg0 orientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)fetchPosterConfigurations:(id)arg0 ;
-(void)fetchPosterConfigurationsForExtension:(id)arg0 completion:(id)arg1 ;
-(void)fetchPosterDescriptorsForExtension:(id)arg0 completion:(id)arg1 ;
-(void)fetchPosterSnapshotsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)fetchRuntimeAssertionState:(id)arg0 ;
-(void)fetchSelectedConfiguration:(id)arg0 ;
-(void)fetchStaticPosterDescriptorsForExtension:(id)arg0 completion:(id)arg1 ;
-(void)gatherDataFreshnessState:(id)arg0 ;
-(void)importPosterConfigurationFromArchiveData:(id)arg0 completion:(id)arg1 ;
-(void)ingestSnapshotCollection:(id)arg0 forPosterConfiguration:(id)arg1 completion:(id)arg2 ;
-(void)notifyFocusModeDidChange:(id)arg0 completion:(id)arg1 ;
-(void)notifyPosterBoardOfApplicationUpdatesWithCompletion:(id)arg0 ;
-(void)overnightUpdateWithCompletion:(id)arg0 ;
-(void)prewarmWithCompletion:(id)arg0 ;
-(void)pushPosterGalleryUpdate:(id)arg0 completion:(id)arg1 ;
-(void)pushToProactiveWithCompletion:(id)arg0 ;
-(void)refreshPosterConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)refreshPosterConfiguration:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)refreshPosterConfigurationMatchingUUID:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)refreshPosterDescriptorsForExtension:(id)arg0 completion:(id)arg1 ;
-(void)refreshPosterDescriptorsForExtension:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)refreshSnapshotForGalleryItemsMatchingDescriptorIdentifier:(id)arg0 extensionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)refreshSnapshotForPosterConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)refreshSnapshotForPosterConfigurationMatchingUUID:(id)arg0 completion:(id)arg1 ;
-(void)removeAllFocusConfigurationsMatchingFocusUUID:(id)arg0 completion:(id)arg1 ;
-(void)retrieveGallery:(id)arg0 ;
-(void)runMigration:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateToSelectedConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)updateToSelectedConfigurationMatchingUUID:(id)arg0 completion:(id)arg1 ;


@end


#endif