// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMEDITORROOTVIEWCONTROLLER_H
#define PMEDITORROOTVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, UISplitViewController, NSString, UIButton, UIView;
@protocol PMEditorPlayerViewDelegate, PMEditorToolbarOwner, PMEditProviderDelegate, PMMovieProviderDelegate, UISplitViewControllerDelegate, UIViewControllerTransitioningDelegate, PMMovieContainerViewControllerDelegate, MiroContentEditorViewControllerDelegate, PMEditorMenuViewControllerDelegate, MiroAssetSuggestionsCollectionViewControllerDelegate, TitleChangeInformable, MiroEditorViewControllerDelegate;


#import "PMDurationProvider.h"
#import "PMEditorDurationViewController.h"
#import "VEKResult.h"
#import "PMEditorMenuViewController.h"
#import "PMMovieContainerViewController.h"
#import "PMMovieProvider.h"
#import "PMMusicProvider.h"
#import "PMSpinnerPlayPauseOverlay.h"
#import "VEKProduction.h"
#import "PMTitleEditorProvider.h"
#import "PMEditorBottomToolbar.h"

@interface PMEditorRootViewController : UIViewController <PMEditorPlayerViewDelegate, PMEditorToolbarOwner, PMEditProviderDelegate, PMMovieProviderDelegate, UISplitViewControllerDelegate, UIViewControllerTransitioningDelegate, PMMovieContainerViewControllerDelegate, MiroContentEditorViewControllerDelegate, PMEditorMenuViewControllerDelegate, MiroAssetSuggestionsCollectionViewControllerDelegate, TitleChangeInformable>



@property (retain, nonatomic) NSLayoutConstraint *aspectRatio; // ivar: _aspectRatio
@property (retain, nonatomic) UISplitViewController *contentSplitViewController; // ivar: _contentSplitViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MiroEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFinishDismissingWasCalled; // ivar: _didFinishDismissingWasCalled
@property (nonatomic) BOOL didMakeEdits; // ivar: _didMakeEdits
@property (retain, nonatomic) PMDurationProvider *durationProvider; // ivar: _durationProvider
@property (weak, nonatomic) PMEditorDurationViewController *durationViewController; // ivar: _durationViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSeparatingOrCollapsing; // ivar: _isSeparatingOrCollapsing
@property (retain, nonatomic) VEKResult *lastResult; // ivar: _lastResult
@property (retain, nonatomic) PMEditorMenuViewController *menuViewController; // ivar: _menuViewController
@property (retain, nonatomic) PMMovieContainerViewController *movieDisplayController; // ivar: _movieDisplayController
@property (retain, nonatomic) UIViewController *movieDisplayParentViewController; // ivar: _movieDisplayParentViewController
@property (retain, nonatomic) PMMovieProvider *movieProvider; // ivar: _movieProvider
@property (retain, nonatomic) PMMusicProvider *musicProvider; // ivar: _musicProvider
@property (nonatomic) BOOL needsCancelCalled; // ivar: _needsCancelCalled
@property (readonly, nonatomic) NSUInteger numberOfClipsInMovie;
@property (retain, nonatomic) UIButton *orientationButton; // ivar: _orientationButton
@property (nonatomic) int pendingAction; // ivar: _pendingAction
@property (retain, nonatomic) PMSpinnerPlayPauseOverlay *playPauseOverlay; // ivar: _playPauseOverlay
@property (retain, nonatomic) NSLayoutConstraint *playerContainerTargetHeight; // ivar: _playerContainerTargetHeight
@property (retain, nonatomic) UIView *playerContainerView; // ivar: _playerContainerView
@property (retain, nonatomic) NSLayoutConstraint *playerContainerYOffset; // ivar: _playerContainerYOffset
@property (retain, nonatomic) VEKProduction *previousProduction; // ivar: _previousProduction
@property (retain, nonatomic) VEKResult *previousResult; // ivar: _previousResult
@property (nonatomic) BOOL previousZoomedToFill; // ivar: _previousZoomedToFill
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (readonly, nonatomic) CGFloat sequenceDuration;
@property (retain, nonatomic) UIView *splitViewContainerView; // ivar: _splitViewContainerView
@property (nonatomic) int splitViewState; // ivar: _splitViewState
@property (readonly) Class superclass;
@property (retain, nonatomic) PMTitleEditorProvider *titleProvider; // ivar: _titleProvider
@property (retain, nonatomic) PMEditorBottomToolbar *toolbar; // ivar: _toolbar
@property (readonly, nonatomic) CGFloat toolbarHeight;
@property (retain, nonatomic) NSLayoutConstraint *toolbarHeightConstraint; // ivar: _toolbarHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolbarYOffset; // ivar: _toolbarYOffset
@property (retain, nonatomic) NSString *userEditedSubTitle; // ivar: _userEditedSubTitle
@property (retain, nonatomic) NSString *userEditedTitle; // ivar: _userEditedTitle


-(BOOL)editorMenuVisibleInNavigationStackProceeding:(id)arg0 ;
-(BOOL)performMainMenuViewControllerScrollTest:(id)arg0 iterations:(int)arg1 delta:(int)arg2 length:(int)arg3 ;
-(BOOL)performMusicMenuViewControllerScrollTest:(id)arg0 iterations:(int)arg1 delta:(int)arg2 length:(int)arg3 ;
-(BOOL)performScrubberScrollTestScrollTest:(id)arg0 iterations:(int)arg1 delta:(int)arg2 length:(int)arg3 ;
-(BOOL)performSoundtrackMenuViewControllerScrollTest:(id)arg0 iterations:(int)arg1 delta:(int)arg2 length:(int)arg3 ;
-(BOOL)performTitleEditorViewControllerScrollTest:(id)arg0 iterations:(int)arg1 delta:(int)arg2 length:(int)arg3 ;
-(BOOL)playerViewShouldShowInChildViewControllers;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(BOOL)shouldDismiss;
-(BOOL)shouldPreventSplitViewSeperation;
-(BOOL)splitViewController:(id)arg0 collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2 ;
-(BOOL)subTitlesHaveDiverged;
-(BOOL)titlesHaveDiverged;
-(NSInteger)preferredStatusBarStyle;
-(id)_containerViewForPlayer;
-(id)createNavigationWithViewController:(id)arg0 ;
-(id)miroPPT;
-(id)placeSnapshotOfPlayerViewInContainerView:(id)arg0 ;
-(id)splitViewController:(id)arg0 separateSecondaryViewControllerFromPrimaryViewController:(id)arg1 ;
-(id)viewController;
-(struct CGSize )naturalSizeForPlayback;
-(void)_alertSomeAssetsFailedWithTitle:(id)arg0 message:(id)arg1 okActionBlock:(id)arg2 ;
-(void)_hideToolbar;
-(void)_showContentEditorViewController;
-(void)_showDebugPickerViewController:(NSUInteger)arg0 ;
-(void)_showToolbar;
-(void)airPlayDidEnd;
-(void)airPlayDidStart;
-(void)alertUserOfCancellation;
-(void)assetSuggestionsController:(id)arg0 didChangeSelectedAsset:(id)arg1 ;
-(void)assetSuggestionsControllerDidDismiss:(id)arg0 ;
-(void)cancel;
-(void)cancelButtonAction;
-(void)cancelWithBlock:(id)arg0 ;
-(void)contentEditorViewController:(id)arg0 didEditProduction:(id)arg1 didTrim:(BOOL)arg2 ;
-(void)contentEditorViewControllerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)didRefreshPlayerItem:(id)arg0 downloadError:(id)arg1 ;
-(void)done;
-(void)editProvider:(id)arg0 didChange:(BOOL)arg1 ;
-(void)hideToolbarIfNeeded;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)pausePlayer;
-(void)playPauseOverlayTapped:(id)arg0 ;
-(void)playerDidDoContentChange;
-(void)playerRateChanged;
-(void)prepareForDismissalWithBlock:(id)arg0 ;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)prepareLayoutForCollapsedMode;
-(void)prepareLayoutForSpiltMode;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)resultWasUpdated:(id)arg0 ;
-(void)setupWithMovieProvider:(id)arg0 ;
-(void)setupWithProduction:(id)arg0 andResult:(id)arg1 ;
-(void)showContentEditorViewController;
-(void)showDebugEditStylePickerViewController;
-(void)showDebugFilterPickerViewController;
-(void)showDebugTitleStylePickerViewController;
-(void)showDebugTransitionPickerViewController;
-(void)showDurationEditorViewController;
-(void)showKeyAssetSelectionPicker;
-(void)showMusicPickerViewController;
-(void)showTitleEditorViewController;
-(void)showToolbar;
-(void)subTitleDidChangeTo:(id)arg0 ;
-(void)switchPlaybackOrientation:(id)arg0 ;
-(void)titleDidChangeTo:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif