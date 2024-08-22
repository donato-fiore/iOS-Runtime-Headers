// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPPROXYTOKENINFO_H
#define NSPPROXYTOKENINFO_H

@class NSUUID, NWPath, NSDate, NSData, NSString;
@protocol NSSecureCoding, NSCopying, NSPPrivacyProxyTokenRegistrationDelegate, NSPProxyTokenDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NSPPrivacyProxyProxyInfo.h"
#import "NSPPrivacyProxyTokenRegistration.h"

@interface NSPProxyTokenInfo : NSObject <NSSecureCoding, NSCopying, NSPPrivacyProxyTokenRegistrationDelegate>

 {
    BOOL _tokenRequestPending;
    BOOL _tokenFetchRetryOnKeyOrNetworkChange;
    BOOL _useDefaultInterface;
    BOOL _subscriber;
    BOOL _reportTokenFetchOutage;
    id<NSPProxyTokenDelegate> *_delegate;
    NSPPrivacyProxyProxyInfo *_proxyInfo;
    NSUInteger _tokenCount;
    NSPPrivacyProxyTokenRegistration *_tokenRegistration;
    NSUUID *_tokenAgentUUID;
    NWPath *_tokenPath;
    NSObject<OS_dispatch_source> *_tokenFetchRetryTimer;
    NSUInteger _tokenFetchRetryAttempt;
    NSDate *_tokenFetchRetryDate;
    NSUInteger _tokenFetchSuccessCount;
    NSUInteger _tokenConsumedCount;
    NSUInteger _tokenExpiredCount;
    NSUInteger _tokenFetchFailedCount;
    NSUInteger _agentLowWaterMarkHitCount;
    NSUInteger _cacheLowWaterMarkHitCount;
    NSUInteger _badTokenCount;
    NSUInteger _missingTokenCount;
    NSData *_networkSignature;
    NSObject<OS_dispatch_source> *_replenishTokenTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reportErrorForTokenRegistration:(id)arg0 error:(int)arg1 withOptions:(id)arg2 ;
-(void)tokenLowWaterMarkReached;


@end


#endif