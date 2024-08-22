// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDLIBRARYSERVICE_H
#define PLASSETSDLIBRARYSERVICE_H

@class NSMutableArray, NSString;
@protocol PLAssetsdLibraryServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"
#import "PLXPCPhotoLibraryStoreContainer.h"
#import "PLAssetsdConnectionAuthorization.h"
#import "PLPhotoLibraryBundleController.h"
#import "PLAssetsdService.h"

@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryServiceProtocol>

 {
    PLXPCPhotoLibraryStoreContainer *_xpcPhotoLibraryStoreContainer;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSMutableArray *_preRunningProgressFollowers;
    NSMutableArray *_postRunningProgressFollowers;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLAssetsdService *_assetsdService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)requiredLibraryServicesStateForURL:(id)arg0 ;
-(id)_postRunningProgress;
-(id)_preRunningProgress;
-(id)_returnValueForProgress:(id)arg0 addTo:(id)arg1 ;
-(id)copyAssetsWithUuids:(id)arg0 fromLibraryURL:(id)arg1 transferOptions:(id)arg2 reply:(id)arg3 ;
-(id)importFileSystemAssetsWithReason:(id)arg0 force:(BOOL)arg1 reply:(id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg0 bundleController:(id)arg1 connectionAuthorization:(id)arg2 assetsdService:(id)arg3 ;
-(id)libraryBundle;
-(id)newLibraryOpener;
-(id)postOpenProgressWithReply:(id)arg0 ;
-(id)sandboxExtensionsByPath;
-(id)upgradePhotoLibraryDatabaseWithOptions:(id)arg0 reply:(id)arg1 ;
// -(void)_sendClientReply:(id)arg0 sandboxExtensionsByPath:(unk)arg1 error:(id)arg2  ;
-(void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)arg0 reply:(id)arg1 ;
-(void)createPhotoLibraryDatabaseWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)getCurrentModelVersionWithReply:(id)arg0 ;
-(void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(id)arg0 ;
-(void)isLibraryReadyForImportWithReply:(id)arg0 ;
-(void)launchAssetsd;
-(void)openPhotoLibraryDatabaseWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)pendingEventsForRequest:(id)arg0 reply:(id)arg1 ;
-(void)publishRemoteChangeEvent:(id)arg0 delayedSaveActionsDetail:(id)arg1 reply:(id)arg2 ;
-(void)recoverFromCrashIfNeeded;
-(void)repairSingletonObjectsWithReply:(id)arg0 ;
-(void)resetFaceAnalysisWithResetLevel:(NSInteger)arg0 withReply:(id)arg1 ;
-(void)updateThumbnailsForPhotos:(id)arg0 assignNewIndex:(BOOL)arg1 forceRefresh:(BOOL)arg2 reply:(id)arg3 ;


@end


#endif