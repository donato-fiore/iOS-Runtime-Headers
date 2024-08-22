// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQCOMMERCEREMOTEUIDELEGATE_H
#define ICQCOMMERCEREMOTEUIDELEGATE_H

@class UINavigationController, UIViewController, SKAccountPageViewController, NSMutableArray, NSOperationQueue, ISDialog, UIAlertController, ISURLOperation, AMSBag, NSDictionary, NSString, NSNumber;
@protocol SKAccountPageViewControllerDelegate, AMSPurchaseResponseProtocol, ISStoreURLOperationDelegate, RUIObjectModelDelegate, ICQCommerceRemoteUIDelegateDelegate;

#import <Foundation/Foundation.h>


@interface ICQCommerceRemoteUIDelegate : NSObject <SKAccountPageViewControllerDelegate, AMSPurchaseResponseProtocol, ISStoreURLOperationDelegate, RUIObjectModelDelegate>

 {
    UINavigationController *_navigationController;
    UINavigationController *_parentNavigationController;
    UIViewController *_topViewController;
    SKAccountPageViewController *_accountPageViewController;
    BOOL _modallyPresented;
    NSMutableArray *_objectModels;
    NSOperationQueue *_queue;
    ISDialog *_dialog;
    BOOL _registeredDialogNotification;
    BOOL _registeredAuthNotification;
    BOOL _cancelled;
    UIAlertController *_alertController;
    id *_queuedCompletionBlock;
    ISURLOperation *_finishingOperation;
    BOOL _pseudoModallyPresented;
}


@property (retain, nonatomic) AMSBag *bag; // ivar: _bag
@property (copy, nonatomic) NSDictionary *buyParameters; // ivar: _buyParameters
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICQCommerceRemoteUIDelegateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didJustCancelDialog; // ivar: _didJustCancelDialog
@property (nonatomic) NSInteger failureType; // ivar: _failureType
@property (nonatomic) BOOL forRetailOffer; // ivar: _forRetailOffer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (copy, nonatomic) NSString *purchaseToken; // ivar: _purchaseToken
@property (copy, nonatomic) NSDictionary *requestHeaders; // ivar: _requestHeaders
@property (nonatomic) BOOL shouldOfferDeviceOffers; // ivar: _shouldOfferDeviceOffers
@property (nonatomic) BOOL shouldOfferFamilySharePlansOnly; // ivar: _shouldOfferFamilySharePlansOnly
@property (nonatomic) BOOL skipCompletionAlert; // ivar: _skipCompletionAlert
@property (nonatomic) BOOL skipGoBack; // ivar: _skipGoBack
@property (nonatomic) BOOL skipRetryWithoutToken; // ivar: _skipRetryWithoutToken
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsModernAlerts; // ivar: _supportsModernAlerts


-(BOOL)_handleResponseForDialog:(id)arg0 atIndex:(NSInteger)arg1 ;
-(BOOL)_hasUnfinishedOperations;
-(BOOL)_isPurchaseTokenOperation:(id)arg0 ;
-(BOOL)_isSuccessfulPurchaseTokenOperation:(id)arg0 ;
-(BOOL)_loadNativeURL:(id)arg0 ;
-(BOOL)_shouldSuppressDialog:(id)arg0 failureType:(NSInteger)arg1 ;
-(BOOL)didUserDismissAMSFlow:(id)arg0 ;
-(NSInteger)_statusCodeForFinishedOperation:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithNavigationController:(id)arg0 needsModalPresentation:(BOOL)arg1 ;
-(id)parentViewControllerForObjectModel:(id)arg0 ;
-(id)presentationContext;
-(void)_clearRetailFollowUpItem;
-(void)_dismissAccountPageViewController:(id)arg0 keepCommerceSpinner:(BOOL)arg1 ;
-(void)_dismissAlertsWithCompletion:(id)arg0 ;
-(void)_forgetAccountPageViewController:(id)arg0 ;
-(void)_handleFinishForOperation:(id)arg0 withOutput:(id)arg1 ;
-(void)_handleOperationError:(id)arg0 ;
-(void)_popAccountPageViewController:(id)arg0 keepCommerceSpinner:(BOOL)arg1 ;
-(void)_popCommerceSpinnerIfNeeded;
-(void)_popObjectModelAnimated:(BOOL)arg0 ;
-(void)_presentAlertWithDialog:(id)arg0 ;
-(void)accountPageViewController:(id)arg0 financeInterruptionResolved:(BOOL)arg1 ;
-(void)accountPageViewControllerDidFinish:(id)arg0 ;
-(void)cancelFlowBecause:(id)arg0 ;
-(void)cancelRemoteUI;
-(void)cancelRemoteUIKeeping:(id)arg0 ;
-(void)cleanupLoader;
-(void)dealloc;
-(void)errorWithTitle:(id)arg0 andExplanation:(id)arg1 dismissedCompletion:(id)arg2 ;
-(void)handleAuthenticateRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleDialog:(id)arg0 ;
-(void)handleDialogRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleEngagementRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)loadURLforKey:(id)arg0 ;
-(void)makeBuyRequest:(id)arg0 ;
-(void)makeBuyRequest:(id)arg0 forceAuth:(BOOL)arg1 usePurchaseToken:(BOOL)arg2 ;
-(void)objectModel:(id)arg0 pressedButton:(id)arg1 attributes:(id)arg2 ;
-(void)objectModel:(id)arg0 pressedLink:(id)arg1 httpMethod:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg0 ;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)processLink:(id)arg0 forceAuth:(BOOL)arg1 ;
-(void)processLink:(id)arg0 forceAuth:(BOOL)arg1 needsAuth:(BOOL)arg2 ;
-(void)processLink:(id)arg0 forceAuth:(BOOL)arg1 needsAuth:(BOOL)arg2 localAuth:(BOOL)arg3 ;
-(void)processLink:(id)arg0 forceAuth:(BOOL)arg1 needsAuth:(BOOL)arg2 localAuth:(BOOL)arg3 usePurchaseToken:(BOOL)arg4 ;
-(void)purchaseWithToken:(id)arg0 buyParameters:(id)arg1 requestHeaders:(id)arg2 ;
-(void)pushSpinner;
-(void)retryPurchaseWithoutToken;
-(void)unregisterAuthNotification;
-(void)userCompletedFlow:(NSInteger)arg0 ;


@end


#endif