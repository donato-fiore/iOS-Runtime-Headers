// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXPHOTOKITREMOVEASSETACTIONPERFORMER_H
#define PUPXPHOTOKITREMOVEASSETACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer;



@interface PUPXPhotoKitRemoveAssetActionPerformer : PXPhotoKitAssetActionPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 selectionSnapshot:(id)arg1 person:(id)arg2 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif