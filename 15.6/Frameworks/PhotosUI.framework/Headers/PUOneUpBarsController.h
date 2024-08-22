// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUONEUPBARSCONTROLLER_H
#define PUONEUPBARSCONTROLLER_H

@class PXInfoUpdater, NSMutableIndexSet, NSString, UITapGestureRecognizer, UIBarButtonItem, PXImageModulationManager, UIView, NSArray;
@protocol PUBrowsingViewModelChangeObserver, PUAssetActionPerformerDelegate, UIPopoverPresentationControllerDelegate, PUPlayPauseBarItemsControllerChangeObserver, PUBarButtonItemCollectionDataSource, PUScrubberViewDelegate, PUPhotoBrowserTitleViewControllerDelegate, PXInfoUpdaterObserver, PXInfoProvider, PXChangeObserver, PUOverOneUpPresentationSessionBarsDelegate, PUOneUpBarsControllerDelegate, OS_dispatch_queue;


#import "PUBarsController.h"
#import "PUAssetActionPerformer.h"
#import "PUBarButtonItemCollection.h"
#import "PUPlayPauseBarItemsController.h"
#import "PUScrubberView.h"
#import "PUPhotoBrowserTitleViewController.h"
#import "PUBrowsingSession.h"

@interface PUOneUpBarsController : PUBarsController <PUBrowsingViewModelChangeObserver, PUAssetActionPerformerDelegate, UIPopoverPresentationControllerDelegate, PUPlayPauseBarItemsControllerChangeObserver, PUBarButtonItemCollectionDataSource, PUScrubberViewDelegate, PUPhotoBrowserTitleViewControllerDelegate, PXInfoUpdaterObserver, PXInfoProvider, PXChangeObserver, PUOverOneUpPresentationSessionBarsDelegate>

 {
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer; // ivar: __activeActionPerformer
@property (readonly, nonatomic) PXInfoUpdater *_currentAssetDisplayInfoUpdater; // ivar: __currentAssetDisplayInfoUpdater
@property (nonatomic, setter=_setLastChromeVisibility:) BOOL _lastChromeVisibility; // ivar: __lastChromeVisibility
@property (retain, nonatomic, setter=_setLeftNavBarButtonIdentifiers:) NSMutableIndexSet *_leftNavBarButtonIdentifiers; // ivar: __leftNavBarButtonIdentifiers
@property (retain, nonatomic, setter=_setLeftNavBarButtonItemCollection:) PUBarButtonItemCollection *_leftNavBarButtonItemCollection; // ivar: __leftNavBarButtonItemCollection
@property (nonatomic, setter=_setNeedsUpdateChromeVisibility:) BOOL _needsUpdateChromeVisibility; // ivar: __needsUpdateChromeVisibility
@property (nonatomic, setter=_setNeedsUpdateCommentsTitle:) BOOL _needsUpdateCommentsTitle; // ivar: __needsUpdateCommentsTitle
@property (nonatomic, setter=_setNeedsUpdateFileSizeButtonMenu:) BOOL _needsUpdateFileSizeButtonMenu; // ivar: __needsUpdateFileSizeButtonMenu
@property (nonatomic, setter=_setNeedsUpdateFileSizeButtonTitle:) BOOL _needsUpdateFileSizeButtonTitle; // ivar: __needsUpdateFileSizeButtonTitle
@property (nonatomic, setter=_setNeedsUpdatePlayPauseItems:) BOOL _needsUpdatePlayPauseItems; // ivar: __needsUpdatePlayPauseItems
@property (nonatomic, setter=_setNeedsUpdateTitle:) BOOL _needsUpdateTitle; // ivar: __needsUpdateTitle
@property (nonatomic, setter=_setNextChromeVisibilityUpdateAnimationType:) NSInteger _nextChromeVisibilityUpdateAnimationType; // ivar: __nextChromeVisibilityUpdateAnimationType
@property (nonatomic, setter=_setNextCommentsActionShouldBeginEditing:) BOOL _nextCommentsActionShouldBeginEditing; // ivar: __nextCommentsActionShouldBeginEditing
@property (readonly, nonatomic) PUPlayPauseBarItemsController *_playPauseBarItemsController; // ivar: __playPauseBarItemsController
@property (retain, nonatomic, setter=_setRightNavBarButtonIdentifiers:) NSMutableIndexSet *_rightNavBarButtonIdentifiers; // ivar: __rightNavBarButtonIdentifiers
@property (retain, nonatomic, setter=_setRightNavBarButtonItemCollection:) PUBarButtonItemCollection *_rightNavBarButtonItemCollection; // ivar: __rightNavBarButtonItemCollection
@property (readonly, nonatomic) PUScrubberView *_scrubberView; // ivar: __scrubberView
@property (readonly, nonatomic) NSString *_scrubbingIdentifier; // ivar: __scrubbingIdentifier
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (copy, nonatomic, setter=_setTitle:) NSString *_title; // ivar: __title
@property (readonly, nonatomic) PUPhotoBrowserTitleViewController *_titleViewController; // ivar: __titleViewController
@property (retain, nonatomic, setter=_setToolbarButtonIdentifiers:) NSMutableIndexSet *_toolbarButtonIdentifiers; // ivar: __toolbarButtonIdentifiers
@property (retain, nonatomic, setter=_setToolbarButtonItemCollection:) PUBarButtonItemCollection *_toolbarButtonItemCollection; // ivar: __toolbarButtonItemCollection
@property (nonatomic) BOOL allowShowingPlayPauseButton; // ivar: _allowShowingPlayPauseButton
@property (nonatomic) BOOL allowTapOnTitle; // ivar: _allowTapOnTitle
@property (readonly, nonatomic) UIBarButtonItem *barButtonItemToggleDetails;
@property (retain, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXImageModulationManager *debuggingObservedImageModulationManager; // ivar: _debuggingObservedImageModulationManager
@property (weak, nonatomic) NSObject<PUOneUpBarsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableChromeHiding; // ivar: _disableChromeHiding
@property (nonatomic) BOOL disableShowingNavigationBars; // ivar: _disableShowingNavigationBars
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *infoRequestSerialQueue; // ivar: _infoRequestSerialQueue
@property (readonly, nonatomic) BOOL isPlaybackPaused;
@property (nonatomic, setter=_setShowingPlayPauseButton:) BOOL isShowingPlayPauseButton; // ivar: _isShowingPlayPauseButton
@property (nonatomic) CGFloat maximumAccessoryToolbarHeight; // ivar: _maximumAccessoryToolbarHeight
@property (nonatomic) CGFloat maximumToolbarHeight; // ivar: _maximumToolbarHeight
@property (readonly, nonatomic) UIView *ppt_scrubberView;
@property (retain, nonatomic) NSArray *sharingPreheatedAssetReferences; // ivar: _sharingPreheatedAssetReferences
@property (retain, nonatomic) PUAssetActionPerformer *sharingPreheatedPerformer; // ivar: _sharingPreheatedPerformer
@property (nonatomic) BOOL shouldPlaceButtonsInNavigationBar; // ivar: _shouldPlaceButtonsInNavigationBar
@property (nonatomic) BOOL shouldPlaceScrubberInScrubberBar; // ivar: _shouldPlaceScrubberInScrubberBar
@property (nonatomic) BOOL shouldShowAirPlayButton; // ivar: _shouldShowAirPlayButton
@property (nonatomic) BOOL shouldShowDoneButton; // ivar: _shouldShowDoneButton
@property (nonatomic) BOOL shouldShowScrubber; // ivar: _shouldShowScrubber
@property (nonatomic) BOOL shouldShowTitleView; // ivar: _shouldShowTitleView
@property (nonatomic) BOOL shouldUseCompactCommentsTitle; // ivar: _shouldUseCompactCommentsTitle
@property (nonatomic) BOOL shouldUseCompactTitleView; // ivar: _shouldUseCompactTitleView
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) BOOL wantsMessagesStyling; // ivar: _wantsMessagesStyling
@property (nonatomic) BOOL wantsShowInLibraryButton; // ivar: _wantsShowInLibraryButton
@property (nonatomic) BOOL wantsSpotlightStyling; // ivar: _wantsSpotlightStyling


-(BOOL)_canShowCommentsForCurrentAsset;
-(BOOL)_physicalDeviceIsIPad;
-(BOOL)_shouldShowDoneEditingButton;
-(BOOL)_wantsChromeVisible;
-(BOOL)assetActionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetActionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)scrubberView:(id)arg0 shouldIgnoreHitTest:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)shouldTapBeginAtLocationFromProvider:(id)arg0 ;
-(BOOL)wantsNavigationBarVisible;
-(BOOL)wantsToolbarVisible;
-(NSInteger)_identifierForButton:(id)arg0 ;
-(NSInteger)_locationForBarButtonItemCollection:(id)arg0 ;
-(NSInteger)_locationForBarButtonItemWithIdentifier:(NSInteger)arg0 ;
-(NSInteger)_scrubberType;
-(NSInteger)preferredBarStyle;
-(NSUInteger)_sourceContextForActionPerformer;
-(id)_activeBarButtonItemForIdentifier:(NSInteger)arg0 ;
-(id)_airPlayBarButtonItemForPopoverPresentation;
-(id)_attributtedCommentTitleForTitle:(id)arg0 highlighted:(BOOL)arg1 ;
-(id)_barButtonIdentifiersForLocation:(NSInteger)arg0 ;
-(id)_barButtonItemCollectionForLocation:(NSInteger)arg0 ;
-(id)_barButtonItemForActionType:(NSUInteger)arg0 ;
-(id)_barButtonItemForIdentifier:(NSInteger)arg0 location:(NSInteger)arg1 ;
-(id)_commentTitleAttributes;
-(id)_commentTitleColor;
-(id)_commentsButtonWithTitle:(id)arg0 ;
-(id)_newBarButtonItemWithIdentifier:(NSInteger)arg0 location:(NSInteger)arg1 ;
-(id)_textColorForTitleViewController:(BOOL)arg0 ;
-(id)_underlyingForYouSuggestionDataSourceManager;
-(id)barButtonItemCollection:(id)arg0 newBarButtonItemForIdentifier:(NSInteger)arg1 ;
-(id)init;
-(id)overOneUpPresentationSession:(id)arg0 barButtonItemForActivityType:(id)arg1 ;
-(id)requestInfoOfKind:(id)arg0 withResultHandler:(id)arg1 ;
-(void)_browsingViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_executeActionPerformer:(id)arg0 ;
-(void)_handleAssetViewModelBeginEditingTimer:(id)arg0 ;
-(void)_handleSharingPreheat;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_initializeBarButtonItemCollections;
-(void)_invalidateChromeVisibilityWithAnimationType:(NSInteger)arg0 ;
-(void)_invalidateCommentsTitle;
-(void)_invalidateFileSizeButtonMenu;
-(void)_invalidateFileSizeButtonTitle;
-(void)_invalidateScrubber;
-(void)_invalidateTitle;
-(void)_peformSuggestionRevertAction;
-(void)_peformSuggestionSaveAction;
-(void)_performAssetExplorerReviewScreenActionType:(NSUInteger)arg0 ;
-(void)_performCancelAction;
-(void)_performChangesWithCurrentVideoPlayer:(id)arg0 ;
-(void)_performDoneEditingAction;
-(void)_performDuplicateActivityWithAssetsByAssetCollection:(id)arg0 ;
-(void)_performHideActivityWithAssetsByAssetCollection:(id)arg0 ;
-(void)_performLikeAction:(BOOL)arg0 ;
-(void)_performMuteAction:(BOOL)arg0 ;
-(void)_performPlayPauseAction:(NSInteger)arg0 ;
-(void)_performRemoveFromFeaturedPhotosActivityWithAssetsByAssetCollection:(id)arg0 ;
-(void)_performRestoreAction;
-(void)_performShareAction;
-(void)_performShowInLibraryAction;
-(void)_performSimpleActionType:(NSUInteger)arg0 ;
-(void)_performSuggestLessPersonActivityWithAssetsByAssetCollection:(id)arg0 ;
-(void)_performSyndicationSaveAction;
-(void)_performToggleCommentsAction;
-(void)_performToggleDetailsAction;
-(void)_performToggleFavoriteAction;
-(void)_performTrashAction;
-(void)_resetIdentifierIndexes;
-(void)_revealGainMapImage;
-(void)_startObservingOrientationChanges;
-(void)_stopObservingOrientationChanges;
-(void)_toggleCTM;
-(void)_toolbarViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_updateAddToLibraryBarButtonItem;
-(void)_updateChromeVisibilityIfNeeded;
-(void)_updateCommentsButton:(id)arg0 withTitle:(id)arg1 ;
-(void)_updateCommentsTitleIfNeeded;
-(void)_updateFavoriteBarButtonItem;
-(void)_updateFileSizeButtonMenuIfNeeded;
-(void)_updateFileSizeButtonTitleIfNeeded;
-(void)_updateIdentifiersIndexesWithIdentifier:(NSInteger)arg0 location:(NSInteger)arg1 shouldEnable:(BOOL)arg2 ;
-(void)_updateScrubberViewIfNeeded;
-(void)_updateShowingPlayPauseButton;
-(void)_updateSyndicationSaveBarButtonItem;
-(void)_updateTitleIfNeeded;
-(void)_updateToggleDetailsBarButtonItem;
-(void)barButtonItemTapped:(id)arg0 ;
-(void)dealloc;
-(void)executeActionPerformer:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)infoUpdaterDidUpdate:(id)arg0 ;
-(void)invalidateViewControllerView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)orientationChanged:(id)arg0 ;
-(void)overOneUpPresentationSession:(id)arg0 didAppendReviewScreenAction:(NSUInteger)arg1 ;
-(void)overOneUpPresentationSession:(id)arg0 didCompleteWithActivityType:(id)arg1 assetsByAssetCollection:(id)arg2 success:(BOOL)arg3 ;
-(void)photoBrowserTitleViewControllerTapped:(id)arg0 ;
-(void)playPauseBarItemsController:(id)arg0 didChange:(id)arg1 ;
-(void)ppt_performAction:(NSUInteger)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)setViewController:(id)arg0 ;
-(void)toggleOriginalButtonTouched:(id)arg0 ;
-(void)togglePlayback;
-(void)updateBars;
-(void)updateContentGuideInsets;
-(void)updateGestureRecognizersWithHostingView:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif