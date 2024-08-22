// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSYNDICATIONRESOURCEDATASTORE_H
#define PLSYNDICATIONRESOURCEDATASTORE_H

@class PAImageConversionServiceClient, PAVideoConversionServiceClient, NSString, PLPhotoLibraryPathManager;
@protocol PLSyndicationSanitizedResourceGeneratorDelegate, PLResourceDataStore;


#import "PLResourceDataStore.h"
#import "PLPhotoLibraryBundle.h"

@interface PLSyndicationResourceDataStore : PLResourceDataStore <PLSyndicationSanitizedResourceGeneratorDelegate, PLResourceDataStore>

 {
    PLPhotoLibraryBundle *_libraryBundle;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;


+(id)supportedRecipes;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg0 ;
+(unsigned short)storeClassID;
-(BOOL)_copyAndMarkAsLocallyAvailablePairedLivePhotoResourceForRequestedResource:(id)arg0 requestedVideoComplement:(BOOL)arg1 sourceURL:(id)arg2 error:(*id)arg3 ;
-(BOOL)_copyAndMarkPurgeableItemAtURL:(id)arg0 toURL:(id)arg1 inode:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)_markResourceAsLocallyAvailableWithURL:(id)arg0 resource:(id)arg1 inode:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)arg0 ;
-(BOOL)canStoreExternalResource:(id)arg0 ;
-(BOOL)canStreamResource:(id)arg0 ;
-(BOOL)dataStoreSubtypeIsDownloadable:(NSInteger)arg0 ;
-(BOOL)storeExternalResource:(id)arg0 forAsset:(id)arg1 inContext:(id)arg2 options:(id)arg3 error:(*id)arg4 resultingResource:(*id)arg5 ;
-(BOOL)videoResource:(id)arg0 matchesOrExceedsQualityLevel:(unsigned int)arg1 ;
-(id)_getDestinationURLAndFixLocalAvailabilityIfNeededForResource:(id)arg0 isLocallyAvailable:(*BOOL)arg1 ;
-(id)_requestLocalAvailabilityChangeForSyndicationOriginalResource:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(id)descriptionForSubtype:(NSInteger)arg0 ;
-(id)imageConversionClientForResourceGenerator:(id)arg0 ;
-(id)keyFromKeyStruct:(*void)arg0 ;
-(id)metadataForResourceGenerator:(id)arg0 fromFileURL:(id)arg1 ;
-(id)name;
-(id)requestLocalAvailabilityChange:(short)arg0 forResource:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)resourceDataForKey:(id)arg0 assetID:(id)arg1 ;
-(id)resourceURLForKey:(id)arg0 assetID:(id)arg1 ;
-(id)updateDerivativeResourcesForAsset:(id)arg0 forLifecycleEvent:(unsigned int)arg1 ;
-(id)videoConversionClientForResourceGenerator:(id)arg0 ;
-(id)virtualResourcesForAsset:(id)arg0 ;
-(void)_provideFileURLAndUnwrapLivePhotoIfNeededForBundleID:(id)arg0 syndicationIdentifier:(id)arg1 isLivePhoto:(BOOL)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
-(void)markAsynchronousLocalRenderAsOptionalForProgress:(id)arg0 ;


@end


#endif