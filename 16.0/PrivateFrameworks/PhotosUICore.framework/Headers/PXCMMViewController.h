// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMVIEWCONTROLLER_H
#define PXCMMVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSProgress, UIActivityIndicatorView, NSString, NSArray, UINavigationBar;
@protocol PXChangeObserver, PXCMMAssetsViewControllerDelegate, PXCMMActionControllerDelegate, PXPhotosDetailsActionMenuDelegate, UIPopoverPresentationControllerDelegate, PXSectionedDataSourceManagerObserver, PXAssetsDataSourceManagerObserver, PXCMMActionPerformerDelegate, PXCMMViewControllerDelegate;


#import "PXMomentShareStatusPresentation.h"
#import "PXPhotoDetailsActionMenuController.h"
#import "PXCMMAssetsViewController.h"
#import "PXMoviePresenter.h"
#import "PXOneUpPresentation.h"
#import "PXCMMSession.h"
#import "PXCMMSpecManager.h"
#import "PXUpdater.h"

@interface PXCMMViewController : UIViewController <PXChangeObserver, PXCMMAssetsViewControllerDelegate, PXCMMActionControllerDelegate, PXPhotosDetailsActionMenuDelegate, UIPopoverPresentationControllerDelegate, PXSectionedDataSourceManagerObserver, PXAssetsDataSourceManagerObserver, PXCMMActionPerformerDelegate>

 {
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    BOOL _hasStartedPreloadingTasks;
    BOOL _didIncrementNumberOfPresentedSendBacks;
}


@property (weak, nonatomic) NSObject<PXCMMActionControllerDelegate> *actionDelegate; // ivar: _actionDelegate
@property (retain, nonatomic) UIBarButtonItem *actionMenuButtonItem; // ivar: _actionMenuButtonItem
@property (retain, nonatomic) NSProgress *actionProgress; // ivar: _actionProgress
@property (retain, nonatomic) PXPhotoDetailsActionMenuController *activeActionMenuController; // ivar: _activeActionMenuController
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (readonly, nonatomic) PXCMMAssetsViewController *assetsViewController; // ivar: _assetsViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCMMViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (nonatomic, getter=isLoadingPeopleSuggestions) BOOL loadingPeopleSuggestions; // ivar: _loadingPeopleSuggestions
@property (retain, nonatomic) PXMoviePresenter *moviePresenter; // ivar: _moviePresenter
@property (readonly, nonatomic) PXOneUpPresentation *oneUpPresentation; // ivar: _oneUpPresentation
@property (retain, nonatomic) UIBarButtonItem *progressButton; // ivar: _progressButton
@property (readonly, nonatomic) PXCMMSession *session; // ivar: _session
@property (nonatomic) BOOL showTitleInNavigationBar; // ivar: _showTitleInNavigationBar
@property (readonly, nonatomic) PXCMMSpecManager *specManager; // ivar: _specManager
@property (retain, nonatomic) UINavigationBar *standaloneNavigationBar; // ivar: _standaloneNavigationBar
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(BOOL)_canPresentComposeRecipientViewController;
-(BOOL)_shouldShowActionMenu;
-(BOOL)actionMenu:(id)arg0 actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)actionMenu:(id)arg0 actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)shouldShowAddMoreButtonForAssetsViewController:(id)arg0 ;
-(NSInteger)positionForBar:(id)arg0 ;
-(id)_localizedSelectionTitle;
-(id)completeMyMomentViewController:(id)arg0 performActionForSession:(id)arg1 ;
-(id)completeMyMomentViewController:(id)arg0 performSendBackActionForSession:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSession:(id)arg0 ;
-(id)oneUpPresentationForAssetsViewController:(id)arg0 ;
-(id)undoManagerForActionMenuController:(id)arg0 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)_activateNotificationSuppressionIfNecessary;
-(void)_completePeopleSuggestionsLoading;
-(void)_deactivateNotificationSuppressionIfNecessary;
-(void)_dismissViewControllerWithCompletionHandler:(id)arg0 ;
-(void)_handleActionButton;
-(void)_handleActionMenuButtonItem:(id)arg0 ;
-(void)_handleComposeRecipientCancelButton:(id)arg0 ;
-(void)_performCancel;
-(void)_presentComposeRecipientViewController;
-(void)_presentViewController:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_setupNavigationItem;
-(void)_startPreloadingTasksIfNeeded;
-(void)_updateActionProgress;
-(void)_updateComponentViewController:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)_updateComponentsViewControllerLayout;
-(void)_updateStyle;
-(void)_updateTitle;
-(void)actionMenu:(id)arg0 actionPerformer:(id)arg1 didChangeState:(NSUInteger)arg2 ;
-(void)actionMenu:(id)arg0 assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2 ;
-(void)assetsViewControllerDidTapActionButton:(id)arg0 ;
-(void)assetsViewControllerDidTapSendBackActionButton:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didPerformDeletionActionForAssetsViewController:(id)arg0 ;
-(void)didTapAddMoreButtonForAssetsViewController:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)ppt_setSelecting:(BOOL)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif