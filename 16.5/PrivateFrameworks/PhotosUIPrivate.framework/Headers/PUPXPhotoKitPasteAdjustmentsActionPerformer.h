// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPXPHOTOKITPASTEADJUSTMENTSACTIONPERFORMER_H
#define PUPXPHOTOKITPASTEADJUSTMENTSACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer;



@interface PUPXPhotoKitPasteAdjustmentsActionPerformer : PXPhotoKitAssetActionPerformer



+(BOOL)_canPasteOnAsset:(id)arg0 ;
+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg0 person:(id)arg1 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)newActivityProgressAlertForAction:(id)arg0 assets:(id)arg1 ;
+(id)newEditActionForPerformer:(id)arg0 class:(Class)arg1 assets:(id)arg2 ;
+(id)newProgressToastForAction:(id)arg0 assets:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif