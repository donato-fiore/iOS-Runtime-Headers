// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUPGRADESTORAGEHOOK_H
#define ICQUPGRADESTORAGEHOOK_H

@class ICQOffer, NSURLSession, PSCloudStorageOffersManager, NSDictionary, RUIElement, NSTimer, NSString, RUIObjectModel, RUIServerHookResponse;
@protocol PSCloudStorageOffersManagerDelegate, ICQPurchaseDelegate, AAUIServerHook, ICQServerHookDelegate, RUIServerHookDelegate;

#import <Foundation/Foundation.h>

#import "ICQPurchase.h"

@interface ICQUpgradeStorageHook : NSObject <PSCloudStorageOffersManagerDelegate, ICQPurchaseDelegate, AAUIServerHook>

 {
    ICQOffer *_offer;
    NSURLSession *_session;
    PSCloudStorageOffersManager *_cloudStorageOffersManager;
    id<ICQServerHookDelegate> *_flowDelegate;
    NSDictionary *_clientInfo;
    NSInteger _legacyStatusCode;
    RUIElement *_ruiElement;
    NSTimer *_stopActivityIndicatorTimer;
    BOOL _isListeningToAMS;
}


@property (retain, nonatomic) NSString *buttonId; // ivar: _buttonId
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *flowtype; // ivar: _flowtype
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) ICQPurchase *purchase; // ivar: _purchase
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(NSInteger)_statusCode;
-(NSInteger)offerAction;
-(id)dummyRequestWithAccount:(id)arg0 token:(id)arg1 ;
-(id)initWithOffer:(id)arg0 flowDelegate:(id)arg1 ;
-(id)storageContextJSONString;
-(id)upgradeStorageContextHeaderDictionary;
-(void)_appGoesToBackground:(id)arg0 ;
-(void)_firedStopActivityIndicatorTimer:(id)arg0 ;
-(void)_handlePurchaseRequestSucceededNotification;
-(void)beginLegacyPurchaseFlow;
-(void)beginOsloPurchaseFlow;
-(void)beginPurchaseFlowUsingParameters:(id)arg0 completion:(id)arg1 ;
-(void)handleAuthenticateRequest:(id)arg0 purchase:(id)arg1 completion:(id)arg2 ;
-(void)handleDialogRequest:(id)arg0 purchase:(id)arg1 completion:(id)arg2 ;
-(void)handleEngagementRequest:(id)arg0 purchase:(id)arg1 completion:(id)arg2 ;
-(void)manager:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)manager:(id)arg0 loadDidFailWithError:(id)arg1 ;
-(void)manager:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)managerDidCancel:(id)arg0 ;
-(void)mockPurchaseFlow;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;
-(void)registerForDarwinNotifications;
-(void)stopActivityIndicator;


@end


#endif