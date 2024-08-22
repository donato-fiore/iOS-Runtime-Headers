// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXPHOTOKITSHAREASSETACTIONPERFORMER_H
#define PUPXPHOTOKITSHAREASSETACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer, NSString;
@protocol PXCMMActionPerformerDelegate, PXActivitySharingControllerDelegate;


#import "PUActivitySharingController.h"

@interface PUPXPhotoKitShareAssetActionPerformer : PXPhotoKitAssetActionPerformer <PXCMMActionPerformerDelegate, PXActivitySharingControllerDelegate>

 {
    PUActivitySharingController *_activitySharingController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg0 inDataSource:(id)arg1 ;
-(void)_didCompleteWithActivityType:(id)arg0 success:(BOOL)arg1 asset:(id)arg2 person:(id)arg3 selectionSnapshot:(id)arg4 ;
-(void)_performNotThisPersonWithCompletionHandler:(id)arg0 ;
-(void)_performSetKeyFaceWithAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)_presentShareSheet;
-(void)activitySharingController:(id)arg0 didCompleteWithActivityType:(id)arg1 success:(BOOL)arg2 ;
-(void)activitySharingControllerDidCancel:(id)arg0 ;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif