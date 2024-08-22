// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDETAILSBARSCONTROLLER_H
#define PXPHOTOSDETAILSBARSCONTROLLER_H

@class NSMutableDictionary, UIView, NSString;
@protocol PXPhotosDataSourceChangeObserver, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXPhotosDetailsActionMenuDelegate, UIPopoverPresentationControllerDelegate;


#import "PXBarsController.h"
#import "PXPhotoDetailsActionMenuController.h"
#import "PXActionPerformer.h"
#import "PXAssetActionManager.h"
#import "PXAssetCollectionActionManager.h"
#import "PXBarAppearance.h"
#import "PXPhotosDetailsContext.h"
#import "PXPhotosDataSource.h"
#import "PXExtendedTraitCollection.h"
#import "PXSectionedSelectionManager.h"
#import "PXPhotosDetailsViewModel.h"
#import "PXPhotosDetailsBarSpec.h"
#import "PXPhotosDetailsUIViewController.h"

@interface PXPhotosDetailsBarsController : PXBarsController <PXPhotosDataSourceChangeObserver, PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXPhotosDetailsActionMenuDelegate, UIPopoverPresentationControllerDelegate>

 {
    ? _needsUpdateFlags;
}


@property (retain, nonatomic) PXPhotoDetailsActionMenuController *_activeMenuController; // ivar: __activeMenuController
@property (retain, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer; // ivar: __activePerformer
@property (readonly, nonatomic) PXAssetActionManager *_assetActionManager; // ivar: __assetActionManager
@property (readonly, nonatomic) PXAssetCollectionActionManager *_assetCollectionActionManager; // ivar: __assetCollectionActionManager
@property (retain, nonatomic, setter=_setBarAppearance:) PXBarAppearance *_barAppearance; // ivar: __barAppearance
@property (readonly, nonatomic) NSMutableDictionary *_barButtonItemByActionType; // ivar: __barButtonItemByActionType
@property (readonly, nonatomic) NSMutableDictionary *_barButtonItemCacheByBarItemIdentifier; // ivar: __barButtonItemCacheByBarItemIdentifier
@property (readonly, nonatomic) PXPhotosDetailsContext *_context; // ivar: __context
@property (readonly, nonatomic) PXPhotosDataSource *_dataSource; // ivar: __dataSource
@property (readonly, nonatomic) PXExtendedTraitCollection *_extendedTraitCollection; // ivar: __extendedTraitCollection
@property (weak, nonatomic, setter=_setLastActionPerformer:) PXActionPerformer *_lastActionPerformer; // ivar: __lastActionPerformer
@property (retain, nonatomic, setter=_setSelectionManager:) PXSectionedSelectionManager *_selectionManager; // ivar: __selectionManager
@property (nonatomic, setter=_setShowTitleView:) BOOL _showTitleView; // ivar: __showTitleView
@property (readonly, nonatomic) UIView *_titleView; // ivar: __titleView
@property (readonly, nonatomic) PXPhotosDetailsViewModel *_viewModel; // ivar: __viewModel
@property (retain, nonatomic) PXPhotosDetailsBarSpec *barSpec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldAddActionButton; // ivar: _shouldAddActionButton
@property (readonly) Class superclass;
@property (nonatomic) BOOL topTrailingSelectCancelButtonVisible; // ivar: _topTrailingSelectCancelButtonVisible
@property (weak, nonatomic) PXPhotosDetailsUIViewController *viewController;


-(BOOL)_dismissViewControllerIfSafeAnimated:(BOOL)arg0 ;
-(BOOL)_shouldAddBarItemForBarItemIdentifier:(id)arg0 ;
-(BOOL)_shouldEnableActionWithBarItemIdentifier:(id)arg0 ;
-(BOOL)actionMenu:(id)arg0 actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)actionMenu:(id)arg0 actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(NSInteger)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg0 ;
-(id)_assetCollection;
-(id)_barButtonItemForBarItem:(id)arg0 placement:(NSUInteger)arg1 ;
-(id)_barButtonItemsForBarItems:(id)arg0 placement:(NSUInteger)arg1 ;
-(id)_flexibleSpaceBarButtonItem;
-(id)_localizedSelectionTitle;
-(id)_sourceBarButtonItemForActionType:(id)arg0 ;
-(id)createAssetActionManager;
-(id)createAssetCollectionActionManager;
-(id)createTitleView;
-(id)init;
-(id)initWithContext:(id)arg0 viewModel:(id)arg1 extendedTraitCollection:(id)arg2 ;
-(void)_invalidateAssetActionManager;
-(void)_invalidateAssetCollectionActionManager;
-(void)_updateTitleViewAlpha;
-(void)actionMenu:(id)arg0 actionPerformer:(id)arg1 didChangeState:(NSUInteger)arg2 ;
-(void)actionMenu:(id)arg0 assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2 ;
-(void)actionMenuButtonItemTapped:(id)arg0 ;
-(void)actionPerformer:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)cancelBarButtonItemTapped:(id)arg0 ;
-(void)doneBarButtonItemTapped:(id)arg0 ;
-(void)faceModeButtonItemTapped:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photosDataSource:(id)arg0 didChange:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)removeActionButton;
-(void)selectBarButtonItemTapped:(id)arg0 ;
-(void)shouldShowTitleView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateBars;


@end


#endif