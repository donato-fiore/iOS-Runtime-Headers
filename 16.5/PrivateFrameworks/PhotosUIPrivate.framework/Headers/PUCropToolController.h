// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCROPTOOLCONTROLLER_H
#define PUCROPTOOLCONTROLLER_H

@class UILongPressGestureRecognizer, UIView, NSMutableDictionary, PXUIButton, UIButton, NSTimer, CEKBadgeTextView, NSDictionary, NUCropModel, NSString, PLImageGeometry, UIImage, NSMutableArray, NUComposition, PLPhotoEditRenderer, NSArray;
@protocol UIGestureRecognizerDelegate, PUCropTransformedImageViewDelegate, PUCropAspectViewControllerDelegate, PUCropPerspectiveAdjustmentsDataSourceDelegate, PUCropPerspectiveAdjustmentsDataSourceDelegate, PUAdjustmentViewControllerDelegate, PUVideoScrubberViewDelegate, UIPopoverPresentationControllerDelegate, OS_dispatch_queue;


#import "PUPhotoEditToolController.h"
#import "PUAdjustmentsViewController.h"
#import "PUCropAspect.h"
#import "PUCropAspectFlipperView.h"
#import "PUCropAspectViewController.h"
#import "PUCropOverlayView.h"
#import "PUCropPerspectiveView.h"
#import "PUCropPerspectiveAdjustmentsDataSource.h"
#import "PUEditActionActivity.h"
#import "PUCropHandleView.h"
#import "PUCropToolControllerSpec.h"
#import "PUVideoScrubberView.h"

@interface PUCropToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate, PUCropTransformedImageViewDelegate, PUCropAspectViewControllerDelegate, PUCropPerspectiveAdjustmentsDataSourceDelegate, PUCropPerspectiveAdjustmentsDataSourceDelegate, PUAdjustmentViewControllerDelegate, PUVideoScrubberViewDelegate, UIPopoverPresentationControllerDelegate>



@property (retain, nonatomic) UILongPressGestureRecognizer *accessibilityLongPressGestureRecognizer; // ivar: _accessibilityLongPressGestureRecognizer
@property (nonatomic, getter=isActiveTool) BOOL activeTool; // ivar: _activeTool
@property (retain, nonatomic) UIView *adjustmentPickerView; // ivar: _adjustmentPickerView
@property (retain, nonatomic) PUAdjustmentsViewController *adjustmentsViewController; // ivar: _adjustmentsViewController
@property (retain, nonatomic) NSMutableDictionary *animationTargetsByKeyPath; // ivar: _animationTargetsByKeyPath
@property (retain, nonatomic) NSMutableDictionary *animationsByKeyPath; // ivar: _animationsByKeyPath
@property (retain, nonatomic) PXUIButton *aspectButton; // ivar: _aspectButton
@property (retain, nonatomic) UIButton *aspectRatioLockButton; // ivar: _aspectRatioLockButton
@property (retain, nonatomic) PXUIButton *autoButton; // ivar: _autoButton
@property (nonatomic) BOOL autoButtonInReframeMode; // ivar: _autoButtonInReframeMode
@property (nonatomic) NSInteger autoButtonMode; // ivar: _autoButtonMode
@property (retain, nonatomic) NSTimer *badgeShowingExpirationTimer; // ivar: _badgeShowingExpirationTimer
@property (retain, nonatomic) CEKBadgeTextView *badgeView; // ivar: _badgeView
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) BOOL contentViewsHidden; // ivar: _contentViewsHidden
@property (nonatomic) NSUInteger contentViewsHiddenAnimationCount; // ivar: _contentViewsHiddenAnimationCount
@property (retain, nonatomic) PUCropAspect *cropAspect; // ivar: _cropAspect
@property (retain, nonatomic) PUCropAspectFlipperView *cropAspectFlipperView; // ivar: _cropAspectFlipperView
@property (retain, nonatomic) PUCropAspectViewController *cropAspectViewController; // ivar: _cropAspectViewController
@property (retain, nonatomic) UIView *cropCanvasView; // ivar: _cropCanvasView
@property (retain, nonatomic) NSDictionary *cropHandleViewsByHandle; // ivar: _cropHandleViewsByHandle
@property (retain, nonatomic) NUCropModel *cropModel; // ivar: _cropModel
@property (retain, nonatomic) PUCropOverlayView *cropOverlayView; // ivar: _cropOverlayView
@property (retain, nonatomic) PUCropPerspectiveView *cropView; // ivar: _cropView
@property (nonatomic) CGRect cropViewFrameForLastModelLoad; // ivar: _cropViewFrameForLastModelLoad
@property (retain, nonatomic) PUCropPerspectiveAdjustmentsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableSourceSwitch; // ivar: _disableSourceSwitch
@property (retain, nonatomic) PXUIButton *flipButton; // ivar: _flipButton
@property (retain, nonatomic) *CGImage gainMapImage; // ivar: _gainMapImage
@property (nonatomic) float gainMapValue; // ivar: _gainMapValue
@property (retain, nonatomic) PLImageGeometry *geometry; // ivar: _geometry
@property (nonatomic) BOOL gridVisible; // ivar: _gridVisible
@property (nonatomic) BOOL hasAppliedCropSuggestion; // ivar: _hasAppliedCropSuggestion
@property (nonatomic) BOOL hasAppliedPerspectiveSuggestion; // ivar: _hasAppliedPerspectiveSuggestion
@property (nonatomic) BOOL hasAutoAppliedCropSuggestion; // ivar: _hasAutoAppliedCropSuggestion
@property (nonatomic) BOOL hasAutoAppliedPerspectiveSuggestion; // ivar: _hasAutoAppliedPerspectiveSuggestion
@property (nonatomic) BOOL hasRequestedCropSuggestion; // ivar: _hasRequestedCropSuggestion
@property (nonatomic) BOOL hasRequestedPerspectiveSuggestion; // ivar: _hasRequestedPerspectiveSuggestion
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreTrackingUpdates; // ivar: _ignoreTrackingUpdates
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL imageHasOriginalCrop; // ivar: _imageHasOriginalCrop
@property (nonatomic) BOOL imageHasReframeData; // ivar: _imageHasReframeData
@property (nonatomic) BOOL imageIsUsingReframe; // ivar: _imageIsUsingReframe
@property (nonatomic) BOOL imageLoadingInProgress; // ivar: _imageLoadingInProgress
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue; // ivar: _imageLoadingQueue
@property (retain, nonatomic) NSMutableArray *imageLoadingQueueCompletionBlocks; // ivar: _imageLoadingQueueCompletionBlocks
@property (nonatomic) NSInteger initialAction; // ivar: _initialAction
@property (nonatomic) CGRect initialHandlePanCropRect; // ivar: _initialHandlePanCropRect
@property (nonatomic) BOOL initialImageLoaded; // ivar: _initialImageLoaded
@property (retain, nonatomic) NSMutableDictionary *initialLocationsInHandlesByHandle; // ivar: _initialLocationsInHandlesByHandle
@property (nonatomic) CGRect inputExtent; // ivar: _inputExtent
@property (retain, nonatomic) NUComposition *lastKnownComposition; // ivar: _lastKnownComposition
@property (nonatomic) BOOL loadingStateFromModel; // ivar: _loadingStateFromModel
@property (nonatomic) BOOL mediaViewLoadingInProgress; // ivar: _mediaViewLoadingInProgress
@property (nonatomic) CGSize minimumViewCropRectSizeForHandleGesture; // ivar: _minimumViewCropRectSizeForHandleGesture
@property (nonatomic, getter=isModelChangeLocal) BOOL modelChangeLocal; // ivar: _modelChangeLocal
@property (nonatomic) BOOL modelLoadingSuspended; // ivar: _modelLoadingSuspended
@property (nonatomic) BOOL needsImageLoad; // ivar: _needsImageLoad
@property (nonatomic) BOOL needsMediaLoad; // ivar: _needsMediaLoad
@property (nonatomic) BOOL needsModelLoad; // ivar: _needsModelLoad
@property (retain, nonatomic) PUEditActionActivity *overcaptureSourceToggleActivity; // ivar: _overcaptureSourceToggleActivity
@property (nonatomic) CGFloat pitchAngle; // ivar: _pitchAngle
@property (nonatomic) UIEdgeInsets previewViewInsets; // ivar: _previewViewInsets
@property (retain, nonatomic) PLPhotoEditRenderer *renderer; // ivar: _renderer
@property (retain, nonatomic) PXUIButton *rotateButton; // ivar: _rotateButton
@property (retain, nonatomic) UIView *rotateSnapshotView; // ivar: _rotateSnapshotView
@property (nonatomic) NSUInteger rotatingAnimationCount; // ivar: _rotatingAnimationCount
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (nonatomic) CGSize screenSize; // ivar: _screenSize
@property (retain, nonatomic) PUCropHandleView *selectedCropHandleView; // ivar: _selectedCropHandleView
@property (nonatomic) CGFloat straightenAngle; // ivar: _straightenAngle
@property (nonatomic) CGRect suggestedCrop; // ivar: _suggestedCrop
@property (nonatomic) CGFloat suggestedPitchAngle; // ivar: _suggestedPitchAngle
@property (nonatomic) CGFloat suggestedStraightenAngle; // ivar: _suggestedStraightenAngle
@property (nonatomic) CGFloat suggestedYawAngle; // ivar: _suggestedYawAngle
@property (readonly) Class superclass;
@property (nonatomic) BOOL toolBadgeDoesHide; // ivar: _toolBadgeDoesHide
@property (readonly, nonatomic) PUCropToolControllerSpec *toolControllerSpec;
@property (readonly, nonatomic) NSArray *toolKeyCommands; // ivar: _toolKeyCommands
@property (nonatomic, getter=isTrackingAdjustmentControl) BOOL trackingAdjustmentControl; // ivar: _trackingAdjustmentControl
@property (nonatomic) BOOL videoScrubberIsInteracting; // ivar: _videoScrubberIsInteracting
@property (nonatomic) ? videoScrubberSeekTime; // ivar: _videoScrubberSeekTime
@property (retain, nonatomic) PUVideoScrubberView *videoScrubberView; // ivar: _videoScrubberView
@property (nonatomic) CGRect viewCropRect; // ivar: _viewCropRect
@property (nonatomic) BOOL wantsPreviewViewHidden; // ivar: _wantsPreviewViewHidden
@property (nonatomic) BOOL wasLoadingStateFromModelWhenTrackingBegan; // ivar: _wasLoadingStateFromModelWhenTrackingBegan
@property (nonatomic) CGFloat yawAngle; // ivar: _yawAngle


-(BOOL)_forceOvercaptureSourceForCrop;
-(BOOL)_hasConstraintsForKey:(id)arg0 ;
-(BOOL)_hasCropSuggestion;
-(BOOL)_hasPerspectiveSuggestion;
-(BOOL)_needsRecomposeCropRect;
-(BOOL)_overcaptureSourceUsed;
-(BOOL)canBecomeActiveTool;
-(BOOL)canResetToDefaultValue;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)handlesMediaViewInsets;
-(BOOL)handlesVideoPlaying;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg0 ;
-(BOOL)setLockedCropAspectIfNeededIgnoringCurrentLock:(BOOL)arg0 ;
-(BOOL)supportsPreviewingOriginal;
-(BOOL)suppressesEditUpdates;
-(BOOL)wantsDefaultPreviewView;
-(BOOL)wantsSecondaryToolbarVisible;
-(BOOL)wantsSliderKeyControl;
-(CGFloat)_defaultPitchAngle;
-(CGFloat)_defaultStraightenAngle;
-(CGFloat)_defaultYawAngle;
-(NSInteger)_defaultOrientation;
-(NSInteger)toolControllerTag;
// -(id)_animateValueFromValue:(CGFloat)arg0 toValue:(CGFloat)arg1 interpolation:(id)arg2 completion:(unk)arg3  ;
-(id)_animationForKeyPath:(id)arg0 ;
-(id)_animationTargetForKeyPath:(id)arg0 ;
-(id)adjustmentsRenderer:(id)arg0 ;
-(id)centerToolbarView;
-(id)filter;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)leadingToolbarViews;
-(id)localizedName;
-(id)localizedResetToolActionTitle;
-(id)offlineKeyCommands;
-(id)toolbarIcon;
-(id)trailingToolbarViews;
-(struct CGPoint )_pointForHandle:(NSUInteger)arg0 ;
-(struct CGPoint )_pointForHandle:(NSUInteger)arg0 onCropRect:(struct CGRect )arg1 ;
-(struct CGRect )_addHeight:(CGFloat)arg0 toRect:(struct CGRect )arg1 anchorTop:(BOOL)arg2 ;
-(struct CGRect )_addWidth:(CGFloat)arg0 toRect:(struct CGRect )arg1 anchorLeft:(BOOL)arg2 ;
-(struct CGRect )_cropCanvasFrame;
-(struct CGRect )_cropRectFromPanningHandle:(NSUInteger)arg0 byAmount:(struct CGVector )arg1 ;
-(struct CGRect )_defaultImageCropRect;
-(struct CGRect )_defaultViewCropRect;
-(struct CGRect )_suggestedCropRectForImageRect:(struct CGRect )arg0 ;
-(struct CGVector )_applyAspectOfCropRect:(struct CGRect )arg0 toHandleMovement:(struct CGVector )arg1 ;
-(struct CGVector )_correctInputVector:(struct CGVector )arg0 forHandle:(NSUInteger)arg1 onCropRect:(struct CGRect )arg2 lockDirection:(BOOL)arg3 ;
-(struct CGVector )_deltaMaskForHandle:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )preferredPreviewViewInsets;
-(void)_accessibilityLongPressChanged:(id)arg0 ;
-(void)_applyCropAndPerspectiveSuggestion;
-(void)_applyCropRect:(struct CGRect )arg0 straightenAngle:(CGFloat)arg1 pitchAngle:(CGFloat)arg2 yawAngle:(CGFloat)arg3 isAutoCrop:(BOOL)arg4 isSmartCrop:(BOOL)arg5 isOriginalCrop:(BOOL)arg6 ;
-(void)_applyReframeOrDynamicCrop;
-(void)_aspectButtonTapped:(id)arg0 ;
-(void)_aspectLockButtonTapped;
-(void)_autoApplyCropAndPerspectiveSuggestionIfNeeded;
-(void)_autoRecomposeCropRect;
-(void)_cancelAnimationForKeyPath:(id)arg0 ;
-(void)_cancelDelayedRecomposeCropRect;
-(void)_closeAspectRatioPicker;
-(void)_createRendererIfNeeded;
-(void)_cropToggleTapped:(id)arg0 ;
-(void)_flipButtonTapped:(id)arg0 ;
-(void)_gridButtonTapped:(id)arg0 ;
-(void)_handleCropHandlePan:(id)arg0 ;
-(void)_handleDidCreateEditedImage:(id)arg0 inputExtent:(struct CGRect )arg1 ;
-(void)_handleRenderedVideoWithURL:(id)arg0 originalLivePhoto:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_handleTouchingGesture:(id)arg0 ;
-(void)_hideGrid;
-(void)_hideGridDelayed;
-(void)_hideMaskedContent;
-(void)_hideMaskedContentDelayed;
-(void)_installRenderedImageAndDisplayIfNeeded;
-(void)_invalidateConstraintsForKey:(id)arg0 ;
-(void)_layoutAdjustmentTools;
-(void)_loadCropSuggestionIfNeeded;
-(void)_loadImageIfNeededWithCompletion:(id)arg0 ;
-(void)_loadMediaIfNeeded;
-(void)_loadPerspectiveSuggestionIfNeeded;
-(void)_loadStateFromModelAnimated:(BOOL)arg0 ;
// -(void)_performGeometryChange:(id)arg0 animated:(unk)arg1  ;
-(void)_performInitialAction;
-(void)_performLocalCropModelChanges:(id)arg0 ;
-(void)_performLocalModelChanges:(id)arg0 ;
-(void)_preferredContentSizeCategoryChanged;
-(void)_recomposeCropRectAnimated:(BOOL)arg0 ;
-(void)_recomposeCropRectDelayed;
-(void)_removeSnapshotView:(id)arg0 ;
-(void)_resetAllValuesAnimated:(BOOL)arg0 ;
-(void)_resetAllValuesAnimated:(BOOL)arg0 skipLayerTransformUpdate:(BOOL)arg1 ;
-(void)_rotateButtonTapped:(id)arg0 ;
-(void)_rotateByApplyingOrientation:(NSInteger)arg0 ;
-(void)_setAnimation:(id)arg0 forKeyPath:(id)arg1 ;
-(void)_setAnimationTarget:(id)arg0 forKeyPath:(id)arg1 ;
-(void)_setupCropModelFromCompositionController:(id)arg0 ;
-(void)_showGridAndCancelDelayedHide;
-(void)_showMaskedContentAndCancelDelayedHide;
-(void)_toggleCropAndPerspective;
-(void)_toggleOvercaptureSource;
-(void)_updateAspectRatioControls;
-(void)_updateBadgeTextWithInfo:(id)arg0 ;
-(void)_updateCropActionButtons;
-(void)_updateCropCanvasConstraintsIfNeeded;
-(void)_updateCropToggleButton;
-(void)_updateCropToggleButtonMode;
-(void)_updateCropToggleConstraintsIfNeeded;
-(void)_updateCropViewsForInteraction;
-(void)_updateOvercaptureSourceSwitchActivity;
-(void)_updatePreviewViewInsets;
-(void)_updateRendererWithCurrentComposition;
-(void)adjustmentsDataChanged:(id)arg0 ;
-(void)adjustmentsViewControllerDidUpdateSelectedControl:(id)arg0 ;
-(void)adjustmentsViewControllerSliderDidEndScrubbing:(id)arg0 ;
-(void)adjustmentsViewControllerSliderWillBeginScrubbing:(id)arg0 ;
-(void)adjustmentsViewControllerToolDidEndScrubbing:(id)arg0 ;
-(void)adjustmentsViewControllerToolWillBeginScrubbing:(id)arg0 ;
-(void)aspectRatioLockChanged;
-(void)baseMediaInvalidated;
-(void)basePhotoInvalidated;
-(void)compositionControllerDidChangeForAdjustments:(id)arg0 ;
-(void)createVideoScrubber;
-(void)cropAspectController:(id)arg0 cropAspectSelected:(id)arg1 ;
-(void)cropAspectFlipperView:(id)arg0 cropOrientationSelected:(NSInteger)arg1 ;
-(void)cropTransformedImageViewDidEndTracking:(id)arg0 ;
-(void)cropTransformedImageViewDidTrack:(id)arg0 ;
-(void)cropTransformedImageViewWillBeginTracking:(id)arg0 ;
-(void)dealloc;
-(void)decreaseSliderValue:(BOOL)arg0 ;
-(void)didBecomeActiveTool;
-(void)didResignActiveTool;
-(void)editValuesCalculatorHasChangedGeometricValues:(id)arg0 ;
-(void)handleResigningCropTool;
-(void)increaseSliderValue:(BOOL)arg0 ;
-(void)prepareForSave:(BOOL)arg0 ;
-(void)prepareForToolTransitionWithCompletion:(id)arg0 ;
-(void)resetToDefaultValueAnimated:(BOOL)arg0 ;
-(void)resetToolLabelHidingTimer;
-(void)rotateAssetsClockwise:(id)arg0 ;
-(void)rotateAssetsCounterclockwise:(id)arg0 ;
-(void)setAspectRatioLocked:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setLayoutOrientation:(NSInteger)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)setupWithAsset:(id)arg0 compositionController:(id)arg1 editSource:(id)arg2 overcaptureEditSource:(id)arg3 valuesCalculator:(id)arg4 ;
-(void)showBadgeView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showToolLabel;
-(void)showVideoScrubber:(BOOL)arg0 ;
-(void)updateAspectRatioLockButton;
-(void)updateCropAspectRatioOrientation:(NSInteger)arg0 ;
-(void)updateVideoFrameWithScrubber;
-(void)updateViewConstraints;
-(void)updateViewOrdering;
-(void)videoScrubberViewDidScrubTo:(struct ? )arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBecomeActiveTool;
-(void)willResignActiveTool;


@end


#endif