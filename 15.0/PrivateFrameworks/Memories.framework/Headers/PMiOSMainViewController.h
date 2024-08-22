// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMIOSMAINVIEWCONTROLLER_H
#define PMIOSMAINVIEWCONTROLLER_H

@class UIBarButtonItem, UITapGestureRecognizer, UIView, UIVisualEffectView, NSString, NSError, NSArray, UIButton, UIScreenEdgePanGestureRecognizer, UILabel, NSLayoutConstraint;
@protocol MiroEditorViewControllerDelegate, PMMovieProviderDelegate, PMEditProviderDelegate, PMMovieContainerViewControllerDelegate, UIPopoverPresentationControllerDelegate, PLDismissableViewController, MiroPreventDismissalDelegate, PMScrubberProviderActionDelegate, PMActivityViewControllerDelegate, PMAddToFavortiesActivityDelegate;


#import "MiroPlayerViewController.h"
#import "PMiOSSliderViewController.h"
#import "PMEditorRootViewController.h"
#import "PMMovieContainerViewController.h"
#import "PMMovieProvider.h"
#import "PMiOSTimeLabelView.h"
#import "VEKProduction.h"
#import "PMiOSProgressViewController.h"
#import "PMSaveProvider.h"
#import "PMiOSScrubberViewController.h"
#import "PMTTRLoadingViewController.h"

@interface PMiOSMainViewController : MiroPlayerViewController <MiroEditorViewControllerDelegate, PMMovieProviderDelegate, PMEditProviderDelegate, PMMovieContainerViewControllerDelegate, UIPopoverPresentationControllerDelegate, PLDismissableViewController, MiroPreventDismissalDelegate, PMScrubberProviderActionDelegate, PMActivityViewControllerDelegate, PMAddToFavortiesActivityDelegate>

 {
    BOOL _notifiedOfBackgroundDuringExport;
}


@property (readonly, weak, nonatomic) UIBarButtonItem *activityBBItem;
@property (retain, nonatomic) UITapGestureRecognizer *airplayVisibilityTapGestureRecognizer; // ivar: _airplayVisibilityTapGestureRecognizer
@property (nonatomic) BOOL askedToCreateMemory; // ivar: _askedToCreateMemory
@property (retain, nonatomic) UIView *bottomBar; // ivar: _bottomBar
@property (retain, nonatomic) UIVisualEffectView *bottomBarBackgroundView; // ivar: _bottomBarBackgroundView
@property (nonatomic) BOOL controlVisibility; // ivar: _controlVisibility
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITapGestureRecognizer *debugTapGestureRecognizer; // ivar: _debugTapGestureRecognizer
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *downloadError; // ivar: _downloadError
@property (nonatomic) BOOL downloadInProgress; // ivar: _downloadInProgress
@property (retain, nonatomic) NSArray *durationDisplayNames; // ivar: _durationDisplayNames
@property (retain, nonatomic) PMiOSSliderViewController *durationSlider; // ivar: _durationSlider
@property (readonly, weak, nonatomic) UIBarButtonItem *editBBItem;
@property (retain, nonatomic) UIView *editorPresentationSnapshot; // ivar: _editorPresentationSnapshot
@property (readonly, weak, nonatomic) UIBarButtonItem *flexSpaceBBItem;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialDuration; // ivar: _initialDuration
@property (nonatomic) NSInteger initialMood; // ivar: _initialMood
@property (nonatomic) NSInteger initialNumberOfAssetsInMovie; // ivar: _initialNumberOfAssetsInMovie
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (retain, nonatomic) UIButton *loadErrorButton; // ivar: _loadErrorButton
@property (retain, nonatomic) PMEditorRootViewController *memoryEditor; // ivar: _memoryEditor
@property (retain, nonatomic) PMiOSSliderViewController *moodSlider; // ivar: _moodSlider
@property (retain, nonatomic) PMMovieContainerViewController *movieContainerViewController; // ivar: _movieContainerViewController
@property (retain, nonatomic) PMMovieProvider *movieProvider; // ivar: _movieProvider
@property (readonly, weak, nonatomic) UIBarButtonItem *navBarShareBBItem;
@property (retain, nonatomic) UIView *offscreenPresentationSnapshot; // ivar: _offscreenPresentationSnapshot
@property NSUInteger pendingActionState; // ivar: _pendingActionState
@property (readonly, weak, nonatomic) UIBarButtonItem *playPauseBBItem;
@property (retain, nonatomic) PMiOSTimeLabelView *playbackTimeView; // ivar: _playbackTimeView
@property (nonatomic) BOOL preventDismissalByPhotosIfPossible; // ivar: preventDismissalByPhotosIfPossible
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (retain, nonatomic) PMiOSProgressViewController *progressViewController; // ivar: _progressViewController
@property (retain, nonatomic) PMSaveProvider *saveProvider; // ivar: _saveProvider
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanLeftGestureRecognizer; // ivar: _screenEdgePanLeftGestureRecognizer
@property (retain, nonatomic) PMiOSScrubberViewController *scrubber; // ivar: _scrubber
@property (retain, nonatomic) UIBarButtonItem *shareBBItem; // ivar: _shareBBItem
@property BOOL shouldPlayOnAppearance; // ivar: _shouldPlayOnAppearance
@property BOOL sliderIsScrolling; // ivar: _sliderIsScrolling
@property (readonly) Class superclass;
@property (nonatomic) ? timeAtTeardown; // ivar: _timeAtTeardown
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *toolbarBlurBottomConstraint; // ivar: _toolbarBlurBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolbarBottomConstraint; // ivar: _toolbarBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolbarHeightConstraint; // ivar: _toolbarHeightConstraint
@property (retain, nonatomic) PMTTRLoadingViewController *ttrLoadingView; // ivar: _ttrLoadingView


+(void)initialize;
+(void)seedAspectGlobalsWithDeviceAspect;
-(BOOL)_deviceIsRunningInternalOS;
-(BOOL)collectionIsAMemory:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)ph_isTransitionOverlayView:(id)arg0 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(CGFloat)sliderHeightForTraitCollection:(id)arg0 ;
-(NSInteger)ph_preferredChromeAnimation;
-(NSUInteger)ph_preferredChrome;
-(id)_addHorizontalDividerToSuperView:(id)arg0 constrainedToYAxisAnchor:(id)arg1 ;
-(id)_snapshotPlayer;
-(id)_snapshotPlayerWithAspect:(CGFloat)arg0 ;
-(id)initWithProduction:(id)arg0 ;
-(id)memoryProductionFromProduction:(id)arg0 andResult:(id)arg1 ;
-(id)playPauseBBItemWithRate:(float)arg0 ;
-(struct CGRect )ph_rectOfInterestForTransitionInCoordinateSpace:(id)arg0 ;
-(struct CGRect )ph_rectOfInterestForTransitionInCoordinateSpace:(id)arg0 withInfo:(id)arg1 ;
-(struct CGSize )naturalSizeForPlayback;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_applicationWillTerminate:(id)arg0 ;
-(void)_atexitInitialize;
-(void)_atexitUninitialize;
-(void)_autoEditOnLoad;
-(void)_cancelProgress:(id)arg0 ;
-(void)_clearEditorPresentationSnapshot;
-(void)_clearOffscreenPresentationSnapshot;
-(void)_exportWasInterruptedByBackgrounding:(id)arg0 ;
-(void)_exportWillBegin:(id)arg0 ;
-(void)_launchAutoEditDebugView:(id)arg0 ;
-(void)_mediaServicesReset:(id)arg0 ;
-(void)_memoryEditorWithCompletion:(id)arg0 ;
-(void)_movePlayerToBeginning;
-(void)_reEnableToolbar:(id)arg0 ;
-(void)_resetAudioSession;
-(void)_setupBottomToolbar;
-(void)_takeAndDisplayEditorPresentationSnapshot;
-(void)_takeAndDisplayOffscreenPresentationSnapshot;
-(void)_updateControls;
-(void)_updateDurationSlider;
-(void)_updateMoodSlider;
-(void)_updateTitleForTraitCollection:(id)arg0 ;
-(void)addToFavorites;
-(void)airPlayDidEnd;
-(void)airPlayDidStart;
-(void)back:(id)arg0 ;
-(void)dealloc;
-(void)debugPrefsStart:(id)arg0 ;
-(void)didRefreshPlayerItem:(id)arg0 downloadError:(id)arg1 ;
-(void)didShareActivity;
-(void)dismissAllModalViewControllers;
-(void)dismissEditor;
-(void)downloadErrorButtonTapped:(id)arg0 ;
-(void)editProvider:(id)arg0 didChange:(BOOL)arg1 ;
-(void)editProviderWillBeginChanging;
-(void)editSelector:(id)arg0 ;
-(void)editorViewController:(id)arg0 didEditProduction:(id)arg1 withResult:(id)arg2 ;
-(void)editorViewControllerDidCancel:(id)arg0 ;
-(void)editorViewControllerDidFinishDismissing:(id)arg0 ;
-(void)gentlyRefreshPlayerIfNeccesary;
-(void)ph_loadTransitionSourcePlaceholderViewUsingFactory:(id)arg0 ;
-(void)playPause:(id)arg0 ;
-(void)playerDidDoContentChange;
-(void)playerDidPlayToEnd;
-(void)playerNotReadyForDisplay;
-(void)playerProgressDidChange:(struct ? )arg0 ;
-(void)playerRateChanged;
-(void)playerReadyForDisplay;
-(void)playerWillRefreshMovie;
-(void)processPendingActionState;
-(void)progressDidChange:(CGFloat)arg0 description:(id)arg1 stageDescription:(id)arg2 ;
-(void)rebuildToolbarsToTraitCollection:(id)arg0 ;
-(void)rebuildToolbarsToTraitCollection:(id)arg0 withPlayRate:(float)arg1 ;
-(void)removeFromFavorites;
-(void)removeLoadErrorButton;
-(void)resultWasUpdated:(id)arg0 ;
-(void)scrubberScrolledToTime:(struct ? )arg0 completionHandler:(id)arg1 ;
-(void)scrubberTappedWithPlayState:(BOOL)arg0 time:(struct ? )arg1 ;
-(void)share:(id)arg0 ;
-(void)swipeBack:(id)arg0 ;
-(void)takeOwnershipOfMovieContainerViewController;
-(void)teardownMovieController;
-(void)testMemoryEditorFor:(id)arg0 withCompletion:(id)arg1 ;
-(void)toggleControlVisibility;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif