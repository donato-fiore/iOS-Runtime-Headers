// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUOVERONEUPPRESENTATIONSESSION_H
#define PUOVERONEUPPRESENTATIONSESSION_H

@class NSHashTable, NSString;
@protocol PUPhotoEditViewControllerPresentationDelegate, PUSlideshowViewControllerDelegate, PUAvalancheReviewControllerDelegate, PXActivitySharingControllerDelegate, PUOneUpPhotosSharingTransitionDelegate, PUCollectionViewLayoutProvider, PXForcedDismissableViewController, PUPhotoMarkupViewControllerObserver, PUFunEffectsViewControllerObserver, UIViewControllerTransitioningDelegate, PUOneUpSharingAnimationControllerDelegate, PUOverOneUpPresentationSessionBarsDelegate, PUOverOneUpPresentationSessionDelegate;

#import <Foundation/Foundation.h>

#import "PUAvalancheReviewController.h"
#import "PUEditViewController.h"
#import "PUFunEffectsViewController.h"
#import "PUPhotoMarkupViewController.h"
#import "PUSlideshowViewController.h"
#import "PUAssetReference.h"
#import "PUActivitySharingController.h"

@interface PUOverOneUpPresentationSession : NSObject <PUPhotoEditViewControllerPresentationDelegate, PUSlideshowViewControllerDelegate, PUAvalancheReviewControllerDelegate, PXActivitySharingControllerDelegate, PUOneUpPhotosSharingTransitionDelegate, PUCollectionViewLayoutProvider, PXForcedDismissableViewController, PUPhotoMarkupViewControllerObserver, PUFunEffectsViewControllerObserver, UIViewControllerTransitioningDelegate, PUOneUpSharingAnimationControllerDelegate>

 {
    ? _delegateFlags;
    ? _barsDelegateFlags;
}


@property (retain, nonatomic, setter=_setAvalancheReviewController:) PUAvalancheReviewController *_avalancheReviewController; // ivar: __avalancheReviewController
@property (retain, nonatomic, setter=_setEditViewController:) PUEditViewController *_editViewController; // ivar: __editViewController
@property (retain, nonatomic, setter=_setFunEffectsViewController:) PUFunEffectsViewController *_funEffectsViewController; // ivar: __funEffectsViewController
@property (nonatomic, setter=_setNeedsUpdatePresentedViewControllers:) BOOL _needsUpdatePresentedViewControllers; // ivar: __needsUpdatePresentedViewControllers
@property (retain, nonatomic, setter=_setPhotoMarkupViewController:) PUPhotoMarkupViewController *_photoMarkupViewController; // ivar: __photoMarkupViewController
@property (retain, nonatomic, setter=_setPresentedViewControllers:) NSHashTable *_presentedViewControllers; // ivar: __presentedViewControllers
@property (retain, nonatomic, setter=_setSlideshowViewController:) PUSlideshowViewController *_slideshowViewController; // ivar: __slideshowViewController
@property (copy, nonatomic, setter=_setStashedAssetReference:) PUAssetReference *_stashedAssetReference; // ivar: __stashedAssetReference
@property (retain, nonatomic) PUActivitySharingController *activitySharingController; // ivar: _activitySharingController
@property (weak, nonatomic) NSObject<PXActivitySharingControllerDelegate> *activitySharingControllerDelegate; // ivar: _activitySharingControllerDelegate
@property (weak, nonatomic) NSObject<PUOverOneUpPresentationSessionBarsDelegate> *barsDelegate; // ivar: _barsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUOverOneUpPresentationSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_dismissActivityViewController:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)_dismissAvalancheReviewController:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)_dismissEditViewController:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)_dismissFunEffectsViewController:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)_dismissPhotoMarkupViewController:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)_dismissSlideshowViewController:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)_popToOneUpFromViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)_presentActivityViewController:(id)arg0 ;
-(BOOL)_presentAvalancheReviewController:(id)arg0 ;
-(BOOL)_presentEditViewController:(id)arg0 ;
-(BOOL)_presentFunEffectsViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)_presentPhotoMarkupViewController:(id)arg0 ;
-(BOOL)_presentScreenRoutePickerViewController:(id)arg0 ;
-(BOOL)_presentSlideshowViewController:(id)arg0 ;
-(BOOL)isPresentingAnOverOneUpViewController;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)presentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(NSInteger)_globalIndexForAssetReference:(id)arg0 ;
-(NSInteger)_globalIndexForIndexPath:(id)arg0 ;
-(NSInteger)_numberOfItems;
-(NSInteger)_tileCountForCurrentModalViewController;
-(id)_assetCollectionsDataSourceForCurrentModalViewController;
-(id)_assetReferenceAtGlobalIndex:(NSInteger)arg0 ;
-(id)_assetReferenceFromAsset:(id)arg0 hintIndexPath:(id)arg1 hintCollection:(id)arg2 ;
-(id)_assetsDataSource;
-(id)_currentTileController;
-(id)_indexPathForGlobalIndex:(NSInteger)arg0 ;
-(id)_tilingView;
-(id)_viewModel;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)photosSharingTransition:(id)arg0 layoutForAssetReference:(id)arg1 ;
-(id)photosSharingTransitionTransitioningView:(id)arg0 ;
-(id)ppt_activityViewController;
-(id)viewController;
-(struct CGPoint )photosSharingTransition:(id)arg0 contentOffsetForAssetReference:(id)arg1 ;
-(struct CGRect )_frameAtIndexPath:(id)arg0 ;
-(struct CGRect )_frameForAssetReference:(id)arg0 ;
-(struct CGRect )_frameForItemAtIndexPath:(id)arg0 inAssetCollectionsDataSource:(id)arg1 allowZoom:(BOOL)arg2 ;
-(struct CGSize )collectionViewContentSize;
-(void)_activitySharingController:(id)arg0 didCompleteWithActivityType:(id)arg1 success:(BOOL)arg2 ;
-(void)_activitySharingControllerDidCancel:(id)arg0 ;
-(void)_activitySharingControllerWillDismissActivityViewController:(id)arg0 ;
-(void)_finalizeAvalancheReviewControllerDismiss;
-(void)_finishOverOneUpPresentationSessionDismissForced:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_invalidatePresentedViewControllers;
-(void)_performNavigationRequestForAssetDisplayDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)_prepareForActivitySharingControllerDismiss:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeViewController:(id)arg0 ;
-(void)_updatePresentedViewControllersIfNeeded;
-(void)activitySharingController:(id)arg0 didCompleteWithActivityType:(id)arg1 success:(BOOL)arg2 ;
-(void)activitySharingControllerDidCancel:(id)arg0 ;
-(void)activitySharingControllerWillDismissActivityViewController:(id)arg0 ;
-(void)avalancheReviewControllerDidComplete:(id)arg0 animated:(BOOL)arg1 ;
-(void)avalancheReviewControllerDidComplete:(id)arg0 withAsset:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissViewController:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)editController:(id)arg0 didFinishPreparingForTransitionAfterEditingPhoto:(id)arg1 ;
-(void)editController:(id)arg0 didFinishPreparingForTransitionAfterEditingVideo:(id)arg1 modificationDate:(id)arg2 seekTime:(struct ? )arg3 ;
-(void)funEffectsViewController:(id)arg0 didSaveAsset:(id)arg1 withCompletion:(NSUInteger)arg2 ;
-(void)oneUpSharingAnimationController:(id)arg0 setVisibility:(BOOL)arg1 forAssetReference:(id)arg2 ;
-(void)photoMarkupController:(id)arg0 didFinishWithSavedAsset:(id)arg1 ;
-(void)photosSharingTransition:(id)arg0 setVisibility:(BOOL)arg1 forAssetReference:(id)arg2 ;
-(void)photosSharingTransitionWillAnimateDismissal:(id)arg0 ;
-(void)photosSharingTransitionWillAnimatePresentation:(id)arg0 ;
-(void)ppt_cancelActivity;
-(void)ppt_dismissShareSheetWithCompletion:(id)arg0 ;
-(void)ppt_presentPhotoEditor;
-(void)ppt_presentShareSheetWithCompletion:(id)arg0 ;
-(void)ppt_shareUsingActivityOfType:(id)arg0 ;
-(void)ppt_tapNextButton:(id)arg0 ;
-(void)slideshowViewControllerDidFinish:(id)arg0 withVisibleAssets:(id)arg1 ;


@end


#endif