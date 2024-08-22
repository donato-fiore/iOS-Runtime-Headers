// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXPHOTOKITDELETEASSETACTIONPERFORMER_H
#define PUPXPHOTOKITDELETEASSETACTIONPERFORMER_H



#import "PUPXPhotoKitDestructiveActionsPerformer.h"

@interface PUPXPhotoKitDeleteAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)arg0 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
-(NSInteger)destructivePhotosAction;


@end


#endif