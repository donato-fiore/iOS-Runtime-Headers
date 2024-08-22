// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITVIEWCONTROLLER_H
#define PUPHOTOEDITVIEWCONTROLLER_H

@class UIViewController, NSArray, NUMediaView, NUBufferRenderClient, PXUIButton, UIView, NSUndoManager, UIButton, NSURL, NSString, PEAutoAdjustmentController, UIImageView, CEKBadgeTextView, UITapGestureRecognizer, PXUIAssetBadgeView, NSMutableSet, UIMenu, NSDictionary, NSTimer, PXTimeInterval, UIAlertController, PICompositionController, PEEditSessionEventBuilder, PLEditSource, PHContentEditingInput, PXAction, PXImageLayerModulator, PXLivePhotoViewModulator, PLPhotoEditRenderer, NUComposition, UIPencilInteraction, UIImage, PEValuesCalculator;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIPencilInteractionDelegate, PUPhotoEditToolControllerDelegate, PUVideoEditPluginSessionDataSource, PUImageEditPluginSessionDataSource, PUEditPluginSessionDelegate, PXPhotoLibraryUIChangeObserver, PUOneUpAssetTransitionViewController, PXForcedDismissableViewController, PUPhotoEditIrisModelChangeObserver, PHLivePhotoViewDelegate, PUPhotoEditResourceLoaderDelegate, PUViewControllerSpecChangeObserver, NUMediaViewDelegatePrivate, PUPhotoEditToolbarDelegate, PICompositionControllerDelegate, PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource, PUVideoScrubberViewDelegate, PEValuesCalculatorDelegate, PUPhotoEditLayoutSource, OS_dispatch_source, NUImageProperties, PUEditableAsset, PUPhotoEditViewControllerPresentationDelegate, PUPhotoEditViewControllerSessionDelegate;


#import "PUPhotoEditToolController.h"
#import "PUTouchingGestureRecognizer.h"
#import "PUPhotoEditToolbar.h"
#import "PUPhotoEditButtonCenteredToolbar.h"
#import "PUPhotoEditToolPickerController.h"
#import "PUPhotoEditShadowView.h"
#import "PUEditPluginSession.h"
#import "PUPhotoEditSnapshot.h"
#import "PUProgressIndicatorView.h"
#import "PUCropToolController.h"
#import "PUFilterToolController.h"
#import "PUAdjustmentsToolController.h"
#import "PUPhotoEditMediaToolController.h"
#import "PUPhotoEditPortraitToolController.h"
#import "_PPTState.h"
#import "PUPhotoEditAggregateSession.h"
#import "PUEditActionActivity.h"
#import "PUEnterEditPerformanceEventBuilder.h"
#import "PUExitEditPerformanceEventBuilder.h"
#import "PUMediaDestination.h"
#import "PUEditableMediaProvider.h"
#import "PUPhotoEditPerfHUD.h"
#import "PUPhotoEditIrisModel.h"
#import "PUPhotoEditViewControllerSpec.h"
#import "PURedeyeToolController.h"
#import "PUPhotoEditReframeHUD.h"
#import "PUPhotoEditResourceLoader.h"
#import "PUPhotoSceneHUD.h"
#import "PUVideoScrubberView.h"

@interface PUPhotoEditViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIPencilInteractionDelegate, PUPhotoEditToolControllerDelegate, PUVideoEditPluginSessionDataSource, PUImageEditPluginSessionDataSource, PUEditPluginSessionDelegate, PXPhotoLibraryUIChangeObserver, PUOneUpAssetTransitionViewController, PXForcedDismissableViewController, PUPhotoEditIrisModelChangeObserver, PHLivePhotoViewDelegate, PUPhotoEditResourceLoaderDelegate, PUViewControllerSpecChangeObserver, NUMediaViewDelegatePrivate, PUPhotoEditToolbarDelegate, PICompositionControllerDelegate, PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource, PUVideoScrubberViewDelegate, PEValuesCalculatorDelegate, PUPhotoEditLayoutSource>

 {
    NSArray *__allTools;
    PUPhotoEditToolController *_currentEditingTool;
    PUPhotoEditToolController *_previousEditingTool;
    UIViewController *_currentTool;
    BOOL _switchingToolsAnimated;
    BOOL _leavingEdit;
    BOOL _toolControllerWantsScrubber;
    NUMediaView *_mediaView;
    id *_videoScrubberTimeObserver;
    BOOL _isImageZooming;
    NUBufferRenderClient *_renderImageClient;
    BOOL _isAnimatingLayoutOrientation;
    BOOL _isAnimatingMediaViewInsets;
    PUTouchingGestureRecognizer *_livePhotoTouchRecognizer;
    BOOL _livePhotoIsPlaying;
    NSArray *_mainToolbarConstraints;
    NSArray *_alternateToolbarConstraints;
    NSArray *_secondaryToolbarConstraints;
    NSArray *_currentToolViewConstraints;
    NSArray *_placeholderImageViewConstraints;
    NSArray *_transientStatusBadgeConstraints;
    NSArray *_assetTypeBadgeConstraints;
    NSArray *_progressIndicatorViewConstraints;
    NSArray *_progressEventBlockingViewConstraints;
    NSArray *_mediaViewConstraints;
    PUPhotoEditToolbar *_mainToolbar;
    PUPhotoEditToolbar *_alternateToolbar;
    PUPhotoEditButtonCenteredToolbar *_secondaryToolbar;
    NSArray *_coreToolButtons;
    NSArray *_mainToolButtons;
    PXUIButton *_cancelButton;
    PXUIButton *_mainActionButton;
    NSInteger _mainButtonAction;
    BOOL _toolbarButtonsValid;
    PUPhotoEditToolPickerController *_toolPickerController;
    PUPhotoEditShadowView *_mainToolbarShadow;
    PUPhotoEditShadowView *_secondaryToolbarShadow;
    NSArray *_secondaryLeadingViews;
    NSArray *_secondaryTrailingViews;
    UIView *_secondaryCenterView;
    NSUndoManager *_undoManager;
    UIButton *_undoButton;
    UIButton *_redoButton;
    BOOL _updatingUndoButtons;
    UIButton *_pluginButton;
    UIButton *_markupButton;
    UIButton *_redEyeButton;
    UIButton *_ttrButton;
    BOOL _ttrExceededThreshold;
    UIButton *_zoomButton;
    PUEditPluginSession *_pluginSession;
    BOOL _pluginWorkImageVersionIsValid;
    NSInteger _pluginWorkImageVersion;
    PUPhotoEditSnapshot *_stashedSnapshot;
    NSURL *_pluginFullSizeImageURL;
    NSString *_pluginFullSizeImageSandboxExtensionToken;
    NSString *_pluginSessionIdentifier;
    BOOL _pluginWorkingOffPenultimate;
    PEAutoAdjustmentController *_autoEnhanceController;
    UIImageView *_placeholderImageView;
    BOOL _placeholderImageViewTransitioningOut;
    CEKBadgeTextView *_transientStatusBadge;
    NSUInteger _transientStatusBadgeRequestID;
    UITapGestureRecognizer *_togglePreviewTapGestureRecognizer;
    NSUInteger _togglePreviewOriginalOffRequestID;
    PXUIAssetBadgeView *_assetTypeBadge;
    BOOL _shouldShowRawDecodeBadge;
    BOOL _shouldShowProResBadge;
    PUProgressIndicatorView *_progressIndicatorView;
    id *_progressIndicatorInteractionDisablingToken;
    int _inProgressSaveRequestID;
    BOOL _inProgressSaveIsDeferredRender;
    NSObject<OS_dispatch_source> *_saveProgressTimer;
    UIView *_progressEventBlockingView;
    BOOL _downloadingForRevert;
    BOOL _didLoadTools;
    BOOL _needToReloadTools;
    BOOL _updatingToolbars;
    PUCropToolController *_cropController;
    PUFilterToolController *_filtersController;
    PUAdjustmentsToolController *_adjustmentsController;
    PUPhotoEditMediaToolController *_mediaToolController;
    PUPhotoEditPortraitToolController *_portraitToolController;
    _PPTState *_pptState;
    BOOL _isEmbeddedEdit;
    id<NUImageProperties> *_imageProperties;
    CGSize _previewOriginalSavedImageSize;
    BOOL _shouldShowPortraitTool;
    NSMutableSet *_assetsWaitingForLibraryNotification;
    UIMenu *_askToSaveAsNewClipMenu;
    NSArray *_addedKeyCommands;
    NSDictionary *_toolControllerTagsByKeyCommandNumber;
    BOOL _hasCheckedPortraitVideo;
    BOOL _isAssetPortraitVideo;
}


@property (retain, nonatomic) NSString *adjustmentIdentifierAndVersion; // ivar: _adjustmentIdentifierAndVersion
@property (retain, nonatomic, setter=_setAggregateSession:) PUPhotoEditAggregateSession *aggregateSession; // ivar: _aggregateSession
@property (readonly, nonatomic) UIMenu *askToSaveAsNewClipMenu;
@property (nonatomic) NSInteger assetChangeDismissalState; // ivar: _assetChangeDismissalState
@property (retain, nonatomic) NSTimer *assetChangeTimeoutTimer; // ivar: _assetChangeTimeoutTimer
@property (retain, nonatomic) PXTimeInterval *autoCalcInterval; // ivar: _autoCalcInterval
@property (nonatomic) BOOL burningInTrim; // ivar: _burningInTrim
@property (weak, nonatomic) UIAlertController *cancelConfirmationAlert; // ivar: _cancelConfirmationAlert
@property (retain, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (retain, nonatomic) PUEditActionActivity *copyPresetAction; // ivar: _copyPresetAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PEEditSessionEventBuilder *editSessionEventBuilder; // ivar: _editSessionEventBuilder
@property (retain, nonatomic) PXTimeInterval *editSessionTimeInterval; // ivar: _editSessionTimeInterval
@property (retain, nonatomic) PLEditSource *editSource; // ivar: _editSource
@property (retain, nonatomic) PHContentEditingInput *editSourceContentEditingInput; // ivar: _editSourceContentEditingInput
@property (readonly) NSInteger editSourceSelection; // ivar: _editSourceSelection
@property (retain, nonatomic) NSString *editSourceUTI; // ivar: _editSourceUTI
@property (retain, nonatomic) PUEnterEditPerformanceEventBuilder *enterEditEventBuilder; // ivar: _enterEditEventBuilder
@property (retain, nonatomic) PXTimeInterval *enterEditTimeInterval; // ivar: _enterEditTimeInterval
@property (retain, nonatomic) PXAction *executedSessionAction; // ivar: _executedSessionAction
@property (retain, nonatomic) PUExitEditPerformanceEventBuilder *exitEditEventBuilder; // ivar: _exitEditEventBuilder
@property (retain, nonatomic) PXTimeInterval *exitEditTimeInterval; // ivar: _exitEditTimeInterval
@property (retain, nonatomic) PXTimeInterval *filterInterval; // ivar: _filterInterval
@property (nonatomic, getter=isFirstSinceBoot) BOOL firstSinceBoot; // ivar: _firstSinceBoot
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch; // ivar: _firstSinceLaunch
@property (retain, nonatomic) *CGImage gainMapImage; // ivar: _gainMapImage
@property (nonatomic) float gainMapValue; // ivar: _gainMapValue
@property (nonatomic) BOOL hasLoadedRaw; // ivar: _hasLoadedRaw
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImageLayerModulator *imageLayerModulator; // ivar: _imageLayerModulator
@property (nonatomic) ? initialSeekTime; // ivar: _initialSeekTime
@property (nonatomic) NSInteger initialToolType; // ivar: _initialToolType
@property (weak, nonatomic) UIAlertController *irisRevertConfirmationAlert; // ivar: _irisRevertConfirmationAlert
@property (nonatomic) BOOL isCachingVideo; // ivar: _isCachingVideo
@property (readonly, nonatomic) BOOL isLoopingVideo;
@property (nonatomic) BOOL isTransitioningFromDownloadingToRunningAutoCalculators; // ivar: _isTransitioningFromDownloadingToRunningAutoCalculators
@property (readonly, nonatomic) BOOL isVideoOn;
@property (weak, nonatomic) UIAlertController *jpegPreviewForRawConfirmationAlert; // ivar: _jpegPreviewForRawConfirmationAlert
@property (nonatomic) CGSize lastKnownPreviewImageSize; // ivar: _lastKnownPreviewImageSize
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator; // ivar: _livePhotoViewModulator
@property (retain, nonatomic) PLPhotoEditRenderer *mainRenderer; // ivar: _mainRenderer
@property (readonly, nonatomic) PUMediaDestination *mediaDestination; // ivar: _mediaDestination
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) NSInteger mediaViewEdgeInsetsUpdateDisableCount; // ivar: _mediaViewEdgeInsetsUpdateDisableCount
@property (copy, nonatomic) NUComposition *originalComposition; // ivar: _originalComposition
@property (retain, nonatomic) PLEditSource *originalImageEditSource; // ivar: _originalImageEditSource
@property (nonatomic) NSInteger originalImageExifOrientation; // ivar: _originalImageExifOrientation
@property (retain, nonatomic) PLEditSource *originalOvercaptureEditSource; // ivar: _originalOvercaptureEditSource
@property (nonatomic) NSUInteger originalReframeVariation; // ivar: _originalReframeVariation
@property (nonatomic) ? originalStillImageTime; // ivar: _originalStillImageTime
@property (retain, nonatomic) PLEditSource *overCaptureEditSource; // ivar: _overCaptureEditSource
@property (retain, nonatomic) NSURL *overCaptureEditSourceURL; // ivar: _overCaptureEditSourceURL
@property (nonatomic) NSInteger overcaptureType; // ivar: _overcaptureType
@property (retain, nonatomic) PUEditActionActivity *pastePresetAction; // ivar: _pastePresetAction
@property (retain, nonatomic) UIPencilInteraction *pencilInteraction; // ivar: _pencilInteraction
@property (nonatomic, getter=isPenultimateAvailable) BOOL penultimateAvailable; // ivar: _penultimateAvailable
@property (retain, nonatomic) PUPhotoEditPerfHUD *perfHUD; // ivar: _perfHUD
@property (readonly, nonatomic) NSObject<PUEditableAsset> *photo; // ivar: _photo
@property (retain, nonatomic) PUPhotoEditIrisModel *photoEditIrisModel; // ivar: _photoEditIrisModel
@property (readonly, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec; // ivar: _photoEditSpec
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (readonly, nonatomic) PXImageLayerModulator *placeholderImageLayerModulator; // ivar: _placeholderImageLayerModulator
@property (copy) id *ppt_afterAutoenhanceBlock; // ivar: _ppt_afterAutoenhanceBlock
@property (copy) id *ppt_afterRenderBlock; // ivar: _ppt_afterRenderBlock
@property (copy) id *ppt_didEndPlaybackBlock; // ivar: _ppt_didEndPlaybackBlock
@property (copy, nonatomic) id *ppt_editIsReadyNotificationBlock; // ivar: _ppt_editIsReadyNotificationBlock
@property (copy, nonatomic) id *ppt_exitActionCompleteNotificationBlock; // ivar: _ppt_exitActionCompleteNotificationBlock
@property (copy) id *ppt_willBeginPlaybackBlock; // ivar: _ppt_willBeginPlaybackBlock
@property (weak, nonatomic) NSObject<PUPhotoEditViewControllerPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (nonatomic) NSInteger previewRenderType; // ivar: _previewRenderType
@property (readonly, nonatomic) CGRect previewViewFrame;
@property (retain, nonatomic) PURedeyeToolController *redEyeController; // ivar: _redEyeController
@property (retain, nonatomic) PUPhotoEditReframeHUD *reframeHUD; // ivar: _reframeHUD
@property (retain, nonatomic) PXTimeInterval *resourceCheckingInterval; // ivar: _resourceCheckingInterval
@property (retain, nonatomic) PXTimeInterval *resourceDownloadInterval; // ivar: _resourceDownloadInterval
@property (retain, nonatomic) PUPhotoEditResourceLoader *resourceLoader; // ivar: _resourceLoader
@property (retain, nonatomic) PXTimeInterval *resourceLoadingInterval; // ivar: _resourceLoadingInterval
@property (weak, nonatomic) UIAlertController *revertConfirmationAlert; // ivar: _revertConfirmationAlert
@property (nonatomic, getter=isRevertingToOriginal) BOOL revertingToOriginal; // ivar: _revertingToOriginal
@property (nonatomic, getter=isRunningAutoCalculators) BOOL runningAutoCalculators; // ivar: _runningAutoCalculators
@property (nonatomic) NSInteger saveCompletionDismissalState; // ivar: _saveCompletionDismissalState
@property (retain, nonatomic) PUPhotoSceneHUD *sceneHUD; // ivar: _sceneHUD
@property (weak, nonatomic) NSObject<PUPhotoEditViewControllerSessionDelegate> *sessionDelegate; // ivar: _sessionDelegate
@property (nonatomic) BOOL shouldBePreviewingOriginal; // ivar: _shouldBePreviewingOriginal
@property (readonly) Class superclass;
@property (copy, nonatomic) NUComposition *uneditedComposition; // ivar: _uneditedComposition
@property (retain, nonatomic) PEValuesCalculator *valuesCalculator; // ivar: _valuesCalculator
@property (readonly, nonatomic) ? videoScrubberSeekTime; // ivar: _videoScrubberSeekTime
@property (readonly, nonatomic) PUVideoScrubberView *videoScrubberView; // ivar: _videoScrubberView
@property (nonatomic) NSInteger workImageVersion; // ivar: _workImageVersion


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)_defaultLivePhotoRenderPipelineFilters;
+(id)_defaultMediaViewRenderPipelineFilters;
+(void)preheatEditDependenciesIfNeeded;
-(BOOL)_canCompositionControllerBeReverted:(id)arg0 ;
-(BOOL)_hasAdjustedSlowMotion;
-(BOOL)_hasUnsavedChanges;
-(BOOL)_isLoopingVideo:(BOOL)arg0 ;
-(BOOL)_isPreviewingOriginal;
-(BOOL)_isReadyToRender;
-(BOOL)_isSaveProgressAvailable;
-(BOOL)_isWaitingForAssetChange;
-(BOOL)_isWaitingForSaveCompletion;
-(BOOL)_isZoomedIn;
-(BOOL)_markupGetsItsOwnButton;
-(BOOL)_shouldDisplayRedEyeTool;
-(BOOL)_shouldRequestAsyncAdjustmentForAsset:(id)arg0 compositionController:(id)arg1 ;
-(BOOL)_updatePreviewOriginal:(BOOL)arg0 withPresses:(id)arg1 ;
-(BOOL)_wantsTTRButton;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)currentAssetNeedsGainMap;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasLoopingVideoAdjustment;
-(BOOL)isHighframeRateVideo;
-(BOOL)isImageZooming;
-(BOOL)isPortraitVideo;
-(BOOL)isStandardVideo;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)pu_wantsNavigationBarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsToolbarVisible;
-(CGFloat)px_HDRFocus;
-(CGFloat)px_imageModulationIntensity;
-(NSInteger)currentToolPickerLayoutDirection;
-(NSInteger)preferredUserInterfaceStyle;
-(NSInteger)sourceSelection;
-(NSUInteger)toolControllerSourceAssetType:(id)arg0 ;
-(id)_allTools;
-(id)_composition;
-(id)_constraintsForToolView:(id)arg0 ;
-(id)_createMediaView;
-(id)_currentViewContentsForDismissTransition;
-(id)_defaultInitialEditingTool;
-(id)_defaultRenderPipelineFiltersForCurrentMode;
-(id)_livePhotoGestureRecognizer;
-(id)_newOutputForContentEditingInput:(id)arg0 compositionController:(id)arg1 ;
-(id)_newToolButtonForTool:(id)arg0 ;
-(id)_orientedCIImageFromUIImage:(id)arg0 ;
-(id)_preferredStatusBarHideAnimationParameters;
-(id)_toolControllerForTag:(NSInteger)arg0 ;
-(id)adjustmentConstants;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)fontForButtons;
-(id)imageProperties;
-(id)initWithPhoto:(id)arg0 mediaProvider:(id)arg1 mediaDestination:(id)arg2 ;
-(id)mainLivePhotoView;
-(id)mediaView;
-(id)photoEditToolbar:(id)arg0 accessibilityHUDItemForButton:(id)arg1 ;
-(id)pluginActivitiesForEditPluginSession:(id)arg0 ;
-(id)ppt_renderStatisticsDictionaryForTimeInterval:(CGFloat)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)toolControllerHitEventForwardView:(id)arg0 ;
-(id)toolControllerLivePhoto:(id)arg0 ;
-(id)toolControllerMainContainerView:(id)arg0 ;
-(id)toolControllerMainRenderer:(id)arg0 ;
-(id)toolControllerOriginalCompositionController:(id)arg0 ;
-(id)toolControllerPlaceholderImage:(id)arg0 ;
-(id)toolControllerPreviewView:(id)arg0 ;
-(id)toolControllerUneditedCompositionController:(id)arg0 ;
-(id)undoManager;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(int)_revertToEmptyCompositionWithCompletionHandler:(id)arg0 ;
-(int)_saveRevertedComposition:(id)arg0 withCompletionHandler:(id)arg1 ;
-(struct ? )toolControllerImageModulationOptions:(id)arg0 ;
-(struct CGPoint )toolController:(id)arg0 originalPointFromViewPoint:(struct CGPoint )arg1 view:(id)arg2 ;
-(struct CGPoint )toolController:(id)arg0 viewPointFromOriginalPoint:(struct CGPoint )arg1 view:(id)arg2 ;
-(struct CGRect )_oneUpTransitionPlaceholderViewFrame;
-(struct CGRect )_placeholderViewFrameForImageSize:(struct CGSize )arg0 ;
-(struct CGSize )toolControllerOriginalImageSize:(id)arg0 ;
-(struct CGSize )toolControllerOriginalOrientedImageSize:(id)arg0 ;
-(struct UIEdgeInsets )_currentToolPreviewInsets;
-(struct UIEdgeInsets )_mediaViewEdgeInsets;
-(struct UIEdgeInsets )_mediaViewEdgeInsetsWithGeometry:(id)arg0 ;
-(void)_cancelInProgressSaveRequest;
-(void)_captureSnapshotOfBasePhotoWithCompletionHandler:(id)arg0 ;
-(void)_chooseInitialEditingTool;
-(void)_clearBadgeConstraints;
-(void)_clearToolbars;
-(void)_commitEditSessionActionWithAsset:(id)arg0 initialCompositionController:(id)arg1 savedCompositionController:(id)arg2 localizedActionName:(id)arg3 ;
-(void)_commitSaveAsCopyWithAsset:(id)arg0 ;
-(void)_createPencilInteractionIfNeeded;
-(void)_createVideoScrubberIfNeeded;
-(void)_didEndAutoCalc;
-(void)_didEndEnterEdit;
-(void)_didEndExitActionWithSessionKeys:(id)arg0 ;
-(void)_didEndResourceLoading;
-(void)_didModifyAdjustmentWithLocalizedName:(id)arg0 ;
-(void)_didStartAutoCalc;
-(void)_didStartEnterEdit;
-(void)_didStartExitAction;
-(void)_didStartResourceLoading;
-(void)_editPluginSession:(id)arg0 checkVideoEnabled:(BOOL)arg1 loadVideoComplementURLWithHandler:(id)arg2 ;
-(void)_handleAutoEnhanceButton:(id)arg0 ;
-(void)_handleCancelButton:(id)arg0 ;
-(void)_handleCoarseScrubberValueDecrease:(id)arg0 ;
-(void)_handleCoarseScrubberValueIncrease:(id)arg0 ;
-(void)_handleCoarseSliderValueDecrease:(id)arg0 ;
-(void)_handleCoarseSliderValueIncrease:(id)arg0 ;
-(void)_handleDidLoadAdjustmentsAndBaseImageWithResult:(id)arg0 ;
-(void)_handleDidLoadOriginalWithResult:(id)arg0 ;
-(void)_handleDoneAction:(id)arg0 ;
-(void)_handleDoneButton:(id)arg0 ;
-(void)_handleLivePhotoTouchRecognizer:(id)arg0 ;
-(void)_handleMainActionButton:(id)arg0 ;
-(void)_handleMarkupButton:(id)arg0 ;
-(void)_handleMediaViewReady:(id)arg0 statistics:(id)arg1 ;
-(void)_handlePluginButton:(id)arg0 ;
-(void)_handleRedoButton:(id)arg0 ;
-(void)_handleResourceLoadChange;
-(void)_handleRevertButton:(id)arg0 ;
-(void)_handleRevertResult:(id)arg0 error:(id)arg1 ;
-(void)_handleRunFinalizerGesture:(id)arg0 ;
-(void)_handleSaveAction:(NSInteger)arg0 ;
-(void)_handleScrubberValueDecrease:(id)arg0 ;
-(void)_handleScrubberValueIncrease:(id)arg0 ;
-(void)_handleSliderValueDecrease:(id)arg0 ;
-(void)_handleSliderValueIncrease:(id)arg0 ;
-(void)_handleTTRButton:(id)arg0 ;
-(void)_handleTogglePreviewTapGesture:(id)arg0 ;
-(void)_handleToolbarToolButton:(id)arg0 ;
-(void)_handleUndoButton:(id)arg0 ;
-(void)_handleZoomButton:(id)arg0 ;
-(void)_hideEphemeralViews:(BOOL)arg0 ;
-(void)_hideProgressIndicatorImmediately:(BOOL)arg0 ;
-(void)_layoutShadowView:(id)arg0 forToolbar:(id)arg1 ;
-(void)_loadOriginalImageIfNeeded;
-(void)_loadPhotoEditResourcesIfNeeded;
-(void)_loadToolsIfNeeded;
-(void)_loadToolsIfNeeded:(BOOL)arg0 ;
-(void)_notifyDelegateSaveFinishedIfReadyWithAsset:(id)arg0 ;
-(void)_pasteAdjustments;
-(void)_performDiscardAction;
-(void)_performRevertAction;
-(void)_ppt_conditionallyExecuteAfterRender;
-(void)_presentWarningForIrisRemovesEditsWithCompletion:(id)arg0 ;
-(void)_reloadToolbarButtonsIfNeeded;
-(void)_removePlaceholderImageViewIfNeeded;
-(void)_requestLivePhotoAssetWithFilters:(id)arg0 completion:(id)arg1 ;
-(void)_resetModelAndBaseImagesToWorkImageVersion:(NSInteger)arg0 ;
-(void)_resignCurrentTool;
-(void)_restoreSnapshot:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_runFinalizerWithDebugMessages:(BOOL)arg0 ;
-(void)_sendAnalyticsForEditAction:(id)arg0 ;
-(void)_setOriginalURL:(id)arg0 originalEditSource:(id)arg1 originalOvercaptureSource:(id)arg2 ;
-(void)_setPlaybackEnabled:(BOOL)arg0 ;
-(void)_setTransientStatusBadgeVisible:(BOOL)arg0 ;
-(void)_setupImagePluginSession;
-(void)_setupToolsIfNeeded;
-(void)_setupVideoPluginSession;
-(void)_showCancelAndRevertOptionsAllowResetTool:(BOOL)arg0 ;
-(void)_showJpegPreviewForRawRevertAlert;
-(void)_showProgressIndicator;
-(void)_startMarkupSession;
-(void)_startMonitoringSaveProgressIfNeeded;
-(void)_startTimeoutTimerForAssetChange;
-(void)_startWaitingForAssetChange:(id)arg0 ;
-(void)_startWaitingForSaveRequestID:(int)arg0 ;
-(void)_stopMonitoringSaveProgress;
-(void)_stopWaitingForAssetChangeWithAsset:(id)arg0 success:(BOOL)arg1 ;
-(void)_stopWaitingForSaveRequestWithAsset:(id)arg0 ;
-(void)_timeoutWaitingForAssetChange;
-(void)_transitionToEditingTool:(id)arg0 animated:(BOOL)arg1 ;
// -(void)_transitionToNewToolViewController:(id)arg0 oldToolViewController:(id)arg1 animationBlock:(id)arg2 completion:(unk)arg3 animated:(id)arg4  ;
-(void)_undoManagerCheckpoint:(id)arg0 ;
-(void)_undoManagerWillRedo:(id)arg0 ;
-(void)_undoManagerWillUndo:(id)arg0 ;
-(void)_updateAlternateToolbarAnimated:(BOOL)arg0 ;
-(void)_updateBackgroundColor;
-(void)_updateCancelButtonAnimated:(BOOL)arg0 ;
-(void)_updateGainMap;
-(void)_updateKeyCommands;
-(void)_updateLayerModulation;
-(void)_updateLayoutOrientationWithViewSize:(struct CGSize )arg0 transitionCoordinator:(id)arg1 ;
-(void)_updateLivePhotoPlaybackGestureRecognizer;
-(void)_updateMainActionButtonAnimated:(BOOL)arg0 ;
-(void)_updateMediaViewEdgeInsets;
-(void)_updateMediaViewLayoutWithCoordinator:(id)arg0 layoutOrientation:(NSInteger)arg1 ;
-(void)_updateMediaViewPlaybackStyle;
-(void)_updateModelDependentControlsAnimated:(BOOL)arg0 ;
-(void)_updateMutedState;
-(void)_updatePenultimateAvailableWithCompletionHandler:(id)arg0 ;
-(void)_updatePhotoEditIrisModel;
-(void)_updatePlaceholderImage;
-(void)_updatePluginButtonAnimated:(BOOL)arg0 ;
-(void)_updatePluginSession;
-(void)_updatePluginWorkImageVersion;
-(void)_updatePreviewingOriginal;
-(void)_updateProgressEventBlockingViewConstraints;
-(void)_updateProgressIndicatorInteractionDisabledWithReason:(NSInteger)arg0 showsIndicator:(BOOL)arg1 isSavingWithProgress:(BOOL)arg2 ;
-(void)_updateRenderedPreviewForceRender:(BOOL)arg0 ;
-(void)_updateSaveProgress;
-(void)_updateSpecDependentUIPieces;
-(void)_updateSubviewsOrdering;
-(void)_updateTogglePreviewGestureRecognizer;
-(void)_updateToolbarBackgroundAnimated:(BOOL)arg0 ;
-(void)_updateToolbarButtonPositions;
-(void)_updateToolbarShadowAlpha;
-(void)_updateToolbarShadowStyling:(id)arg0 forToolbar:(id)arg1 ;
-(void)_updateToolbarsAnimated:(BOOL)arg0 ;
-(void)_updateToolbarsContentPadding;
-(void)_updateTraitCollectionAndLayoutReferenceSize;
-(void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize )arg0 ;
-(void)_updateTransientStatusBadgeForPreviewingOriginal;
-(void)_updateUndoRedoButtonsAnimated:(BOOL)arg0 ;
-(void)_updateValuesCalculator;
-(void)_updateVideoScrubber;
-(void)_updateVideoScrubberDisplayAnimate:(BOOL)arg0 ;
-(void)_updateZoomButton;
-(void)_willModifyAdjustment;
-(void)applyAutoEnhance:(id)arg0 completion:(id)arg1 ;
-(void)autoEnhanceAssets:(id)arg0 ;
-(void)compositionController:(id)arg0 didAddAdjustment:(id)arg1 ;
-(void)compositionController:(id)arg0 didRemoveAdjustment:(id)arg1 ;
-(void)compositionController:(id)arg0 didUpdateAdjustment:(id)arg1 ;
-(void)compositionController:(id)arg0 didUpdateAdjustments:(id)arg1 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg0 ;
-(void)configureEnablenessOfControlButton:(id)arg0 animated:(BOOL)arg1 canVisuallyDisable:(BOOL)arg2 ;
-(void)copyAdjustments:(id)arg0 ;
-(void)dealloc;
-(void)didFinishWithAsset:(id)arg0 savedChanges:(BOOL)arg1 ;
-(void)didFinishWithChanges:(BOOL)arg0 ;
-(void)dismissAccessibilityHUDForPhotoEditToolbar:(id)arg0 ;
-(void)dismissLivePhotoRevertConfirmationAlert;
-(void)editPluginSession:(id)arg0 commitContentEditingOutput:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)editPluginSession:(id)arg0 didEndWithCompletionType:(NSUInteger)arg1 forPluginIdentifier:(id)arg2 ;
-(void)editPluginSession:(id)arg0 loadAdjustmentDataWithHandler:(id)arg1 ;
-(void)editPluginSession:(id)arg0 loadDisplaySizeImageWithHandler:(id)arg1 ;
-(void)editPluginSession:(id)arg0 loadFullSizeImageWithHandler:(id)arg1 ;
-(void)editPluginSession:(id)arg0 loadPlaceholderImageWithHandler:(id)arg1 ;
-(void)editPluginSession:(id)arg0 loadThumbnailImageWithSize:(struct CGSize )arg1 loadHandler:(id)arg2 ;
-(void)editPluginSession:(id)arg0 loadVideoComplementURLWithHandler:(id)arg1 ;
-(void)editPluginSession:(id)arg0 loadVideoURLWithHandler:(id)arg1 ;
-(void)editPluginSessionAvailabilityDidChange:(id)arg0 ;
-(void)editPluginSessionWillBegin:(id)arg0 ;
-(void)editValuesCalculatorHasChangedFlashStatus:(id)arg0 ;
-(void)editValuesCalculatorHasChangedGeometricValues:(id)arg0 ;
-(void)editValuesCalculatorHasChangedImageValues:(id)arg0 ;
-(void)flashTransientBadgeWithText:(id)arg0 ;
-(void)initialCinematographyLoadComplete;
-(void)invalidateTrashedStateForOvercaptureResources;
-(void)mediaView:(id)arg0 didZoom:(CGFloat)arg1 ;
-(void)mediaViewDidEndLivePhotoPlayback:(id)arg0 ;
-(void)mediaViewDidEndZooming:(id)arg0 ;
-(void)mediaViewDidFinishPreparingVideo:(id)arg0 ;
-(void)mediaViewDidFinishRendering:(id)arg0 withStatistics:(id)arg1 ;
-(void)mediaViewDidScroll:(id)arg0 ;
-(void)mediaViewDidStartPreparingVideo:(id)arg0 ;
-(void)mediaViewDidUpdateLivePhoto:(id)arg0 ;
-(void)mediaViewIsReadyForVideoPlayback:(id)arg0 ;
-(void)mediaViewWillBeginLivePhotoPlayback:(id)arg0 ;
-(void)mediaViewWillBeginZooming:(id)arg0 ;
-(void)navigateToSegment:(id)arg0 ;
-(void)oneUpAssetTransition:(id)arg0 animateTransitionWithContext:(id)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)oneUpAssetTransition:(id)arg0 requestTransitionContextWithCompletion:(id)arg1 ;
-(void)oneUpAssetTransitionDidEnd:(id)arg0 ;
-(void)oneUpAssetTransitionWillBegin:(id)arg0 ;
-(void)pasteAdjustments:(id)arg0 ;
-(void)pencilInteractionDidTap:(id)arg0 ;
-(void)photoEditResourceLoadRequest:(id)arg0 didCompleteWithResult:(id)arg1 ;
-(void)photoEditResourceLoadRequest:(id)arg0 downloadProgress:(CGFloat)arg1 ;
-(void)photoEditResourceLoadRequest:(id)arg0 mediaLoadDidFailWithError:(id)arg1 ;
-(void)photoEditResourceLoadRequestDidCompleteDownload:(id)arg0 ;
-(void)photoEditResourceLoadRequestResourcesAvailabilityChanged:(id)arg0 previousAvailability:(NSInteger)arg1 currentAvailability:(NSInteger)arg2 ;
-(void)photoEditResourceLoadRequestWillBeginDownload:(id)arg0 ;
-(void)photoEditToolbar:(id)arg0 showAccessibilityHUDForItem:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)ppt_applyAutoenhance:(id)arg0 ;
-(void)ppt_cancelEdits;
-(void)ppt_cancelEditsWithCompletion:(id)arg0 ;
-(void)ppt_configureSelectedSliderWithSteps:(NSInteger)arg0 ;
-(void)ppt_executeAfterRender:(id)arg0 ;
// -(void)ppt_playLivePhotoWithWillBeginPlaybackBlock:(id)arg0 didEndPlaybackBlock:(unk)arg1  ;
-(void)ppt_revert;
-(void)ppt_revertWithCompletion:(id)arg0 ;
-(void)ppt_save;
-(void)ppt_saveWithCompletion:(id)arg0 ;
-(void)ppt_scrollBWSlider:(id)arg0 ;
-(void)ppt_scrollColorSlider:(id)arg0 ;
-(void)ppt_scrollLightSlider:(id)arg0 ;
-(void)ppt_scrollSelectedSliderByDelta;
-(void)ppt_scrollSliderNamed:(id)arg0 value:(id)arg1 completion:(id)arg2 ;
-(void)ppt_selectAdjustmentsController:(id)arg0 ;
-(void)ppt_selectCropController:(id)arg0 ;
-(void)ppt_selectFiltersController:(id)arg0 ;
-(void)ppt_selectNextLightingEffect:(id)arg0 ;
-(void)ppt_selectPerspectiveController:(id)arg0 ;
-(void)ppt_setEditIsReadyNotificationBlock:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reinstateTrashedStateForOvercaptureResources;
-(void)resourcesForRevertAllowingDownload:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)rotateAssetsClockwise:(id)arg0 ;
-(void)rotateAssetsCounterclockwise:(id)arg0 ;
-(void)switchEditSource:(NSInteger)arg0 ;
-(void)switchToEditingTool:(id)arg0 animated:(BOOL)arg1 ;
-(void)toggleEditor:(id)arg0 ;
-(void)toggleLivePhotoActive;
-(void)toolController:(id)arg0 didChangePreferredPreviewViewInsetsAnimated:(BOOL)arg1 ;
-(void)toolController:(id)arg0 showVideoScrubber:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)toolController:(id)arg0 switchEditSource:(NSInteger)arg1 ;
-(void)toolController:(id)arg0 updateModelDependentControlsAnimated:(BOOL)arg1 ;
-(void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg0 ;
-(void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg0 ;
-(void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg0 ;
-(void)toolControllerDidFinish:(id)arg0 ;
-(void)toolControllerDidFinishLoadingThumbnails:(id)arg0 ;
-(void)toolControllerDidUpdateToolbar:(id)arg0 ;
-(void)toolControllerRequestLivePhoto:(id)arg0 filters:(id)arg1 completion:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)trimToolPlayerWrapper:(id)arg0 requestPlayerItemWithFilters:(id)arg1 completion:(id)arg2 ;
-(void)updateMainButtonForSaveAsNewClipMenu;
-(void)updateProgressIndicatorAnimated:(BOOL)arg0 ;
-(void)updateViewConstraints;
-(void)validateCommand:(id)arg0 ;
-(void)videoScrubberDidUpdate;
-(void)videoScrubberViewDidScrubTo:(struct ? )arg0 ;
-(void)viewControllerSpec:(id)arg0 didChange:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif