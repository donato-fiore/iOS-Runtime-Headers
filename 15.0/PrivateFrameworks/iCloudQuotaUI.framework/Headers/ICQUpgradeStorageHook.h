// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQUPGRADESTORAGEHOOK_H
#define ICQUPGRADESTORAGEHOOK_H

@class ICQOffer, NSURLSession, PSCloudStorageOffersManager, NSDictionary, RUIElement, NSTimer, NSArray, NSString, AMSBag, RUIObjectModel, AAUIServerHookResponse;
@protocol PSCloudStorageOffersManagerDelegate, AMSPurchaseResponseProtocol, AAUIServerHook, ICQServerHookDelegate, AAUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface ICQUpgradeStorageHook : NSObject <PSCloudStorageOffersManagerDelegate, AMSPurchaseResponseProtocol, AAUIServerHook>

 {
    ICQOffer *_offer;
    NSURLSession *_session;
    PSCloudStorageOffersManager *_cloudStorageOffersManager;
    id<ICQServerHookDelegate> *_flowDelegate;
    NSDictionary *_clientInfo;
    NSInteger _statusCode;
    NSInteger _amsServerErrorCode;
    RUIElement *_ruiElement;
    NSTimer *_stopActivityIndicatorTimer;
    id *_interruptedCompletion;
    BOOL _isListeningToAMS;
    NSArray *_interruptedBuyErrorCodes;
    NSString *_userAgentSuffix;
}


@property (retain, nonatomic) AMSBag *bag; // ivar: _bag
@property (retain, nonatomic) NSString *buttonId; // ivar: _buttonId
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *flowtype; // ivar: _flowtype
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(NSInteger)offerAction;
-(id)dummyRequestWithAccount:(id)arg0 token:(id)arg1 ;
-(id)initWithOffer:(id)arg0 flowDelegate:(id)arg1 ;
-(id)parseParameters:(id)arg0 action:(NSInteger)arg1 ;
-(id)storageContextJSONString;
-(id)upgradeStorageContextHeaderDictionary;
-(id)upgradeStorageKeyBag;
-(id)upgradeStorageQueryDictionary;
-(id)upgradeStorageQueryKeySet;
-(void)_appGoesToBackground:(id)arg0 ;
-(void)_enableCloudPhotoLibraryWithCompletion:(id)arg0 ;
-(void)_firedStopActivityIndicatorTimer:(id)arg0 ;
-(void)_handlePurchaseRequestSucceededNotification;
-(void)_registerForDarwinNotifications;
-(void)_stopActivityIndicator;
-(void)beginLegacyPurchaseFlow;
-(void)beginOsloPurchaseFlow;
-(void)beginPurchaseFlow;
-(void)handleAuthenticateRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleDialogRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleEngagementRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)manager:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)manager:(id)arg0 loadDidFailWithError:(id)arg1 ;
-(void)manager:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)managerDidCancel:(id)arg0 ;
-(void)mockPurchaseFlow;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;
-(void)registerAMSBagKeySets;


@end


#endif