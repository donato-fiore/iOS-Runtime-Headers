// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIOPENURLHANDLER_H
#define VUIOPENURLHANDLER_H

@class AMSURLParser, NSDictionary, NSString, NSURL;
@protocol AMSUIDynamicViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface VUIOpenURLHandler : NSObject <AMSUIDynamicViewControllerDelegate>

 {
    os_unfair_lock_s _isFinishedLock;
    BOOL _isFinished;
}


@property (retain, nonatomic) AMSURLParser *amsURLParser; // ivar: _amsURLParser
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSDictionary *contextData; // ivar: _contextData
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *deferredAMSDynamicURLCompletion; // ivar: _deferredAMSDynamicURLCompletion
@property (retain, nonatomic) NSURL *deferredOpenURL; // ivar: _deferredOpenURL
@property (copy, nonatomic) id *deferredOpenURLCompletion; // ivar: _deferredOpenURLCompletion
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinished;
@property (retain, nonatomic) NSString *offerURLString; // ivar: _offerURLString
@property (nonatomic) BOOL openedByDeeplink; // ivar: _openedByDeeplink
@property (retain, nonatomic) NSString *purchaseOrLinkingAdamID; // ivar: _purchaseOrLinkingAdamID
@property (retain, nonatomic) NSString *subscriptionChannelLink; // ivar: _subscriptionChannelLink
@property (retain, nonatomic) NSString *subscriptionChannelTitle; // ivar: _subscriptionChannelTitle
@property (readonly) Class superclass;


+(BOOL)isRedeemURL:(id)arg0 ;
+(id)queryParameterStringfromURL:(id)arg0 parameter:(id)arg1 ;
+(id)sharedInstance;
+(void)_handleDeeplinkAction:(id)arg0 completionHandler:(id)arg1 ;
+(void)_insertPageBehindTop:(id)arg0 viewControllers:(id)arg1 clearStack:(BOOL)arg2 ;
+(void)_pushPageViewControllers:(id)arg0 viewControllers:(id)arg1 skipLastViewController:(BOOL)arg2 ;
+(void)_pushViewControllers:(id)arg0 into:(id)arg1 animated:(BOOL)arg2 clearStack:(BOOL)arg3 ;
-(BOOL)_isBundlePurchased:(id)arg0 forOfferDomain:(id)arg1 ;
-(id)init;
-(void)_addMetricsTo:(id)arg0 ;
-(void)_fetchLocalMediaWithAdamID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleAMSDynamicURL:(id)arg0 isDeeplink:(BOOL)arg1 contextData:(id)arg2 completion:(id)arg3 ;
-(void)_handleAMSWebURL:(id)arg0 useAMSWebView:(BOOL)arg1 ;
-(void)_handleBundleOfferCompletion:(BOOL)arg0 ;
-(void)_handleOpenURLRouterDataSource:(id)arg0 appContext:(id)arg1 clearStack:(BOOL)arg2 startDate:(id)arg3 openURL:(id)arg4 ;
-(void)_postPurchaseOrLinkingProcessing:(id)arg0 isBundlePurchased:(BOOL)arg1 ;
-(void)_processDeeplink:(id)arg0 appContext:(id)arg1 completion:(id)arg2 ;
-(void)_processFamilySetup:(id)arg0 ;
-(void)_processLocalLibraryLink:(id)arg0 playbackInitiationDate:(id)arg1 openURLCompletionDate:(id)arg2 ;
-(void)_processLocalLink:(id)arg0 appContext:(id)arg1 completion:(id)arg2 ;
-(void)_processNonLocalLink:(id)arg0 appContext:(id)arg1 completion:(id)arg2 ;
-(void)_showBundlePurchaseConfirmationForResult:(BOOL)arg0 ;
-(void)dynamicViewController:(id)arg0 didFinishCarrierLinkingWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)handleDeferredURLWithAppContext:(id)arg0 ;
-(void)openSharedWatchURL:(id)arg0 appContext:(id)arg1 completion:(id)arg2 ;
-(void)parseURL:(id)arg0 appContext:(id)arg1 completion:(id)arg2 ;
-(void)processEntityWithContextData:(id)arg0 appContext:(id)arg1 ;
-(void)processLink:(id)arg0 appContext:(id)arg1 isDeeplink:(BOOL)arg2 contextData:(id)arg3 completion:(id)arg4 ;
-(void)saveDeferredURL:(id)arg0 completion:(id)arg1 ;


@end


#endif