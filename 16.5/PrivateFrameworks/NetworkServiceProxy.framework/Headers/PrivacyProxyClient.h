// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRIVACYPROXYCLIENT_H
#define PRIVACYPROXYCLIENT_H


#import <Foundation/Foundation.h>


@interface PrivacyProxyClient : NSObject



+(void)getEffectiveUserTier:(id)arg0 completionHandler:(id)arg1 ;
+(void)getForceFallback:(id)arg0 completionHandler:(id)arg1 ;
+(void)getGeohashSharingPreference:(id)arg0 completionHandler:(id)arg1 ;
+(void)getOverriddeIngressProxy:(id)arg0 completionHandler:(id)arg1 ;
+(void)getPreferredProxy:(id)arg0 completionHandler:(id)arg1 ;
+(void)getPreferredResolver:(id)arg0 completionHandler:(id)arg1 ;
+(void)getPrivacyProxyAccountType:(id)arg0 completionHandler:(id)arg1 ;
+(void)getPrivateAccessTokensEnabled:(id)arg0 completionHandler:(id)arg1 ;
+(void)getServiceStatus:(id)arg0 completionHandler:(id)arg1 ;
+(void)getServiceStatusTimeline:(id)arg0 completionHandler:(id)arg1 ;
+(void)getStatus:(id)arg0 completionHandler:(id)arg1 ;
+(void)getTrafficState:(id)arg0 completionandler:(id)arg1 ;
+(void)getUserTier:(id)arg0 completionHandler:(id)arg1 ;
+(void)getUserTierExtended:(id)arg0 completionHandler:(id)arg1 ;
+(void)overrideIngressProxy:(id)arg0 fallbackProxy:(id)arg1 key:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4 ;
+(void)overridePreferredProxy:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)overridePreferredResolver:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)reportCellularNetworkStatus:(BOOL)arg0 networkName:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)reportWiFiNetworkStatus:(BOOL)arg0 networkName:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)setEnabled:(BOOL)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)setForceFallback:(BOOL)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)setFreeUserTierUntilTomorrow:(id)arg0 completionHandler:(id)arg1 ;
+(void)setGeohashSharingPreference:(BOOL)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)setPrivateAccessTokensEnabled:(BOOL)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)setTrafficState:(NSUInteger)arg0 proxyTraffic:(NSUInteger)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)setUserTier:(NSUInteger)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif