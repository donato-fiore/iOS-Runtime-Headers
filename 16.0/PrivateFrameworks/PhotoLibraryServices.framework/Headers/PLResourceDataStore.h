// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLRESOURCEDATASTORE_H
#define PLRESOURCEDATASTORE_H

@class NSString, PLPhotoLibraryPathManager;
@protocol PLResourceDataStore;

#import <Foundation/Foundation.h>


@interface PLResourceDataStore : NSObject <PLResourceDataStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property (readonly) Class superclass;


+(BOOL)isMasterThumbRecipeID:(unsigned int)arg0 ;
+(BOOL)keyDataIsValid:(id)arg0 ;
+(id)supportedRecipes;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg0 ;
+(unsigned short)storeClassID;
-(BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)arg0 ;
-(BOOL)canStoreExternalResource:(id)arg0 ;
-(BOOL)canStreamResource:(id)arg0 ;
-(BOOL)dataStoreSubtypeIsDownloadable:(NSInteger)arg0 ;
-(BOOL)storeExternalResource:(id)arg0 forAsset:(id)arg1 options:(id)arg2 error:(*id)arg3 resultingResource:(*id)arg4 ;
-(BOOL)supportsTimeRange;
-(BOOL)verifyAndFixLocalAvailabilityForResource:(id)arg0 ;
-(BOOL)videoResource:(id)arg0 matchesOrExceedsQualityLevel:(unsigned int)arg1 ;
-(id)descriptionForSubtype:(NSInteger)arg0 ;
-(id)guessUTIForExternalResource:(id)arg0 forAssetKind:(short)arg1 ;
-(id)initWithPathManager:(id)arg0 ;
-(id)keyFromKeyStruct:(*void)arg0 ;
-(id)name;
-(id)requestLocalAvailabilityChange:(short)arg0 forResource:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)resourceDataForKey:(id)arg0 assetID:(id)arg1 ;
-(id)resourceURLForKey:(id)arg0 assetID:(id)arg1 ;
-(id)updateDerivativeResourcesForAsset:(id)arg0 forLifecycleEvent:(unsigned int)arg1 ;
-(id)virtualResourcesForAsset:(id)arg0 ;
-(void)markAsynchronousLocalRenderAsOptionalForProgress:(id)arg0 ;
-(void)requestStreamingURLForResource:(id)arg0 asset:(id)arg1 intent:(NSUInteger)arg2 timeRange:(struct ? )arg3 streamingHints:(id)arg4 inContext:(id)arg5 clientBundleID:(id)arg6 completion:(id)arg7 ;


@end


#endif