// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQUPGRADECLOUDSTORAGEFLOWMANAGER_H
#define ICQUPGRADECLOUDSTORAGEFLOWMANAGER_H

@class NSURLSession, NSString, PSCloudStorageOffersManager, NSDictionary;
@protocol PSCloudStorageOffersManagerDelegate;


#import "ICQUpgradeFlowManager.h"

@interface ICQUpgradeCloudStorageFlowManager : ICQUpgradeFlowManager <PSCloudStorageOffersManagerDelegate>

 {
    NSURLSession *_buyProductSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *purchaseCompletionHandler; // ivar: _purchaseCompletionHandler
@property (retain, nonatomic) PSCloudStorageOffersManager *storageOffersManager; // ivar: _storageOffersManager
@property (retain, nonatomic) NSString *storagePurchaseButtonId; // ivar: _storagePurchaseButtonId
@property (readonly, nonatomic) NSDictionary *storagePurchaseKeybag;
@property (readonly) Class superclass;


+(BOOL)_canDoTokenPurchaseWithOffer:(id)arg0 ;
+(BOOL)shouldSubclassShowForOffer:(id)arg0 ;
-(id)_buyProductQueryDictionary;
-(id)_buyProductQueryKeySet;
-(id)_dummyRequestWithAccount:(id)arg0 token:(id)arg1 ;
-(id)_storageContextHeaderDictionary;
-(id)_storageContextJSONString;
-(id)initSubclassWithOffer:(id)arg0 ;
-(id)secureTokenMissingError;
-(void)_adoptRemoteUIWithPurchaseToken:(id)arg0 buyParameters:(id)arg1 requestHeaders:(id)arg2 ;
-(void)_buyProductShouldUseToken:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_performPageButtonActionWithParameters:(id)arg0 completion:(id)arg1 ;
-(void)_performPurchase;
-(void)_performPurchaseUsingSettingsUI;
-(void)_performPurchaseUsingTouchID;
-(void)manager:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)manager:(id)arg0 loadDidFailWithError:(id)arg1 ;
-(void)manager:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)managerDidCancel:(id)arg0 ;


@end


#endif