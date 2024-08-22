// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXPHOTOKITREVERTADJUSTMENTSACTIONPERFORMER_H
#define PUPXPHOTOKITREVERTADJUSTMENTSACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer;



@interface PUPXPhotoKitRevertAdjustmentsActionPerformer : PXPhotoKitAssetActionPerformer



+(BOOL)_canRevertOnAsset:(id)arg0 fast:(BOOL)arg1 ;
+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg0 person:(id)arg1 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(BOOL)canPerformOnSubsetOfSelection;
-(void)performUserInteractionTask;


@end


#endif