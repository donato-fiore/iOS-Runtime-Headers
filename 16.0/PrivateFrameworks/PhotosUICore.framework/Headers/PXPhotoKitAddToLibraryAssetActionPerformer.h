// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITADDTOLIBRARYASSETACTIONPERFORMER_H
#define PXPHOTOKITADDTOLIBRARYASSETACTIONPERFORMER_H



#import "PXPhotoKitAssetActionPerformer.h"

@interface PXPhotoKitAddToLibraryAssetActionPerformer : PXPhotoKitAssetActionPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
-(void)_simulateImportForAssetReference:(id)arg0 assetImportStatusManager:(id)arg1 ;
-(void)importAssets:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif