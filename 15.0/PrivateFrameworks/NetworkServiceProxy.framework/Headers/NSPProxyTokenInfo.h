// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPROXYTOKENINFO_H
#define NSPPROXYTOKENINFO_H

@class NSString, NSUUID, NSDate, NSMutableArray, NWPath;
@protocol NSSecureCoding, NSCopying, NSPPrivacyProxyTokenRegistrationDelegate, NSPProxyTokenDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NSPPrivacyProxyProxyInfo.h"
#import "NSPPrivacyProxyTokenRegistration.h"

@interface NSPProxyTokenInfo : NSObject <NSSecureCoding, NSCopying, NSPPrivacyProxyTokenRegistrationDelegate>



@property (nonatomic) NSUInteger agentLowWaterMarkHitCount; // ivar: _agentLowWaterMarkHitCount
@property (nonatomic) NSUInteger badTokenCount; // ivar: _badTokenCount
@property (nonatomic) NSUInteger cacheLowWaterMarkHitCount; // ivar: _cacheLowWaterMarkHitCount
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSPProxyTokenDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger missingTokenCount; // ivar: _missingTokenCount
@property (retain, nonatomic) NSPPrivacyProxyProxyInfo *proxyInfo; // ivar: _proxyInfo
@property (nonatomic) BOOL reportTokenFetchOutage; // ivar: _reportTokenFetchOutage
@property (nonatomic) BOOL subscriber; // ivar: _subscriber
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *tokenAgentUUID; // ivar: _tokenAgentUUID
@property (nonatomic) NSUInteger tokenConsumedCount; // ivar: _tokenConsumedCount
@property (nonatomic) NSUInteger tokenCount; // ivar: _tokenCount
@property (nonatomic) NSUInteger tokenExpiredCount; // ivar: _tokenExpiredCount
@property (nonatomic) NSUInteger tokenFetchFailedCount; // ivar: _tokenFetchFailedCount
@property (nonatomic) NSUInteger tokenFetchRetryAttempt; // ivar: _tokenFetchRetryAttempt
@property (retain, nonatomic) NSDate *tokenFetchRetryDate; // ivar: _tokenFetchRetryDate
@property (nonatomic) BOOL tokenFetchRetryOnNetworkChange; // ivar: _tokenFetchRetryOnNetworkChange
@property (retain, nonatomic) NSObject<OS_dispatch_source> *tokenFetchRetryTimer; // ivar: _tokenFetchRetryTimer
@property (nonatomic) NSUInteger tokenFetchSuccessCount; // ivar: _tokenFetchSuccessCount
@property (retain, nonatomic) NSMutableArray *tokenInfoList; // ivar: _tokenInfoList
@property (retain, nonatomic) NWPath *tokenPath; // ivar: _tokenPath
@property (retain, nonatomic) NSPPrivacyProxyTokenRegistration *tokenRegistration; // ivar: _tokenRegistration
@property (nonatomic) BOOL tokenRequestPending; // ivar: _tokenRequestPending
@property (nonatomic) BOOL useDefaultInterface; // ivar: _useDefaultInterface


+(BOOL)supportsSecureCoding;
-(BOOL)tokenFetchActive;
-(CGFloat)retryIntervalFromHTTPResponse:(id)arg0 ;
-(NSUInteger)tokensFromKeychain;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 proxyInfo:(id)arg1 path:(id)arg2 subscriber:(BOOL)arg3 useDefaultInterface:(BOOL)arg4 ;
-(id)networkInterface;
-(id)tierType;
-(void)addTokensToAgent;
-(void)cacheTokens:(id)arg0 expirationTime:(id)arg1 ;
-(void)checkCachedTokenCount;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flushProxyTokens;
-(void)handlePathChange:(id)arg0 ;
-(void)handleTierChange:(BOOL)arg0 ;
-(void)refreshTokenPool:(id)arg0 ;
-(void)removeExpiredTokens;
-(void)removeFromKeychain;
-(void)reportErrorForTokenRegistration:(id)arg0 error:(int)arg1 withOptions:(id)arg2 ;
-(void)requestTokensWithAccessToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetPendingFetches;
-(void)retryNetworkFetch;
-(void)saveToKeychain;
-(void)setTokenFetchRetryInterval:(NSUInteger)arg0 ;
-(void)setup;
-(void)tokenFetchFailureWithHttpStatusCode:(NSInteger)arg0 error:(id)arg1 ;
-(void)tokenLowWaterMarkReached;


@end


#endif