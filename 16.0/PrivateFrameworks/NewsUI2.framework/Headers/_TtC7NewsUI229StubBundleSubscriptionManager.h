// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI229STUBBUNDLESUBSCRIPTIONMANAGER_H
#define _TTC7NEWSUI229STUBBUNDLESUBSCRIPTIONMANAGER_H

@class SwiftObject, FCBundleSubscription;
@protocol FCBundleSubscriptionManagerType, FCEntitlementsOverrideProviderType;



@interface _TtC7NewsUI229StubBundleSubscriptionManager : SwiftObject <FCBundleSubscriptionManagerType>



@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription; // ivar: bundleSubscription
@property (nonatomic, readonly) FCBundleSubscription *cachedSubscription; // ivar: cachedSubscription
@property (nonatomic, retain) NSObject<FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider; // ivar: entitlementsOverrideProvider
@property (nonatomic, readonly) FCBundleSubscription *validatedCachedSubscription;


-(void)addObserver:(id)arg0 ;
-(void)clearBundleSubscription;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;
-(void)prepareForUseWithCompletion:(id)arg0 ;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg0 ;
-(void)refreshBundleSubscriptionWithCachePolicy:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)refreshBundleSubscriptionWithCachePolicy:(NSUInteger)arg0 hideBundleDetectionUI:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)renewalNoticeShownWithPurchaseID:(id)arg0 ;
-(void)silentExpireBundleSubscription;


@end


#endif