// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSSERVER_H
#define PRSSERVER_H

@class BSServiceConnectionListener, NSMutableArray, NSString;
@protocol PRSClientToServerInterface, BSServiceConnectionListenerDelegate, OS_dispatch_queue, PRSServerDelegate;

#import <Foundation/Foundation.h>


@interface PRSServer : NSObject <PRSClientToServerInterface, BSServiceConnectionListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRSServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_queue_addConnection:(id)arg0 ;
-(void)_queue_removeConnection:(id)arg0 ;
-(void)activate;
-(void)associateConfigurationMatchingUUID:(id)arg0 focusModeActivityUUID:(id)arg1 completion:(id)arg2 ;
-(void)clearMigrationFlags:(id)arg0 ;
-(void)createPosterConfigurationForProviderIdentifier:(id)arg0 posterDescriptorIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)deleteDataStoreWithCompletion:(id)arg0 ;
-(void)deletePosterConfigurationsMatchingUUID:(id)arg0 completion:(id)arg1 ;
-(void)deletePosterDescriptorsForExtension:(id)arg0 completion:(id)arg1 ;
-(void)deleteSnapshots:(id)arg0 completion:(id)arg1 ;
-(void)deleteTransientDataWithCompletion:(id)arg0 ;
-(void)exportPosterConfigurationMatchingUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchActiveConfiguration:(id)arg0 ;
-(void)fetchActivePosterConfiguration:(id)arg0 ;
-(void)fetchAssociatedHomeScreenPosterConfigurationUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchContentCutoutBoundsForPosterConfiguration:(id)arg0 orientation:(id)arg1 completion:(id)arg2 ;
-(void)fetchContentObstructionBoundsForPosterConfiguration:(id)arg0 orientation:(id)arg1 completion:(id)arg2 ;
-(void)fetchExtensionIdentifiersWithCompletion:(id)arg0 ;
-(void)fetchFocusUUIDForConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)fetchGallery:(id)arg0 ;
-(void)fetchLimitedOcclusionBoundsForPosterConfiguration:(id)arg0 orientation:(id)arg1 completion:(id)arg2 ;
-(void)fetchMaximalContentCutoutBoundsForOrientation:(id)arg0 completion:(id)arg1 ;
-(void)fetchObscurableBoundsForPosterConfiguration:(id)arg0 orientation:(id)arg1 completion:(id)arg2 ;
-(void)fetchPosterConfigurations:(id)arg0 ;
-(void)fetchPosterDescriptorsForExtension:(id)arg0 completion:(id)arg1 ;
-(void)fetchPosterSnapshotsWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)fetchRuntimeAssertionState:(id)arg0 ;
-(void)fetchSelectedConfiguration:(id)arg0 ;
-(void)fetchStaticPosterDescriptorsForExtension:(id)arg0 completion:(id)arg1 ;
-(void)gatherDataFreshnessState:(id)arg0 ;
-(void)importPosterConfigurationFromArchiveData:(id)arg0 completion:(id)arg1 ;
-(void)ingestSnapshotCollection:(id)arg0 forPosterConfigurationUUID:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)notifyFocusModeDidChange:(id)arg0 completion:(id)arg1 ;
-(void)notifyPosterBoardOfApplicationUpdatesWithCompletion:(id)arg0 ;
-(void)overnightUpdateWithCompletion:(id)arg0 ;
-(void)prewarmWithCompletion:(id)arg0 ;
-(void)pushPosterGalleryUpdate:(id)arg0 completion:(id)arg1 ;
-(void)pushToProactiveWithCompletion:(id)arg0 ;
-(void)refreshPosterConfigurationMatchingUUID:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)refreshPosterDescriptorsForExtension:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)refreshSnapshotForGalleryItemsMatchingDescriptorIdentifier:(id)arg0 extensionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)refreshSnapshotForPosterConfigurationMatchUUID:(id)arg0 completion:(id)arg1 ;
-(void)removeAllFocusConfigurationsMatchingFocusUUID:(id)arg0 completion:(id)arg1 ;
-(void)retrieveGallery:(id)arg0 ;
-(void)runMigration:(id)arg0 completion:(id)arg1 ;
-(void)updatePosterConfigurationMatchingUUID:(id)arg0 updates:(id)arg1 completion:(id)arg2 ;
-(void)updateToSelectedConfigurationMatchingUUID:(id)arg0 completion:(id)arg1 ;


@end


#endif