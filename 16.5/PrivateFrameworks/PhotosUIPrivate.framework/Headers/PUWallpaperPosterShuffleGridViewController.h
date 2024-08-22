// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERPOSTERSHUFFLEGRIDVIEWCONTROLLER_H
#define PUWALLPAPERPOSTERSHUFFLEGRIDVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSString, PXPhotosContentController, PXPhotosViewModel, NSOrderedSet, PXMediaProvider, PHPhotoLibrary, NSURL, PXGView, PXUpdater;
@protocol PXChangeObserver, PXPhotosContentControllerDelegate, PHPickerViewControllerDelegate, PXPhotosViewDelegate, PXPhotosPreferredAssetCropDelegate, PUWallpaperPosterShuffleGridViewControllerDelegate;



@interface PUWallpaperPosterShuffleGridViewController : UIViewController <PXChangeObserver, PXPhotosContentControllerDelegate, PHPickerViewControllerDelegate, PXPhotosViewDelegate, PXPhotosPreferredAssetCropDelegate>



@property (retain, nonatomic) UIBarButtonItem *addPhotosBarButtonItem; // ivar: _addPhotosBarButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUWallpaperPosterShuffleGridViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *deselectAllBarButtonItem; // ivar: _deselectAllBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // ivar: _doneBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *enterSelectModeBarButtonItem; // ivar: _enterSelectModeBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *exitSelectModeBarButtonItem; // ivar: _exitSelectModeBarButtonItem
@property (retain, nonatomic) PXPhotosContentController *gridContentController; // ivar: _gridContentController
@property (retain, nonatomic) PXPhotosViewModel *gridViewModel; // ivar: _gridViewModel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOrderedSet *initialPosterMedia; // ivar: _initialPosterMedia
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) NSOrderedSet *posterMedia; // ivar: _posterMedia
@property (readonly, nonatomic) NSURL *posterMediaDirectory; // ivar: _posterMediaDirectory
@property (retain, nonatomic) UIBarButtonItem *removePhotosBarButtonItem; // ivar: _removePhotosBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *selectAllBarButtonItem; // ivar: _selectAllBarButtonItem
@property (readonly) Class superclass;
@property (retain, nonatomic) PXGView *tungstenView; // ivar: _tungstenView
@property (retain, nonatomic) PXUpdater *updater; // ivar: _updater


-(BOOL)_canAddMorePhotos;
-(BOOL)allowsContextMenuInteractionForPhotosViewController:(id)arg0 ;
-(BOOL)photosContentController:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)photosContentController:(id)arg0 pushViewController:(id)arg1 ;
-(BOOL)photosViewController:(id)arg0 didPickAssetReference:(id)arg1 ;
-(id)_fetchResultWithAssetsFetchedFromPosterMedia:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithResourceManager:(id)arg0 posterMedia:(id)arg1 ;
-(id)presentingViewControllerForContentController:(id)arg0 ;
-(id)undoManagerForContentController:(id)arg0 ;
-(struct CGRect )preferredCropForAsset:(id)arg0 withAspectRatio:(CGFloat)arg1 ;
-(void)_createBarButtonItemsIfNeeded;
-(void)_exitSelectMode;
-(void)_finishWithSelectedPosterMedia:(id)arg0 ;
-(void)_handleAddPhotos:(id)arg0 ;
-(void)_handleDeselectAll:(id)arg0 ;
-(void)_handleDone:(id)arg0 ;
-(void)_handleEnterSelectMode:(id)arg0 ;
-(void)_handleExitSelectMode:(id)arg0 ;
-(void)_handleRemovePhotos:(id)arg0 ;
-(void)_handleSelectAll:(id)arg0 ;
-(void)_invalidateBarItems;
-(void)_invalidateDataSource;
-(void)_setNeedsUpdate;
-(void)_updateBarItems;
-(void)_updateDataSource;
-(void)dismissPresentedViewControllerForContentController:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)setTungstenLayout:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif