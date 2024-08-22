// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDASHBOARDVIEWCONTROLLER_H
#define HUDASHBOARDVIEWCONTROLLER_H

@class NAFuture, UIVisualEffectView, UIListContentConfiguration, NSMutableDictionary, NSString, NSUserDefaults, UIDropInteraction, NSMutableSet, UIButton, AMSUIUpdateMultiUserTokenTask, UINavigationController, NSArray, NSMutableArray;
@protocol HFAccessoryObserver, HUDashboardItemManagerDelegate, HUDashboardScrollingAnimationControllerDelegate, HUGridEmptyHomeViewDelegate, HUPrototypeLayoutOptionsEditorViewControllerDelegate, UIDropInteractionDelegate, UIViewControllerTransitioningDelegate, HFHomeObserver, HUBannerCellDelegate, HFHomeManagerObserver, HFUserObserver, HUSoftwareUpdateUIPresentationDelegate, PRXCardContentProviding, PRXFlowDelegate, HFMediaServiceManagerObserver, HUPresentationDelegate, HUHomeKitObjectPresenting, HUDashboardMenuNavigationActionDelegate, HUDashboardNavigator, HUDashboardViewControllerDelegate;


#import "HUControllableItemCollectionViewController.h"
#import "HUGridActionSetListViewController.h"
#import "HUGridCameraListViewController.h"
#import "HUDashboardContext.h"
#import "HUDashboardItemManager.h"
#import "HUGridEmptyHomeView.h"
#import "HUDashboardScrollingAnimationController.h"
#import "HUROARUpgradeView.h"
#import "HUGridLayoutOptions.h"
#import "HUDashboardNavigationButton.h"
#import "HUCameraController.h"
#import "HUGridStatusListViewController.h"
#import "HUWallpaperView.h"

@interface HUDashboardViewController : HUControllableItemCollectionViewController <HFAccessoryObserver, HUDashboardItemManagerDelegate, HUDashboardScrollingAnimationControllerDelegate, HUGridEmptyHomeViewDelegate, HUPrototypeLayoutOptionsEditorViewControllerDelegate, UIDropInteractionDelegate, UIViewControllerTransitioningDelegate, HFHomeObserver, HUBannerCellDelegate, HFHomeManagerObserver, HFUserObserver, HUSoftwareUpdateUIPresentationDelegate, PRXCardContentProviding, PRXFlowDelegate, HFMediaServiceManagerObserver, HUPresentationDelegate, HUHomeKitObjectPresenting, HUDashboardMenuNavigationActionDelegate>

 {
    BOOL _useCustomDragAndDrop;
}


@property (nonatomic) NSInteger _debug_nontrivialUpdateRequestCount; // ivar: __debug_nontrivialUpdateRequestCount
@property (retain, nonatomic) NAFuture *accountFuture; // ivar: _accountFuture
@property (readonly, nonatomic) HUGridActionSetListViewController *actionSetListViewController; // ivar: _actionSetListViewController
@property (readonly, nonatomic) BOOL allowsPullToDismiss;
@property (retain, nonatomic) UIVisualEffectView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIListContentConfiguration *cachedHeaderContentConfiguration; // ivar: _cachedHeaderContentConfiguration
@property (retain, nonatomic) NSMutableDictionary *cachedLayoutOptionsKeyedBySectionIdentifier; // ivar: _cachedLayoutOptionsKeyedBySectionIdentifier
@property (readonly, nonatomic) HUGridCameraListViewController *cameraListViewController; // ivar: _cameraListViewController
@property (readonly, nonatomic) NSInteger cardStyle;
@property (readonly, nonatomic) HUDashboardContext *context;
@property (weak, nonatomic) HUDashboardItemManager *dashboardItemManager; // ivar: _dashboardItemManager
@property (weak, nonatomic) NSObject<HUDashboardNavigator> *dashboardNavigator; // ivar: _dashboardNavigator
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (weak, nonatomic) NSObject<HUDashboardViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets displayedSystemContentInset; // ivar: _displayedSystemContentInset
@property (retain, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (readonly, nonatomic) HUGridEmptyHomeView *emptyHomeView; // ivar: _emptyHomeView
@property (retain, nonatomic) HUDashboardScrollingAnimationController *finishSetupAnimationController; // ivar: _finishSetupAnimationController
@property (nonatomic) BOOL hasFinishedInitialDashboardLoad; // ivar: _hasFinishedInitialDashboardLoad
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUDashboardScrollingAnimationController *headlineAnimationController; // ivar: _headlineAnimationController
@property (retain, nonatomic) HUROARUpgradeView *homeUpgradedToRoarView; // ivar: _homeUpgradedToRoarView
@property (nonatomic) BOOL isDisplayingEmptyHomeDashboard; // ivar: _isDisplayingEmptyHomeDashboard
@property (nonatomic) BOOL isHomeViewShown; // ivar: _isHomeViewShown
@property (nonatomic) BOOL isTransitioningSizes; // ivar: _isTransitioningSizes
@property (retain, nonatomic) NSMutableSet *itemsWaitingOnViewVisibility; // ivar: _itemsWaitingOnViewVisibility
@property (retain, nonatomic) UIButton *largeTitleButton; // ivar: _largeTitleButton
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) AMSUIUpdateMultiUserTokenTask *multiUserTokenFixTask; // ivar: _multiUserTokenFixTask
@property (retain, nonatomic) HUDashboardNavigationButton *navigationAddButton; // ivar: _navigationAddButton
@property (retain, nonatomic) HUDashboardNavigationButton *navigationAnnounceButton; // ivar: _navigationAnnounceButton
@property (retain, nonatomic) HUDashboardNavigationButton *navigationEditDoneButton; // ivar: _navigationEditDoneButton
@property (retain, nonatomic) HUDashboardNavigationButton *navigationHomesAndRoomsButton; // ivar: _navigationHomesAndRoomsButton
@property (readonly, nonatomic) HUCameraController *ppt_cameraController;
@property (retain, nonatomic) UINavigationController *proxCardNavigationController; // ivar: _proxCardNavigationController
@property (nonatomic) BOOL shouldShowFullMenu; // ivar: _shouldShowFullMenu
@property (nonatomic) BOOL shouldTrackProgrammableSwitchActivations; // ivar: _shouldTrackProgrammableSwitchActivations
@property (readonly, nonatomic) HUGridStatusListViewController *statusListViewController; // ivar: _statusListViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *upgradeViewConstraints; // ivar: _upgradeViewConstraints
@property (retain, nonatomic) NSMutableArray *viewFullyVisibleFutures; // ivar: _viewFullyVisibleFutures
@property (nonatomic) BOOL viewIsFullyVisible; // ivar: _viewIsFullyVisible
@property (retain, nonatomic) HUWallpaperView *wallpaperView; // ivar: _wallpaperView
@property (nonatomic) BOOL wallpapersWerePreloaded; // ivar: _wallpapersWerePreloaded


-(BOOL)_canShowWhileLocked;
-(BOOL)_hasDetailViewControllerForItem:(id)arg0 ;
-(BOOL)_isWallpaperEnabled;
-(BOOL)bannerCell:(id)arg0 shouldReceiveFooterViewTaps:(id)arg1 ;
-(BOOL)canEditScreen;
-(BOOL)canReorderItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)homeHasAccessories;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(BOOL)shouldOverrideTraitCollectionForPresentationCoordinator:(id)arg0 ;
-(BOOL)useCustomDragAndDrop;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)_incomingInvitationsCount;
-(id)_defaultLayoutOptionsForViewSize:(struct CGSize )arg0 ;
-(id)_layoutOptionsForSectionIndex:(NSUInteger)arg0 ;
-(id)_loadWallpaperSlices;
-(id)_loadWallpaperWithVariant:(NSInteger)arg0 ;
-(id)_markAccessoriesAsUserNotified:(id)arg0 ;
-(id)_navigationHost;
-(id)_performTapActionForItem:(id)arg0 ;
// -(id)_presentCameraProfile:(id)arg0 withPresentationHandler:(id)arg1 animated:(unk)arg2  ;
-(id)_presentQuickControlsForHomeKitItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)_quickControlDetailViewControllerForItem:(id)arg0 ;
-(id)actionSetListViewController:(id)arg0 futureToUpdateItems:(id)arg1 itemUpdateOptions:(id)arg2 ;
-(id)childViewControllersToPreload;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)dismissPresentedViewControllersAnimated:(BOOL)arg0 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(id)init;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)itemManager:(id)arg0 futureToUpdateItems:(id)arg1 itemUpdateOptions:(id)arg2 ;
-(id)presentCameraProfile:(id)arg0 forCameraClip:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentCameraProfile:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 animated:(BOOL)arg3 ;
-(id)presentDetailsForItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentFeedbackFlowForCameraClip:(id)arg0 fromProfile:(id)arg1 ;
-(id)presentHomeKitObject:(id)arg0 destination:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(id)presentItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentItemWithUUID:(id)arg0 destination:(NSUInteger)arg1 secondaryDestination:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(id)presentStatusDetailsForStatusItemClass:(Class)arg0 animated:(BOOL)arg1 ;
-(id)reorderableHomeKitItemListForSection:(NSInteger)arg0 ;
-(id)setWallpaper:(id)arg0 withImage:(id)arg1 ;
-(id)softwareUpdateUIManager:(id)arg0 dismissViewController:(id)arg1 ;
-(id)softwareUpdateUIManager:(id)arg0 presentViewController:(id)arg1 ;
-(id)traitCollectionForPresentationCoordinator:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_configureRoarUpgradeView;
-(void)_didTapLargeTitleButton:(id)arg0 ;
-(void)_enableAnnounceButtons:(BOOL)arg0 delay:(NSUInteger)arg1 ;
-(void)_finishEditing:(id)arg0 ;
-(void)_launchAnnounceRecordingServiceForCurrentHome:(id)arg0 ;
-(void)_launchAnnounceRecordingServiceForCurrentRoom:(id)arg0 ;
-(void)_refreshStateForMediaProfile:(id)arg0 ;
-(void)_setUpHomesAndRoomsMenuForButton:(id)arg0 ;
-(void)_setupLargeTitleButtonIfNecessary;
-(void)_startEditing:(id)arg0 ;
-(void)_updateAnnounceNotificationSettingsIfNeeded;
-(void)_updateBarButtons;
-(void)_updateEmptyHomeDashboardStateIfNeededAnimated:(BOOL)arg0 ;
-(void)_updateLeftBarButtons;
-(void)_updateNavigationBarLayoutMargins;
-(void)_updateRightBarButtons;
-(void)_updateShowLargeTitleEditButtonAnimated:(BOOL)arg0 ;
-(void)accessory:(id)arg0 service:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(void)accessoryDidUpdateControllable:(id)arg0 ;
-(void)accessoryDidUpdateReachability:(id)arg0 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg0 ;
-(void)addSceneTileAction:(id)arg0 ;
-(void)bannerCell:(id)arg0 footerViewTapped:(id)arg1 ;
-(void)bounceItem:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)dashboardDidUpdateDashboardContext:(id)arg0 ;
-(void)dashboardItemManagerDidUpdateWallpaper:(id)arg0 ;
-(void)dealloc;
-(void)defaultMediaServiceDidUpdate:(id)arg0 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)diffableDataItemManager:(id)arg0 willUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 isInitialLoad:(BOOL)arg4 ;
-(void)dismissCameraUpgradeBanner;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)emptyHomeCellAddAccessoryButtonPressed:(id)arg0 ;
-(void)emptyHomeCellLearnMoreButtonPressed:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddResidentDevice:(id)arg1 ;
-(void)home:(id)arg0 didAddRoom:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveResidentDevice:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForRoom:(id)arg1 ;
-(void)home:(id)arg0 didUpdateRoom:(id)arg1 forAccessory:(id)arg2 ;
-(void)homeDidUpdateName:(id)arg0 ;
-(void)homeDidUpdateToROAR:(id)arg0 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)invalidateDynamicBarButtonsForSenderSelector:(SEL)arg0 ;
-(void)itemManager:(id)arg0 didChangeSourceItem:(id)arg1 ;
-(void)itemManager:(id)arg0 didInsertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)itemManager:(id)arg0 performUpdateRequest:(id)arg1 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)layoutOptionsEditor:(id)arg0 didUpdateLayoutOptions:(id)arg1 ;
-(void)layoutOptionsEditorDidFinish:(id)arg0 ;
-(void)mediaServiceDidUpdate:(id)arg0 ;
-(void)mediaServiceRemoved:(id)arg0 ;
-(void)mediaServicesDidUpdate:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setNavigationButtons:(id)arg0 forEdge:(NSUInteger)arg1 ;
-(void)setReorderableHomeKitItemList:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)setUseCustomDragAndDrop:(BOOL)arg0 ;
-(void)showAddSceneMenu;
-(void)showAddSceneNoAccessoriesAlert;
-(void)showAllHomesSettings;
-(void)showDashboardEditor;
-(void)showHome:(id)arg0 ;
-(void)showHomeSettings:(id)arg0 ;
-(void)showRoom:(id)arg0 ;
-(void)showRoomSettings:(id)arg0 ;
-(void)startEditing;
-(void)upgradeCameraSelected;
-(void)user:(id)arg0 didUpdateNeedsiTunesMultiUserRepair:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)welcomeUISelected:(id)arg0 ;


@end


#endif