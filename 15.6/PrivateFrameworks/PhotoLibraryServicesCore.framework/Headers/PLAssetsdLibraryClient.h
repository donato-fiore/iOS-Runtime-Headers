// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDLIBRARYCLIENT_H
#define PLASSETSDLIBRARYCLIENT_H



#import "PLAssetsdBaseClient.h"
#import "PLAssetsdClientSandboxExtensions.h"

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient {
    uint8_t _isOpen;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
}


@property (readonly) BOOL isOpened;


-(BOOL)_consumeSandboxExtensions:(id)arg0 ;
-(BOOL)createPhotoLibraryDatabaseWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)isLibraryReadyForImportWithError:(*id)arg0 ;
-(BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(*id)arg0 error:(*id)arg1 ;
-(BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(*id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)synchronouslyImportFileSystemAssetsForce:(BOOL)arg0 withError:(*id)arg1 ;
-(BOOL)synchronouslyRepairSingletonObjectsWithError:(*id)arg0 ;
-(BOOL)synchronouslyUpdateThumbnailsForPhotos:(id)arg0 assignNewIndex:(BOOL)arg1 forceRefresh:(BOOL)arg2 error:(*id)arg3 ;
-(NSInteger)getCurrentModelVersion;
-(id)_assetURIStringsForPhotos:(id)arg0 ;
-(id)copyAssetsWithUuids:(id)arg0 fromLibraryURL:(id)arg1 transferOptions:(id)arg2 completionHandler:(id)arg3 ;
-(id)getPhotoLibraryStoreXPCListenerEndpoint;
-(id)importFileSystemAssetsForce:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(id)initWithQueue:(id)arg0 proxyCreating:(id)arg1 proxyGetter:(SEL)arg2 sandboxExtensions:(id)arg3 ;
-(id)upgradePhotoLibraryDatabaseWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)automaticallyDeleteEmptyAlbumWithObjectID:(id)arg0 completionHandler:(id)arg1 ;
-(void)launchAssetsd;
-(void)pendingEventsForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)publishRemoteChangeEvent:(id)arg0 delayedSaveActionsDetail:(id)arg1 completionHandler:(id)arg2 ;
-(void)recoverFromCrashIfNeeded;
-(void)resetFaceAnalysisWithResetLevel:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateThumbnailsForPhotos:(id)arg0 assignNewIndex:(BOOL)arg1 forceRefresh:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif