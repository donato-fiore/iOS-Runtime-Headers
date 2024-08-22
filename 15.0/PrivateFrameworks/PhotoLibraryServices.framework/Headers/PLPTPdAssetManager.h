// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPTPDASSETMANAGER_H
#define PLPTPDASSETMANAGER_H

@class NSSet, NSMutableSet, NSString, NSFileManager, PFMediaCapabilities;
@protocol PLManagedObjectContextPTPNotificationDelegate, PhotoLibraryPTPDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLPTPdFormatConversionManager.h"
#import "PLPhotoLibrary.h"

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate>

 {
    NSObject<PhotoLibraryPTPDelegate> *_delegate;
    PLPTPdFormatConversionManager *_formatConversionManager;
    NSSet *_availableAssetIDs;
    PLPhotoLibrary *_photoLibrary;
    int _libraryStatus;
    NSMutableSet *_ptpDeletedAssets;
    NSObject<OS_dispatch_queue> *availableAssetsQueue;
}


@property (readonly, nonatomic) NSInteger cplStorageState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PhotoLibraryPTPDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSFileManager *fileManager; // ivar: fileManager
@property (readonly) NSUInteger hash;
@property (retain) PFMediaCapabilities *peerMediaCapabilities;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;


-(BOOL)libraryIsAvailable;
-(BOOL)ptpCanDeleteFiles;
-(BOOL)ptpDeletePhotoForAssetHandle:(id)arg0 ;
-(BOOL)requestedSize:(struct CGSize )arg0 fitsInSourceSize:(struct CGSize )arg1 ;
-(id)_allAssetObjectIDs;
-(id)_dataByJPEGCompressingCGImage:(struct CGImage *)arg0 orSource:(struct CGImageSource *)arg1 toLengthLimit:(NSInteger)arg2 initialCompressionQuality:(float)arg3 size:(struct CGSize )arg4 orientation:(NSInteger)arg5 ;
-(id)_dataForThumbnailImageSource:(struct CGImageSource *)arg0 options:(id)arg1 originalOrientation:(NSInteger)arg2 ;
-(id)_generateThumbnailForAsset:(id)arg0 fromOriginalImagePath:(id)arg1 size:(struct CGSize )arg2 compressionQuality:(float)arg3 ;
-(id)_performResultBlockAndWait:(id)arg0 ;
-(id)_performResultTransactionAndWait:(id)arg0 ;
-(id)_ptpAssetEnumeratorAllAssets;
-(id)_ptpAssetsForAssetWithID:(id)arg0 ;
-(id)_ptpThumbnailForFullSizeRenderWithAssetID:(id)arg0 size:(struct CGSize )arg1 compressionQuality:(float)arg2 ;
-(id)_ptpThumbnailForOriginalVideoWithAssetID:(id)arg0 size:(struct CGSize )arg1 compressionQuality:(float)arg2 ;
-(id)_ptpThumbnailForOriginalWithAssetID:(id)arg0 size:(struct CGSize )arg1 compressionQuality:(float)arg2 ;
-(id)_ptpThumbnailForPenultimateImageWithAssetID:(id)arg0 size:(struct CGSize )arg1 compressionQuality:(float)arg2 ;
-(id)_ptpThumbnailForSpatialOverCaptureImageWithAssetID:(id)arg0 size:(struct CGSize )arg1 compressionQuality:(float)arg2 ;
-(id)_ptpThumbnailForSpatialOverCaptureVideoWithAssetID:(id)arg0 size:(struct CGSize )arg1 compressionQuality:(float)arg2 ;
-(id)adjustmentFilePathForAsset:(id)arg0 requiresTemporaryFileCleanup:(*BOOL)arg1 ;
-(id)assetReaderForFormatConvertedPTPAsset:(id)arg0 ofManagedAsset:(id)arg1 path:(id)arg2 ;
-(id)dataForThumbnailFileAtPath:(id)arg0 rotatedToOrientation:(NSInteger)arg1 size:(struct CGSize )arg2 compressionQuality:(float)arg3 ;
-(id)embeddedThumbnailDataForAsset:(id)arg0 requestedSize:(struct CGSize )arg1 shouldScale:(BOOL)arg2 ;
-(id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg0 ;
-(id)init;
-(id)managedObjectContext;
-(id)ptpAssetReaderForAssetHandle:(id)arg0 ;
-(id)ptpImagePropertiesForAssetHandle:(id)arg0 ;
-(id)ptpThumbnailForAssetHandle:(id)arg0 size:(struct CGSize )arg1 compressionQuality:(float)arg2 ;
-(struct CGSize )_validateSize:(struct CGSize )arg0 ;
-(struct CGSize )masterThumbSize;
-(void)_expungeAsset:(id)arg0 withReason:(id)arg1 ;
-(void)_inverseAffineTransformForExifOrientation:(NSInteger)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_logData:(id)arg0 withPrefix:(id)arg1 scaledOrientation:(NSInteger)arg2 originalOrientation:(NSInteger)arg3 ;
-(void)_performBlockAndWait:(id)arg0 ;
-(void)_performTransactionAndWait:(id)arg0 ;
-(void)_registerForFirstUnlockNotification;
-(void)beginSignpostForThumbnailGenerationForAsset:(id)arg0 inputResourceTypeLabel:(id)arg1 ;
-(void)dealloc;
-(void)endSignpostForThumbnailGenerationForAsset:(id)arg0 ;
-(void)handlePhotoLibraryAvailableNotification;
-(void)managedObjectContext:(id)arg0 libraryChangedWithInsertedAssetIDs:(id)arg1 deletedAssetIDs:(id)arg2 changedAssetIDs:(id)arg3 adjustedAssetIDs:(id)arg4 ;
-(void)ptpEnumerateAllAssetsUsingBlock:(id)arg0 ;
-(void)ptpEnumerateAssetsWithPrimaryKeys:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif