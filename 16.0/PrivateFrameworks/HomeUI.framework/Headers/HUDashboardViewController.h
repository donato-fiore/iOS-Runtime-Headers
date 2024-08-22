// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDVIEWCONTROLLER_H
#define HUDASHBOARDVIEWCONTROLLER_H

@class NSString, HFItem<HFAccessoryRepresentableItem>, UIVisualEffectView, NSArray, NAFuture;
@protocol HUCollectionLayoutManagerDelegate, UICollectionViewDropDelegate, HUPerformanceTestableViewController, HUHomeKitObjectPresenting, HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver, HURoomSettingsDelegate, HUEditRoomViewControllerPresentationDelegate, HUNavigationBarButtonOwner, HUEditActionDelegate, HUDashboardItemManagerDelegate, HUPresentationDelegate, HFExecutionEnvironmentObserver, HUBannerItemModuleControllerDelegate, HUAccessoryTileCellDelegate, HUPreloadableViewController, HUDashboardViewControllerDelegate;


#import "HUControllableItemCollectionViewController.h"
#import "HUBannerItemModuleController.h"
#import "HUBlurGroupingEffectView.h"
#import "HUDashboardCameraItemModuleController.h"
#import "HUDashboardContext.h"
#import "HUROARUpgradeView.h"
#import "HUDashboardItemManager.h"
#import "HUDashboardLayoutManager.h"
#import "HUNavigationBarButton.h"
#import "HUWallpaperView.h"

@interface HUDashboardViewController : HUControllableItemCollectionViewController <HUCollectionLayoutManagerDelegate, UICollectionViewDropDelegate, HUPerformanceTestableViewController, HUHomeKitObjectPresenting, HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver, HURoomSettingsDelegate, HUEditRoomViewControllerPresentationDelegate, HUNavigationBarButtonOwner, HUEditActionDelegate, HUDashboardItemManagerDelegate, HUPresentationDelegate, HFExecutionEnvironmentObserver, HUBannerItemModuleControllerDelegate, HUAccessoryTileCellDelegate, HUPreloadableViewController>



@property (retain, nonatomic) HUBannerItemModuleController *bannerItemModuleController; // ivar: _bannerItemModuleController
@property (retain, nonatomic) HUBlurGroupingEffectView *blurGroupingEffectView; // ivar: _blurGroupingEffectView
@property (retain, nonatomic) HUDashboardCameraItemModuleController *cameraItemModuleController; // ivar: _cameraItemModuleController
@property (retain, nonatomic) HUDashboardContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUDashboardViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *editActionTitle;
@property (readonly, nonatomic) NSString *editActionTitleLocalizationKey;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUROARUpgradeView *homeUpgradedToRoarView; // ivar: _homeUpgradedToRoarView
@property (readonly, nonatomic) BOOL isOverlay; // ivar: _isOverlay
@property (readonly, nonatomic) HUDashboardItemManager *itemManager;
@property (retain, nonatomic) HFItem<HFAccessoryRepresentableItem> *itemShowingSizeToggleButton; // ivar: _itemShowingSizeToggleButton
@property (readonly, nonatomic) HUDashboardLayoutManager *layoutManager; // ivar: _layoutManager
@property (retain, nonatomic) HUNavigationBarButton *navigationAddButton; // ivar: _navigationAddButton
@property (retain, nonatomic) HUNavigationBarButton *navigationAnnounceButton; // ivar: _navigationAnnounceButton
@property (retain, nonatomic) HUNavigationBarButton *navigationEditDoneButton; // ivar: _navigationEditDoneButton
@property (retain, nonatomic) HUNavigationBarButton *navigationHomeButton; // ivar: _navigationHomeButton
@property (retain, nonatomic) UIVisualEffectView *roarBackdropView; // ivar: _roarBackdropView
@property (readonly, nonatomic) BOOL shouldIncludeRoomsInHomeMenu;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEditing;
@property (retain, nonatomic) NSArray *upgradeViewConstraints; // ivar: _upgradeViewConstraints
@property (retain, nonatomic) NAFuture *viewFullyVisibleFuture; // ivar: _viewFullyVisibleFuture
@property (nonatomic) BOOL viewIsFullyVisible; // ivar: _viewIsFullyVisible
@property (retain, nonatomic) HUWallpaperView *wallpaperView; // ivar: _wallpaperView


-(BOOL)_canShowWhileLocked;
-(BOOL)_canSkipStatusDetailsForItem:(id)arg0 ;
-(BOOL)_hasDetailViewControllerForItem:(id)arg0 ;
-(BOOL)_hasTapActionForItem:(id)arg0 ;
-(BOOL)_statusItemRepresentsOnlyResidentIPads:(id)arg0 ;
-(BOOL)allowsCondensedAccessoryTiles;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)canReorderItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)itemSupportsToggleInteraction:(id)arg0 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 view:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginLongPressPresentationWithContext:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(BOOL)shouldHideNavigationBarButton:(id)arg0 ;
-(BOOL)shouldOverrideTraitCollectionForPresentationCoordinator:(id)arg0 ;
-(BOOL)shouldShowAnnounceButton;
-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)navigationBarEdgeForButton:(id)arg0 ;
-(id)_allNavigationBarButtons;
-(id)_dashboardNavigator;
-(id)_dismissPresentedViewControllersAnimated:(BOOL)arg0 ;
-(id)_filterBarController;
-(id)_performTapActionForItem:(id)arg0 tappedArea:(id)arg1 ;
-(id)_presentHomeKitObject:(id)arg0 fromStatusItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_presentQuickControlsForHomeKitItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)_presentRoomEditorForRoom:(id)arg0 ;
-(id)_quickControlDetailViewControllerForItem:(id)arg0 ;
-(id)_titleForSectionIdentifier:(id)arg0 ;
-(id)addActionDelegateForNavigationBarButton:(id)arg0 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)childViewControllersToPreload;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg1 atCurrentIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)compositionalLayoutConfigurationForTraitCollection:(id)arg0 ;
-(id)controlItemSupprtingToggleInteractionForItem:(id)arg0 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)editActionDelegate;
-(id)editActionDelegateForNavigationBarButton:(id)arg0 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)homeForNavigationBarButton:(id)arg0 ;
-(id)hu_performanceTestReadyFuture;
-(id)hu_preloadContent;
-(id)init;
-(id)initWithContext:(id)arg0 asOverlay:(BOOL)arg1 delegate:(id)arg2 ;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(id)itemManager:(id)arg0 futureToUpdateItems:(id)arg1 itemUpdateOptions:(id)arg2 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(id)navigationActionDelegateForNavigationBarButton:(id)arg0 ;
-(id)navigationBarButtonIdentifierOrderForEdge:(NSUInteger)arg0 ;
-(id)presentCameraProfile:(id)arg0 forCameraClip:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentCameraProfile:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 animated:(BOOL)arg3 ;
-(id)presentDetailsForItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentFeedbackFlowForCameraClip:(id)arg0 fromProfile:(id)arg1 ;
-(id)presentHomeKitObject:(id)arg0 destination:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(id)presentItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentItemWithUUID:(id)arg0 destination:(NSUInteger)arg1 secondaryDestination:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(id)presentRoomSettingsForRoom:(id)arg0 ;
-(id)presentStatusDetailsForStatusItemClass:(Class)arg0 animated:(BOOL)arg1 ;
-(id)quickControlPresentationContextForItem:(id)arg0 atIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)reorderableItemListForSection:(NSInteger)arg0 ;
-(id)roomForNavigationBarButton:(id)arg0 ;
-(id)statusItemsForNavigationBarButton:(id)arg0 inHome:(id)arg1 ;
-(id)tappableAreaForPoint:(struct CGPoint )arg0 inItem:(id)arg1 atIndexPath:(id)arg2 ;
-(id)traitCollectionForPresentationCoordinator:(id)arg0 ;
-(id)transformWithLayoutOptions:(id)arg0 ;
-(void)_clipToNavigationBar;
-(void)_handleBackgroundTap:(id)arg0 ;
-(void)_presentDetailsViewControllerForSectionWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)_registerObservers;
-(void)_registerSectionDecorationViews;
-(void)_requestLocationAuth;
-(void)_sendContextMenuMetricsWithContext:(id)arg0 title:(id)arg1 ;
-(void)_setNavigationButtons:(id)arg0 forEdge:(NSUInteger)arg1 ;
-(void)_setUpFilterBar;
-(void)_setUpNavigationBar;
-(void)_setUpTabBar;
-(void)_setupBackgroundView;
-(void)_showRoarUpgradeViewIfNeeded;
-(void)_toggleSizeForCell:(id)arg0 withItem:(id)arg1 ;
-(void)_updateAllHeaderViews;
-(void)_updateAnnounceNotificationSettingsIfNeeded;
-(void)_updateBadgeCountForHomeButton;
-(void)_updateBarButtons;
-(void)_updateHeaderView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_updatePaletteHeight;
-(void)accessory:(id)arg0 didUpdateApplicationDataForService:(id)arg1 ;
-(void)accessoryDidUpdateApplicationData:(id)arg0 ;
-(void)accessoryTileSizeButtonTappedFor:(id)arg0 withItem:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 dragSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)dashboardItemManager:(id)arg0 didUpdateContext:(id)arg1 ;
-(void)dashboardItemManager:(id)arg0 didUpdateHomeMenuStatusItems:(id)arg1 ;
-(void)didReorderItemWithSortedItemsBySectionID:(id)arg0 ;
-(void)didSelectUnreachableResidentsBanner:(id)arg0 ;
-(void)didSelectWelcomeBanner:(id)arg0 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)editRoomViewControllerDidFinish:(id)arg0 withNewRoom:(id)arg1 ;
-(void)endEditing;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 ;
-(void)home:(id)arg0 didUpdateApplicationDataForServiceGroup:(id)arg1 ;
-(void)home:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForRoom:(id)arg1 ;
-(void)home:(id)arg0 didUpdateWallpaperForRoom:(id)arg1 ;
-(void)homeDidUpdateWallpaper:(id)arg0 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManager:(id)arg0 didUpdateStateForIncomingInvitations:(id)arg1 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)migrationUpdatedTileSize:(id)arg0 ;
-(void)presentationCoordinator:(id)arg0 didRecognizeTapForItem:(id)arg1 tappedArea:(id)arg2 ;
-(void)presentationCoordinator:(id)arg0 touchDidBeginForItem:(id)arg1 tappedArea:(id)arg2 ;
-(void)presentationCoordinator:(id)arg0 touchDidEndForItem:(id)arg1 tappedArea:(id)arg2 ;
-(void)reloadLayoutAnimated:(BOOL)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)sendContextMenuMetricsWithTitleLocalizationKey:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setReorderableItemList:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)startEditing;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif