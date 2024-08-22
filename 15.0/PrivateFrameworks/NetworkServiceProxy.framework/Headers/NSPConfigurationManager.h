// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPCONFIGURATIONMANAGER_H
#define NSPCONFIGURATIONMANAGER_H

@class NSDate, NSURLSession, NSTimer, NWPath, NSString;
@protocol OS_dispatch_source, NSPConfigurationManagerDelegate;

#import <Foundation/Foundation.h>

#import "NSPConfiguration.h"

@interface NSPConfigurationManager : NSObject

@property (nonatomic) NSUInteger configFetchFailedCount; // ivar: _configFetchFailedCount
@property (nonatomic) BOOL configFetchOnNetworkChange; // ivar: _configFetchOnNetworkChange
@property (nonatomic) NSUInteger configFetchRetryAttempt; // ivar: _configFetchRetryAttempt
@property (retain, nonatomic) NSDate *configFetchRetryDate; // ivar: _configFetchRetryDate
@property (retain, nonatomic) NSObject<OS_dispatch_source> *configFetchRetryTimer; // ivar: _configFetchRetryTimer
@property (retain, nonatomic) NSURLSession *configFetchSession; // ivar: _configFetchSession
@property (nonatomic) NSUInteger configFetchSuccessCount; // ivar: _configFetchSuccessCount
@property (retain, nonatomic) NSPConfiguration *configuration; // ivar: _configuration
@property (weak) NSObject<NSPConfigurationManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger effectiveUserTier; // ivar: _effectiveUserTier
@property (retain, nonatomic) NSTimer *enableCheckTimer; // ivar: _enableCheckTimer
@property (nonatomic) NSUInteger generation; // ivar: _generation
@property (nonatomic) BOOL isConfigFetchRequestPending; // ivar: _isConfigFetchRequestPending
@property (retain, nonatomic) NWPath *path; // ivar: _path
@property (retain, nonatomic) NSTimer *resurrectionTimer; // ivar: _resurrectionTimer
@property (retain, nonatomic) NSString *trueClientIPAddress; // ivar: _trueClientIPAddress
@property (nonatomic) BOOL useDefaultInterface; // ivar: _useDefaultInterface


-(BOOL)getGeohashSharingPreference;
-(BOOL)setUserTier:(NSUInteger)arg0 ;
-(BOOL)setupTimers;
-(NSUInteger)effectiveTier;
-(NSUInteger)getPrivacyProxyAccountType;
-(id)configuredPrivacyProxyPolicy;
-(id)copyPolicyConditionsFromPrivacyProxyPolicy:(id)arg0 ;
-(id)currentConfiguration;
-(id)diagnostics;
-(id)initWithDelegate:(id)arg0 configuration:(id)arg1 ;
-(id)mergeProxyTrafficStateWithCurrentPolicy;
-(id)networkInterface;
-(void)authenticationInfoUpdated;
-(void)checkConfigurationFetchRequired;
-(void)cleanupURLSession;
-(void)cloudSubscriptionCheckChanged;
-(void)configurationEnabled:(BOOL)arg0 ;
-(void)configurationFetchFailure:(id)arg0 error:(id)arg1 ;
-(void)copyProxyInfo:(id)arg0 ;
-(void)dealloc;
-(void)fetchPrivacyProxyConfigurationFile:(id)arg0 interface:(id)arg1 eTag:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchURL:(id)arg0 interface:(id)arg1 eTag:(id)arg2 requestType:(int)arg3 session:(id)arg4 completionHandler:(id)arg5 ;
-(void)geohashSharingPreferenceChanged;
-(void)handlePathChange:(id)arg0 ;
-(void)policiesUpdated:(BOOL)arg0 ;
-(void)proxiesInfoUpdated;
-(void)proxyTokenFetchStateUpdated;
-(void)publishDailyConfigurationStats;
-(void)refreshConfiguration:(id)arg0 ;
-(void)refreshConfigurationFetchWithCompletionHandler:(id)arg0 ;
-(void)resetPendingFetches;
-(void)resetTimers;
-(void)resurrectionDateUpdated;
-(void)retryNetworkFetch;
-(void)setGeohashSharingPreference:(BOOL)arg0 ;
-(void)setProxyAccountType:(NSUInteger)arg0 ;
-(void)setProxyTrafficState:(NSUInteger)arg0 proxyTraffic:(NSUInteger)arg1 ;
-(void)setUserEventAgentConfigurationFetchParameters;
-(void)setup;
-(void)setupEnableCheckTimer;
-(void)setupResurrectionTimer;
-(void)setupURLSession;
-(void)trialConfigurationVersionChanged;
-(void)updateConfiguration:(id)arg0 ;
-(void)userTierChanged;


@end


#endif