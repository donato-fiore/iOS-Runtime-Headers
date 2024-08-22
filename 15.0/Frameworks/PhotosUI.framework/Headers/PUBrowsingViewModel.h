// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBROWSINGVIEWMODEL_H
#define PUBROWSINGVIEWMODEL_H

@class NSDate, NSMutableSet, NSString;
@protocol PUAssetViewModelChangeObserver, PUAssetSharedViewModelChangeObserver, PXAssetImportStatusObserver, PXAssetImportStatusManager;


#import "PUViewModel.h"
#import "PUAssetReference.h"
#import "PUCachedMapTable.h"
#import "PUAssetActionManager.h"
#import "PUAssetViewModel.h"
#import "PUAssetsDataSource.h"
#import "PUMediaProvider.h"
#import "PUPhotoPickerResizeTaskDescriptorViewModel.h"
#import "PUReviewScreenBarsModel.h"

@interface PUBrowsingViewModel : PUViewModel <PUAssetViewModelChangeObserver, PUAssetSharedViewModelChangeObserver, PXAssetImportStatusObserver>

 {
    PUAssetReference *_currentAssetReference;
    NSDate *_currentAssetReferenceChangedDate;
    CGFloat _lastAssetWasCurrentForDuration;
    BOOL _browsingSpeedRegimeIsValid;
    BOOL _isBrowsingSpeedRegimeInvalidationScheduled;
    PUCachedMapTable *_viewModelByAssetReference;
    NSMutableSet *_invalidAssetViewModels;
    BOOL _allAssetViewModelsAreInvalid;
    PUCachedMapTable *_assetSharedViewModelByAsset;
    uint8_t _ongoingEnumerations;
    BOOL _videoContentAllowed;
}


@property (retain, nonatomic, setter=_setAnimatingTransitionIdentifiers:) NSMutableSet *_animatingTransitionIdentifiers; // ivar: __animatingTransitionIdentifiers
@property (nonatomic, setter=_setScrubbingSessionDistance:) NSInteger _scrubbingSessionDistance; // ivar: __scrubbingSessionDistance
@property (nonatomic, setter=_setUserNavigationDistance:) NSInteger _userNavigationDistance; // ivar: __userNavigationDistance
@property (retain, nonatomic, setter=_setVideoDisallowedReasons:) NSMutableSet *_videoDisallowedReasons; // ivar: __videoDisallowedReasons
@property (nonatomic) BOOL accessoryViewsDefaultVisibility; // ivar: _accessoryViewsDefaultVisibility
@property (retain, nonatomic) PUAssetActionManager *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) PUAssetViewModel *assetViewModelForCurrentAssetReference;
@property (retain, nonatomic) PUAssetsDataSource *assetsDataSource; // ivar: _assetsDataSource
@property (nonatomic, getter=isAutoplayVideoMuted) BOOL autoplayVideoMuted;
@property (nonatomic, setter=_setBrowsingSpeedRegime:) NSInteger browsingSpeedRegime; // ivar: _browsingSpeedRegime
@property (retain, nonatomic) PUAssetReference *currentAssetReference;
@property (readonly, nonatomic) CGFloat currentAssetTransitionProgress; // ivar: _currentAssetTransitionProgress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger horizontalSizeClass; // ivar: _horizontalSizeClass
@property (retain, nonatomic) NSObject<PXAssetImportStatusManager> *importStatusManager; // ivar: _importStatusManager
@property (nonatomic, setter=_setAnimatingAnyTransition:) BOOL isAnimatingAnyTransition; // ivar: _isAnimatingAnyTransition
@property (nonatomic) BOOL isAttemptingToPlayVideoOverlay; // ivar: _isAttemptingToPlayVideoOverlay
@property (nonatomic, setter=setChromeVisible:) BOOL isChromeVisible; // ivar: _isChromeVisible
@property (nonatomic) BOOL isScrolling; // ivar: _isScrolling
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (readonly, nonatomic) BOOL isVideoContentAllowed;
@property (retain, nonatomic, setter=_setLastChromeVisibilityChangeContext:) id *lastChromeVisibilityChangeContext; // ivar: _lastChromeVisibilityChangeContext
@property (readonly, nonatomic) NSDate *lastChromeVisibilityChangeDate; // ivar: _lastChromeVisibilityChangeDate
@property (nonatomic, setter=_setLastChromeVisibilityChangeReason:) NSInteger lastChromeVisibilityChangeReason; // ivar: _lastChromeVisibilityChangeReason
@property (readonly, nonatomic) PUAssetReference *lastViewedAssetReference; // ivar: _lastViewedAssetReference
@property (retain, nonatomic, setter=_setLeadingAssetReference:) PUAssetReference *leadingAssetReference; // ivar: _leadingAssetReference
@property (readonly, nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (retain, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (copy, nonatomic) NSString *navigationBarTitle; // ivar: _navigationBarTitle
@property (nonatomic, getter=isPresentingOverOneUp) BOOL presentingOverOneUp; // ivar: _presentingOverOneUp
@property (retain, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel; // ivar: _resizeTaskDescriptorViewModel
@property (retain, nonatomic) PUReviewScreenBarsModel *reviewScreenBarsModel; // ivar: _reviewScreenBarsModel
@property (nonatomic) CGSize secondScreenSize; // ivar: _secondScreenSize
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=_setTrailingAssetReference:) PUAssetReference *trailingAssetReference; // ivar: _trailingAssetReference
@property (readonly, copy, nonatomic) NSString *transitionDriverIdentifier; // ivar: _transitionDriverIdentifier
@property (nonatomic) NSInteger videoOverlayPlayState; // ivar: _videoOverlayPlayState
@property (nonatomic) BOOL visualIntelligenceInteractionEnabled; // ivar: _visualIntelligenceInteractionEnabled


+(BOOL)autoplayVideoMuted;
+(void)_handleSceneWillDeactivateNotification:(id)arg0 ;
+(void)initialize;
-(BOOL)_needsUpdate;
-(BOOL)isTogglingCTMForAsset:(id)arg0 ;
-(CGFloat)_focusValueForAsset:(id)arg0 ;
-(NSInteger)_importStateForAssetReference:(id)arg0 ;
-(id)_assetSharedViewModelForAsset:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)_badgeInfoPromiseForAssetReference:(id)arg0 ;
-(id)_filteredAllowedBadges:(id)arg0 forAssetReference:(id)arg1 ;
-(id)activeAssetReferences;
-(id)assetSharedViewModelForAsset:(id)arg0 ;
-(id)assetViewModelForAssetReference:(id)arg0 ;
-(id)currentChange;
-(id)debugDetailedDescription;
-(id)init;
-(id)initWithLowMemoryMode:(BOOL)arg0 ;
-(id)newViewModelChange;
-(void)_handleAssetSharedViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleAssetViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_handleAsyncBrowsingSpeedRegimeInvalidation;
-(void)_handleAutoplayMutedDidChangeNotification:(id)arg0 ;
-(void)_invalidateAllAssetViewModels;
-(void)_invalidateAssetViewModel:(id)arg0 ;
-(void)_invalidateBrowsingSpeedRegime;
-(void)_invalidateBrowsingSpeedRegimeAfterMaximumDelay:(CGFloat)arg0 ;
-(void)_invalidateCurrentAndNeighboringAssetViewModels;
-(void)_resetAccessoryViewsVisibilityToDefaultWithChangeReason:(NSInteger)arg0 ;
-(void)_setVideoContentAllowed:(BOOL)arg0 ;
-(void)_updateAssetViewModel:(id)arg0 ;
-(void)_updateAssetViewModelsIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateNeighboringAssetReferences;
-(void)_updateScrubSpeedRegimeIfNeeded;
-(void)didPerformChanges;
-(void)registerChangeObserver:(id)arg0 ;
-(void)setAnimating:(BOOL)arg0 transitionWithIdentifier:(id)arg1 ;
-(void)setVideoContentAllowed:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setVideoContentAllowedForAllReasons;
-(void)signalReviewScreenSelectionChanged;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif