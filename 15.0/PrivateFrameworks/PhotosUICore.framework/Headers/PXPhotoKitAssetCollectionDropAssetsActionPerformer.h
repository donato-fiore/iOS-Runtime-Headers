// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONDROPASSETSACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONDROPASSETSACTIONPERFORMER_H



#import "PXPhotoKitAssetCollectionActionPerformer.h"

@interface PXPhotoKitAssetCollectionDropAssetsActionPerformer : PXPhotoKitAssetCollectionActionPerformer



+(BOOL)canPerformActionType:(id)arg0 onAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)dropAssetsActionPerformerForAssetCollection:(id)arg0 dropSession:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif