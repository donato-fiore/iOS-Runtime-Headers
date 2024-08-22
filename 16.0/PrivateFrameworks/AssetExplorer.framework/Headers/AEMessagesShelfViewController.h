// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEMESSAGESSHELFVIEWCONTROLLER_H
#define AEMESSAGESSHELFVIEWCONTROLLER_H

@class UIViewController, PUReviewDataSource, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, UIColor, PXAssetsScene, PXScrollViewController, PXBasicUIViewTileAnimator, NSMutableSet, PXTilingController, NSString, PUAssetExplorerReviewScreenViewController;
@protocol AEPluginEntryViewController, PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTileSource, PXChangeObserver, PUAssetExplorerReviewScreenViewControllerDelegate, UIGestureRecognizerDelegate, CKPluginEntryViewController, AEMessagesShelfLayoutDelegate, CKPluginEntryViewControllerDelegate;


#import "AEPackageTransport.h"
#import "AEWrappedDataSourceManager.h"

@interface AEMessagesShelfViewController : UIViewController <AEPluginEntryViewController, PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTileSource, PXChangeObserver, PUAssetExplorerReviewScreenViewControllerDelegate, UIGestureRecognizerDelegate, CKPluginEntryViewController, AEMessagesShelfLayoutDelegate>



@property (readonly, nonatomic) PUReviewDataSource *_dataSource; // ivar: __dataSource
@property (nonatomic, setter=_setIndexToScrollTo:) NSInteger _indexToScrollTo; // ivar: __indexToScrollTo
@property (readonly, nonatomic) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager; // ivar: __internalReviewDataSourceManager
@property (readonly, nonatomic) PUReviewAssetsMediaProvider *_internalReviewMediaProvider; // ivar: __internalReviewMediaProvider
@property (readonly, nonatomic) NSUInteger _options; // ivar: __options
@property (readonly, nonatomic) AEPackageTransport *_packageTransport; // ivar: __packageTransport
@property (retain, nonatomic) UIColor *_roundedCornerOverlayFillColor; // ivar: __roundedCornerOverlayFillColor
@property (readonly, nonatomic) PXAssetsScene *_sceneController; // ivar: __sceneController
@property (readonly, nonatomic) PXScrollViewController *_scrollViewController; // ivar: __scrollViewController
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // ivar: __tilesInUse
@property (readonly, nonatomic) PXTilingController *_tilingController; // ivar: __tilingController
@property (readonly, nonatomic) AEWrappedDataSourceManager *_wrappedDataSourceManager; // ivar: __wrappedDataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CKPluginEntryViewControllerDelegate> *entryViewDelegate; // ivar: _entryViewDelegate
@property (readonly) NSUInteger hash;
@property (readonly) BOOL loadedContentView;
@property (retain, nonatomic) PUAssetExplorerReviewScreenViewController *presentedReviewController; // ivar: _presentedReviewController
@property (readonly) Class superclass;
@property (readonly) BOOL wantsClearButton;
@property (readonly) BOOL wantsEdgeToEdgeLayout;


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg0 canPerformActionType:(NSUInteger)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)layout:(id)arg0 itemAtIndexPathIsAnimatedImage:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)layout:(id)arg0 itemAtIndexPathIsLoop:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)layout:(id)arg0 itemAtIndexPathIsVideo:(struct PXSimpleIndexPath )arg1 ;
-(BOOL)layoutShouldShowCancelButtons:(id)arg0 ;
-(BOOL)layoutShouldShowVideoDuration:(id)arg0 ;
-(CGFloat)layout:(id)arg0 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(CGFloat)layout:(id)arg0 itemAtIndexPathDuration:(struct PXSimpleIndexPath )arg1 ;
-(NSInteger)layout:(id)arg0 irisToggleStateForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)_currentAssetsDataSource;
-(id)_traverseHierarchyForFillColorStartingWithView:(id)arg0 ;
-(id)assetsScene:(id)arg0 layoutForDataSource:(id)arg1 ;
-(id)assetsScene:(id)arg0 transitionAnimationCoordinatorForChange:(id)arg1 ;
-(id)contentAssetReferenceAtPoint:(struct CGPoint )arg0 ;
-(id)framesOfVisibleContentViewInCoordinateSpace:(id)arg0 ;
-(id)initWithPackageTransport:(id)arg0 ;
-(id)initWithPackageTransport:(id)arg0 options:(NSUInteger)arg1 ;
-(struct CGPoint )tilingController:(id)arg0 initialVisibleOriginForLayout:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dismissPresentedReviewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg0 suppressLivePhoto:(BOOL)arg1 mediaOrigin:(NSInteger)arg2 ;
-(void)_presentReviewForAssetReference:(id)arg0 ;
-(void)_presentReviewViewController:(id)arg0 ;
-(void)_removeFromShelf:(id)arg0 ;
-(void)_toggleIris:(id)arg0 ;
-(void)_transportStagingStateDidChange;
-(void)assetExplorerReviewScreenViewController:(id)arg0 didPerformCompletionAction:(NSUInteger)arg1 withSelectedAssetUUIDs:(id)arg2 livePhotoDisabledAssetUUIDs:(id)arg3 substituteAssetsByUUID:(id)arg4 ;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg0 ;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)dealloc;
-(void)handleTap:(id)arg0 ;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewDidLoad;


@end


#endif