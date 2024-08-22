// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEEXPLORERVIEWCONTROLLER_H
#define AEEXPLORERVIEWCONTROLLER_H

@class UIViewController, CAMCameraReviewAdapter, NSArray, PXPhotoKitAssetsDataSourceManager, UIPopoverPresentationController, UIView, PXMediaProvider, NSIndexSet, PUAssetExplorerReviewScreenViewController, PXAssetsScene, PXUIScrollViewController, PXBasicUIViewTileAnimator, NSMutableSet, PXTilingController, NSString;
@protocol PXChangeObserver, PXTileSource, PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXPhotoLibraryUIChangeObserver, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, PUAssetExplorerReviewScreenViewControllerDelegate, UIPopoverPresentationControllerDelegate, AEBrowserLayoutDelegate, PXPhotoLibraryPresenting, AEExplorerViewControllerDelegate;


#import "AECameraAssetPackageGenerator.h"
#import "AEPackageTransport.h"
#import "AEProgressViewModel.h"

@interface AEExplorerViewController : UIViewController <PXChangeObserver, PXTileSource, PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXPhotoLibraryUIChangeObserver, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, PUAssetExplorerReviewScreenViewControllerDelegate, UIPopoverPresentationControllerDelegate, AEBrowserLayoutDelegate, PXPhotoLibraryPresenting>



@property (readonly, nonatomic) AECameraAssetPackageGenerator *_cameraPackageGenerator; // ivar: __cameraPackageGenerator
@property (readonly, nonatomic) CAMCameraReviewAdapter *_cameraReviewAdapter; // ivar: __cameraReviewAdapter
@property (readonly) NSArray *_clientGestureRecognizers; // ivar: __clientGestureRecognizers
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *_dataSourceManager; // ivar: __dataSourceManager
@property (nonatomic, setter=_setDidPresentPhotoLibrary:) BOOL _didPresentPhotoLibrary; // ivar: __didPresentPhotoLibrary
@property (nonatomic, setter=_setFakeAllCloudAndVideo:) BOOL _fakeAllCloudAndVideo; // ivar: __fakeAllCloudAndVideo
@property (weak, nonatomic, setter=_setImagePickerPopoverPresentationController:) UIPopoverPresentationController *_imagePickerPopoverPresentationController; // ivar: __imagePickerPopoverPresentationController
@property (weak, nonatomic, setter=_setImagePickerSenderView:) UIView *_imagePickerSenderView; // ivar: __imagePickerSenderView
@property (readonly, nonatomic) PXMediaProvider *_mediaProvider; // ivar: __mediaProvider
@property (retain, nonatomic, setter=_setMissingThumbnailAssetIndexes:) NSIndexSet *_missingThumbnailAssetIndexes; // ivar: __missingThumbnailAssetIndexes
@property (readonly, nonatomic) AEPackageTransport *_packageTransport; // ivar: __packageTransport
@property (retain, nonatomic, setter=_setPendingMissingThumbnailAssetIndexes:) NSIndexSet *_pendingMissingThumbnailAssetIndexes; // ivar: __pendingMissingThumbnailAssetIndexes
@property (retain, nonatomic, setter=_setPreviousSuperview:) UIView *_previousSuperview; // ivar: __previousSuperview
@property (readonly, nonatomic) AEProgressViewModel *_progressModel; // ivar: __progressModel
@property (retain, nonatomic, setter=_setReviewController:) PUAssetExplorerReviewScreenViewController *_reviewController; // ivar: __reviewController
@property (retain, nonatomic, setter=_setSceneController:) PXAssetsScene *_sceneController; // ivar: __sceneController
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // ivar: __scrollViewController
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // ivar: __tilesInUse
@property (retain, nonatomic, setter=_setTilingController:) PXTilingController *_tilingController; // ivar: __tilingController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AEExplorerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg0 canPerformActionType:(NSUInteger)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)confirmAsset:(id)arg0 matchesView:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)layout:(id)arg0 shouldShowCloudDecorationAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)layout:(id)arg0 shouldShowLoopDecorationAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)layout:(id)arg0 shouldShowVideoDecorationAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(Class)assetsSceneClass;
-(NSInteger)_currentLayoutStyle;
-(NSInteger)_layoutStyleForSize:(struct CGSize )arg0 ;
-(id)_createNewLayoutForDataSource:(id)arg0 ;
-(id)_currentDataSource;
-(id)_presentViewControllerAboveKeyboard:(id)arg0 animated:(BOOL)arg1 ;
-(id)_stagedAssetUUIDs;
-(id)_thumbnailResourcesIndexSetForAssets:(id)arg0 ;
-(id)_validateAssetReference:(id)arg0 forScrollViewPoint:(struct CGPoint )arg1 ;
-(id)assetsScene:(id)arg0 layoutForDataSource:(id)arg1 ;
-(id)contentAssetReferenceAtPoint:(struct CGPoint )arg0 outContentFrame:(struct CGRect *)arg1 ;
-(id)initWithPackageTransport:(id)arg0 mediaProvider:(id)arg1 dataSourceManager:(id)arg2 additionalGestureRecognizers:(id)arg3 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)scrollView;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(id)tilingController:(id)arg0 transitionAnimationCoordinatorForChange:(id)arg1 ;
-(struct CGPoint )tilingController:(id)arg0 initialVisibleOriginForLayout:(id)arg1 ;
-(struct CGRect )_sourceRectForPhotoLibraryPresentationInCoordinateSpace:(id)arg0 ;
-(struct CGSize )_maximumThumbnailSize;
-(void)_addThumbnailIndexes:(id)arg0 ;
-(void)_attachGestureRecognizersIfNeeded:(*void)arg0 ;
-(void)_cancelExpectedAssetUUIDs:(id)arg0 ;
-(void)_computeInitialResourcesIndexSetAsync;
-(void)_configureReviewControllerWithAssetReference:(id)arg0 ;
-(void)_dismissPhotoLibraryIfNeeded;
-(void)_dismissReviewScreenViewController;
-(void)_dismissViewControllerAboveKeyboardAnimated:(BOOL)arg0 ;
-(void)_handleAttemptedSelectionToggleOfAssetReference:(id)arg0 cancelIfAlreadySelected:(BOOL)arg1 suppressLivePhotoContent:(BOOL)arg2 ;
-(void)_handleImagePickerMediaWithInfo:(id)arg0 ;
-(void)_handleInProgressPackageGenerator:(id)arg0 suppressLivePhotoContent:(BOOL)arg1 mediaOrigin:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)_handleTransportStagingUpdateWithDataSource:(id)arg0 ;
-(void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg0 suppressLivePhoto:(BOOL)arg1 mediaOrigin:(NSInteger)arg2 ;
// -(void)_presentConfidentialityAlertWithConfirmAction:(id)arg0 abortAction:(unk)arg1  ;
-(void)_stageAsset:(id)arg0 withReference:(id)arg1 suppressLivePhotoContent:(BOOL)arg2 mediaOrigin:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)_updatePhotoLibraryPresentationIfNeeded;
-(void)assetExplorerReviewScreenViewController:(id)arg0 didPerformCompletionAction:(NSUInteger)arg1 withSelectedAssetUUIDs:(id)arg2 livePhotoDisabledAssetUUIDs:(id)arg3 substituteAssetsByUUID:(id)arg4 ;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg0 ;
-(void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg0 ;
-(void)assetsScene:(id)arg0 didTransitionToDataSource:(id)arg1 ;
-(void)assetsScene:(id)arg0 willTransitionToDataSource:(id)arg1 ;
-(void)associateAsset:(id)arg0 withTile:(*void)arg1 ;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)dealloc;
-(void)dismissPresentedViewController:(id)arg0 ;
-(void)handleLongPress:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMultipleMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)ppt_openPhotoLibrary;
-(void)ppt_scrollThumbnailGridWithTestName:(id)arg0 fakeExpensiveBadges:(BOOL)arg1 ;
-(void)showPhotoLibraryPicker:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif