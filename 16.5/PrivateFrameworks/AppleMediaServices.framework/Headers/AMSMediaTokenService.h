// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIATOKENSERVICE_H
#define AMSMEDIATOKENSERVICE_H

@class ACAccount, NSString;
@protocol AMSBagConsumer, AMSMediaTokenServiceProtocol, AMSBagProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSMediaToken.h"
#import "AMSProcessInfo.h"
#import "AMSURLSession.h"
#import "AMSMediaTokenServiceThrottler.h"
#import "AMSMediaTokenServiceStore.h"

@interface AMSMediaTokenService : NSObject <AMSBagConsumer, AMSMediaTokenServiceProtocol>



@property (nonatomic) BOOL URLKnownToBeTrusted; // ivar: _URLKnownToBeTrusted
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSMediaToken *cachedMediaToken;
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (nonatomic) NSInteger clientType; // ivar: _clientType
@property (readonly, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *keychainAccessGroup;
@property (nonatomic) CGFloat refreshPercentage; // ivar: _refreshPercentage
@property (nonatomic) CGFloat refreshTime; // ivar: _refreshTime
@property (weak, nonatomic) AMSURLSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSMediaTokenServiceThrottler *throttler; // ivar: _throttler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue; // ivar: _tokenFetchQueue
@property (readonly, nonatomic) AMSMediaTokenServiceStore *tokenStore; // ivar: _tokenStore


+(id)createBagForSubProfile;
-(BOOL)_shouldRefreshMediaToken:(id)arg0 ;
-(BOOL)_shouldReturnMediaToken:(id)arg0 ;
-(id)_fetchBagProperties;
-(id)_fetchToken;
-(id)_tokenRequestWithError:(*id)arg0 ;
-(id)fetchMediaToken;
-(id)initWithClientIdentifier:(id)arg0 bag:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg0 clientVersion:(id)arg1 bag:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg0 keychainAccessGroup:(id)arg1 bag:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg0 tokenStore:(id)arg1 bag:(id)arg2 ;
-(void)_refreshMediaTokenIfNeeded:(id)arg0 ;
-(void)invalidateMediaToken;


@end


#endif