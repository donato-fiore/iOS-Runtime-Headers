// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITMOVETOSHAREDLIBRARYACTIONPERFORMER_H
#define PXPHOTOKITMOVETOSHAREDLIBRARYACTIONPERFORMER_H

@class NSArray;


#import "PXPhotoKitAssetActionPerformer.h"

@interface PXPhotoKitMoveToSharedLibraryActionPerformer : PXPhotoKitAssetActionPerformer {
    NSArray *_assetsToMove;
}




+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(BOOL)canPresentAlertInBackgroudState;
-(void)_moveAssetsToSharedLibraryWithCompletionHandler:(id)arg0 ;
-(void)_presentFailureWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif