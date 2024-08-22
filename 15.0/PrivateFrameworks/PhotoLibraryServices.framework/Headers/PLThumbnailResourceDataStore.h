// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTHUMBNAILRESOURCEDATASTORE_H
#define PLTHUMBNAILRESOURCEDATASTORE_H

@class PLLazyObject, NSArray, NSString, PLPhotoLibraryPathManager;
@protocol PLResourceDataStore, OS_dispatch_source, NSObject;


#import "PLResourceDataStore.h"
#import "PLThumbnailIndexes.h"
#import "PLThumbnailManager.h"

@interface PLThumbnailResourceDataStore : PLResourceDataStore <PLResourceDataStore>

 {
    PLLazyObject *_lazyThumbnailManager;
    PLLazyObject *_lazyThumbnailFormats;
    PLLazyObject *_lazyThumbnailFormatsByTableType;
    NSArray *_overridenThumbnailFormats;
    os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_source> *_configWatcherSource;
    id<NSObject> *_clientBackgroundTransitionObserverToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;
@property (readonly) NSArray *thumbnailFormats;
@property (readonly) PLThumbnailIndexes *thumbnailIndexes; // ivar: _thumbnailIndexes
@property (readonly) PLThumbnailManager *thumbnailManager;


+(BOOL)resourceIsSquare:(id)arg0 ;
+(id)_tableFormatsByTableTypeFromFormats:(id)arg0 ;
+(id)supportedRecipes;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg0 ;
+(unsigned short)storeClassID;
-(BOOL)canStoreExternalResource:(id)arg0 ;
-(BOOL)storeExternalResource:(id)arg0 forAsset:(id)arg1 inContext:(id)arg2 options:(id)arg3 error:(*id)arg4 resultingResource:(*id)arg5 ;
-(BOOL)thumbnailForKey:(id)arg0 matchesAssetID:(id)arg1 ;
-(BOOL)videoResource:(id)arg0 matchesOrExceedsQualityLevel:(unsigned int)arg1 ;
-(id)_makeThumbnailManager;
-(id)descriptionForSubtype:(NSInteger)arg0 ;
-(id)initWithPathManager:(id)arg0 ;
-(id)keyFromKeyStruct:(*void)arg0 ;
-(id)name;
-(id)requestLocalAvailabilityChange:(short)arg0 forResource:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)resourceDataForKey:(id)arg0 assetID:(id)arg1 ;
-(id)resourceURLForKey:(id)arg0 ;
-(id)updateDerivativeResourcesForAsset:(id)arg0 forLifecycleEvent:(unsigned int)arg1 ;
-(id)virtualResourcesForAsset:(id)arg0 ;
-(struct CGImage *)newTableThumbImageForKey:(id)arg0 ;
-(struct PLImageTableEntryFooter_s *)_tableFooterForKey:(id)arg0 ;
-(void)_installBackgroundWatcher;
-(void)_startWatchingThumbnailConfigFile;
-(void)_stopWatchingThumbnailConfigFile;
-(void)dealloc;
-(void)invalidateThumbnailManager;
-(void)overrideThumbnailFormatsWithFormatIDs:(id)arg0 ;


@end


#endif