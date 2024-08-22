// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPXPHOTOKITRESTOREASSETACTIONPERFORMER_H
#define PUPXPHOTOKITRESTOREASSETACTIONPERFORMER_H



#import "PUPXPhotoKitDestructiveActionsPerformer.h"

@interface PUPXPhotoKitRestoreAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)arg0 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg0 person:(id)arg1 ;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
-(NSInteger)destructivePhotosAction;


@end


#endif