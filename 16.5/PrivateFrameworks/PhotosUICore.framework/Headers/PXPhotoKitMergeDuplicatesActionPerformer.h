// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITMERGEDUPLICATESACTIONPERFORMER_H
#define PXPHOTOKITMERGEDUPLICATESACTIONPERFORMER_H



#import "PXPhotoKitAssetActionPerformer.h"
#import "PXSelectionSnapshot.h"

@interface PXPhotoKitMergeDuplicatesActionPerformer : PXPhotoKitAssetActionPerformer {
    PXSelectionSnapshot *_mergeableSelection;
}




+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(BOOL)canPerformWithActionManager:(id)arg0 ;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg0 person:(id)arg1 ;
+(BOOL)shouldEnableWithActionManager:(id)arg0 ;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
-(BOOL)canPresentAlertInBackgroudState;
-(BOOL)shouldExitSelectModeForState:(NSUInteger)arg0 ;
-(void)_clearSelection;
-(void)_presentDuplicatesTypeDialogWithIdenticalCount:(NSInteger)arg0 totalCount:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_presentGenericFailureAlertAndCompleteBackgroundTaskWithError:(id)arg0 ;
-(void)completeBackgroundTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performMergeWithSelection:(id)arg0 localizedMessage:(id)arg1 onlyIdenticalItemsSelected:(BOOL)arg2 ;
-(void)performUserInteractionTask;


@end


#endif