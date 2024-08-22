// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITREMOVESHARINGSUGGESTIONASSETCOLLECTIONACTIONPERFORMER_H
#define PXPHOTOKITREMOVESHARINGSUGGESTIONASSETCOLLECTIONACTIONPERFORMER_H



#import "PXPhotoKitAssetCollectionActionPerformer.h"

@interface PXPhotoKitRemoveSharingSuggestionAssetCollectionActionPerformer : PXPhotoKitAssetCollectionActionPerformer



+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)createAlertActionWithTitle:(id)arg0 handler:(id)arg1 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)createStandardActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(void)performBackgroundTask;


@end


#endif