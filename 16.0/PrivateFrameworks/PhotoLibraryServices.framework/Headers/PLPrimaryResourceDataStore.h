// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPRIMARYRESOURCEDATASTORE_H
#define PLPRIMARYRESOURCEDATASTORE_H

@class NSMutableDictionary, PAImageConversionServiceClient, PAVideoConversionServiceClient, NSString, NSDictionary, PLPhotoLibraryPathManager;
@protocol PLResourceDataStore;


#import "PLResourceDataStore.h"
#import "PLDeferredPhotoFinalizer.h"
#import "PLCloudPhotoLibraryManager.h"
#import "PLPrimaryResourceDataStoreKeyHelper.h"

@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore>

 {
    NSMutableDictionary *_makeAvailableProgressByTaskIdentifier;
    os_unfair_lock_s _lock;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}


@property (readonly, getter=_cplManager) PLCloudPhotoLibraryManager *cplManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *keyHelperByBundleScope; // ivar: _keyHelperByBundleScope
@property (retain, nonatomic) PLPrimaryResourceDataStoreKeyHelper *mainScopeKeyHelper; // ivar: _mainScopeKeyHelper
@property (nonatomic) unsigned int masterThumbRecipeID; // ivar: _masterThumbRecipeID
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;


+(id)supportedRecipes;
+(unsigned int)currentDeviceMasterThumbRecipeID;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg0 ;
+(unsigned short)storeClassID;
-(BOOL)_installFinalizedInternalResourcesIfResourceUrlIsNotPresent:(id)arg0 taskIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)_isSystemLibraryStore;
-(BOOL)_taskIsPendingDownloadWithIdentifier:(id)arg0 ;
-(BOOL)_taskIsPendingPhotoFinalizationWithIdentifier:(id)arg0 ;
-(BOOL)bailOutOfVideoFinalizationForAsset:(id)arg0 taskIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)arg0 ;
-(BOOL)canStoreExternalResource:(id)arg0 ;
-(BOOL)canStreamResource:(id)arg0 ;
-(BOOL)dataStoreSubtypeIsDownloadable:(NSInteger)arg0 ;
-(BOOL)storeExternalResource:(id)arg0 forAsset:(id)arg1 options:(id)arg2 error:(*id)arg3 resultingResource:(*id)arg4 ;
-(BOOL)supportsTimeRange;
-(BOOL)videoResource:(id)arg0 matchesOrExceedsQualityLevel:(unsigned int)arg1 ;
-(id)_cplResourceIfDownloadIsAvailableForResource:(id)arg0 asset:(id)arg1 options:(id)arg2 ;
-(id)_deferredPhotoFinalizer;
-(id)_expectedFileURLForMasterThumbnailForAsset:(id)arg0 ;
-(id)_finalizeDeferredResource:(id)arg0 asset:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)_imageConversionServiceClient;
-(id)_makeResourceLocallyAvailable:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(id)_masterThumbnailVirtualResourceForAsset:(id)arg0 ;
-(id)_newProgressForTaskWithIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(id)_videoConversionServiceClient;
-(id)descriptionForSubtype:(NSInteger)arg0 ;
-(id)getClosestResourceMatchingCPLResourceType:(NSUInteger)arg0 version:(unsigned int)arg1 asset:(id)arg2 ;
-(id)initWithPathManager:(id)arg0 ;
-(id)keyFromKeyStruct:(*void)arg0 ;
-(id)keyHelperForBundleScope:(unsigned short)arg0 ;
-(id)name;
-(id)requestLocalAvailabilityChange:(short)arg0 forResource:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)resourceDataForKey:(id)arg0 assetID:(id)arg1 ;
-(id)resourceURLForKey:(id)arg0 assetID:(id)arg1 ;
-(id)updateDerivativeResourcesForAsset:(id)arg0 forLifecycleEvent:(unsigned int)arg1 ;
-(id)virtualResourcesForAsset:(id)arg0 ;
-(void)_cancelAvailabilityRequestWithTaskIdentifier:(id)arg0 ;
// -(void)_downloadCPLResource:(id)arg0 options:(id)arg1 taskDidBeginHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)_generateDeferredAdjustmentForAsset:(id)arg0 imageConversionServiceClient:(id)arg1 videoConversionServiceClient:(id)arg2 reason:(id)arg3 taskIdentifier:(id)arg4 cplResourceType:(NSUInteger)arg5 version:(unsigned int)arg6 completion:(id)arg7 ;
-(void)_transitionTaskToInflightWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)installFinalizedResourcesAndGenerateDeferredAdjustmentIfNecessary:(id)arg0 resourceID:(id)arg1 libraryServicesManager:(id)arg2 imageConversionServiceClient:(id)arg3 videoConversionServiceClient:(id)arg4 needsDeferredAdjustment:(BOOL)arg5 taskIdentifier:(id)arg6 mediaConversionRequestReason:(id)arg7 completion:(id)arg8 ;
-(void)markAsynchronousLocalRenderAsOptionalForProgress:(id)arg0 ;
-(void)requestStreamingURLForResource:(id)arg0 asset:(id)arg1 intent:(NSUInteger)arg2 timeRange:(struct ? )arg3 streamingHints:(id)arg4 inContext:(id)arg5 clientBundleID:(id)arg6 completion:(id)arg7 ;
-(void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg0 givenFilePath:(id)arg1 ;


@end


#endif