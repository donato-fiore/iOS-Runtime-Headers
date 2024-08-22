// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOKITRESTORENOCONFIRMACTIONPERFORMER_H
#define PUPHOTOKITRESTORENOCONFIRMACTIONPERFORMER_H



#import "PUPhotoKitDestructiveActionsPerformer.h"

@interface PUPhotoKitRestoreNoConfirmActionPerformer : PUPhotoKitDestructiveActionsPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(BOOL)shouldConfirmDestructiveAction;
-(NSInteger)destructivePhotosAction;


@end


#endif