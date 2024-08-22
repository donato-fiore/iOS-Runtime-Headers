// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCLIENTAPPLICATIONCONTROLLER_H
#define SUCLIENTAPPLICATIONCONTROLLER_H

@class SKUIURL, ISOperation, SKUIPassbookLoader, NSString, NSURL, UINavigationController;
@protocol SKUIPassbookLoaderDelegate, SUTabBarControllerDelegate;


#import "SUClientController.h"
#import "SUPlaceholderViewController.h"
#import "SUSectionsResponse.h"
#import "SUPreviewOverlayViewController.h"
#import "SUTabBarController.h"
#import "SUMediaPlayerViewController.h"

@interface SUClientApplicationController : SUClientController <SKUIPassbookLoaderDelegate, SUTabBarControllerDelegate>

 {
    SUPlaceholderViewController *_fetchSectionsPlaceholder;
    NSInteger _ignoreDownloadQueueChangeCount;
    SKUIURL *_launchURL;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    ISOperation *_loadSectionsOperation;
    id *_locationObserver;
    SKUIPassbookLoader *_passbookLoader;
    NSString *_preMediaDefaultPNG;
    SUPreviewOverlayViewController *_previewOverlay;
    BOOL _reloadForStorefrontChangeAfterAccountSetup;
    BOOL _reloadSectionsOnNextLaunch;
    SUTabBarController *_tabBarController;
}


@property (retain, nonatomic, getter=_activeMediaPlayer, setter=_setActiveMediaPlayer:) SUMediaPlayerViewController *_activeMediaPlayer; // ivar: _activeMediaPlayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultPNGNameForSuspend;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *exitStoreButtonTitle; // ivar: _exitStoreButtonTitle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIgnoringDownloadQueueChanges) BOOL ignoringDownloadQueueChanges;
@property (readonly, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic, getter=wasLaunchedFromLibrary) BOOL launchedFromLibrary;
@property (nonatomic) BOOL shouldPrepareUserInterfaceWhenActivated; // ivar: _shouldPrepareUserInterfaceWhenActivated
@property (readonly) Class superclass;
@property (readonly, nonatomic) SUTabBarController *tabBarController;
@property (readonly, nonatomic, getter=isTabBarControllerLoaded) BOOL tabBarControllerLoaded;
@property (readonly, nonatomic) UINavigationController *topNavigationController;


+(id)sharedController;
+(void)setSharedController:(id)arg0 ;
-(BOOL)_displayClientURL:(id)arg0 ;
-(BOOL)_loadSectionsAllowingCache:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(BOOL)_reloadForStorefrontChange;
-(BOOL)_showWildcatAccountViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)dismissTopViewControllerAnimated:(BOOL)arg0 ;
-(BOOL)displayClientURL:(id)arg0 withSourceApplication:(id)arg1 sourceURLString:(id)arg2 ;
-(BOOL)openClientURL:(id)arg0 withSourceApplication:(id)arg1 sourceURLString:(id)arg2 ;
-(BOOL)presentAccountViewController:(id)arg0 showNavigationBar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)presentOverlayBackgroundViewController:(id)arg0 ;
-(BOOL)reloadSectionWithIdentifier:(id)arg0 url:(id)arg1 ;
-(BOOL)selectSectionWithIdentifier:(id)arg0 ;
-(BOOL)tabBarController:(id)arg0 shouldShowSection:(id)arg1 ;
-(CGFloat)defaultImageSnapshotExpiration;
-(id)_accountViewController;
-(id)_newTabBarController;
-(id)_previewOverlayViewController;
-(id)_resumableViewController;
-(id)_showPageForExternalOriginatedURLBagKey:(id)arg0 ;
-(id)copySuspendSettings;
-(id)initWithClientInterface:(id)arg0 ;
-(id)overlayBackgroundViewController;
-(id)presentationViewControllerForPassbookLoader:(id)arg0 ;
-(id)previewOverlayForClientInterface:(id)arg0 ;
-(id)showMainPageForItemKind:(id)arg0 sectionIdentifiers:(id)arg1 ;
-(id)tabBarControllerForClientInterface:(id)arg0 ;
-(void)_accountControllerDisappearedNotification:(id)arg0 ;
-(void)_cancelLoadSectionsOperation;
-(void)_cancelSectionFetchPlaceholder;
-(void)_cancelSuspendAfterDialogsDismissed;
-(void)_defaultHandleApplicationURLRequestProperties:(id)arg0 ;
-(void)_dialogDidFinishNotification:(id)arg0 ;
-(void)_handleAccountURL:(id)arg0 ;
-(void)_handleAddPassbookPassURL:(id)arg0 ;
-(void)_handleDonationURL:(id)arg0 ;
-(void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg0 ;
-(void)_handleFinishedLoadSectionsOperation:(id)arg0 ;
-(void)_handleSearchURL:(id)arg0 withSourceApplication:(id)arg1 sourceURL:(id)arg2 ;
-(void)_handleSectionsLoadFailedWithError:(id)arg0 ;
-(void)_openClientURL:(id)arg0 ;
-(void)_presentSectionFetchUI;
-(void)_reloadForNetworkTypeChange:(id)arg0 ;
-(void)_reloadWithSectionsResponse:(id)arg0 ;
-(void)_restorePreMediaPlayerSettings;
-(void)_restrictionsChangedNotification:(id)arg0 ;
-(void)_retrySectionsAfterNetworkTransition;
-(void)_selectFooterSectionNotification:(id)arg0 ;
-(void)_setupTabBarController;
-(void)_showPreviewOverlayAnimated:(BOOL)arg0 ;
-(void)_storeFrontChangedNotification:(id)arg0 ;
-(void)bagDidLoadNotification:(id)arg0 ;
-(void)becomeActive;
-(void)beginIgnoringDownloadQueueChanges;
-(void)cancelAllOperations;
-(void)clientInterface:(id)arg0 hidePreviewOverlayAnimated:(BOOL)arg1 ;
-(void)clientInterface:(id)arg0 showPreviewOverlayAnimated:(BOOL)arg1 ;
-(void)dealloc;
-(void)dismissOverlayBackgroundViewController;
-(void)endIgnoringDownloadQueueChanges;
-(void)exitStoreAfterDialogsDismiss;
-(void)passbookLoaderDidFinish:(id)arg0 ;
-(void)prepareUserInterface;
-(void)presentExternalURLViewController:(id)arg0 ;
-(void)resignActive;
-(void)returnToLibrary;
-(void)returnToLibraryForClientInterface:(id)arg0 ;
-(void)setupUI;
-(void)tearDownUI;


@end


#endif