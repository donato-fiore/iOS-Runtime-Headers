// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPURCHASECONTROLLER_H
#define FCPURCHASECONTROLLER_H

@class NSSet, NSMutableDictionary, NSURLSession, NSDictionary, NSDate, NSString;
@protocol FCUserInfoObserving, FCAppActivityObserving, FCPurchaseProviderType, OS_dispatch_queue, FCEntitlementsOverrideProviderType;

#import <Foundation/Foundation.h>

#import "FCCloudContext.h"
#import "FCKeyValueStore.h"
#import "FCPurchaseLookUpEntriesManager.h"
#import "FCAsyncSerialQueue.h"
#import "FCEntitlementService.h"

@interface FCPurchaseController : NSObject <FCUserInfoObserving, FCAppActivityObserving, FCPurchaseProviderType>

 {
    NSSet *_purchasesDiscoveredTagIDs;
    NSMutableDictionary *_webAccessEntriesByTagID;
    FCCloudContext *_cloudContext;
    NSURLSession *_session;
    FCKeyValueStore *_localStore;
    FCPurchaseLookUpEntriesManager *_purchaseLookupEntriesManager;
    NSDictionary *_readOnlyPurchaseLookUpEntriesByTagID;
    NSDate *_lastEntitlementCheckTime;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCAsyncSerialQueue *_entitlementQueue;
    FCEntitlementService *_entitlementService;
}


@property (readonly, nonatomic) NSSet *allPurchaseIDs;
@property (readonly, nonatomic) NSSet *allPurchasedTagIDs;
@property (readonly, nonatomic) NSSet *allTagIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider; // ivar: _entitlementsOverrideProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastSignedInItunesAccountName;
@property (readonly, nonatomic) NSDictionary *purchaseLookUpEntriesByTagID;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly, nonatomic) NSSet *purchasesDiscoveredTagIDs;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *webAccessEntriesByTagID;


-(BOOL)hasPurchaseTypeAppStore;
-(BOOL)hasRenewalNoticeShownForTagID:(id)arg0 ;
-(BOOL)isPaidSubscriber;
-(BOOL)isPaidSubscriberFromAppStore;
-(BOOL)isPaidSubscriberFromNews;
-(BOOL)isPaidSubscriberFromWeb;
-(BOOL)isTagIDPurchased:(id)arg0 ;
-(BOOL)isTagPurchased:(id)arg0 ;
-(id)expiredPurchaseChannelIDs;
-(id)init;
-(id)initWithCloudContext:(id)arg0 entitlementService:(id)arg1 ;
-(id)purchaseLookUpEntryForTagID:(id)arg0 ;
-(id)subscriptionNotSupportedChannelIDs;
-(id)webAccessOptedInTagIDs;
-(void)activityObservingApplicationDidEnterBackground;
-(void)addAppStorePurchaseWithTagID:(id)arg0 purchaseID:(id)arg1 ;
-(void)addToWebAccessOptedInListWithTagID:(id)arg0 ;
-(void)clearAllAppStorePurchases;
-(void)dealloc;
-(void)fetchChannelIDsForPurchaseIDs:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)forceExpireAllSubscriptionsIfNeeded;
-(void)performEntitlementCheckWithIgnoreCache:(BOOL)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)removeFromPurchasedChannelsListWithTagIDs:(id)arg0 ;
-(void)removeFromPurchasesDiscoveredList:(id)arg0 completion:(id)arg1 ;
-(void)removeWebPurchaseForTagID:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg0 ;
-(void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)arg0 iTunesAccountDSID:(id)arg1 isUserSignedIntoiTunes:(BOOL)arg2 isBundleSubscriber:(BOOL)arg3 completion:(id)arg4 ;
-(void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)arg0 iTunesAccountDSID:(id)arg1 isUserSignedIntoiTunes:(BOOL)arg2 isBundleSubscriber:(BOOL)arg3 completion:(id)arg4 ;
-(void)silentExpireInAppSubscriptions;
// -(void)submitWebAccessWithTagID:(id)arg0 purchaseID:(id)arg1 emailAddress:(id)arg2 purchaseReceipt:(id)arg3 serialCompletion:(id)arg4 completion:(unk)arg5  ;
-(void)updatePurchaseEntryToExpired:(id)arg0 ;
-(void)updatePurchaseEntryToExpiredForTagIDs:(id)arg0 ;
-(void)userInfo:(id)arg0 didChangeAccessTokenForTagID:(id)arg1 ;
-(void)userInfo:(id)arg0 didRemoveAccessTokenForTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
// -(void)verifyAccessTokenWithTagID:(id)arg0 accessToken:(id)arg1 consumedArticleCount:(NSUInteger)arg2 serialCompletion:(id)arg3 callbackQueue:(unk)arg4 completion:(id)arg5  ;


@end


#endif