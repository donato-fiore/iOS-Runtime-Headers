// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPXPHOTOKITTRASHNOCONFIRMASSETACTIONPERFORMER_H
#define PUPXPHOTOKITTRASHNOCONFIRMASSETACTIONPERFORMER_H



#import "PUPXPhotoKitTrashAssetActionPerformer.h"

@interface PUPXPhotoKitTrashNoConfirmAssetActionPerformer : PUPXPhotoKitTrashAssetActionPerformer



+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
-(BOOL)shouldSkipUserConfirmation;
-(NSInteger)destructivePhotosAction;


@end


#endif