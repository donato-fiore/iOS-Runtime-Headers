// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITTOGGLEFAVORITEACTIONPERFORMER_H
#define PXPHOTOKITTOGGLEFAVORITEACTIONPERFORMER_H



#import "PXPhotoKitAssetActionPerformer.h"

@interface PXPhotoKitToggleFavoriteActionPerformer : PXPhotoKitAssetActionPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
-(void)performBackgroundTask;


@end


#endif