// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYMAKEKEYPHOTOACTIONPERFORMER_H
#define PXSTORYMAKEKEYPHOTOACTIONPERFORMER_H



#import "PXStoryAssetActionPerformer.h"

@interface PXStoryMakeKeyPhotoActionPerformer : PXStoryAssetActionPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
-(BOOL)shouldPreventTargetedDismissalAnimation;
-(void)performUserInteractionTask;


@end


#endif