// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERRACKCOLLECTIONVIEWCONTROLLER_H
#define PBFPOSTERRACKCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSIndexPath, PROverridableDateProvider, UIPageControl;
@protocol UICollectionViewDelegate_Private, UIGestureRecognizerDelegate, UISheetPresentationControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PRDateObserving, FCUIFocusSelectionViewControllerDelegate, PBFPosterEditingIngestionManagerDelegate, PREditingFontAndColorPickerViewControllerDelegate, PREditingSceneViewControllerObserver, PBFPosterRackCollectionViewControllerDelegate;



@interface PBFPosterRackCollectionViewController : UICollectionViewController <UICollectionViewDelegate_Private, UIGestureRecognizerDelegate, UISheetPresentationControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PRDateObserving, FCUIFocusSelectionViewControllerDelegate, PBFPosterEditingIngestionManagerDelegate, PREditingFontAndColorPickerViewControllerDelegate, PREditingSceneViewControllerObserver>

 {
    ? lockPosterOverlayLayerSpecification;
    ? lockPosterLiveContentLayerSpecification;
    ? lockPosterLiveFloatingLayerSpecification;
    ? isLockPosterFloatingLayerInlined;
    ? isLockPosterComplicationRowHidden;
    ? lockVibrancyConfiguration;
    ? posterStore;
    ? focusSetupStateProvider;
    ? currentFocusSetupState;
    ? shouldShowFocusButtonOnLockScreenPosterCells;
    ? shouldDisplayHomeCardsParallaxedWithLockCardsInAlongsideLayout;
    ? leadingTopButton;
    ? trailingTopButton;
    ? centeredPosterButton;
    ? addPosterButton;
    ? homeScreenConfigurationView;
    ? $__lazy_storage_$_feedbackGenerator;
    ? galleryController;
    ? hasScrolledToSelectionForInitialViewLayout;
    ? isScrollingOrSettling;
    ? pageControlPreferredNumberOfVisibleIndicators;
    ? $__lazy_storage_$_initialLayoutModeFromFullscreen;
    ? layoutTransitionAnimationCount;
    ? durationForCommittingToAlongsideLayout;
    ? minimumMovementForSignificantPan;
    ? isTransitioningToInitialLayoutModeFromFullscreen;
    ? shouldBeginAlongsideCompactDeflationWhenAppropriate;
    ? trackingDidBeginWhileTransitioningToInitialLayoutModeFromFullscreen;
    ? layout;
    ? centeredLockPosterOverlayView;
    ? lockPosterLiveContentView;
    ? lockPosterLiveFloatingView;
    ? homeScreenIconContentLayout;
    ? currentHomeScreenIconContentLayoutFetchRequestID;
    ? focusSelector;
    ? editingSessionInProgressAssertion;
    ? widgetHost;
    ? $__lazy_storage_$_lockScreenWidgetMetricsSpecifications;
    ? galleryDataProvider;
    ? displayedPreviewIdentifiers;
    ? galleryInUseAssertion;
}


@property (nonatomic) BOOL allowsEnteringFullscreenLayout; // ivar: allowsEnteringFullscreenLayout
@property (nonatomic) BOOL allowsLeavingHomeConfiguringLayout; // ivar: allowsLeavingHomeConfiguringLayout
@property (nonatomic, readonly) NSIndexPath *centeredPosterIndexPath;
@property (nonatomic, readonly) PROverridableDateProvider *dateProvider; // ivar: dateProvider
@property (nonatomic) NSUInteger layoutMode; // ivar: layoutMode
@property (nonatomic) CGRect leadingTopButtonFrame; // ivar: leadingTopButtonFrame
@property (nonatomic) BOOL managesLiveWidgetHosting; // ivar: managesLiveWidgetHosting
@property (nonatomic, retain) UIPageControl *pageControl; // ivar: pageControl
@property (nonatomic, weak) NSObject<PBFPosterRackCollectionViewControllerDelegate> *posterRackDelegate; // ivar: posterRackDelegate
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic) BOOL shouldDisplayAddButton; // ivar: shouldDisplayAddButton
@property (nonatomic) BOOL shouldDisplayCancelButton; // ivar: shouldDisplayCancelButton
@property (nonatomic) BOOL shouldDisplayConfigurationTopButtons; // ivar: shouldDisplayConfigurationTopButtons
@property (nonatomic) BOOL shouldDisplayGalleryAffordance; // ivar: shouldDisplayGalleryAffordance
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;
@property (nonatomic) CGRect trailingTopButtonFrame; // ivar: trailingTopButtonFrame


+(id)simplifiedHomeScreenSwitcherFor:(id)arg0 delegate:(id)arg1 topButtonLayout:(struct PREditingSceneViewControllerTopButtonLayout )arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg0 ;
-(id)_newCollectionViewWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)galleryViewController:(id)arg0 willUseAnimationController:(id)arg1 forDismissingEditingViewControllerWithAction:(NSInteger)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPosterFilter:(id)arg0 ;
-(struct PREditingSceneViewControllerTopButtonLayout )topButtonLayoutForEditingSceneViewController:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dateProvider:(id)arg0 didUpdateDate:(id)arg1 ;
-(void)dealloc;
-(void)didTapEmptyViewArea:(id)arg0 ;
// -(void)dismissPresentedViewControllersAnimated:(BOOL)arg0 dismissHandler:(id)arg1 completion:(unk)arg2  ;
-(void)editingIngestionManager:(id)arg0 didAccept:(id)arg1 userChoice:(NSInteger)arg2 ;
-(void)editingSceneViewController:(id)arg0 userDidDismissWithAction:(NSInteger)arg1 updatedConfiguration:(id)arg2 updatedConfiguredProperties:(id)arg3 completion:(id)arg4 ;
-(void)editingSceneViewControllerDidFinalize:(id)arg0 ;
-(void)focusSelectionViewController:(id)arg0 hasSelected:(BOOL)arg1 activity:(id)arg2 ;
-(void)fontAndColorPickerViewController:(id)arg0 didUpdateDesiredDetent:(CGFloat)arg1 ;
-(void)galleryViewController:(id)arg0 didSelectPreview:(id)arg1 fromPreviewView:(id)arg2 ;
-(void)galleryViewController:(id)arg0 willDisplayPreview:(id)arg1 ;
-(void)pageControlDidChangePage:(id)arg0 ;
-(void)presentDeletePosterAlertForPosterPairID:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)transitionLayoutToAlongsideForFirstPoster;
-(void)transitionLayoutToConfiguringForFirstPoster;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif