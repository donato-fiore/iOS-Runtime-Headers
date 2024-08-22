// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDSYNCSERVICE_H
#define PLASSETSDSYNCSERVICE_H

@class PLXPCTransaction, NSString;
@protocol PLAssetsdSyncServiceProtocol, OS_dispatch_queue, OS_dispatch_group;


#import "PLAbstractLibraryServicesManagerService.h"
#import "PLLibraryServicesManager.h"

@interface PLAssetsdSyncService : PLAbstractLibraryServicesManagerService <PLAssetsdSyncServiceProtocol>

 {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_updateGroup;
    PLXPCTransaction *_libraryTransaction;
    PLLibraryServicesManager *_libraryServicesManager;
    BOOL _didFinalizeRestore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_fileRestoreExclusionPaths;
-(id)_readRestoreAlbumMetadataForAlbum:(id)arg0 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(void)_addAsset:(id)arg0 toAlbumsForUUID:(id)arg1 inLibrary:(id)arg2 ;
-(void)_cleanupAlbumMetadataAsideFilesAfterRestore;
-(void)_finalizeOTARestoreEndedAndRecreateAlbums:(BOOL)arg0 ;
-(void)_linkPathsAside:(id)arg0 ;
-(void)_recoverAsideFiles:(id)arg0 ;
-(void)_updatePendingCountForMissingAsset:(id)arg0 inLibrary:(id)arg1 ;
-(void)_updateRestoredAssetWithUUID:(id)arg0 paths:(id)arg1 fixAddedDate:(BOOL)arg2 ;
-(void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg0 ;
-(void)updateRestoredAssetWithUUID:(id)arg0 paths:(id)arg1 fixAddedDate:(BOOL)arg2 ;


@end


#endif