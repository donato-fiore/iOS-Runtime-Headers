// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIAPPLICATIONCONTROLLER_H
#define SKUIAPPLICATIONCONTROLLER_H

@class NSURL, UIViewController, NSDictionary, NSMutableArray, NSOperationQueue, IKAppContext, NSArray, NSString, UITabBarController;
@protocol SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationControllerDelegate, SKUINavigationDocumentDelegate, SKUITabBarControllerDelegate, SKUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate, IKAppContextDelegate, IKApplication, IKAppDataStoring, SKUIStatusOverlayProvider, SKUIApplicationDelegate;

#import <Foundation/Foundation.h>

#import "SKUIURL.h"
#import "SKUIAppDeviceConfig.h"
#import "SKUIMetricsController.h"
#import "SKUISimpleContainerViewController.h"
#import "_SKUIApplicationShutdownHelper.h"
#import "SKUINavigationDocumentController.h"
#import "SKUIURLResolver.h"
#import "SKUIPreviewDocumentController.h"
#import "SKUIClientContext.h"
#import "SKUIModalDocumentController.h"
#import "SKUIApplicationControllerOptions.h"
#import "SKUIScrollingTabBarController.h"

@interface SKUIApplicationController : NSObject <SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, SKUINavigationControllerDelegate, SKUINavigationDocumentDelegate, SKUITabBarControllerDelegate, SKUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate, IKAppContextDelegate, IKApplication>

 {
    SKUIURL *_activationURL;
    NSURL *_applicationScriptURL;
    Class _clientContextClass;
    SKUIAppDeviceConfig *_deviceConfig;
    BOOL _didDisplayFirstPage;
    UIViewController *_floatingStatusOverlayViewController;
    BOOL _ignoreDidBecomeActive;
    NSInteger _lastNavigationControllerOperation;
    UIViewController *_lastPoppedViewController;
    NSUInteger _indexOfLastTabNeedingContent;
    NSDictionary *_launchOptions;
    SKUIURL *_legacyLaunchURL;
    id<IKAppDataStoring> *_localStorage;
    SKUIMetricsController *_metricsController;
    SKUISimpleContainerViewController *_navigationContainerViewController;
    NSMutableArray *_navigationDocumentControllers;
    NSOperationQueue *_operationQueue;
    BOOL _reloadApplicationOnForegroundNotification;
    NSUInteger _resignActiveTaskID;
    IKAppContext *_scriptContext;
    NSInteger _scriptLoadState;
    id<SKUIStatusOverlayProvider> *_statusOverlayProvider;
    _SKUIApplicationShutdownHelper *_shutdownHelper;
    BOOL _stopApplicationOnBackgroundNotification;
    SKUINavigationDocumentController *_transientNavigationDocument;
    SKUIURLResolver *_urlResolver;
    id<IKAppDataStoring> *_vendorStorage;
    NSMutableArray *_whenLoadedBlocks;
}


@property (readonly, nonatomic) NSInteger _applicationMode;
@property (nonatomic, setter=_setHidesTabBar:) BOOL _hidesTabBar; // ivar: _hidesTabBar
@property (readonly, nonatomic) NSArray *_navigationControllers;
@property (readonly, nonatomic) SKUIPreviewDocumentController *_previewOverlayDocumentController; // ivar: _previewDocumentController
@property (nonatomic, setter=_setSelectedTabBarIndex:) NSInteger _selectedTabBarIndex;
@property (readonly, nonatomic) SKUINavigationDocumentController *_transientNavigationController;
@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIApplicationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL mescalPrimeEnabledForXHRRequests; // ivar: _mescalPrimeEnabledForXHRRequests
@property (readonly, nonatomic) SKUIModalDocumentController *modalDocumentController; // ivar: _modalDocumentController
@property (readonly, nonatomic) SKUIApplicationControllerOptions *options; // ivar: _options
@property (readonly, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly, nonatomic) SKUIScrollingTabBarController *scrollingTabBarController; // ivar: _scrollingTabBarController
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITabBarController *tabBarController; // ivar: _tabBarController
@property (copy, nonatomic) NSArray *tabBarItems; // ivar: _tabBarItems


+(id)_referrerAppForSourceApplication:(id)arg0 launchURL:(*id)arg1 ;
+(id)applicationOptionsWithLaunchOptions:(id)arg0 ;
+(id)configurationPreloader;
+(void)finishedWithConfigurationPreloader;
+(void)prepareForLaunch;
-(BOOL)URLResolver:(id)arg0 shouldPerformDefaultActionForURL:(id)arg1 ;
-(BOOL)_isDisplayingAccountViewController;
-(BOOL)_isStoreFront:(id)arg0 equalToStoreFront:(id)arg1 ;
-(BOOL)_needsStatusOverlay;
-(BOOL)_playPreviewForPreviewTemplate:(id)arg0 ;
-(BOOL)_sendNativeBackButtonMetricEvents;
-(BOOL)_shouldUseLegacyURLHandlingForExternalURL:(id)arg0 ;
-(BOOL)_usesFloatingStatusOverlayForWidth:(CGFloat)arg0 ;
-(BOOL)appIsTrusted;
-(BOOL)appJSURLTrusted;
-(BOOL)shouldIgnoreJSValidation;
-(BOOL)tabBarController:(id)arg0 shouldFallbackToRootForController:(id)arg1 ;
-(BOOL)tabBarController:(id)arg0 shouldSelectViewController:(id)arg1 ;
-(Class)_JSITunesStoreClass;
-(NSInteger)modalDocumentController:(id)arg0 barStyleForStackItem:(id)arg1 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(NSUInteger)tabBarControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)_activeNavigationController;
-(id)_documentControllerForNavigationController:(id)arg0 ;
-(id)_existingTabBarController;
-(id)_launchOptionsWithURL:(id)arg0 ;
-(id)_navigationContainerViewController;
-(id)_newNavigationControllerWithTabBarItem:(id)arg0 ;
-(id)_operationQueue;
-(id)_overlayNavigationControllerForViewController:(id)arg0 ;
-(id)_rootDocuments;
-(id)_statusOverlayProviderForViewController:(id)arg0 ;
-(id)_transientNavigationDocument;
-(id)activeDocument;
-(id)appIdentifier;
-(id)appJSURL;
-(id)appLaunchParams;
-(id)deviceConfigForContext:(id)arg0 ;
-(id)init;
-(id)initWithClientContextClass:(Class)arg0 ;
-(id)initWithClientContextClass:(Class)arg0 options:(id)arg1 ;
-(id)initWithClientContextClass:(Class)arg0 tabBarControllerStyle:(NSInteger)arg1 ;
-(id)jsNavigationDocumentForNavigationController:(id)arg0 inContext:(id)arg1 ;
-(id)jsNavigationDocumentForNavigationDocumentController:(id)arg0 inContext:(id)arg1 ;
-(id)localStorage;
-(id)navigationControllerForContext:(id)arg0 ;
-(id)presentationViewControllerForAppContext:(id)arg0 ;
-(id)presentationViewControllerForURLResolver:(id)arg0 ;
-(id)selectTabWithIdentifier:(id)arg0 ;
-(id)vendorIdentifier;
-(id)vendorStorage;
-(struct CGSize )sizeForNavigationDocument:(id)arg0 ;
-(void)URLResolver:(id)arg0 didFinishWithResult:(BOOL)arg1 ;
-(void)URLResolver:(id)arg0 showTransientViewController:(id)arg1 ;
-(void)URLResolver:(id)arg0 showURL:(id)arg1 withTabIdentifier:(id)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_assetsDidUpdate:(id)arg0 ;
-(void)_dispatchTabBarOnNeedsContentForTabAtIndex:(NSUInteger)arg0 ;
-(void)_dispatchTabBarOnSelect;
-(void)_ensureStackConsistencyForNavigationController:(id)arg0 ;
-(void)_failReloadWithError:(id)arg0 ;
-(void)_failWithError:(id)arg0 ;
-(void)_finishWillResignActiveWithDialogState:(BOOL)arg0 ;
-(void)_fireBlocksAfterLoad;
-(void)_handleScriptUnavailable;
-(void)_invalidateApplication;
-(void)_jsLaunchFinishedWithLaunchMetrics:(id)arg0 ;
-(void)_legacyResolveExternalURL:(id)arg0 ;
-(void)_loadApplicationFromUpdatableAssetsCache:(id)arg0 ;
-(void)_loadApplicationScript;
-(void)_pageDidDisplayNotification:(id)arg0 ;
-(void)_previewDocumentIsActiveChangeNotification:(id)arg0 ;
-(void)_recordTabBarMetricsEventToSelectViewController:(id)arg0 ;
-(void)_reloadAfterNetworkChange:(id)arg0 ;
-(void)_reloadApplication;
-(void)_reloadRootViewControllers;
-(void)_reloadTabBarWithClientContext:(id)arg0 ;
-(void)_removeObserversForReloadNotifications;
-(void)_removeStatusOverlayFromAllNavigationControllers;
-(void)_resetDocumentControllers;
-(void)_resetUserInteraceForAccountViewDisappear:(id)arg0 ;
-(void)_resetUserInterfaceAfterStoreFrontChange;
-(void)_retryAfterFailure;
-(void)_sendClientContextDidChange;
-(void)_sendDidDisplayFirstPageIfNecessary;
-(void)_setManifestURLOnUpdatableAssetController:(id)arg0 completion:(id)arg1 ;
-(void)_showFloatingStatusOverlayAnimated:(BOOL)arg0 ;
-(void)_showStatusOverlayForNavigationController:(id)arg0 viewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_startScriptContextWithURL:(id)arg0 ;
-(void)_stopApplication;
-(void)_stopScriptContextForReload;
-(void)_storeFrontChangeNotification:(id)arg0 ;
-(void)_tintTabBarWithViewController:(id)arg0 ;
-(void)_updateOverlayNavigationController:(id)arg0 ;
-(void)appContext:(id)arg0 didCompletePurchase:(id)arg1 ;
-(void)appContext:(id)arg0 didCompleteSoftwarePurchase:(id)arg1 ;
-(void)appContext:(id)arg0 didExitWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 didFailWithError:(id)arg1 ;
-(void)appContext:(id)arg0 didStartWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 didStopWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 evaluateAppJavaScriptInContext:(id)arg1 ;
-(void)appContext:(id)arg0 needsReloadWithUrgency:(NSUInteger)arg1 ;
-(void)appContext:(id)arg0 needsReloadWithUrgency:(NSUInteger)arg1 options:(id)arg2 ;
-(void)appContext:(id)arg0 setPreviewOverlayDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)appContextNeedsRestart:(id)arg0 ;
-(void)application:(id)arg0 didReceiveURL:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)dealloc;
-(void)evaluateBlockWhenLoaded:(id)arg0 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)hideStatusOverlayForProvider:(id)arg0 animated:(BOOL)arg1 ;
-(void)loadApplication;
-(void)loadApplicationWithOptions:(id)arg0 ;
-(void)modalDocumentControllerDidFinish:(id)arg0 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationDocumentController:(id)arg0 requestsAccessToAppContextUsingBlock:(id)arg1 ;
-(void)navigationDocumentStackDidChange:(id)arg0 ;
-(void)recordMetricsEvent:(id)arg0 flushImmediately:(BOOL)arg1 ;
-(void)resumeApplicationWithOptions:(id)arg0 ;
-(void)setUserInterfaceOverrideOnTabBarController:(id)arg0 forViewController:(id)arg1 ;
-(void)showErrorViewForLaunchFailure;
-(void)showErrorViewWithTitle:(id)arg0 message:(id)arg1 ;
-(void)showErrorViewWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 buttonAction:(id)arg3 ;
-(void)showExternalURL:(id)arg0 ;
-(void)showStatusOverlayUsingProvider:(id)arg0 animated:(BOOL)arg1 ;
-(void)showTransientViewController:(id)arg0 ;
-(void)suspendApplicationWithOptions:(id)arg0 ;
-(void)tabBarController:(id)arg0 didEndCustomizingViewControllers:(id)arg1 changed:(BOOL)arg2 ;
-(void)tabBarController:(id)arg0 didReselectViewController:(id)arg1 ;
-(void)tabBarController:(id)arg0 didSelectViewController:(id)arg1 ;
-(void)tabBarController:(id)arg0 willDisplayViewController:(id)arg1 ;
-(void)tabBarController:(id)arg0 willTransitionToSize:(struct CGSize )arg1 withTransitionCoordinator:(id)arg2 ;
-(void)updateTabBarWithItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateTabBarWithItems:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif