// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DASPAIREDSYSTEMCONTEXT_H
#define _DASPAIREDSYSTEMCONTEXT_H

@class NSString, NSMutableDictionary, NSUserDefaults, NSArray, NSMutableSet, NSDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue, _CDContext, _DKKnowledgeQuerying, OS_os_log;

#import <Foundation/Foundation.h>


@interface _DASPairedSystemContext : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *appUsageRefreshTimer; // ivar: _appUsageRefreshTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSObject<_CDContext> *context; // ivar: _context
@property (retain) NSString *foregroundWatchApp; // ivar: _foregroundWatchApp
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain) NSMutableDictionary *launchedAppCount; // ivar: _launchedAppCount
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (copy, nonatomic) id *onApplicationStateChange; // ivar: _onApplicationStateChange
@property (copy, nonatomic) id *onConditionsChange; // ivar: _onConditionsChange
@property (retain, nonatomic) NSUserDefaults *persistence; // ivar: _persistence
@property (nonatomic) CGFloat previousBatteryLevel; // ivar: _previousBatteryLevel
@property (nonatomic) CGFloat previousDefaultThreshold; // ivar: _previousDefaultThreshold
@property (retain) NSArray *previousExclusiveIdentifiers; // ivar: _previousExclusiveIdentifiers
@property (retain, nonatomic) NSMutableSet *previousForegroundApps; // ivar: _previousForegroundApps
@property (nonatomic) int previousMaxThermalPressure; // ivar: _previousMaxThermalPressure
@property (nonatomic) BOOL previousPluginStatus; // ivar: _previousPluginStatus
@property (nonatomic) CGFloat previousSyncThreshold; // ivar: _previousSyncThreshold
@property (nonatomic) int recentTrafficSyncRequests; // ivar: _recentTrafficSyncRequests
@property (retain, nonatomic) NSMutableDictionary *recentlyBackgroundedApps; // ivar: _recentlyBackgroundedApps
@property (retain) NSDictionary *remoteAppLaunchCount; // ivar: _remoteAppLaunchCount
@property (nonatomic) int remoteForecastDeletionToken; // ivar: _remoteForecastDeletionToken
@property (retain, nonatomic) NSMutableDictionary *watchKitAppStatus; // ivar: _watchKitAppStatus


// +(id)contextWithClientIdentifier:(id)arg0 callbackQueue:(id)arg1 systemConditionChangeCallback:(id)arg2 trafficCancelationHandler:(unk)arg3  ;
+(id)stringForPriority:(NSUInteger)arg0 ;
+(id)stringForThermalLevel:(int)arg0 ;
+(void)initialize;
-(BOOL)allowSyncTrafficForRecentlyBackgroundedApp;
-(BOOL)allowsSendingTrafficeForServiceIdentifiers:(id)arg0 atPriorityLevel:(NSUInteger)arg1 isReunionOrInitialSync:(BOOL)arg2 responseValidityDuration:(*CGFloat)arg3 ;
-(BOOL)batteryLevelsAllowSendingTrafficeForServiceIdentifiers:(id)arg0 atPriorityLevel:(NSUInteger)arg1 ;
-(BOOL)didHandleExclusiveAppChange;
-(BOOL)foregroundApplicationsAllowSendingTrafficForServiceIdentifiers:(id)arg0 atPriorityLevel:(NSUInteger)arg1 furtherChecksNecessary:(*BOOL)arg2 ;
-(BOOL)isAnyThirdPartyApp:(id)arg0 ;
-(BOOL)isWatchPluggedIn;
-(BOOL)shouldBypassApplicationUsage:(id)arg0 ;
-(BOOL)thermalLevelsAllowSendingTrafficeForServiceIdentifiers:(id)arg0 atPriorityLevel:(NSUInteger)arg1 ;
-(BOOL)thirdPartyAppPolicyAllowsSendingTrafficForServiceIdentifiers:(id)arg0 atPriorityLevel:(NSUInteger)arg1 furtherChecksNecessary:(*BOOL)arg2 ;
-(CGFloat)usageLikelihoodForApplication:(id)arg0 ;
-(CGFloat)usageThresholdForPriority:(NSUInteger)arg0 batteryLevel:(int)arg1 isPluggedIn:(BOOL)arg2 ;
// -(id)initWithClientIdentifier:(id)arg0 context:(id)arg1 knowledgeStore:(id)arg2 callbackQueue:(id)arg3 systemConditionChangeCallback:(id)arg4 trafficCancelationHander:(unk)arg5  ;
-(id)pairedDeviceStream;
-(int)watchBatteryLevel;
-(void)deleteRemoteHistogram;
-(void)handleAppStateChange;
-(void)handleConditionChange;
-(void)handleWatchAppBackgrounded;
-(void)readBudgetForRecentlyBackgroundedAppSyncTraffic;
-(void)registerForContextChanges;
-(void)resetBudgetForRecentlyBackgroundedAppSyncTraffic;
-(void)setWatchKitStatus:(BOOL)arg0 forApplication:(id)arg1 ;
-(void)updateAppUsageHistory;


@end


#endif