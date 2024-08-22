// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXPHOTOKITDUPLICATEASSETACTIONPERFORMER_H
#define PUPXPHOTOKITDUPLICATEASSETACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer;


#import "PUDuplicateActionController.h"

@interface PUPXPhotoKitDuplicateAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) PUDuplicateActionController *duplicateActionController; // ivar: _duplicateActionController
@property (nonatomic) ? stillImageTime; // ivar: _stillImageTime


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(void)performBackgroundTask;


@end


#endif