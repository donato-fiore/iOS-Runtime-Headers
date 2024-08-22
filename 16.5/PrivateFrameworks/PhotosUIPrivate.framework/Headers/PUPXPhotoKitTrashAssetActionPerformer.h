// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPXPHOTOKITTRASHASSETACTIONPERFORMER_H
#define PUPXPHOTOKITTRASHASSETACTIONPERFORMER_H



#import "PUPXPhotoKitDestructiveActionsPerformer.h"

@interface PUPXPhotoKitTrashAssetActionPerformer : PUPXPhotoKitDestructiveActionsPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 selectionSnapshot:(id)arg1 person:(id)arg2 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(NSInteger)destructivePhotosAction;


@end


#endif