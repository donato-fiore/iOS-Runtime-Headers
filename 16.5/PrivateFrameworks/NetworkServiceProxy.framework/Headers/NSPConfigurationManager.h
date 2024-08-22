// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPCONFIGURATIONMANAGER_H
#define NSPCONFIGURATIONMANAGER_H

@class NSTimer, NWPath, NSURLSession, NSDate, NSString, NSDictionary;
@protocol NSPConfigurationManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NSPConfiguration.h"

@interface NSPConfigurationManager : NSObject {
    BOOL _isConfigFetchRequestPending;
    BOOL _configFetchOnNetworkChange;
    BOOL _useDefaultInterface;
    NSUInteger _effectiveUserTier;
    NSObject<NSPConfigurationManagerDelegate> *_delegate;
    NSPConfiguration *_configuration;
    NSTimer *_resurrectionTimer;
    NSTimer *_enableCheckTimer;
    NSUInteger _generation;
    NWPath *_path;
    NSObject<OS_dispatch_source> *_configFetchRetryTimer;
    NSUInteger _configFetchRetryAttempt;
    NSURLSession *_configFetchSession;
    NSDate *_configFetchRetryDate;
    NSUInteger _configFetchSuccessCount;
    NSUInteger _configFetchFailedCount;
    NSString *_trueClientIPAddress;
    NSDictionary *_networkCharacteristics;
}


@property (readonly) NSUInteger effectiveUserTier;


-(BOOL)getGeohashSharingPreference;
-(BOOL)getPrivateAccessTokensEnabled;
-(BOOL)setUserTier:(NSUInteger)arg0 resetDate:(id)arg1 ;
-(NSUInteger)configurationSubscriberPoliciesCount;
-(NSUInteger)getPrivacyProxyAccountType;
-(id)currentConfiguration;
-(id)diagnostics;
-(id)initWithDelegate:(id)arg0 configuration:(id)arg1 ;
-(id)mergeProxyTrafficStateWithCurrentPolicy;
-(void)configurationEnabled:(BOOL)arg0 ;
-(void)copyProxyInfo:(id)arg0 ;
-(void)dealloc;
-(void)handlePathChange:(id)arg0 ;
-(void)publishDailyConfigurationStats;
-(void)refreshConfigurationWithReason:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)resetConfigurationManager;
-(void)setConfigurationTrialVersion:(NSInteger)arg0 ;
-(void)setGeohashOverride:(id)arg0 ;
-(void)setGeohashSharingPreference:(BOOL)arg0 ;
-(void)setPreferredPathRoutingEnabled:(BOOL)arg0 ;
-(void)setPrivateAccessTokensAllowTools:(BOOL)arg0 ;
-(void)setPrivateAccessTokensEnabled:(BOOL)arg0 ;
-(void)setProxyAccountType:(NSUInteger)arg0 ;
-(void)setProxyTrafficState:(NSUInteger)arg0 proxyTraffic:(NSUInteger)arg1 ;
-(void)setup;
-(void)updateConfiguration:(id)arg0 ;


@end


#endif