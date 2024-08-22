// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITSHOWINLIBRARYACTIONPERFORMER_H
#define PXPHOTOKITSHOWINLIBRARYACTIONPERFORMER_H



#import "PXPhotoKitAssetActionPerformer.h"

@interface PXPhotoKitShowInLibraryActionPerformer : PXPhotoKitAssetActionPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)_assetToRevealFromAsset:(id)arg0 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif