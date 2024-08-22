// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITMOVETOPERSONALLIBRARYACTIONPERFORMER_H
#define PXPHOTOKITMOVETOPERSONALLIBRARYACTIONPERFORMER_H

@protocol PXFastEnumeration;


#import "PXPhotoKitAssetActionPerformer.h"

@interface PXPhotoKitMoveToPersonalLibraryActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) NSObject<PXFastEnumeration> *assetsToMove; // ivar: _assetsToMove


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg0 person:(id)arg1 ;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
+(void)_assetTypeCountsForAssets:(id)arg0 photosCount:(*NSInteger)arg1 videosCount:(*NSInteger)arg2 othersCount:(*NSInteger)arg3 ;
-(BOOL)canPresentAlertInBackgroudState;
-(BOOL)shouldExitSelectModeForState:(NSUInteger)arg0 ;
-(BOOL)shouldShowConfirmation;
-(id)_multiContributorConfirmationAlertControllerForAssets:(id)arg0 contributorName:(id)arg1 ;
-(void)_moveAssetsToPersonalLibraryWithCompletionHandler:(id)arg0 ;
-(void)_presentFailureWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif