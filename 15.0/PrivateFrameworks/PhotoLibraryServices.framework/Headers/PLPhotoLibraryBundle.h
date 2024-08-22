// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPHOTOLIBRARYBUNDLE_H
#define PLPHOTOLIBRARYBUNDLE_H

@class NSError, PLAtomicObject, PLLazyObject, NSNumber, PLAssetsdClient, NSArray, NSURL, PLPhotoLibraryPathManager, PFTimeZoneLookup;
@protocol PLFileSystemVolumeUnmountObserver;

#import <Foundation/Foundation.h>

#import "PLFileSystemVolumeUnmountMonitor.h"
#import "PLPhotoLibraryBundleController.h"
#import "PLChangeHandlingContainer.h"
#import "PLClientSandboxExtensionCache.h"
#import "PLConstraintsDirector.h"
#import "PLEmailAddressManager.h"
#import "PLIndicatorFileCoordinator.h"
#import "PLLibraryServicesManager.h"
#import "PLPersistentContainer.h"
#import "PLPersonInfoManager.h"
#import "PLPhotoAnalysisServiceClient.h"
#import "PLPhotoKitVariationCache.h"

@interface PLPhotoLibraryBundle : NSObject <PLFileSystemVolumeUnmountObserver>

 {
    os_unfair_lock_s _lock;
    NSError *_shutdownReason;
    PLAtomicObject *_atomicPhotoLibraries;
    PLLazyObject *_lazyPersistentContainer;
    PLLazyObject *_lazyIndicatorFileCoordinator;
    PLLazyObject *_lazyChangeHandlingContainer;
    PLLazyObject *_lazyAssetsdClient;
    PLLazyObject *_lazyLibraryServicesManager;
    PLLazyObject *_lazyVariationCache;
    PLLazyObject *_lazyPersonInfoManager;
    PLLazyObject *_lazyEmailAddressManager;
    PLLazyObject *_lazyBoundAssetsdServicesTable;
    PLLazyObject *_lazyPhotoAnalysisServiceClient;
    PLLazyObject *_lazyConstraintsDirector;
    PLLazyObject *_lazyTimeZoneLookup;
    NSNumber *_sqliteErrorIndicatorFileExists;
    os_unfair_lock_s _sqliteErrorIndicatorLock;
    PLFileSystemVolumeUnmountMonitor *_volumeUnmountMonitor;
}


@property (readonly) PLAssetsdClient *assetsdClient;
@property (readonly) NSArray *boundAssetsdServices;
@property (readonly, weak, nonatomic) PLPhotoLibraryBundleController *bundleController; // ivar: _bundleController
@property (readonly) PLChangeHandlingContainer *changeHandlingContainer;
@property (readonly) PLClientSandboxExtensionCache *clientSandboxExtensionCache;
@property (readonly) PLConstraintsDirector *constraintsDirector;
@property (readonly) PLEmailAddressManager *emailAddressManager;
@property (readonly) PLIndicatorFileCoordinator *indicatorFileCoordinator;
@property (readonly) PLLibraryServicesManager *libraryServicesManager;
@property (readonly, copy) NSURL *libraryURL; // ivar: _libraryURL
@property (readonly) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property (readonly) PLPersistentContainer *persistentContainer;
@property (readonly) PLPersonInfoManager *personInfoManager;
@property (readonly) PLPhotoAnalysisServiceClient *photoAnalysisServiceClient;
@property (readonly, copy) NSError *shutdownReason;
@property (readonly) PFTimeZoneLookup *timeZoneLookup;
@property (readonly) PLPhotoKitVariationCache *variationCache;


-(BOOL)bindAssetsdService:(id)arg0 error:(*id)arg1 ;
-(BOOL)isSystemPhotoLibrary;
-(BOOL)registerPLPhotoLibrary:(id)arg0 ;
-(BOOL)sqliteErrorIndicatorFileExists;
-(id)description;
-(id)initWithLibraryURL:(id)arg0 bundleController:(id)arg1 ;
-(id)newAssetsdClient;
-(id)newBoundAssetsdServicesTable;
-(id)newChangeHandlingContainer;
-(id)newChangePublisher;
-(id)newLibraryServicesManager;
-(id)transferAssets:(id)arg0 toBundle:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)_invalidateChangeHandlingContainer;
-(void)_invalidateClientSandboxExtensionCache;
-(void)_invalidatePersistentContainer;
-(void)_invalidatePhotoAnalysisServiceClient;
-(void)close;
-(void)dealloc;
-(void)distributeChangesSinceLastCheckpoint;
-(void)initializeChangeHandling;
-(void)setCloudPhotoLibraryEnabled:(BOOL)arg0 ;
-(void)setPhotoStreamEnabled:(BOOL)arg0 ;
-(void)setSharedAlbumEnabled:(BOOL)arg0 ;
-(void)shutdownWithReason:(id)arg0 ;
-(void)touch;
-(void)unbindAssetsdService:(id)arg0 ;
-(void)volumeWillUnmount:(id)arg0 ;


@end


#endif