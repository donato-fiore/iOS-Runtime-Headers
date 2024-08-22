// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERPOSTEREDITORCONTROLLER_H
#define PUWALLPAPERPOSTEREDITORCONTROLLER_H

@class UIView, PFPosterEditConfiguration, PFPosterMedia, NSString, UILabel, PIParallaxCompoundLayerStackRequest, UIActivityIndicatorView, PFPosterConfiguration, PHPhotoLibrary, PHPickerViewController, NSAttributedString, UIViewController, UITapGestureRecognizer, NSArray;
@protocol PXChangeObserver, PUUserTransformViewDelegate, PUWallpaperPosterShuffleGridViewControllerDelegate, UIScrollViewDelegate, PHPickerViewControllerDelegate, _TtP15PhotosUIPrivate53PUWallpaperShuffleConfigurationViewControllerDelegate_, UIAdaptivePresentationControllerDelegate, PUWallpaperEditorDelegate, PUWallpaperEditor, PUWallpaperEditorEnvironment, OS_dispatch_queue, PISegmentationLoading, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "PUWallpaperConfigurationUpdater.h"
#import "PUParallaxLayerStackViewModel.h"
#import "PUWallpaperPosterEditViewModel.h"
#import "PUWallpaperPosterMigrator.h"
#import "PUWallpaperPosterParallaxView.h"
#import "PUProgressIndicatorView.h"
#import "PUWallpaperShuffleResourceManager.h"
#import "_PUWallpaperSmartAlbumPreviewReloadRequest.h"
#import "PUUserTransformView.h"

@interface PUWallpaperPosterEditorController : NSObject <PXChangeObserver, PUUserTransformViewDelegate, PUWallpaperPosterShuffleGridViewControllerDelegate, UIScrollViewDelegate, PHPickerViewControllerDelegate, _TtP15PhotosUIPrivate53PUWallpaperShuffleConfigurationViewControllerDelegate_, UIAdaptivePresentationControllerDelegate, PUWallpaperEditorDelegate>



@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) PUWallpaperConfigurationUpdater *configurationUpdater; // ivar: _configurationUpdater
@property (readonly, nonatomic) PFPosterEditConfiguration *currentEditConfiguration;
@property (retain, nonatomic) PUParallaxLayerStackViewModel *currentLayerStackViewModel; // ivar: _currentLayerStackViewModel
@property (retain, nonatomic) PFPosterMedia *currentPosterMedia; // ivar: _currentPosterMedia
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *disableIdleTimerForLoadingToken; // ivar: _disableIdleTimerForLoadingToken
@property (retain, nonatomic) id *disableIdleTimerForSavePreperationToken; // ivar: _disableIdleTimerForSavePreperationToken
@property (retain, nonatomic) PUWallpaperPosterEditViewModel *editViewModel; // ivar: _editViewModel
@property (readonly, nonatomic) NSObject<PUWallpaperEditor> *editor; // ivar: _editor
@property (retain, nonatomic) NSObject<PUWallpaperEditorEnvironment> *environment; // ivar: _environment
@property (nonatomic) BOOL fadeInInitialLoad; // ivar: _fadeInInitialLoad
@property (retain, nonatomic) UIView *floatingView; // ivar: _floatingView
@property (retain, nonatomic) UIView *foregroundView; // ivar: _foregroundView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger hint; // ivar: _hint
@property (retain, nonatomic) UILabel *hintLabel; // ivar: _hintLabel
@property (nonatomic) BOOL isAnySmartAlbumAvailable; // ivar: _isAnySmartAlbumAvailable
@property (nonatomic) BOOL isCancellingMediaLoading; // ivar: _isCancellingMediaLoading
@property (nonatomic) BOOL isPausingParallax; // ivar: _isPausingParallax
@property (nonatomic) BOOL isSaved; // ivar: _isSaved
@property (nonatomic) BOOL isUserTransformDisabled; // ivar: _isUserTransformDisabled
@property (retain, nonatomic) PIParallaxCompoundLayerStackRequest *layerStackRequest; // ivar: _layerStackRequest
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (copy, nonatomic) id *mediaLoadedCompletionHandler; // ivar: _mediaLoadedCompletionHandler
@property (retain, nonatomic) PUWallpaperPosterMigrator *migrator; // ivar: _migrator
@property (retain, nonatomic) PFPosterConfiguration *oldPosterConfiguration; // ivar: _oldPosterConfiguration
@property (retain, nonatomic) PUWallpaperPosterParallaxView *parallaxSimulationView; // ivar: _parallaxSimulationView
@property (nonatomic, getter=isPerformingInitialLoad) BOOL performingInitialLoad; // ivar: _performingInitialLoad
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PHPickerViewController *photoPickerViewController; // ivar: _photoPickerViewController
@property (retain, nonatomic) NSAttributedString *pinchToZoomHintTitle; // ivar: _pinchToZoomHintTitle
@property (retain, nonatomic) PFPosterConfiguration *posterConfiguration; // ivar: _posterConfiguration
@property (retain, nonatomic) UIViewController *presentedPosterConfigurationViewController; // ivar: _presentedPosterConfigurationViewController
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator; // ivar: _progressIndicator
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSObject<PISegmentationLoading> *segmentationLoading; // ivar: _segmentationLoading
@property (retain, nonatomic) NSObject<OS_dispatch_group> *segmentationLoadingGroup; // ivar: _segmentationLoadingGroup
@property (nonatomic) NSInteger shuffleAssetIndex; // ivar: _shuffleAssetIndex
@property (retain, nonatomic) PUWallpaperShuffleResourceManager *shuffleResourceManager; // ivar: _shuffleResourceManager
@property (readonly, nonatomic) NSUInteger signpost; // ivar: _signpost
@property (retain, nonatomic) _PUWallpaperSmartAlbumPreviewReloadRequest *smartAlbumPreviewReloadRequest; // ivar: _smartAlbumPreviewReloadRequest
@property (readonly, nonatomic) UIView *styleDividerView; // ivar: _styleDividerView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapToShuffleGestureRecognizer; // ivar: _tapToShuffleGestureRecognizer
@property (retain, nonatomic) PUUserTransformView *userTransformView; // ivar: _userTransformView
@property (copy, nonatomic) NSArray *visibleLayerStackViewModels; // ivar: _visibleLayerStackViewModels


+(NSInteger)posterConfigurationTypeForPosterType:(NSInteger)arg0 ;
+(id)availableStylesForItem:(id)arg0 posterConfiguration:(id)arg1 ;
+(id)posterConfigurationFromPosterDescriptor:(id)arg0 ;
-(BOOL)_canEnableDepthEffect;
-(BOOL)_createHintLabelIfNeeded;
-(BOOL)_currentStyleIsHighKey;
-(BOOL)_currentStyleSupportsColorPicker;
-(BOOL)_currentStyleSupportsHighAndLowKeyModes;
-(BOOL)_isManualShuffle;
-(BOOL)_isParallaxAllowed;
-(BOOL)_isShowingProgressIndicator;
-(BOOL)_isShuffle;
-(BOOL)_isSmartShuffle;
-(BOOL)_mediaHasDepth;
-(BOOL)_shouldEnableParallax;
-(BOOL)_tryLoadAssetUUID:(id)arg0 fromWallpaperURL:(id)arg1 ;
-(CGFloat)editor:(id)arg0 luminanceForLook:(id)arg1 inRect:(struct CGRect )arg2 ;
-(NSInteger)_shuffleType;
-(NSUInteger)_defaultHint;
-(id)_actionsMenu;
-(id)_initialLayerStyleForSegmentationItem:(id)arg0 ;
-(id)_perspectiveZoomAction;
-(id)_primaryAction;
-(id)_shuffleFrequencyMenu;
-(id)actionsMenuForEditor:(id)arg0 ;
-(id)centerSuggestionMedia;
-(id)gradientHomeScreenColorPickerConfigurationForEditor:(id)arg0 ;
-(id)initWithWallpaperEditor:(id)arg0 photoLibrary:(id)arg1 ;
-(id)initialLookIdentifierForEditor:(id)arg0 ;
-(id)looksForEditor:(id)arg0 ;
-(id)primaryActionForEditor:(id)arg0 ;
-(id)solidColorHomeScreenColorPickerConfigurationForEditor:(id)arg0 ;
-(void)_addToPosterMedia:(id)arg0 ;
-(void)_applyPosterEditConfigurationForShuffleAsset;
-(void)_beginLoadingShuffleResources;
-(void)_createShuffleResourceManager;
-(void)_didDismissLoadingErrorAlert;
-(void)_didFinishCreatingEditViewModel:(id)arg0 forAsset:(id)arg1 error:(id)arg2 ;
-(void)_didFinishSavingFromDelayedFinalizationSucceeded:(BOOL)arg0 error:(id)arg1 ;
-(void)_didLoadMediaFromPhotoPickerWithAssetUUID:(id)arg0 succeeded:(BOOL)arg1 error:(id)arg2 ;
-(void)_didLoadMediaFromShuffleConfigurationViewController:(id)arg0 succeeded:(BOOL)arg1 ;
-(void)_dismissPosterConfigurationViewController;
-(void)_dismissPosterConfigurationViewControllerAndCancelEditor;
-(void)_dismissPosterConfigurationViewControllerWithCompletion:(id)arg0 ;
-(void)_displayDefaultHint;
-(void)_displayNextHint;
-(void)_fadeInViews;
-(void)_handlePhotoPickerResults:(id)arg0 ;
-(void)_handleSegmentationItem:(id)arg0 layerStack:(id)arg1 forAsset:(id)arg2 error:(id)arg3 ;
-(void)_handleShuffleSegmentationItem:(id)arg0 layerStack:(id)arg1 editConfiguration:(id)arg2 forPosterMedia:(id)arg3 error:(id)arg4 ;
-(void)_handleTapToShuffle:(id)arg0 ;
-(void)_handleUpdatedConfiguration:(id)arg0 segmentationItem:(id)arg1 layerStack:(id)arg2 error:(id)arg3 ;
-(void)_hideHintAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_hideLoadingIndicator;
-(void)_hideProgressIndicator;
-(void)_loadAssetFromPosterConfiguration;
-(void)_loadAssetUUID:(id)arg0 fromWallpaperURL:(id)arg1 ;
-(void)_loadAssetWithUUID:(id)arg0 ;
-(void)_loadContentForCurrentPosterMedia;
-(void)_loadEditViewModelAndUpdateLooks:(BOOL)arg0 ;
-(void)_loadEditViewModelWithSegmentationItem:(id)arg0 layerStack:(id)arg1 completion:(id)arg2 ;
-(void)_loadPosterDescriptor;
-(void)_loadSourcePosterConfiguration;
-(void)_pickAssets;
-(void)_presentLoadingError:(id)arg0 ;
-(void)_presentLoadingError:(id)arg0 forAsset:(id)arg1 ;
-(void)_presentLoadingErrorAlertController:(id)arg0 ;
-(void)_presentPhotoPicker;
-(void)_presentPosterConfigurationViewController:(id)arg0 ;
-(void)_presentShuffleConfigurationEditor;
-(void)_presentSmartAlbumShuffleEditor;
-(void)_presentStyleColorPicker;
-(void)_rejectSuggestionsForCurrentAsset;
-(void)_reloadAssetUUID:(id)arg0 fromWallpaperURL:(id)arg1 ;
-(void)_reloadSmartAlbumPreviewAssetsWithCompletionHandler:(id)arg0 ;
-(void)_removeFromPosterMedia:(id)arg0 ;
-(void)_removeViewsFromLayerStackViewModel:(id)arg0 ;
-(void)_renderAfterStyleChange;
-(void)_renderInitialLayerStack:(id)arg0 style:(id)arg1 completion:(id)arg2 ;
-(void)_savePosterEditConfigurationForCurrentPosterMedia;
-(void)_saveWithCompletionHandler:(id)arg0 ;
-(void)_setCurrentStyleIsHighKey:(BOOL)arg0 ;
-(void)_setupUserTransformView;
-(void)_showHintAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_showLoadingIndicator;
-(void)_showPhotoInLibrary;
-(void)_showProgressIndicator:(id)arg0 determinate:(BOOL)arg1 ;
-(void)_startSimulatingParallax;
-(void)_stopSimulatingParallax;
-(void)_tapToRadar;
-(void)_toggleDepth;
-(void)_togglePerspectiveZoom;
-(void)_updateContainerFrame;
-(void)_updateCurrentLayerStackViewModel;
-(void)_updateCurrentLayerStackViews;
-(void)_updateCurrentStyle;
-(void)_updateCurrentStyleColor:(id)arg0 ;
-(void)_updateEditToolbar;
-(void)_updateEditViewModelPropertiesFromPosterConfiguration;
-(void)_updateHintLabelAnimated:(BOOL)arg0 ;
-(void)_updateLayerStackOrderingForViewModel:(id)arg0 ;
-(void)_updateLayerStackViewModelProperties:(id)arg0 ;
-(void)_updateParallaxEnabled;
-(void)_updateParallaxIsPaused;
-(void)_updateProgressIndicator:(CGFloat)arg0 ;
-(void)_updateShuffleSuggestionFeaturedStateIfNeededForConfiguration:(id)arg0 ;
-(void)_updateShuffleView;
-(void)_updateSmartAlbumAvailability;
-(void)_updateStyleDividerView;
-(void)_updateUserTransformIsDisabled;
-(void)_updateUserTransformView;
-(void)_updateViewForLayer:(id)arg0 usingViewManager:(id)arg1 containerView:(id)arg2 ;
-(void)_updateVisibleLayerStackViewModels;
-(void)_updateVisibleLayerStackViewsWithPreviouslyVisibleStackViewModels:(id)arg0 ;
-(void)cancelPendingHint;
-(void)dealloc;
-(void)displayNextHintAfterDelay;
-(void)editor:(id)arg0 depthEffectDisallowedDidChange:(BOOL)arg1 ;
-(void)editor:(id)arg0 didInitializeWithEnvironment:(id)arg1 ;
-(void)editor:(id)arg0 didTransitionToLook:(id)arg1 progress:(CGFloat)arg2 ;
-(void)editor:(id)arg0 didUpdateEnvironment:(id)arg1 withTransition:(id)arg2 ;
-(void)editor:(id)arg0 finalizeWithCompletion:(id)arg1 ;
-(void)editor:(id)arg0 populateViews:(id)arg1 forLook:(id)arg2 ;
-(void)editorDidDelayFinalizationForBackgroundTask:(id)arg0 ;
-(void)editorDidInvalidate:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)transitionBetweenStyleWithKind:(id)arg0 andKind:(id)arg1 progress:(CGFloat)arg2 ;
-(void)userTransformView:(id)arg0 didChangeIsUserInteracting:(BOOL)arg1 ;
-(void)userTransformView:(id)arg0 didChangeUserAffineTransform:(struct CGAffineTransform )arg1 isUserInteracting:(BOOL)arg2 ;
-(void)wallpaperPosterShuffleGridViewController:(id)arg0 didFinishWithChange:(id)arg1 selectedPosterMedia:(id)arg2 ;
-(void)wallpaperShuffleConfigurationViewController:(id)arg0 didFinishWithPosterConfiguration:(id)arg1 ;
-(void)wallpaperShuffleConfigurationViewControllerDidCancelManuallySelectingPhotos:(id)arg0 ;
-(void)wallpaperShuffleConfigurationViewControllerDidDismiss:(id)arg0 ;


@end


#endif