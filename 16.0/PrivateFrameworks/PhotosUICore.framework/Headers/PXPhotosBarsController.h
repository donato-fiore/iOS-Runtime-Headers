// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSBARSCONTROLLER_H
#define PXPHOTOSBARSCONTROLLER_H

@class NSMapTable, NSString, PLDateRangeFormatter, NSArray, UILabel, UIButton;
@protocol PXChangeObserver, PXActionPerformerDelegate, PXPhotosGridActionPerformerDelegate, PXPhotosGridOptionsControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXSettingsKeyObserver, PXBarsControllerDelegate><PXPhotosBarsControllerDelegate;


#import "PXBarsController.h"
#import "PXActionPerformer.h"
#import "PXAssetSelectionTypeCounter.h"
#import "PXPhotosBarButtonItemsController.h"
#import "PXPhotosContentController.h"
#import "PXPhotosGridActionMenuController.h"
#import "PXMoviePresenter.h"
#import "PXPhotosViewModel.h"

@interface PXPhotosBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate, PXPhotosGridActionPerformerDelegate, PXPhotosGridOptionsControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXSettingsKeyObserver>



@property (readonly, nonatomic) NSMapTable *actionTypeByBarButtonItem; // ivar: _actionTypeByBarButtonItem
@property (retain, nonatomic) PXActionPerformer *activeActionPerformer; // ivar: _activeActionPerformer
@property (readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter; // ivar: _assetTypeCounter
@property (readonly, nonatomic) PXPhotosBarButtonItemsController *barButtonItemsController; // ivar: _barButtonItemsController
@property (readonly, weak, nonatomic) PXPhotosContentController *contentController; // ivar: _contentController
@property (retain, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter; // ivar: _dateRangeFormatter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXBarsControllerDelegate><PXPhotosBarsControllerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat endButtonSpacing; // ivar: _endButtonSpacing
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interButtonSpacing; // ivar: _interButtonSpacing
@property (retain, nonatomic) PXActionPerformer *lastActionPerformer; // ivar: _lastActionPerformer
@property (retain, nonatomic) NSArray *leftBarButtonItemIdentifiers; // ivar: _leftBarButtonItemIdentifiers
@property (retain, nonatomic) PXPhotosGridActionMenuController *menuController; // ivar: _menuController
@property (retain, nonatomic) PXMoviePresenter *moviePresenter; // ivar: _moviePresenter
@property (retain, nonatomic) NSArray *rightBarButtonItemIdentifiers; // ivar: _rightBarButtonItemIdentifiers
@property (readonly, nonatomic) UILabel *selectModeCaptionLabel; // ivar: _selectModeCaptionLabel
@property (readonly, nonatomic) UIButton *selectModeChevronButton; // ivar: _selectModeChevronButton
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *toolbarItemIdentifiers; // ivar: _toolbarItemIdentifiers
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel


-(BOOL)_actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 transitionToViewController:(id)arg1 transitionType:(NSInteger)arg2 ;
-(CGFloat)fixedSpaceForEndButtonSpacing;
-(CGFloat)fixedSpaceForInterButtonSpacing;
-(id)_identifierForActionType:(id)arg0 ;
-(id)barAppearance;
-(id)createActionMenuController;
-(id)createAssetActionManagerForAssetReference:(id)arg0 ;
-(id)createBarButtonItemForIdentifier:(id)arg0 placement:(NSUInteger)arg1 ;
-(id)existingBarItemForIdentifier:(id)arg0 ;
-(id)hostViewControllerForActionPerformer:(id)arg0 ;
-(id)init;
-(id)initWithPhotosContentController:(id)arg0 ;
-(id)presentationEnvironmentForActionPerformer:(id)arg0 ;
-(id)progressToastViewControllerForActionPerformer:(id)arg0 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)_handleActionTypeBarButtonItem:(id)arg0 ;
-(void)_reloadOptionsButton;
-(void)_updateSelectModeCaption;
-(void)actionPerformer:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)assetCollectionActionPerformer:(id)arg0 playMovieForAssetCollection:(id)arg1 ;
-(void)didChangeActionPerformerTypeForOptionsController:(id)arg0 ;
-(void)didChangeSystemItemForOptionsController:(id)arg0 ;
-(void)handleActionMenuBarButtonItem:(id)arg0 ;
-(void)handleAddButtonItem:(id)arg0 ;
-(void)handleCancelBarButtonItem:(id)arg0 ;
-(void)handleDeselectAllBarButtonItem:(id)arg0 ;
-(void)handleDismissButton:(id)arg0 ;
-(void)handleInfoButton:(id)arg0 ;
-(void)handleMergeDuplicatesButton:(id)arg0 ;
-(void)handleSelectAllBarButtonItem:(id)arg0 ;
-(void)handleSelectBarButtonItem:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photosGridActionPerformer:(id)arg0 contentFilterStateChanged:(id)arg1 ;
-(void)photosGridActionPerformer:(id)arg0 libraryFilterStateChanged:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateBars;
-(void)viewControllerDidChange;


@end


#endif