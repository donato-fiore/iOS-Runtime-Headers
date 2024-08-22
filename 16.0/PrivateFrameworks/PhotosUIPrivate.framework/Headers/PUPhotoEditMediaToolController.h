// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITMEDIATOOLCONTROLLER_H
#define PUPHOTOEDITMEDIATOOLCONTROLLER_H

@class _UIBackdropView, UIView, NSLayoutConstraint, NSMutableArray, PXUIButton, UILabel, UIButton, PLRoundProgressView, CEKApertureButton, UILayoutGuide, PXCinematicEditController, CEKEdgeGradientView, PTCinematographyScript, NSString;
@protocol PUTrimToolControllerDelegate, PUPhotoEditApertureToolbarDelegate, PUVideoEditOverlayViewControllerDelegate, PXCinematicEditControllerDelegate;


#import "PUPhotoEditToolController.h"
#import "PUTrimToolController.h"
#import "PUVideoEditOverlayViewController.h"
#import "PUPhotoEditApertureToolbar.h"

@interface PUPhotoEditMediaToolController : PUPhotoEditToolController <PUTrimToolControllerDelegate, PUPhotoEditApertureToolbarDelegate, PUVideoEditOverlayViewControllerDelegate, PXCinematicEditControllerDelegate>

 {
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    UIView *_containerView;
    NSLayoutConstraint *_viewHeightConstraint;
    NSLayoutConstraint *_leadingWidthConstraint;
    NSLayoutConstraint *_trailingWidthConstraint;
    NSMutableArray *_constraints;
    PUTrimToolController *_trimController;
    PXUIButton *_muteButton;
    PXUIButton *_livePhotoButton;
    UILabel *_videoLabelView;
    UIButton *_stabilizeButton;
    PLRoundProgressView *_stabilizeProgressView;
    PXUIButton *_portraitVideoButton;
    CEKApertureButton *_apertureButton;
    UIView *_apertureButtonContainer;
    PXUIButton *_autoFocusButton;
    PUVideoEditOverlayViewController *_overlayController;
    UIView *_apertureContainer;
    PUPhotoEditApertureToolbar *_apertureToolbar;
    UILayoutGuide *_apertureContainerLayoutGuide;
    NSInteger _toolMode;
    PXCinematicEditController *_cinematographyController;
    CEKEdgeGradientView *_apertureGradientView;
    BOOL _trimControllerVisible;
    BOOL _viewHasAppeared;
    BOOL _trimControllerScrubberNeedsVisualUpdate;
    BOOL _stabilizationInProgress;
    ? _originalStillImageTime;
    BOOL _isActiveTool;
}


@property (readonly, nonatomic) PTCinematographyScript *cinematographyScript;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalControlPadding; // ivar: _horizontalControlPadding
@property (readonly, nonatomic) CGFloat horizontalPrimaryViewPaddingOffset; // ivar: _horizontalPrimaryViewPaddingOffset
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (readonly, nonatomic) UIButton *livePhotoButton;
@property (retain, nonatomic) UIView *primaryView; // ivar: _primaryView
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUTrimToolController *trimController;
@property (nonatomic) BOOL useTranslucentBackground; // ivar: _useTranslucentBackground
@property (nonatomic) CGFloat verticalButtonOffset; // ivar: _verticalButtonOffset


-(BOOL)_isTrimAllowed;
-(BOOL)_updateAutoFocusToolbarButton;
-(BOOL)_wantsPortraitVideoControls;
-(BOOL)_wantsTrimControl;
-(BOOL)apertureToolbarShouldRotateLabelsWithOrientation:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResetToDefaultValue;
-(BOOL)hasTrimmedVideo;
-(BOOL)wantsScrubberKeyControl;
-(BOOL)wantsSecondaryToolbarVisible;
-(BOOL)wantsZoomAndPanEnabled;
-(NSInteger)scrubberOrientation;
-(NSInteger)toolControllerTag;
-(id)_localizedTitleForCurrentPlaybackVariation;
-(id)accessibilityHUDItemForButton:(id)arg0 ;
-(id)axDescriptionForFocusDecisionAtTime:(struct ? )arg0 ;
-(id)centerToolbarView;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)leadingToolbarViews;
-(id)localizedName;
-(id)makeTrimToolController;
-(id)toolbarIcon;
-(id)toolbarIconAccessibilityLabel;
-(id)trailingToolbarViews;
-(void)_dismissPortraitVideoDebugControls:(id)arg0 ;
-(void)_handleApertureButton:(id)arg0 ;
-(void)_handleAutoFocusButton:(id)arg0 ;
-(void)_handleLivePhotoButton:(id)arg0 ;
-(void)_handleMuteButton:(id)arg0 ;
-(void)_handlePortraitVideoButton:(id)arg0 ;
-(void)_handlePortraitVideoButtonLongPress:(id)arg0 ;
-(void)_handleStabilizeButton:(id)arg0 ;
-(void)_initializeCinematographyScript;
-(void)_invalidateConstraints;
-(void)_invalidateTrimControlScrubberThumbnails;
-(void)_layoutToolGradient;
-(void)_presentPortraitVideoDebugControls;
-(void)_reportStabilizeProgress:(CGFloat)arg0 ;
-(void)_resetDefaultToolMode;
-(void)_setToolMode:(NSInteger)arg0 ;
-(void)_updateApertureControlsAnimated:(BOOL)arg0 ;
-(void)_updateApertureSliderLength;
-(void)_updateBackgroundAnimated:(BOOL)arg0 ;
-(void)_updateLivePhotoButton:(id)arg0 ;
-(void)_updateLivePhotoButtonAnimated:(BOOL)arg0 ;
-(void)_updateMuteButtonAnimated:(BOOL)arg0 ;
-(void)_updatePortraitVideoButtonAnimated:(BOOL)arg0 ;
-(void)_updateStabilizationInProgress:(BOOL)arg0 ;
-(void)_updateStabilizeButtonAnimated:(BOOL)arg0 ;
-(void)_updateStabilizeProgressViewAnimated:(BOOL)arg0 ;
-(void)_updateToolVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateTrackerDisplay:(BOOL)arg0 ;
-(void)_updateTrimControlAndToolbarButtons;
-(void)apertureToolbar:(id)arg0 didChangeValue:(CGFloat)arg1 ;
-(void)apertureToolbarDidStartSliding:(id)arg0 ;
-(void)apertureToolbarDidStopSliding:(id)arg0 ;
-(void)baseMediaInvalidated;
-(void)cineScriptBecameAvailable:(id)arg0 ;
-(void)cineScriptCouldNotInitializeWithError:(id)arg0 ;
-(void)cinematographyWasEdited;
-(void)cinematographyWasEditedAtTime:(struct ? )arg0 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg0 ;
-(void)decreaseScrubberValue:(BOOL)arg0 ;
-(void)didRemoveUserDecision;
-(void)increaseScrubberValue:(BOOL)arg0 ;
-(void)interactionBegan;
-(void)loadView;
-(void)mediaView:(id)arg0 didZoom:(CGFloat)arg1 ;
-(void)mediaViewDidScroll:(id)arg0 ;
-(void)objectTrackingFinishedWithSuccess:(BOOL)arg0 ;
-(void)objectTrackingStartedAtTime:(struct ? )arg0 ;
-(void)photoEditLivePhotoModelUpdated;
-(void)reactivate;
-(void)reloadToolbarButtons:(BOOL)arg0 ;
-(void)removeFocusDecisionAtTime:(struct ? )arg0 ;
-(void)setBackdropViewGroupName:(id)arg0 ;
-(void)setLayoutOrientation:(NSInteger)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)setOriginalStillImageTime:(struct ? )arg0 ;
-(void)setPlaceholderImage:(id)arg0 ;
-(void)setUseGradientBackground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setupWithAsset:(id)arg0 compositionController:(id)arg1 editSource:(id)arg2 overcaptureEditSource:(id)arg3 valuesCalculator:(id)arg4 ;
-(void)togglePlayback:(id)arg0 ;
-(void)trackedObjectWasUpdatedAtTime:(struct ? )arg0 shouldStop:(*BOOL)arg1 ;
-(void)trimToolController:(id)arg0 didBeginInteractivelyEditingElement:(NSInteger)arg1 ;
-(void)trimToolController:(id)arg0 didEndInteractivelyEditingElement:(NSInteger)arg1 ;
-(void)trimToolControllerDidChange:(id)arg0 state:(NSUInteger)arg1 ;
-(void)updateCinematicVideoControlsEnableState;
-(void)updateForIncomingAnimation;
-(void)updateToolbarButtonsAnimated:(BOOL)arg0 ;
-(void)updateViewConstraints;
-(void)videoRenderingChanged;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)willBecomeActiveTool;
-(void)willResignActiveTool;


@end


#endif