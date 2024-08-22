// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTABBEDLIBRARYVIEWCONTROLLER_H
#define PUTABBEDLIBRARYVIEWCONTROLLER_H

@class UITabBarController, PHPhotoLibrary, NSString, NSMutableDictionary, NSMutableIndexSet, PXForYouBadgeManager, NSArray, PXProgrammaticNavigationRequest, PXProgrammaticNavigationDestination, UINavigationController;
@protocol PXSettingsKeyObserver, PXChangeObserver, PXNavigationActionReceiver, PXTabBarItemKeyCommandDelegate, PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLInvitationRecordsObserver, PXForcedDismissableViewController, PXRootLibraryNavigationController, UINavigationControllerDelegate, OS_os_log;


#import "PUTabbedLibraryViewControllerSpec.h"
#import "PUMomentsZoomLevelManager.h"
#import "PUTabbedLibraryViewModel.h"
#import "PUImportViewController.h"
#import "PUSessionInfo.h"
#import "PUSidebarViewController.h"

@interface PUTabbedLibraryViewController : UITabBarController <PXSettingsKeyObserver, PXChangeObserver, PXNavigationActionReceiver, PXTabBarItemKeyCommandDelegate, PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLInvitationRecordsObserver, PXForcedDismissableViewController, PXRootLibraryNavigationController, UINavigationControllerDelegate>

 {
    PUTabbedLibraryViewControllerSpec *_spec;
    int _pendingSelectedContentMode;
    PHPhotoLibrary *_photoLibrary;
    BOOL _forYouTabBadgeIsDirty;
    NSString *_lastSelectedTabDescription;
    NSMutableDictionary *_filteredAlbumListsByContentMode;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    NSMutableIndexSet *_everDisplayedContentModes;
    PUTabbedLibraryViewModel *_viewModel;
}


@property (retain, nonatomic) PXForYouBadgeManager *badgeManager; // ivar: _badgeManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *excludedContentModes; // ivar: _excludedContentModes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PUImportViewController *importViewController; // ivar: _importViewController
@property (retain, nonatomic) PXProgrammaticNavigationRequest *pendingNavigationRequest; // ivar: _pendingNavigationRequest
@property (nonatomic, setter=px_setHidesTabBarForRegularHorizontalSizeClass:) BOOL px_hidesTabBarForRegularHorizontalSizeClass; // ivar: _px_hidesTabBarForRegularHorizontalSizeClass
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly, nonatomic) NSArray *rootViewControllers;
@property (nonatomic) int selectedContentMode;
@property (readonly, nonatomic) UINavigationController *selectedNavigationController;
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (nonatomic) BOOL shouldNavigateToAllPhotosAlbum; // ivar: _shouldNavigateToAllPhotosAlbum
@property (nonatomic) BOOL shouldSuppressAnimationsDuringProgrammaticNavigation; // ivar: _shouldSuppressAnimationsDuringProgrammaticNavigation
@property (weak, nonatomic) PUSidebarViewController *sidebarViewController; // ivar: _sidebarViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_os_log> *tabbedLibraryLog;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_isNavigationControllerBadged:(id)arg0 ;
-(BOOL)_navigateToDefaultLocationInNavigationController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)_navigateToRootOfCurrentTabAnimated:(BOOL)arg0 ;
-(BOOL)_navigateToRootOfCurrentTabAnimated:(BOOL)arg0 dismissAnyPresentedViewController:(BOOL)arg1 ;
-(BOOL)_navigationControllerShouldCrossFadeBottomBars:(id)arg0 ;
-(BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg0 ;
-(BOOL)albumIsAvailableForNavigation:(id)arg0 ;
-(BOOL)assetIsAvailableForNavigation:(id)arg0 inAlbum:(id)arg1 ;
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg0 ;
-(BOOL)assetIsAvailableForNavigationInMoments:(id)arg0 refetchSectionsIfNeeded:(BOOL)arg1 ;
-(BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg0 ;
-(BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg0 ;
-(BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg0 ;
-(BOOL)cloudFeedIsAvailableForNavigation;
-(BOOL)commentIsAvailableForNavigation:(id)arg0 inAsset:(id)arg1 ;
-(BOOL)contentModeIsAvailableForNavigation:(int)arg0 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)pu_shouldSelectViewController:(id)arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldExposeShortcutForTabBarItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(Class)_navigationControllerLayoutTransitioningClass:(id)arg0 ;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(NSUInteger)tabIdentifierForContentMode:(int)arg0 ;
-(id)_albumListForContentMode:(int)arg0 library:(id)arg1 ;
-(id)_availableAlbumToNavigateToAsset:(id)arg0 preferredAlbum:(id)arg1 ;
-(id)_existingNavigationControllerForContentMode:(int)arg0 ;
-(id)_navigateToForYou;
-(id)_navigationControllerForContentMode:(int)arg0 ;
-(id)_newNavigationControllerWithRootController:(id)arg0 ;
-(id)_nextCloudFeedNavigatingObject;
-(id)_snapBackRootViewControllerInNavigationController:(id)arg0 ;
-(id)_tabRootViewControllerInNavigationController:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSpec:(id)arg0 ;
-(id)localizedDiscoverabilityTitleForTabBarItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)navigationController:(id)arg0 interactionControllerForAnimationController:(id)arg1 ;
-(id)newRootViewControllerForContentMode:(int)arg0 ;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg0 ;
-(id)ppt_navigationControllerForContentMode:(int)arg0 ;
-(id)px_gridPresentation;
-(int)_contentModeForAlbum:(id)arg0 ;
-(int)_contentModeForNavigationController:(id)arg0 ;
-(int)contentModeForTabIdentifier:(NSUInteger)arg0 ;
-(struct CGRect )px_frameForTabItem:(NSUInteger)arg0 inCoordinateSpace:(id)arg1 ;
-(void)_didFinishPostingNotifications:(id)arg0 ;
-(void)_enumerateViewControllersWithBlock:(id)arg0 ;
-(void)_handleFetchedMomentShare:(id)arg0 atURL:(id)arg1 error:(id)arg2 timedOut:(BOOL)arg3 ;
-(void)_navigateToAlbum:(id)arg0 andPerformAction:(int)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)_navigateToAsset:(id)arg0 andPerformAction:(int)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3 ;
-(void)_navigateToContentMode:(int)arg0 animated:(BOOL)arg1 dismissAnyPresentedViewController:(BOOL)arg2 completion:(id)arg3 ;
-(void)_navigateToContentMode:(int)arg0 defaultLocationIfNeverDisplayed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_navigateToMomentShareWithURL:(id)arg0 animated:(BOOL)arg1 ;
-(void)_navigateToSearchWithCompletion:(id)arg0 ;
-(void)_navigateToSuggestionFromCuratedLibrary:(id)arg0 ;
-(void)_presentRetryAlertControllerWithTitle:(id)arg0 error:(id)arg1 retryHandler:(id)arg2 ;
-(void)_sceneWillEnterForeground:(id)arg0 ;
-(void)_updateForYouBadges;
-(void)_updateRootViewControllersInNavigationControllers:(id)arg0 tabBarHidden:(BOOL)arg1 ;
-(void)_updateTabBarVisibilityForHorizontalSizeClass:(NSInteger)arg0 ;
-(void)assetContainerDidChange:(id)arg0 ;
-(void)assetContainerListDidChange:(id)arg0 ;
-(void)dealloc;
-(void)invitationRecordsDidChange:(id)arg0 ;
-(void)navigateToAlbum:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)navigateToAlbumsTabRoot;
-(void)navigateToAsset:(id)arg0 inAlbum:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigateToAsset:(id)arg0 openOneUp:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)navigateToCloudFeedAsset:(id)arg0 completion:(id)arg1 ;
-(void)navigateToCloudFeedComment:(id)arg0 completion:(id)arg1 ;
-(void)navigateToCloudFeedWithCompletion:(id)arg0 ;
-(void)navigateToCloudKitShareWithURL:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigateToComment:(id)arg0 forAsset:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigateToContentMode:(int)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigateToInitialLocationInCurrentNavigationController;
-(void)navigateToInitialLocationInNavigationController:(id)arg0 ;
-(void)navigateToInvitationCMMWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigateToOneYearAgoSearch;
-(void)navigateToPeopleAlbumAnimated:(BOOL)arg0 revealPersonWithLocalIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)navigateToPhotosContentBottomAnimated:(BOOL)arg0 ;
-(void)navigateToPlacesAlbumAnimated:(BOOL)arg0 ;
-(void)navigateToRevealAlbum:(id)arg0 initiallyHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)navigateToRevealAsset:(id)arg0 inAlbum:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigateToRevealCloudFeedAsset:(id)arg0 completion:(id)arg1 ;
-(void)navigateToRevealCloudFeedComment:(id)arg0 completion:(id)arg1 ;
-(void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg0 completion:(id)arg1 ;
-(void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg0 ;
-(void)navigateToSearch;
-(void)navigateToSearchWithHashtag:(id)arg0 ;
-(void)navigateToSearchWithTerms:(id)arg0 searchCategories:(id)arg1 ;
-(void)navigateToSuggestedCMMWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)ppt_runTabSwitchingTestWithName:(id)arg0 options:(id)arg1 delegate:(id)arg2 completionHandler:(id)arg3 ;
-(void)px_switchToTabAndNavigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)setSelectedViewController:(id)arg0 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateDisplayedTabsAnimated:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif