// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTINTERFACE_H
#define SUSCRIPTINTERFACE_H

@class SSAuthenticationContext, NSMutableDictionary, WebFrame, NSMutableSet, NSArray, NSString, NSNumber, SFSafariViewController;
@protocol SUScriptModalDialogDelegate, SUScriptXMLHTTPRequestDelegate, SUScriptXMLHTTPStoreRequestDelegate, SFSafariViewControllerDelegate, SUScriptInterfaceDelegate, OS_dispatch_queue;


#import "SUScriptObject.h"
#import "SUScriptAccountManager.h"
#import "SUScriptKeyValueStore.h"
#import "SUScriptCarrierBundlingController.h"
#import "SUClientInterface.h"
#import "SUScriptMediaLibrary.h"
#import "SUScriptMetricsController.h"
#import "SUScriptNotificationObserver.h"
#import "SUScriptPreviewOverlay.h"
#import "SUScriptPurchaseManager.h"
#import "SUScriptOperationDelegate.h"
#import "SUScriptStoreBagLoader.h"
#import "SUScriptWindowContext.h"
#import "SUScriptSubscriptionStatusCoordinator.h"
#import "SUScriptNavigationSimulator.h"
#import "SUScriptFairPlayContext.h"
#import "SUScriptAppleAccountStore.h"
#import "SUScriptApplication.h"
#import "SUScriptDevice.h"
#import "SUScriptNavigationBar.h"
#import "SUScriptPassbookLibrary.h"
#import "SUScriptAccount.h"
#import "SUScriptProtocol.h"
#import "SUScriptDictionary.h"
#import "SUScriptSectionsController.h"
#import "SUScriptTelephony.h"
#import "SUScriptViewController.h"
#import "SUScriptWindow.h"

@interface SUScriptInterface : SUScriptObject <SUScriptModalDialogDelegate, SUScriptXMLHTTPRequestDelegate, SUScriptXMLHTTPStoreRequestDelegate, SFSafariViewControllerDelegate>

 {
    SUScriptAccountManager *_accountManager;
    SUScriptKeyValueStore *_applicationLocalStorage;
    SSAuthenticationContext *_authenticationContext;
    SUScriptCarrierBundlingController *_carrierBundlingController;
    SUClientInterface *_clientInterface;
    id<SUScriptInterfaceDelegate> *_delegate;
    SUScriptKeyValueStore *_deviceLocalStorage;
    NSMutableDictionary *_downloadQueues;
    WebFrame *_frame;
    SUScriptMediaLibrary *_mediaLibrary;
    SUScriptMetricsController *_metricsController;
    SUScriptNotificationObserver *_notificationObserver;
    SUScriptPreviewOverlay *_previewOverlay;
    SUScriptPurchaseManager *_purchaseManager;
    NSMutableSet *_requireCellularURLs;
    SUScriptOperationDelegate *_scriptOperationDelegate;
    SUScriptStoreBagLoader *_scriptStoreBagLoader;
    SUScriptWindowContext *_scriptWindowContext;
    SUScriptSubscriptionStatusCoordinator *_subscriptionStatusCoordinator;
    id *_threadSafeDelegate;
    NSObject<OS_dispatch_queue> *_hsaTokenQueue;
    *__CFString _hsaCurrentIdentifier;
    SUScriptNavigationSimulator *_navigationSimulator;
}


@property (readonly) SUScriptFairPlayContext *accountCreationSecureContext;
@property (readonly) NSArray *accounts;
@property (readonly) NSString *actionTypeDismissSheet;
@property (readonly) NSString *actionTypeDismissWindows;
@property (readonly) NSString *actionTypeReturnToLibrary;
@property (readonly) SUScriptAppleAccountStore *appleAccountStore;
@property (readonly, getter=isApplePayAvailable) id *applePayAvailable;
@property (readonly) SUScriptApplication *application;
@property (readonly) id *applicationAccessibilityEnabled;
@property (readonly) SUScriptKeyValueStore *applicationLocalStorage;
@property (readonly) NSString *askToBuyPrompt;
@property (copy) SSAuthenticationContext *authenticationContext;
@property (readonly) SUScriptCarrierBundlingController *carrierBundlingController;
@property (readonly) NSString *clientIdentifier;
@property (retain) SUClientInterface *clientInterface;
@property (copy) NSString *cookie;
@property (readonly) NSString *cookieDefaultURL;
@property (readonly) NSString *cookieForDefaultURL;
@property (readonly) id *creditCardReaderAvailable;
@property (readonly, copy) NSString *debugDescription;
@property NSObject<SUScriptInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) SUScriptDevice *device;
@property (readonly) SUScriptKeyValueStore *deviceLocalStorage;
@property (readonly) NSArray *deviceOffers;
@property (readonly) NSString *deviceSerialNumber;
@property (readonly, getter=isFinanceInterruption) id *financeInterruption;
@property (readonly) id *globalRootObject;
@property (readonly) NSString *gsToken;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *installedSoftwareApplications;
@property (readonly) id *loggingEnabled;
@property (readonly) SUScriptMediaLibrary *mediaLibrary;
@property (readonly) SUScriptMetricsController *metricsController;
@property (readonly) SUScriptNavigationBar *navigationBar;
@property (readonly) SUScriptNavigationSimulator *navigationSimulator;
@property (readonly) NSNumber *orientation;
@property (readonly) SUScriptPassbookLibrary *passbookLibrary;
@property (readonly) SUScriptPreviewOverlay *previewOverlay;
@property (retain) SUScriptAccount *primaryAccount;
@property (retain) SUScriptAccount *primaryLockerAccount;
@property (readonly) SUScriptProtocol *protocol;
@property (readonly) SUScriptPurchaseManager *purchaseManager;
@property (readonly) NSString *referrerURL;
@property (readonly) NSString *referringUserAgent;
@property (copy) NSNumber *safariDismissButtonStyle; // ivar: _safariDismissButtonStyle
@property (retain, nonatomic) SFSafariViewController *safariViewController; // ivar: _safariViewController
@property (retain, nonatomic) NSString *safariViewControllerIdentifier; // ivar: _safariViewControllerIdentifier
@property (readonly) NSString *safariViewControllerIdentifierQueryParameterName;
@property (readonly) id *screenReaderRunning;
@property (readonly) SUScriptDictionary *scriptStoreBagDictionary;
@property (retain) SUScriptWindowContext *scriptWindowContext;
@property (readonly) SUScriptSectionsController *sectionsController;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) NSInteger storeSheetType;
@property (readonly) NSInteger storeSheetTypeAskToBuy;
@property (readonly) NSInteger storeSheetTypeDefault;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SUScriptTelephony *telephony;
@property (readonly) NSObject<SUScriptInterfaceDelegate> *threadSafeDelegate;
@property (readonly) SUScriptDictionary *tidHeaders;
@property (readonly) NSString *tidState;
@property (readonly) NSString *userAgent;
@property (readonly) SUScriptViewController *viewController;
@property (readonly, getter=isWalletAvailable) id *walletAvailable;
@property (retain) WebFrame *webFrame;
@property (readonly) SUScriptWindow *window;


+(NSInteger)purchaseAnimationStyleFromString:(id)arg0 ;
+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)arePodcastsDisabled;
-(BOOL)canSendEmail;
-(BOOL)checkCapabilitiesPropertyListString:(id)arg0 showFailureDialog:(BOOL)arg1 ;
-(BOOL)haveAccount;
-(BOOL)isExplicitContentDisabled;
-(BOOL)isRunningTest;
-(BOOL)launchedToTest;
-(BOOL)scriptXMLHTTPRequest:(id)arg0 requiresCellularForURL:(id)arg1 ;
-(BOOL)scriptXMLHTTPStoreRequest:(id)arg0 requiresCellularForURL:(id)arg1 ;
-(BOOL)shouldRestrictContentOfSystem:(id)arg0 level:(id)arg1 ;
-(BOOL)shouldShowAddToWalletLink:(id)arg0 ;
-(BOOL)showConfirmWithMessage:(id)arg0 title:(id)arg1 okButtonTitle:(id)arg2 cancelButtonTitle:(id)arg3 ;
-(NSInteger)dialogDisplayCountForKey:(id)arg0 ;
-(id)DOMElementWithElement:(id)arg0 ;
-(id)_className;
-(id)_cookieForURL:(id)arg0 ;
-(id)_copyDialogWithMessage:(id)arg0 title:(id)arg1 cancelButtonTitle:(id)arg2 okButtonTitle:(id)arg3 ;
-(id)accountDSID;
-(id)accountForDSID:(id)arg0 ;
-(id)accountName;
-(id)activeAudioPlayers;
-(id)activeNetworkType;
-(id)attributeKeys;
-(id)currentAccount;
-(id)currentAttestationVersion;
-(id)diskSpaceAvailable;
-(id)getAudioPlayerForURL:(id)arg0 keyURL:(id)arg1 certificateURL:(id)arg2 ;
-(id)getDownloadQueueWithQueueType:(id)arg0 ;
-(id)getiTunesPass;
-(id)hardwareType;
-(id)init;
-(id)machineGUID;
-(id)makeAMSViewController;
-(id)makeAccount;
-(id)makeAccountPageWithURLs:(id)arg0 ;
-(id)makeActivity;
-(id)makeActivityItemProviderWithMIMEType:(id)arg0 ;
-(id)makeActivityViewControllerWithProviders:(id)arg0 activities:(id)arg1 ;
-(id)makeButtonWithSystemItemString:(id)arg0 action:(id)arg1 ;
-(id)makeButtonWithTitle:(id)arg0 action:(id)arg1 ;
-(id)makeCalloutView;
-(id)makeCanvasWithWidth:(id)arg0 height:(id)arg1 ;
-(id)makeColorWithHue:(id)arg0 saturation:(id)arg1 brightness:(id)arg2 alpha:(id)arg3 ;
-(id)makeColorWithRed:(id)arg0 green:(id)arg1 blue:(id)arg2 alpha:(id)arg3 ;
-(id)makeColorWithWhite:(id)arg0 alpha:(id)arg1 ;
-(id)makeComposeReviewViewControllerWithReview:(id)arg0 ;
-(id)makeDateFormatter;
-(id)makeDialog;
-(id)makeDocumentInteractionController;
-(id)makeDonationViewControllerWithCharityIdentifier:(id)arg0 ;
-(id)makeFacebookRequestWithURL:(id)arg0 requestMethod:(id)arg1 ;
-(id)makeFacebookSessionWithAccount:(id)arg0 ;
-(id)makeFamilySetupViewController;
-(id)makeGiftViewController;
-(id)makeLinearGradientWithX0:(CGFloat)arg0 y0:(CGFloat)arg1 x1:(CGFloat)arg2 y1:(CGFloat)arg3 ;
-(id)makeLookupRequest;
-(id)makeMediaPlayerItemWithProperties:(id)arg0 ;
-(id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg0 ;
-(id)makeMenuViewController;
-(id)makeNavigationControllerWithRootViewController:(id)arg0 ;
-(id)makeNumberFormatterWithStyle:(id)arg0 ;
-(id)makePopOverWithViewController:(id)arg0 ;
-(id)makeRadialGradientWithX0:(CGFloat)arg0 y0:(CGFloat)arg1 r0:(CGFloat)arg2 x1:(CGFloat)arg3 y1:(CGFloat)arg4 r1:(CGFloat)arg5 ;
-(id)makeRedeemCameraViewController;
-(id)makeRedeemViewController;
-(id)makeReportAProblemViewControllerWithAdamID:(id)arg0 ;
-(id)makeReviewWithAdamID:(id)arg0 ;
-(id)makeScriptActionWithType:(id)arg0 ;
-(id)makeSegmentedControl;
-(id)makeSplitViewController;
-(id)makeStorePageWithURLs:(id)arg0 ;
-(id)makeStoreSheetViewController;
-(id)makeSubscriptionStatusRequest;
-(id)makeTextFieldWithStyle:(id)arg0 placeholder:(id)arg1 value:(id)arg2 width:(id)arg3 ;
-(id)makeURLRequestWithURLs:(id)arg0 timeoutInterval:(id)arg1 ;
-(id)makeVolumeViewController;
-(id)makeWindow;
-(id)makeXMLHTTPRequest;
-(id)makeXMLHTTPStoreRequest;
-(id)minimumAttestationVersionForAction:(NSUInteger)arg0 ;
-(id)parentViewController;
-(id)presentPrivacySplashWithIdentifier:(id)arg0 ;
-(id)presentPrivacyViewControllerWithIdentifier:(id)arg0 ;
-(id)presentingViewControllerForScriptModalDialog:(id)arg0 ;
-(id)primaryiCloudAccount;
-(id)redeemCameraAvailable;
-(id)requestInfo;
-(id)scriptAttributeKeys;
-(id)shouldDisplayPrivacyLinkWithIdentifier:(id)arg0 ;
-(id)showPromptWithMessage:(id)arg0 initialValue:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(id)softwareApplicationWithAdamID:(id)arg0 ;
-(id)softwareApplicationWithBundleID:(id)arg0 ;
-(id)subscriptionStatusCoordinator;
-(id)systemItemAction;
-(id)systemItemAdd;
-(id)systemItemBookmarks;
-(id)systemItemCamera;
-(id)systemItemCancel;
-(id)systemItemCompose;
-(id)systemItemDone;
-(id)systemItemEdit;
-(id)systemItemFastForward;
-(id)systemItemFixedSpace;
-(id)systemItemFlexibleSpace;
-(id)systemItemOrganize;
-(id)systemItemPageCurl;
-(id)systemItemPause;
-(id)systemItemPlay;
-(id)systemItemRedo;
-(id)systemItemRefresh;
-(id)systemItemReplay;
-(id)systemItemRewind;
-(id)systemItemSearch;
-(id)systemItemStop;
-(id)systemItemTrash;
-(id)systemItemUndo;
-(id)systemVersion;
-(struct OpaqueJSContext *)copyJavaScriptContext;
-(void)_accessibilityPostLayoutChange;
-(void)_cleanUpSafariViewController;
-(void)_dismissSafariViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_finishCreditCardReaderWithOutput:(id)arg0 callback:(id)arg1 ;
-(void)_getSoftwareApplicationWithCompletionFunction:(id)arg0 lookupBlock:(id)arg1 ;
-(void)_globalEventNotification:(id)arg0 ;
-(void)_presentSafariViewControllerWithURL:(id)arg0 safariIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)_scriptUserInfoDidChangeNotification:(id)arg0 ;
-(void)accessibilityPostLayoutChange;
-(void)accessibilityPostScreenChange;
-(void)acknowledgePrivacyLinkWithIdentifier:(id)arg0 ;
-(void)addExternalDownloads:(id)arg0 ;
-(void)addExternalDownloads:(id)arg0 options:(id)arg1 ;
-(void)addExternalDownloadsFromManifestURL:(id)arg0 ;
-(void)addPurchaseWithInfo:(id)arg0 ;
-(void)addPurchaseWithInfo:(id)arg0 options:(id)arg1 ;
-(void)addiTunesPassWithCompletionFunction:(id)arg0 ;
-(void)approveInPerson:(id)arg0 completionFunction:(id)arg1 ;
-(void)authenticateAppleIdWithUsername:(id)arg0 password:(id)arg1 callback:(id)arg2 ;
-(void)authenticateForAccount:(id)arg0 withOptions:(id)arg1 ;
-(void)authorizeApplePayEnrollmentWithParameters:(id)arg0 callback:(id)arg1 ;
-(void)composeEmailWithSubject:(id)arg0 body:(id)arg1 ;
-(void)composeReviewWithURL:(id)arg0 itemIdentifier:(id)arg1 type:(id)arg2 ;
-(void)dealloc;
-(void)deallocAuthentication;
-(void)deallocCarrierBundlingController;
-(void)deallocMediaLibrary;
-(void)deallocMetricsController;
-(void)deallocSubscriptionStatusCoordinator;
-(void)dismissSafariViewControllerAnimated:(BOOL)arg0 ;
-(void)dismissSheet;
-(void)dismissWindowsWithOptions:(id)arg0 ;
-(void)dispatchGlobalEventWithName:(id)arg0 payload:(id)arg1 ;
-(void)dispatchXEvent:(id)arg0 ;
-(void)fetchAppleCardMetadata:(id)arg0 callback:(id)arg1 ;
-(void)fetchWalletCardData:(id)arg0 ;
-(void)fetchWalletCardMetadata:(id)arg0 callback:(id)arg1 ;
-(void)financeInterruptionResolved:(id)arg0 ;
-(void)finishedTest:(id)arg0 extraResults:(id)arg1 ;
-(void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)arg0 ;
-(void)getSoftwareApplicationWithAdamID:(id)arg0 completionFunction:(id)arg1 ;
-(void)getSoftwareApplicationWithBundleID:(id)arg0 completionFunction:(id)arg1 ;
-(void)goBack;
-(void)gotoStoreURL:(id)arg0 ;
-(void)gotoStoreURL:(id)arg0 ofType:(id)arg1 withAuthentication:(BOOL)arg2 forceAuthentication:(BOOL)arg3 ;
-(void)handleDialogPropertyListString:(id)arg0 ;
-(void)handleProtocolPropertyListString:(id)arg0 ;
-(void)handleRootObjectWithPropertyListString:(id)arg0 ;
-(void)handleTrackListWithPropertyListString:(id)arg0 ;
-(void)initAuthentication;
-(void)log:(id)arg0 ;
-(void)openCreditCardReaderWithCompletionFunction:(id)arg0 ;
-(void)openFamilyCircleSetupWithClientName:(id)arg0 completionFunction:(id)arg1 ;
-(void)openURL:(id)arg0 ;
-(void)openWallet;
-(void)paymentSetupFeatureSupported:(id)arg0 callback:(id)arg1 ;
-(void)perfLog:(id)arg0 ;
-(void)performPurchaseAnimationForIdentifier:(id)arg0 style:(id)arg1 ;
-(void)pingURL:(id)arg0 ;
-(void)redeemCode:(id)arg0 ;
-(void)redeemCodes:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)redeemCodesReloadDownloadManager;
-(void)registerNavBarButtonWithTitle:(id)arg0 side:(id)arg1 function:(id)arg2 ;
-(void)reloadFooterSection:(id)arg0 withURL:(id)arg1 ;
-(void)removeDeviceOfferWithIdentifier:(id)arg0 account:(id)arg1 ;
-(void)reportAProblemForIdentifier:(id)arg0 ;
-(void)requireCellularForResourceWithURL:(id)arg0 ;
-(void)retryAllRestoreDownloads;
-(void)safariViewController:(id)arg0 didCompleteInitialLoad:(BOOL)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg0 ;
-(void)selectSectionWithIdentifier:(id)arg0 ;
-(void)selectTrackListItemWithIdentifier:(id)arg0 ;
-(void)sendPostOfType:(id)arg0 withOptions:(id)arg1 ;
-(void)setLibraryIdentifierWithType:(id)arg0 value:(id)arg1 ;
-(void)setSubscriptionStatusCoordinator:(id)arg0 ;
-(void)showAlertWithMessage:(id)arg0 title:(id)arg1 buttonTitle:(id)arg2 ;
-(void)showMediaPlayerWithURLString:(id)arg0 orientation:(id)arg1 title:(id)arg2 subtitle:(id)arg3 bookmarkID:(id)arg4 duration:(id)arg5 type:(id)arg6 imageURL:(id)arg7 ;
-(void)showMediaPreviewWithURLString:(id)arg0 ;
-(void)showSafariViewControllerWithURLString:(id)arg0 identifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)signOutPrimaryAccount;
-(void)signupInWallet:(id)arg0 callback:(id)arg1 ;
-(void)startListeningForAuthenticationTokenWithCallback:(id)arg0 ;
-(void)startedTest:(id)arg0 ;
-(void)stopListeningForAuthenticationToken;


@end


#endif