// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSHAREDSTREAMSDATASTORE_H
#define PLSHAREDSTREAMSDATASTORE_H

@class NSString, PLPhotoLibraryPathManager;
@protocol PLResourceDataStore;


#import "PLResourceDataStore.h"

@interface PLSharedStreamsDataStore : PLResourceDataStore <PLResourceDataStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;


+(id)supportedRecipes;
+(unsigned int)_masterThumbRecipeID;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg0 ;
+(unsigned short)storeClassID;
-(BOOL)_isDerivativeForSharedStreamsType:(unsigned int)arg0 ;
-(BOOL)canStoreExternalResource:(id)arg0 ;
-(BOOL)canStreamResource:(id)arg0 ;
-(BOOL)dataStoreSubtypeIsDownloadable:(NSInteger)arg0 ;
-(BOOL)storeExternalResource:(id)arg0 forAsset:(id)arg1 inContext:(id)arg2 options:(id)arg3 error:(*id)arg4 resultingResource:(*id)arg5 ;
-(BOOL)videoResource:(id)arg0 matchesOrExceedsQualityLevel:(unsigned int)arg1 ;
-(id)_sharedStreamsExternalResourceForAsset:(id)arg0 album:(id)arg1 type:(unsigned int)arg2 ;
-(id)_utiStringForAsset:(id)arg0 type:(unsigned int)arg1 ;
-(id)descriptionForSubtype:(NSInteger)arg0 ;
-(id)keyFromKeyStruct:(*void)arg0 ;
-(id)name;
-(id)requestLocalAvailabilityChange:(short)arg0 forResource:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)requiredExternalResourcesForMigratingOrImportingAsset:(id)arg0 ;
-(id)resourceDataForKey:(id)arg0 assetID:(id)arg1 ;
-(id)resourceURLForKey:(id)arg0 assetID:(id)arg1 ;
-(id)updateDerivativeResourcesForAsset:(id)arg0 forLifecycleEvent:(unsigned int)arg1 ;
-(id)virtualResourcesForAsset:(id)arg0 ;
-(short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned int)arg0 ;
-(short)_localAvailabilityForAsset:(id)arg0 album:(id)arg1 type:(unsigned int)arg2 ;
-(short)_remoteAvailabilityForType:(unsigned int)arg0 ;
-(unsigned int)_mainResourceTypeForAsset:(id)arg0 ;
-(void)_prepareForDownloadNotification:(id)arg0 atFileURL:(id)arg1 completion:(id)arg2 ;
-(void)requestStreamingURLForResource:(id)arg0 asset:(id)arg1 intent:(NSUInteger)arg2 timeRange:(struct ? )arg3 inContext:(id)arg4 clientBundleID:(id)arg5 completion:(id)arg6 ;


@end


#endif