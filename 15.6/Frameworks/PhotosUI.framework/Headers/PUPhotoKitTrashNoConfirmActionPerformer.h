// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITTRASHNOCONFIRMACTIONPERFORMER_H
#define PUPHOTOKITTRASHNOCONFIRMACTIONPERFORMER_H



#import "PUPhotoKitDestructiveActionsPerformer.h"

@interface PUPhotoKitTrashNoConfirmActionPerformer : PUPhotoKitDestructiveActionsPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(BOOL)shouldConfirmDestructiveAction;
-(NSInteger)destructivePhotosAction;


@end


#endif