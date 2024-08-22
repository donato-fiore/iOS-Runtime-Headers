// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPXPHOTOKITREMOVEASSETACTIONPERFORMER_H
#define PUPXPHOTOKITREMOVEASSETACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer;



@interface PUPXPhotoKitRemoveAssetActionPerformer : PXPhotoKitAssetActionPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 selectionSnapshot:(id)arg1 person:(id)arg2 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif