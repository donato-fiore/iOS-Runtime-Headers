// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLMOVIEITEMVIEWCONTROLLER_H
#define QLMOVIEITEMVIEWCONTROLLER_H

@class PHPlaceholderView, NSNumber, NSLayoutConstraint, NSString, AVEditBehavior, PXUIAssetBadgeView, UIView, AVPlayerViewController, UIScrollView;
@protocol AVPictureInPictureControllerDelegate, AVEditBehaviorDelegate;


#import "QLMediaItemViewController.h"
#import "QLMovieEdits.h"
#import "QLOverlayPlayButton.h"
#import "QLVideoScrubberView.h"

@interface QLMovieItemViewController : QLMediaItemViewController <AVPictureInPictureControllerDelegate, AVEditBehaviorDelegate>

 {
    BOOL _previewIsVisisble;
    BOOL _isObservingPlayerExternalPlaybackActive;
    PHPlaceholderView *_airPlayPlaceholderView;
}


@property (readonly, nonatomic) PHPlaceholderView *airPlayPlaceholderView;
@property (nonatomic) BOOL assetCanBeRotated; // ivar: _assetCanBeRotated
@property (retain, nonatomic) NSNumber *assetIsHDR; // ivar: _assetIsHDR
@property (retain) NSLayoutConstraint *bottomScrubberConstraint; // ivar: _bottomScrubberConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVEditBehavior *editBehavior; // ivar: _editBehavior
@property (retain, nonatomic) QLMovieEdits *edits; // ivar: _edits
@property (retain, nonatomic) QLMovieEdits *editsSinceLastSave; // ivar: _editsSinceLastSave
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXUIAssetBadgeView *hdrBadgeView; // ivar: _hdrBadgeView
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (nonatomic) BOOL isSavingEditsBeforeDismissing; // ivar: _isSavingEditsBeforeDismissing
@property (retain) QLOverlayPlayButton *playButton; // ivar: _playButton
@property (retain, nonatomic) UIView *playerViewContainer; // ivar: _playerViewContainer
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (weak, nonatomic) UIScrollView *playerViewControllerScrollView; // ivar: _playerViewControllerScrollView
@property (retain) QLVideoScrubberView *scrubber; // ivar: _scrubber
@property (retain) UIView *scrubberContainer; // ivar: _scrubberContainer
@property (retain) UIScrollView *scrubberContainerScrollView; // ivar: _scrubberContainerScrollView
@property (nonatomic) CGFloat scrubberVerticalOffset; // ivar: _scrubberVerticalOffset
@property (readonly) Class superclass;


-(BOOL)_enterEditModeIfPossible;
-(BOOL)_videoIsPlaying;
-(BOOL)canEnterFullScreen;
-(BOOL)canPerformFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(BOOL)canToggleFullScreen;
-(BOOL)play;
-(BOOL)shouldAllowEditingContents;
-(BOOL)shouldDisplayPlayButtonInNavigationBar;
-(BOOL)shouldHandleRegisteringForCommandCenterHandlers;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)_metadataItemTitle;
-(id)accessoryView;
-(id)editBehaviorAlertActionsForDoneButtonTap:(id)arg0 ;
-(id)editProgressIndicatorMessage;
-(id)init;
-(id)parallaxView;
-(id)registeredKeyCommands;
-(id)scrollView;
-(id)scrollViewInView:(id)arg0 ;
-(id)setupPlayerViewWithPlayer:(id)arg0 ;
-(id)timeLabelScrollView;
-(id)toolbarButtonsForTraitCollection:(id)arg0 ;
-(id)transitioningView;
-(void)_addHDRBadgeViewToHierarchyIfNeeded:(id)arg0 ;
-(void)_displayHDRBadgeView:(id)arg0 ;
-(void)_enterEditMode;
-(void)_exitEditMode:(BOOL)arg0 ;
-(void)_hideHDRBadgeViewAfterDelayIfNeeded:(CGFloat)arg0 ;
-(void)_hideHDRBadgeViewIfVisible;
-(void)_resetTrimmingValues;
-(void)_rotateIfPossible;
-(void)_rotateMovieRight;
-(void)_rotateRightButtonTapped;
-(void)_saveMovieIfEdited:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)_saveMovieIfEditedWithEditedCopy:(id)arg0 shouldDismissAfterSaving:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_setupEditBehavior;
-(void)_setupScrubberPlaceholderThumbnail;
-(void)_showFailedToSaveChangesAlertWithError:(id)arg0 ;
-(void)_showHDRBadgeView:(id)arg0 ;
-(void)_showHDRBadgeViewIfNeeded;
-(void)_updateEditMode;
-(void)_updateEditsTrimmingValuesWithTrimStartTime:(CGFloat)arg0 trimEndTime:(CGFloat)arg1 ;
-(void)_updateHDRBadgeViewVisibilityForFullscreenMode:(BOOL)arg0 ;
-(void)_updateHDRBadgeViewVisibilityWithNewPlayingStatus:(NSInteger)arg0 ;
-(void)_updateInterfaceAfterExitingEditMode;
-(void)_updatePlaceHolderView;
-(void)_updatePlayButtonVisibility;
-(void)addScrubberIfNeededWithDeferral;
-(void)buttonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)didChangePlayingStatus;
-(void)editBehaviorDidCancel:(id)arg0 ;
-(void)editButtonTapped;
-(void)handlePerformedKeyCommandIfNeeded:(id)arg0 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(void)previewBecameFullScreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewWillAppear:(BOOL)arg0 ;
-(void)savePreviewEditedCopyWithCompletionHandler:(id)arg0 ;
-(void)setPlayControlsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)transitionDidFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)transitionDidStart:(BOOL)arg0 ;
-(void)updateInterfaceAfterSavingEdits;
-(void)updateInterfaceForSavingEdits;


@end


#endif