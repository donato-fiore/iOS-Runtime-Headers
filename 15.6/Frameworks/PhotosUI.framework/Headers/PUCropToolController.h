// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCROPTOOLCONTROLLER_H
#define PUCROPTOOLCONTROLLER_H

@class UILongPressGestureRecognizer, NSMutableDictionary, PXUIButton, UIView, NSDictionary, PLImageGeometry, UIImage, NUComposition, UIButton, PLPhotoEditRenderer, NSTimer, CEKBadgeTextView, NUCropModel, NSString, PXImageLayerModulator, NSMutableArray, PXImageModulationManager, NSArray;
@protocol UIGestureRecognizerDelegate, PUCropTransformedImageViewDelegate, PUCropAspectViewControllerDelegate, PUCropPerspectiveAdjustmentsDataSourceDelegate, PUAdjustmentViewControllerDelegate, PUCropVideoScrubberViewDelegate, UIPopoverPresentationControllerDelegate, PXChangeObserver, OS_dispatch_queue;


#import "PUPhotoEditToolController.h"
#import "PUCropAspect.h"
#import "PUCropOverlayView.h"
#import "PUCropPerspectiveView.h"
#import "PUCropHandleView.h"
#import "PUAdjustmentsViewController.h"
#import "PUCropAspectFlipperView.h"
#import "PUCropAspectViewController.h"
#import "PUCropPerspectiveAdjustmentsDataSource.h"
#import "PUEditActionActivity.h"
#import "PUCropToolControllerSpec.h"
#import "PUCropVideoScrubberView.h"

@interface PUCropToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate, PUCropTransformedImageViewDelegate, PUCropAspectViewControllerDelegate, PUCropPerspectiveAdjustmentsDataSourceDelegate, PUAdjustmentViewControllerDelegate, PUCropVideoScrubberViewDelegate, UIPopoverPresentationControllerDelegate, PXChangeObserver>



@property (retain, nonatomic, setter=_setAccessibilityLongPressGestureRecognizer:) UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer; // ivar: __accessibilityLongPressGestureRecognizer
@property (nonatomic, getter=_isActiveTool, setter=_setActiveTool:) BOOL _activeTool; // ivar: __activeTool
@property (retain, nonatomic, setter=_setAnimationTargetsByKeyPath:) NSMutableDictionary *_animationTargetsByKeyPath; // ivar: __animationTargetsByKeyPath
@property (retain, nonatomic, setter=_setAnimationsByKeyPath:) NSMutableDictionary *_animationsByKeyPath; // ivar: __animationsByKeyPath
@property (retain, nonatomic, setter=_setAspectButton:) PXUIButton *_aspectButton; // ivar: __aspectButton
@property (retain, nonatomic, setter=_setAutoButton:) PXUIButton *_autoButton; // ivar: __autoButton
@property (nonatomic, setter=_setContentViewsHidden:) BOOL _contentViewsHidden; // ivar: __contentViewsHidden
@property (nonatomic, setter=_setContentViewsHiddenAnimationCount:) NSUInteger _contentViewsHiddenAnimationCount; // ivar: __contentViewsHiddenAnimationCount
@property (retain, nonatomic, setter=_setCropAspect:) PUCropAspect *_cropAspect; // ivar: __cropAspect
@property (retain, nonatomic, setter=_setCropCanvasView:) UIView *_cropCanvasView; // ivar: __cropCanvasView
@property (retain, nonatomic, setter=_setCropHandleViewsByHandle:) NSDictionary *_cropHandleViewsByHandle; // ivar: __cropHandleViewsByHandle
@property (retain, nonatomic, setter=_setCropOverlayView:) PUCropOverlayView *_cropOverlayView; // ivar: __cropOverlayView
@property (retain, nonatomic, setter=_setCropView:) PUCropPerspectiveView *_cropView; // ivar: __cropView
@property (nonatomic, setter=_setCropViewFrameForLastModelLoad:) CGRect _cropViewFrameForLastModelLoad; // ivar: __cropViewFrameForLastModelLoad
@property (retain, nonatomic, setter=_setFileSystemQueue:) NSObject<OS_dispatch_queue> *_fileSystemQueue; // ivar: __fileSystemQueue
@property (retain, nonatomic, setter=_setFlipButton:) PXUIButton *_flipButton; // ivar: __flipButton
@property (retain, nonatomic, setter=_setGeometry:) PLImageGeometry *_geometry; // ivar: __geometry
@property (nonatomic, setter=_setGridVisible:) BOOL _gridVisible; // ivar: __gridVisible
@property (nonatomic, setter=_setHasAppliedCropSuggestion:) BOOL _hasAppliedCropSuggestion; // ivar: __hasAppliedCropSuggestion
@property (nonatomic, setter=_setHasAppliedPerspectiveSuggestion:) BOOL _hasAppliedPerspectiveSuggestion; // ivar: __hasAppliedPerspectiveSuggestion
@property (nonatomic, setter=_setHasAutoAppliedCropSuggestion:) BOOL _hasAutoAppliedCropSuggestion; // ivar: __hasAutoAppliedCropSuggestion
@property (nonatomic, setter=_setHasAutoAppliedPerspectiveSuggestion:) BOOL _hasAutoAppliedPerspectiveSuggestion; // ivar: __hasAutoAppliedPerspectiveSuggestion
@property (nonatomic, setter=_setHasRequestedCropSuggestion:) BOOL _hasRequestedCropSuggestion; // ivar: __hasRequestedCropSuggestion
@property (nonatomic, setter=_setHasRequestedPerspectiveSuggestion:) BOOL _hasRequestedPerspectiveSuggestion; // ivar: __hasRequestedPerspectiveSuggestion
@property (nonatomic, setter=_setIgnoreTrackingUpdates:) BOOL _ignoreTrackingUpdates; // ivar: __ignoreTrackingUpdates
@property (retain, nonatomic, setter=_setImage:) UIImage *_image; // ivar: __image
@property (nonatomic, setter=_setInitialHandlePanCropRect:) CGRect _initialHandlePanCropRect; // ivar: __initialHandlePanCropRect
@property (retain, nonatomic, setter=_setInitialLocationsInHandlesByHandle:) NSMutableDictionary *_initialLocationsInHandlesByHandle; // ivar: __initialLocationsInHandlesByHandle
@property (nonatomic, setter=_setInputExtent:) CGRect _inputExtent; // ivar: __inputExtent
@property (retain, nonatomic, setter=_setLastKnownComposition:) NUComposition *_lastKnownComposition; // ivar: __lastKnownComposition
@property (nonatomic, getter=_isModelChangeLocal, setter=_setModelChangeLocal:) BOOL _modelChangeLocal; // ivar: __modelChangeLocal
@property (nonatomic, setter=_setNeedsImageLoad:) BOOL _needsImageLoad; // ivar: __needsImageLoad
@property (nonatomic, setter=_setNeedsLivePhotoLoad:) BOOL _needsLivePhotoLoad; // ivar: __needsLivePhotoLoad
@property (nonatomic, setter=_setNeedsModelLoad:) BOOL _needsModelLoad; // ivar: __needsModelLoad
@property (retain, nonatomic, setter=_setPerspectiveButton:) UIButton *_perspectiveButton; // ivar: __perspectiveButton
@property (nonatomic, setter=_setPitchAngle:) CGFloat _pitchAngle; // ivar: __pitchAngle
@property (nonatomic, setter=_setPreviewViewInsets:) UIEdgeInsets _previewViewInsets; // ivar: __previewViewInsets
@property (retain, nonatomic, setter=_setRenderer:) PLPhotoEditRenderer *_renderer; // ivar: __renderer
@property (retain, nonatomic, setter=_setRotateButton:) PXUIButton *_rotateButton; // ivar: __rotateButton
@property (retain, nonatomic, setter=_setRotateSnapshotView:) UIView *_rotateSnapshotView; // ivar: __rotateSnapshotView
@property (nonatomic, setter=_setRotatingAnimationCount:) NSUInteger _rotatingAnimationCount; // ivar: __rotatingAnimationCount
@property (retain, nonatomic, setter=_setSelectedCropHandleView:) PUCropHandleView *_selectedCropHandleView; // ivar: __selectedCropHandleView
@property (nonatomic, setter=_setStraightenAngle:) CGFloat _straightenAngle; // ivar: __straightenAngle
@property (nonatomic, setter=_setSuggestedCrop:) CGRect _suggestedCrop; // ivar: __suggestedCrop
@property (nonatomic, setter=_setSuggestedPitchAngle:) CGFloat _suggestedPitchAngle; // ivar: __suggestedPitchAngle
@property (nonatomic, setter=_setSuggestedStraightenAngle:) CGFloat _suggestedStraightenAngle; // ivar: __suggestedStraightenAngle
@property (nonatomic, setter=_setSuggestedYawAngle:) CGFloat _suggestedYawAngle; // ivar: __suggestedYawAngle
@property (nonatomic, setter=_setViewCropRect:) CGRect _viewCropRect; // ivar: __viewCropRect
@property (nonatomic, setter=_setWantsPreviewViewHidden:) BOOL _wantsPreviewViewHidden; // ivar: __wantsPreviewViewHidden
@property (nonatomic, setter=_setYawAngle:) CGFloat _yawAngle; // ivar: __yawAngle
@property (retain, nonatomic) UIView *adjustmentPickerView; // ivar: _adjustmentPickerView
@property (retain, nonatomic) PUAdjustmentsViewController *adjustmentsViewController; // ivar: _adjustmentsViewController
@property (nonatomic) BOOL autoButtonInReframeMode; // ivar: _autoButtonInReframeMode
@property (nonatomic) NSInteger autoButtonMode; // ivar: _autoButtonMode
@property (retain, nonatomic) NSTimer *badgeShowingExpirationTimer; // ivar: _badgeShowingExpirationTimer
@property (retain, nonatomic) CEKBadgeTextView *badgeView; // ivar: _badgeView
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) PUCropAspectFlipperView *cropAspectFlipperView; // ivar: _cropAspectFlipperView
@property (retain, nonatomic) PUCropAspectViewController *cropAspectViewController; // ivar: _cropAspectViewController
@property (retain, nonatomic) NUCropModel *cropModel; // ivar: _cropModel
@property (retain, nonatomic) PUCropPerspectiveAdjustmentsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableSourceSwitch; // ivar: _disableSourceSwitch
@property (retain, nonatomic) *CGImage gainMapImage; // ivar: _gainMapImage
@property (nonatomic) float gainMapValue; // ivar: _gainMapValue
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL imageHasOriginalCrop; // ivar: _imageHasOriginalCrop
@property (nonatomic) BOOL imageHasReframeData; // ivar: _imageHasReframeData
@property (nonatomic) BOOL imageIsUsingReframe; // ivar: _imageIsUsingReframe
@property (retain, nonatomic) PXImageLayerModulator *imageLayerModulator; // ivar: _imageLayerModulator
@property (nonatomic) BOOL imageLoadingInProgress; // ivar: _imageLoadingInProgress
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue; // ivar: _imageLoadingQueue
@property (retain, nonatomic) NSMutableArray *imageLoadingQueueCompletionBlocks; // ivar: _imageLoadingQueueCompletionBlocks
@property (retain, nonatomic) PXImageModulationManager *imageModulationManager; // ivar: _imageModulationManager
@property (nonatomic) NSInteger initialAction; // ivar: _initialAction
@property (nonatomic) BOOL initialImageLoaded; // ivar: _initialImageLoaded
@property (nonatomic) CGSize minimumViewCropRectSizeForHandleGesture; // ivar: _minimumViewCropRectSizeForHandleGesture
@property (nonatomic) BOOL modelLoadingSuspended; // ivar: _modelLoadingSuspended
@property (retain, nonatomic) PUEditActionActivity *overcaptureSourceToggleActivity; // ivar: _overcaptureSourceToggleActivity
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (nonatomic) CGSize screenSize; // ivar: _screenSize
@property (readonly) Class superclass;
@property (nonatomic) BOOL toolBadgeDoesHide; // ivar: _toolBadgeDoesHide
@property (readonly, nonatomic) PUCropToolControllerSpec *toolControllerSpec;
@property (readonly, nonatomic) NSArray *toolKeyCommands; // ivar: _toolKeyCommands
@property (nonatomic, getter=_isTrackingAdjustmentControl, setter=_setTrackingAdjustmentControl:) BOOL trackingAdjustmentControl; // ivar: _trackingAdjustmentControl
@property (nonatomic) BOOL videoScrubberIsInteracting; // ivar: _videoScrubberIsInteracting
@property (nonatomic) ? videoScrubberSeekTime; // ivar: _videoScrubberSeekTime
@property (retain, nonatomic) PUCropVideoScrubberView *videoScrubberView; // ivar: _videoScrubberView


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
-(void)_loadLivePhotoIfNeeded;
-(void)_loadPerspectiveSuggestionIfNeeded;
-(void)_loadStateFromModel;
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
-(void)baseLivePhotoInvalidated;
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
-(void)handleResigningCropTool;
-(void)increaseSliderValue:(BOOL)arg0 ;
-(void)leavingEditWithCancel;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForSave:(BOOL)arg0 ;
-(void)prepareForToolTransitionWithCompletion:(id)arg0 ;
-(void)resetToDefaultValueAnimated:(BOOL)arg0 ;
-(void)resetToolLabelHidingTimer;
-(void)rotateAssetsClockwise:(id)arg0 ;
-(void)rotateAssetsCounterclockwise:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setLayoutOrientation:(NSInteger)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)setupWithAsset:(id)arg0 compositionController:(id)arg1 editSource:(id)arg2 overcaptureEditSource:(id)arg3 valuesCalculator:(id)arg4 ;
-(void)showBadgeView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showToolLabel;
-(void)showVideoScrubber:(BOOL)arg0 ;
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