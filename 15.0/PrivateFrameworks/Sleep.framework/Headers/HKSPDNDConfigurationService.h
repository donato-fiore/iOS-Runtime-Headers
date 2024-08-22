// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPDNDCONFIGURATIONSERVICE_H
#define HKSPDNDCONFIGURATIONSERVICE_H

@class NSString, DNDGlobalConfigurationService, DNDModeConfigurationService;
@protocol DNDModeConfigurationServiceListener, DNDGlobalConfigurationServiceListener, HKSPDiagnosticsProvider, HKSPSleepFocusModeBridge, NAScheduler, HKSPSleepFocusModeBridgeDelegate;

#import <Foundation/Foundation.h>

#import "HKSPSleepFocusConfiguration.h"

@interface HKSPDNDConfigurationService : NSObject <DNDModeConfigurationServiceListener, DNDGlobalConfigurationServiceListener, HKSPDiagnosticsProvider, HKSPSleepFocusModeBridge>

 {
    os_unfair_lock_s _cacheLock;
    HKSPSleepFocusConfiguration *_cachedSleepFocusConfiguration;
    id<NAScheduler> *_dndScheduler;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKSPSleepFocusModeBridgeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DNDGlobalConfigurationService *globalConfigService; // ivar: _globalConfigService
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DNDModeConfigurationService *modeConfigService; // ivar: _modeConfigService
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;


+(BOOL)_readGlobalConfigForOptions:(NSUInteger)arg0 ;
+(id)sleepFocusConfigurationService;
+(id)sleepFocusConfigurationServiceWithOptions:(NSUInteger)arg0 ;
-(BOOL)_cacheSleepFocusConfig;
-(BOOL)_lock_updateCachedSleepFocusConfig:(id)arg0 updatedSleepFocusConfig:(id)arg1 ;
-(BOOL)_readGlobalConfig;
-(BOOL)_uncachedHasSleepFocusMode:(*id)arg0 ;
-(BOOL)_uncachedMirrorsSleepFocusMode:(*id)arg0 ;
-(BOOL)hasSleepFocusMode:(*id)arg0 ;
-(id)_sleepFocusConfiguration:(*id)arg0 checkCache:(BOOL)arg1 ;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)initWithModeConfigService:(id)arg0 globalConfigService:(id)arg1 ;
-(id)initWithModeConfigService:(id)arg0 globalConfigService:(id)arg1 options:(NSUInteger)arg2 ;
-(id)sleepFocusConfiguration:(*id)arg0 ;
-(void)_checkForUpdatedSleepFocusConfig;
-(void)_loadCachedSleepFocusConfig;
-(void)_notifyDelegate;
-(void)_startListeningToGlobalConfigService;
-(void)_startListeningToModeConfigService;
-(void)_stopListeningToGlobalConfigService;
-(void)_stopListeningToModeConfigService;
-(void)_updateCacheAndNotifyWithBlock:(id)arg0 ;
-(void)_updateCachedSleepFocusConfig:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)globalConfigurationService:(id)arg0 didReceiveUpdatedPairSyncState:(NSUInteger)arg1 ;
-(void)invalidate;
-(void)modeConfigurationService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;
-(void)updateCachedHasSleepFocusMode:(BOOL)arg0 ;
-(void)updateCachedMirrorsSleepFocusMode:(BOOL)arg0 ;


@end


#endif