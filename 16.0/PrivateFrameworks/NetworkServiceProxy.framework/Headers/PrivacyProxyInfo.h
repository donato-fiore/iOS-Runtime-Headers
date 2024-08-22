// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRIVACYPROXYINFO_H
#define PRIVACYPROXYINFO_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PrivacyProxyInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger activatedTokenCount; // ivar: _activatedTokenCount
@property (nonatomic) NSUInteger anisetteValidationCount; // ivar: _anisetteValidationCount
@property (nonatomic) NSUInteger badTokenCount; // ivar: _badTokenCount
@property (nonatomic) NSUInteger configFetchedFailedCount; // ivar: _configFetchedFailedCount
@property (nonatomic) NSUInteger configFetchedSuccessCount; // ivar: _configFetchedSuccessCount
@property (nonatomic) NSUInteger deviceIdentityValidationCount; // ivar: _deviceIdentityValidationCount
@property (retain, nonatomic) NSString *egressFallbackProxyURL; // ivar: _egressFallbackProxyURL
@property (retain, nonatomic) NSString *egressProxyURL; // ivar: _egressProxyURL
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
@property (retain, nonatomic) NSDictionary *tokenCounts; // ivar: _tokenCounts
@property (nonatomic) NSUInteger unactivatedTokenCount; // ivar: _unactivatedTokenCount


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diagnostics;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif