// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSTOREPAGEVIEWCONTROLLER_H
#define SUSTOREPAGEVIEWCONTROLLER_H

@class _UIBackdropView, ISURLRequestPerformance, UIPopoverController, SSMutableURLRequestProperties, SSURLRequestProperties, SSAuthenticationContext, NSString, NSNumber;
@protocol SKUITabBarItemRootViewController, SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate, ISURLOperationDelegate, SUStorePageViewControllerDelegate;


#import "SUViewController.h"
#import "SUWebScriptReloadContext.h"
#import "SUStorePageProtocol.h"
#import "SUNavigationMenuViewController.h"
#import "SUSearchFieldController.h"
#import "SUPageSectionGroup.h"
#import "SUSegmentedControl.h"

@interface SUStorePageViewController : SUViewController <SKUITabBarItemRootViewController, SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate, ISURLOperationDelegate>

 {
    *__CFSet _allowedInterfaceOrientations;
    _UIBackdropView *_backdropView;
    CGFloat _expirationTime;
    BOOL _lastLoadDidFail;
    id *_loadBlock;
    NSInteger _pageType;
    SUViewController *_pendingChildViewController;
    SUWebScriptReloadContext *_pendingWebScriptReloadContext;
    ISURLRequestPerformance *_performanceMetrics;
    BOOL _shouldAdjustContentOffsets;
    BOOL _useWebViewFastPath;
    BOOL _isInBackground;
    SUStorePageProtocol *_lastValidProtocol;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    BOOL _loadingForSectionChange;
    BOOL _reloadOnAppear;
    SSMutableURLRequestProperties *_urlRequestProperties;
    NSInteger _activeSectionIndex;
}


@property (copy, nonatomic) SSURLRequestProperties *URLRequestProperties;
@property (readonly, nonatomic, getter=_isCacheExpired) BOOL _cacheExpired;
@property (nonatomic, getter=_reloadsWhenCacheExpired, setter=_setReloadsWhenCacheExpired:) BOOL _reloadsWhenCacheExpired; // ivar: _reloadsWhenCacheExpired
@property (readonly, nonatomic) SUViewController *activeChildViewController; // ivar: _activeChildViewController
@property (retain, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authContext
@property (readonly, nonatomic) BOOL canBeResolved;
@property (nonatomic) BOOL canMoveToOverlay; // ivar: _canMoveToOverlay
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUStorePageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPageViewLoad; // ivar: _didPageViewLoad
@property (readonly, nonatomic) CGRect documentBounds;
@property (nonatomic, getter=isExternalRequest) BOOL externalRequest; // ivar: _externalRequest
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loadsWhenHidden; // ivar: _loadsWhenHidden
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic) BOOL needsAuthentication; // ivar: _needsAuthentication
@property (copy, nonatomic) NSString *scriptUserInfo; // ivar: _scriptUserInfo
@property (readonly, nonatomic) SUSearchFieldController *searchFieldController; // ivar: _searchFieldController
@property (readonly, nonatomic) SUPageSectionGroup *sectionGroup; // ivar: _sectionsGroup
@property (readonly, nonatomic) SUSegmentedControl *sectionSegmentedControl; // ivar: _segmentedControl
@property (readonly) Class superclass;


-(BOOL)_isInTransientViewController;
-(BOOL)_reloadWithURLRequestProperties:(id)arg0 completionBlock:(id)arg1 ;
-(BOOL)_reloadWithURLRequestProperties:(id)arg0 preserveSectionControl:(BOOL)arg1 ;
-(BOOL)_sectionIsNetworkConstrained;
-(BOOL)_shouldDisplayControlsInNavigationBar;
-(BOOL)_shouldDisplaySegmentedControlInNavigationBar:(id)arg0 ;
-(BOOL)_shouldFetchAutomatically;
-(BOOL)_shouldReloadForAppearance;
-(BOOL)_shouldShowPlaceholderForEmptyPage;
-(BOOL)decidePolicyForWebNavigationAction:(id)arg0 request:(id)arg1 decisionListener:(id)arg2 ;
-(BOOL)isShowingPreviewOverlay;
-(BOOL)isSkLoaded;
-(BOOL)loadMoreWithURL:(id)arg0 ;
-(BOOL)pushStorePage:(id)arg0 withTarget:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(BOOL)reloadForSectionsWithGroup:(id)arg0 ;
-(BOOL)reloadWithURLRequestProperties:(id)arg0 ;
-(BOOL)shouldAdjustContentOffsets;
-(BOOL)shouldExcludeFromNavigationHistory;
-(BOOL)showPreviewOverlay:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(BOOL)viewIsReady;
-(CGFloat)_expirationTime;
-(CGFloat)defaultPNGExpirationTime;
-(id)URLRequest;
-(id)_activePageSection;
-(id)_newBarButtonItemsWithButtonItems:(id)arg0 replacingItemWithTag:(NSInteger)arg1 withButtonItem:(id)arg2 ;
-(id)_newSegmentedControlWithItems:(id)arg0 ;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(id)copyObjectForScriptFromPoolWithClass:(Class)arg0 ;
-(id)copyScriptProperties;
-(id)copyScriptViewController;
-(id)displayedURL;
-(id)init;
-(id)initWithTabBarItem:(id)arg0 ;
-(id)navigationItemForScriptInterface;
-(id)newFetchOperation;
-(id)newPlaceholderViewController;
-(id)newRotationController;
-(id)newViewControllerForPage:(id)arg0 ofType:(NSInteger)arg1 returningError:(*id)arg2 ;
-(id)setDisplayedSectionGroup:(id)arg0 ;
-(id)storePageProtocol;
-(id)urlBagKey;
-(struct CGRect )_frameForActiveViewController;
-(void)_applyPropertiesToViewController:(id)arg0 ;
-(void)_dismissNavigationMenuViewController;
-(void)_displaySegmentedControl:(id)arg0 ;
-(void)_documentBoundsChangeNotification:(id)arg0 ;
-(void)_fetchPage:(BOOL)arg0 ;
-(void)_finishHandlingFailure;
-(void)_finishSuccessfulLoad;
-(void)_finishWebViewLoadWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleFailureWithError:(id)arg0 ;
-(void)_handleViewControllerBecameReady:(id)arg0 ;
-(void)_moveChildViewController:(id)arg0 toOverlayForProtocol:(id)arg1 ;
-(void)_moveToRootSectionForChildViewController:(id)arg0 protocol:(id)arg1 ;
-(void)_navigationButtonAction:(id)arg0 ;
-(void)_navigationMenuButtonAction:(id)arg0 ;
-(void)_performActionForProtocolButton:(id)arg0 ;
-(void)_reloadBackgroundViewProperties;
-(void)_reloadForAppearance:(BOOL)arg0 ;
-(void)_reloadForNetworkTypeChange:(id)arg0 ;
-(void)_reloadNavigationBar;
-(void)_reloadNavigationButtons;
-(void)_reloadNavigationMenus;
-(void)_reloadPreviewOverlayVisibility;
-(void)_reloadSearchFieldWithSection:(id)arg0 ;
-(void)_reloadSectionButtons;
-(void)_reloadSectionsControlWithGroup:(id)arg0 ;
-(void)_renderStorePage:(id)arg0 withType:(NSInteger)arg1 viewController:(id)arg2 block:(id)arg3 ;
-(void)_repositionForChildViewController:(id)arg0 ;
-(void)_requestWebScriptReloadWithContext:(id)arg0 ;
-(void)_scriptEventNotification:(id)arg0 ;
-(void)_sectionControlAction:(id)arg0 ;
-(void)_sendFailureAfterDialogsFinished:(id)arg0 ;
-(void)_setHeaderView:(id)arg0 ;
-(void)_setLeftNavigationItem:(id)arg0 forTag:(NSInteger)arg1 ;
-(void)_setPendingChildViewController:(id)arg0 ;
-(void)_setRightNavigationItem:(id)arg0 forTag:(NSInteger)arg1 ;
-(void)_setSegmentedControl:(id)arg0 ;
-(void)_setUseWebViewFastPath:(BOOL)arg0 ;
-(void)_showPlaceholderViewControllerWithTearDown:(BOOL)arg0 ;
-(void)_tabConfigurationChanged:(id)arg0 ;
-(void)_tearDownNavigationMenu;
-(void)_verifyStorePageProtocol:(id)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)enqueueFetchOperation;
-(void)enqueueFetchOperationForPageSection:(id)arg0 ;
-(void)forceLoadingForNeverAppearedPage;
-(void)handleApplicationURL:(id)arg0 withSourceApplication:(id)arg1 sourceURL:(id)arg2 ;
-(void)handleFailureWithError:(id)arg0 ;
-(void)handleStoreFailureWithError:(id)arg0 ;
-(void)hidePreviewOverlay:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)iTunesStoreUI_searchFieldControllerDidChange:(id)arg0 ;
-(void)invalidate;
-(void)invalidateForMemoryPurge;
-(void)loadView;
-(void)menuViewController:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)menuViewController:(id)arg0 didTapButton:(id)arg1 ;
-(void)menuViewControllerDidCancel:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)reload;
-(void)reloadWithStorePage:(id)arg0 ofType:(NSInteger)arg1 forURL:(id)arg2 ;
-(void)requestWebScriptReloadWithContext:(id)arg0 ;
-(void)resetNavigationItem:(id)arg0 ;
-(void)restoreArchivableContext:(id)arg0 ;
-(void)setClientContext:(id)arg0 ;
-(void)setParentViewController:(id)arg0 ;
-(void)setScriptProperties:(id)arg0 ;
-(void)setSection:(id)arg0 ;
-(void)setShouldAdjustContentOffsets:(BOOL)arg0 ;
-(void)setSkLoading:(BOOL)arg0 ;
-(void)setURLRequest:(id)arg0 ;
-(void)setUrlBagKey:(id)arg0 ;
-(void)showExternalURL:(id)arg0 ;
-(void)showPlaceholderViewController;
-(void)storePageProtocolDidChange;
-(void)tabBarControllerDidLongPressTabBarItem:(id)arg0 ;
-(void)tabBarControllerDidReselectTabBarItem:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif