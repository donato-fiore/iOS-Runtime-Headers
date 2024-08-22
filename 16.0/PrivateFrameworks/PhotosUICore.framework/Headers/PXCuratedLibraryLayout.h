// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYLAYOUT_H
#define PXCURATEDLIBRARYLAYOUT_H

@class NSMutableDictionary, NSString;
@protocol PXLibrarySummaryDataSource, PXChangeObserver, PXAssetsDataSourceManagerObserver, PXCuratedLibraryViewModelPresenter, PXGNamedImageSource, PXGAnchorDelegate, PXSettingsKeyObserver, PXDisplayAssetCollection, PXBrowserVisibleContentSnapshot;


#import "PXGSplitLayout.h"
#import "PXCuratedLibrarySummaryHelper.h"
#import "PXGDiagnosticsSpriteProbe.h"
#import "PXNumberAnimator.h"
#import "PXZoomablePhotosLayout.h"
#import "PXSectionedObjectReference.h"
#import "PXCuratedLibrarySectionHeaderLayout.h"
#import "PXGSpriteReference.h"
#import "PXAssetCollectionReference.h"
#import "PXCuratedLibrarySectionedLayout.h"
#import "PXCuratedLibraryLayoutSpec.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibraryLayout : PXGSplitLayout <PXLibrarySummaryDataSource, PXChangeObserver, PXAssetsDataSourceManagerObserver, PXCuratedLibraryViewModelPresenter, PXGNamedImageSource, PXGAnchorDelegate, PXSettingsKeyObserver>

 {
    PXCuratedLibrarySummaryHelper *_summaryHelper;
    ? _updateFlags;
    ? _postUpdateFlags;
    NSMutableDictionary *_lastVisibleAreaAnchorsByZoomLevels;
    NSMutableDictionary *_preferredVisibleAreaAnchorsByZoomLevels;
    PXGDiagnosticsSpriteProbe *_spriteProbe;
    BOOL _wantsStatusBarGradient;
    PXNumberAnimator *_statusBarGradientAnimator;
    unsigned short _statusBarGradientResizableCapInsetsIndex;
    unsigned int _statusBarGradientSpriteIndex;
    CGFloat _statusBarGradientAlpha;
    CGFloat _statusBarGradientHeight;
    CGFloat _statusBarGradientAndStyleFadeDuration;
    BOOL _isPerformingUpdate;
    BOOL _isPerformingInitialUpdate;
}


@property (readonly, nonatomic) PXZoomablePhotosLayout *allPhotosLayout; // ivar: _allPhotosBodyLayout
@property (readonly, nonatomic) CGFloat bottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *dominantHeroPreferencesBeforeTransition; // ivar: _dominantHeroPreferencesBeforeTransition
@property (readonly, nonatomic) PXSectionedObjectReference *dominantObjectReference;
@property (readonly, nonatomic) CGFloat estimatedHeaderHeight;
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayout *floatingHeaderLayout; // ivar: _floatingHeaderLayout
@property (readonly, nonatomic) CGRect fullyVisibleRect;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXGSpriteReference *lastHitSpriteReference; // ivar: _lastHitSpriteReference
@property (retain, nonatomic) PXAssetCollectionReference *lastPresentedDayAssetCollectionReference; // ivar: _lastPresentedDayAssetCollectionReference
@property (retain, nonatomic) id *lastVisibleDominantObjectReference; // ivar: _lastVisibleDominantObjectReference
@property (nonatomic) CGFloat lateralMargin; // ivar: _lateralMargin
@property (readonly, nonatomic) PXCuratedLibrarySectionedLayout *libraryBodyLayout; // ivar: _libraryBodyLayout
@property (readonly, nonatomic) CGRect presentedVisibleRect; // ivar: _presentedVisibleRect
@property (readonly, nonatomic) NSInteger presentedZoomLevel; // ivar: _presentedZoomLevel
@property (readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *topMostAssetCollection;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) NSObject<PXBrowserVisibleContentSnapshot> *visibleContentSnapshot;


-(BOOL)allowsDanglingUpdatesAssertions;
-(BOOL)allowsSublayoutUpdateCycleAssertions;
-(BOOL)curatedLibrarySummaryHelperShouldUpdateImmediately:(id)arg0 ;
-(CGFloat)_adjustedTargetVisibleTopByAligningNearestHeroForProposedTargetVisibleTop:(CGFloat)arg0 ;
-(CGFloat)_adjustedTargetVisibleTopToAccomodateFromBottomPaddedAreaVisibility:(BOOL)arg0 proposedVisibleRect:(struct CGRect )arg1 ;
-(CGFloat)adjustedTargetVisibleTopForProposedTargetVisibleTop:(CGFloat)arg0 scrollingVelocity:(CGFloat)arg1 ;
-(NSInteger)_statusBarVisibility;
-(NSInteger)curatedLibraryLayoutAnimationContextForTransitionToZoomLevel:(NSInteger)arg0 ;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(NSInteger)viewModel:(id)arg0 transitionTypeFromZoomLevel:(NSInteger)arg1 toZoomLevel:(NSInteger)arg2 ;
-(id)_createAnchorForTransitionToZoomLevel:(NSInteger)arg0 ;
-(id)_currentBodyLayout;
-(id)_currentFloatingHeaderSpec;
-(id)axLocalizedLabel;
-(id)axSpriteIndexes;
-(id)createAnchorForScrollingToInitialPosition;
-(id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(NSInteger)arg0 userData:(id)arg1 ;
-(id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(NSInteger)arg0 ;
-(id)createDefaultAnimationForCurrentContext;
-(id)dateIntervalFutureForContentInRect:(SEL)arg0 type:(struct CGRect )arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)lastVisibleAreaAnchor;
-(id)locationNamesFutureForContentInRect:(SEL)arg0 ;
-(id)presentedItemsGeometryForDataSource:(id)arg0 ;
-(id)topMostAssetCollectionInRect:(struct CGRect )arg0 ignoreChapterHeaders:(BOOL)arg1 ;
-(id)viewModel:(id)arg0 dominantAssetCollectionReferenceForZoomLevel:(NSInteger)arg1 ;
-(struct CGPoint )_adjustInitialVisibleRect:(struct CGRect )arg0 inLayout:(id)arg1 forRecentSection:(NSInteger)arg2 ;
-(struct CGPoint )anchor:(id)arg0 visibleRectOriginForProposedVisibleRect:(struct CGRect )arg1 forLayout:(id)arg2 ;
-(struct CGRect )sectionBoundariesForAssetCollectionReference:(id)arg0 ;
-(void)_enumerateHeroSpritesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)_enumerateScrollablePagesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)_invalidateFloatingHeaderButtons;
-(void)_invalidateSummaryHelper;
-(void)_noteAnimation:(id)arg0 isRunning:(BOOL)arg1 ;
-(void)_updateAllPhotosOverlayInsets;
-(void)_updateFloatingHeaderAppearance;
-(void)_updateFloatingHeaderButtons;
-(void)_updateFloatingHeaderLayoutSpec;
-(void)_updateFloatingHeaderSelectionTitle;
-(void)_updateFloatingHeaderVisibility;
-(void)_updateLateralMargin;
-(void)_updateLibraryBodyLayoutLastVisibleDominantObjectReference;
-(void)_updateLibraryBodyLayoutLateralMargin;
-(void)_updateLocalSprites;
-(void)_updateSpecValue;
-(void)_updateStatusBarGradientAlphaValue;
-(void)_updateStatusBarGradientVisibility;
-(void)_updateStatusBarStyle;
-(void)_updateZoomLevel;
-(void)animationDidComplete:(id)arg0 ;
-(void)clearLastVisibleAreaAnchoringInformation;
-(void)dealloc;
-(void)didUpdate;
-(void)enumerateSectionBoundariesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateVisibleAssetReferencesUsingBlock:(id)arg0 ;
-(void)enumerateVisibleAssetsSectionSublayoutsUsingBlock:(id)arg0 ;
-(void)invalidateFloatingHeaderButtons;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)screenScaleDidChange;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)sublayoutDidChangeLastBaseline:(id)arg0 ;
-(void)update;
-(void)viewModel:(id)arg0 didTransitionFromZoomLevel:(NSInteger)arg1 toZoomLevel:(NSInteger)arg2 ;
-(void)viewModel:(id)arg0 willTransitionFromZoomLevel:(NSInteger)arg1 toZoomLevel:(NSInteger)arg2 ;
-(void)visibleRectDidChange;
-(void)willUpdate;


@end


#endif