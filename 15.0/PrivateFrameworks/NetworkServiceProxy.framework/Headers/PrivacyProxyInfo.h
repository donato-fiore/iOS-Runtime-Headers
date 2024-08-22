// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRIVACYPROXYINFO_H
#define PRIVACYPROXYINFO_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PrivacyProxyInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger activatedTokenCount; // ivar: _activatedTokenCount
@property (nonatomic) NSUInteger anisetteValidationCount; // ivar: _anisetteValidationCount
@property (nonatomic) NSUInteger badTokenCount; // ivar: _badTokenCount
@property (nonatomic) NSUInteger cacheEgressFallbackLowWaterMark; // ivar: _cacheEgressFallbackLowWaterMark
@property (nonatomic) NSUInteger cacheEgressLowWaterMark; // ivar: _cacheEgressLowWaterMark
@property (nonatomic) NSUInteger cacheIngressFallbackLowWaterMark; // ivar: _cacheIngressFallbackLowWaterMark
@property (nonatomic) NSUInteger cacheIngressLowWaterMark; // ivar: _cacheIngressLowWaterMark
@property (nonatomic) NSUInteger cachedEgressFallbackToken; // ivar: _cachedEgressFallbackToken
@property (nonatomic) NSUInteger cachedEgressToken; // ivar: _cachedEgressToken
@property (nonatomic) NSUInteger cachedIngressFallbackToken; // ivar: _cachedIngressFallbackToken
@property (nonatomic) NSUInteger cachedIngressToken; // ivar: _cachedIngressToken
@property (nonatomic) NSUInteger configFetchedFailedCount; // ivar: _configFetchedFailedCount
@property (nonatomic) NSUInteger configFetchedSuccessCount; // ivar: _configFetchedSuccessCount
@property (nonatomic) NSUInteger deviceIdentityValidationCount; // ivar: _deviceIdentityValidationCount
@property (nonatomic) NSUInteger egressAgentLowWaterMark; // ivar: _egressAgentLowWaterMark
@property (nonatomic) NSUInteger egressAgentTokens; // ivar: _egressAgentTokens
@property (nonatomic) NSUInteger egressFallbackAgentLowWaterMark; // ivar: _egressFallbackAgentLowWaterMark
@property (nonatomic) NSUInteger egressFallbackAgentTokens; // ivar: _egressFallbackAgentTokens
@property (retain, nonatomic) NSString *egressFallbackProxyURL; // ivar: _egressFallbackProxyURL
@property (retain, nonatomic) NSString *egressProxyURL; // ivar: _egressProxyURL
@property (nonatomic) NSUInteger ingressAgentLowWaterMark; // ivar: _ingressAgentLowWaterMark
@property (nonatomic) NSUInteger ingressAgentTokens; // ivar: _ingressAgentTokens
@property (nonatomic) NSUInteger ingressFallbackAgentLowWaterMark; // ivar: _ingressFallbackAgentLowWaterMark
@property (nonatomic) NSUInteger ingressFallbackAgentTokens; // ivar: _ingressFallbackAgentTokens
@property (retain, nonatomic) NSString *ingressFallbackProxyURL; // ivar: _ingressFallbackProxyURL
@property (retain, nonatomic) NSString *ingressProxyURL; // ivar: _ingressProxyURL
@property (nonatomic) NSUInteger missingTokenCount; // ivar: _missingTokenCount
@property (nonatomic) NSUInteger networkFallbackProxiesRotated; // ivar: _networkFallbackProxiesRotated
@property (nonatomic) NSUInteger networkProxiesRotated; // ivar: _networkProxiesRotated
@property (nonatomic) NSUInteger proxiesRotated; // ivar: _proxiesRotated
@property (nonatomic) NSUInteger proxyAgentLowWaterMarkHitCount; // ivar: _proxyAgentLowWaterMarkHitCount
@property (nonatomic) NSUInteger proxyCacheLowWaterMarkHitCount; // ivar: _proxyCacheLowWaterMarkHitCount
@property (nonatomic) NSUInteger proxyTokenConsumedCount; // ivar: _proxyTokenConsumedCount
@property (nonatomic) NSUInteger proxyTokenExpiredCount; // ivar: _proxyTokenExpiredCount
@property (nonatomic) NSUInteger proxyTokenFetchFailedCount; // ivar: _proxyTokenFetchFailedCount
@property (nonatomic) NSUInteger proxyTokenFetchSuccessCount; // ivar: _proxyTokenFetchSuccessCount
@property (nonatomic) NSUInteger requestedTokenCount; // ivar: _requestedTokenCount
@property (nonatomic) NSUInteger unactivatedTokenCount; // ivar: _unactivatedTokenCount


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)diagnostics;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif