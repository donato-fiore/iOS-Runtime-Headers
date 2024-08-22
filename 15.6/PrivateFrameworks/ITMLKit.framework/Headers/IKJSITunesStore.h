// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSITUNESSTORE_H
#define IKJSITUNESSTORE_H

@class NSNumber, NSDictionary, SSMetricsController, NSString;
@protocol NSObject, IKJSITunesStore, _IKJSITunesStoreProxy, _IKJSITunesStore;


#import "IKJSObject.h"
#import "IKURLBagCache.h"

@interface IKJSITunesStore : IKJSObject <NSObject, IKJSITunesStore, _IKJSITunesStoreProxy, _IKJSITunesStore>

 {
    NSNumber *_lastAccountDSID;
    NSDictionary *_lastKnownStatusDictionary;
    SSMetricsController *_metricsController;
    NSString *_storeFrontSuffix;
    id *_ssAccountStoreChangedToken;
    id *_subscriptionStatusDidChangeToken;
    id *_urlBagCacheUpdateToken;
}


@property (readonly, nonatomic) NSString *DSID;
@property (readonly, nonatomic) NSDictionary *accountInfo;
@property (retain, nonatomic) IKURLBagCache *bagCache; // ivar: _bagCache
@property (retain, nonatomic) id *cookie;
@property (retain, nonatomic) NSString *cookieURL; // ivar: _cookieURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (readonly, nonatomic) NSString *networkConnectionType;
@property (retain, nonatomic) NSString *storefront;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userAgent;


+(void)setHeadersForURL:(id)arg0 inRequestProperties:(id)arg1 ;
+(void)setITunesStoreHeaders:(id)arg0 ;
-(id)_subscriptionStatusDictionaryWithStatus:(id)arg0 isFinal:(BOOL)arg1 ;
-(id)asPrivateIKJSITunesStore;
-(id)eligibilityForService:(id)arg0 ;
-(id)getBag;
-(id)initWithAppContext:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 urlBagCache:(id)arg1 ;
-(id)makeStoreXMLHttpRequest;
-(void)_accountStoreChanged;
-(void)_subscriptionStatusDidChanged:(id)arg0 ;
-(void)authenticate:(id)arg0 ;
-(void)clearCookies;
-(void)dealloc;
-(void)evaluateScripts:(id)arg0 ;
-(void)fetchMarketingItem:(id)arg0 ;
-(void)flushUnreportedEvents;
-(void)getServiceEligibility:(id)arg0 ;
-(void)invalidateBag;
-(void)loadStoreContent:(id)arg0 ;
-(void)openDynamicUIURL:(id)arg0 ;
-(void)openMarketingItem:(id)arg0 ;
-(void)recordEvent:(id)arg0 ;
-(void)signOut;
-(void)updateServiceEligibility:(id)arg0 ;


@end


#endif