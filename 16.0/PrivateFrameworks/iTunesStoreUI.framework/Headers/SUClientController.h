// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCLIENTCONTROLLER_H
#define SUCLIENTCONTROLLER_H

@class NSString, MFMailComposeViewController, NSArray, NSMutableDictionary, ISURLOperationPool, UIViewController;
@protocol SUClientInterfaceDelegate, MFMailComposeViewControllerDelegate, SUPurchaseManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUClientInterface.h"
#import "SUImageCache.h"
#import "SUScriptExecutionContext.h"

@interface SUClientController : NSObject <SUClientInterfaceDelegate, MFMailComposeViewControllerDelegate, SUPurchaseManagerDelegate>

 {
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_localStoreFrontAtLastSuspend;
    MFMailComposeViewController *_mailComposeViewController;
    *__CFArray _offeredAssetTypes;
    NSArray *_overlayConfigurations;
    NSString *_synchedStoreFrontAtLastSuspend;
    NSMutableDictionary *_urlBagKeys;
}


@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (copy) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SUImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) ISURLOperationPool *imageOperationPool; // ivar: _imagePool
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly, nonatomic) SUScriptExecutionContext *scriptExecutionContext; // ivar: _scriptExecutionContext
@property (readonly, nonatomic) NSString *storeContentLanguage;
@property (readonly, nonatomic, getter=isStoreEnabled) BOOL storeEnabled;
@property (readonly, nonatomic) BOOL storeFrontDidChangeSinceLastSuspend;
@property (readonly) Class superclass;


+(id)sharedController;
+(void)setSharedController:(id)arg0 ;
-(BOOL)composeReviewWithViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)dismissTopViewControllerAnimated:(BOOL)arg0 ;
-(BOOL)displayClientURL:(id)arg0 ;
-(BOOL)displayClientURL:(id)arg0 withSourceApplication:(id)arg1 sourceURLString:(id)arg2 ;
-(BOOL)ignoresExpectedClientsProtocol;
-(BOOL)isComposingEmail;
-(BOOL)libraryContainsItemIdentifier:(NSUInteger)arg0 ;
-(BOOL)openClientURL:(id)arg0 ;
-(BOOL)openClientURL:(id)arg0 withSourceApplication:(id)arg1 sourceURLString:(id)arg2 ;
-(BOOL)openURL:(id)arg0 ;
-(BOOL)openURL:(id)arg0 inClientWithIdentifier:(id)arg1 ;
-(BOOL)performActionForDialog:(id)arg0 button:(id)arg1 ;
-(BOOL)presentAccountViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)presentAccountViewController:(id)arg0 showNavigationBar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)presentOverlayBackgroundViewController:(id)arg0 ;
-(id)URLBagKeyForIdentifier:(id)arg0 ;
-(id)_newAccountViewControllerForButtonAction:(id)arg0 ;
-(id)_newComposeReviewViewControllerForButtonAction:(id)arg0 ;
-(id)clientIdentifier;
-(id)init;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)initWithClientInterface:(id)arg0 ;
-(id)newScriptInterface;
-(id)overlayBackgroundViewController;
-(id)overlayConfigurationForStorePage:(id)arg0 ;
-(id)scriptInterfaceForClientInterface:(id)arg0 ;
-(id)userAgent;
-(id)viewControllerFactory;
-(struct __CFArray *)offeredAssetTypes;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_dialogNotification:(id)arg0 ;
-(void)_memoryWarningNotification:(id)arg0 ;
-(void)_presentDialog:(id)arg0 ;
-(void)_purgeCaches;
-(void)_reloadOverlayConfigurationsFromURLBag;
-(void)_reloadScriptExecutionContextFromURLBag;
-(void)_reloadUserDefaultsFromURLBag;
-(void)autosaveMessageWithCompletionBlock:(id)arg0 ;
-(void)bagDidLoadNotification:(id)arg0 ;
-(void)becomeActive;
-(void)cancelAllOperations;
-(void)clientInterface:(id)arg0 exitStoreWithReason:(NSInteger)arg1 ;
-(void)clientInterface:(id)arg0 presentDialog:(id)arg1 ;
-(void)clientInterface:(id)arg0 setStatusBarHidden:(BOOL)arg1 withAnimation:(NSInteger)arg2 ;
-(void)clientInterface:(id)arg0 setStatusBarStyle:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)composeEmailByRestoringAutosavedMessage;
-(void)composeEmailWithSubject:(id)arg0 body:(id)arg1 ;
-(void)composeEmailWithSubject:(id)arg0 body:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)dismissMailComposeViewControllerAnimated:(BOOL)arg0 ;
-(void)dismissOverlayBackgroundViewController;
-(void)exitStoreWithReason:(NSInteger)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)presentExternalURLViewController:(id)arg0 ;
-(void)presentMailComposeViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)purchaseManager:(id)arg0 didAddPurchases:(id)arg1 ;
-(void)purchaseManager:(id)arg0 failedToAddPurchases:(id)arg1 ;
-(void)purchaseManager:(id)arg0 willAddPurchases:(id)arg1 ;
-(void)purchaseManagerDidEndUpdates:(id)arg0 ;
-(void)purchaseManagerWillBeginUpdates:(id)arg0 ;
-(void)resignActive;
-(void)setIgnoresExpectedClientsProtocol:(BOOL)arg0 ;
-(void)setOfferedAssetTypes:(struct __CFArray *)arg0 ;
-(void)setURLBagKey:(id)arg0 forIdentifier:(id)arg1 ;
-(void)setUserAgent:(id)arg0 ;
-(void)setViewControllerFactory:(id)arg0 ;


@end


#endif