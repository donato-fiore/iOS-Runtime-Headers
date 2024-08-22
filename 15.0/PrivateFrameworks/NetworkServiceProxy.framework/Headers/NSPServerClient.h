// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPSERVERCLIENT_H
#define NSPSERVERCLIENT_H

@class NSString;
@protocol NSPServerCommands, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NSPServerClient : NSObject <NSPServerCommands>

 {
    os_unfair_lock_s lock;
}


@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)getErrorFromDict:(id)arg0 ;
-(BOOL)removePrivacyProxyPolicy;
-(id)getConnection;
-(id)initWithCallbackQueue:(id)arg0 ;
-(void)convertPrivacyProxyConfigurationWithCompletionHandler:(id)arg0 completionHandler:(id)arg1 ;
-(void)establishTrustWithEdgeSetForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAppRuleForLabel:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchCurrentConfigurationWithCompletionHandler:(id)arg0 ;
-(void)fetchEdgeSetForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchStateForClient:(id)arg0 withPeerEndpoint:(id)arg1 completionHandler:(id)arg2 ;
-(void)getGeohashSharingPreferenceWithCompletionHandler:(id)arg0 ;
-(void)getPrivacyProxyAccountTypeWithCompletionHandler:(id)arg0 ;
-(void)getPrivacyProxyConfiguration:(id)arg0 ;
-(void)getPrivacyProxyEffectiveUserTierWithCompletionHandler:(id)arg0 ;
-(void)getPrivacyProxyInfoWithCompletionHandler:(id)arg0 ;
-(void)getPrivacyProxyPolicyWithCompletionHandler:(id)arg0 ;
-(void)getPrivacyProxyServiceStatusTimelineWithCompletionHandler:(id)arg0 ;
-(void)getPrivacyProxyServiceStatusWithCompletionHandler:(id)arg0 ;
-(void)getPrivacyProxyStatusWithCompletionHandler:(id)arg0 ;
-(void)getPrivacyProxyTrafficStateWithCompletionHandler:(id)arg0 ;
-(void)getPrivacyProxyUserTierWithCompletionHandler:(id)arg0 ;
-(void)locationAuthorizationStatusWithCompletionHandler:(id)arg0 ;
-(void)mergePrivacyProxyPolicy:(id)arg0 ;
-(void)overridePreferredProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)overridePreferredResolver:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshWaldoNowWithCompletionHandler:(id)arg0 ;
-(void)reportPrivacyProxyNetworkStatus:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportPrivacyProxyServiceStatus:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)reportUsage:(id)arg0 fromClient:(id)arg1 ;
-(void)sendRTCReport:(NSInteger)arg0 errorCode:(NSInteger)arg1 url:(id)arg2 completionHandler:(id)arg3 ;
-(void)setAppRule:(id)arg0 forLabel:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCurrentConfiguration:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setCurrentLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 timestamp:(id)arg2 forClient:(id)arg3 ;
-(void)setEdgeSet:(id)arg0 forIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setGeohashSharingPreference:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setLocationMonitorInterval:(CGFloat)arg0 ;
-(void)setPrivacyProxyConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)setPrivacyProxyPolicy:(id)arg0 completionHandler:(id)arg1 ;
-(void)setPrivacyProxyStatus:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setPrivacyProxyTrafficState:(NSUInteger)arg0 proxyTraffic:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)setPrivacyProxyUserTier:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)setTestLatencyMap:(id)arg0 completionHandler:(id)arg1 ;
-(void)startLocationMonitor;
-(void)stopLocationMonitor;


@end


#endif