// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSETTINGS_H
#define PPSETTINGS_H

@class NSUserDefaults, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "PPKVOObserver.h"

@interface PPSettings : NSObject {
    NSUserDefaults *_portraitDefaults;
    NSUserDefaults *_canLearnFromAppDefaults;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    PPKVOObserver *_canLearnFromAppKVOObserver;
    PPKVOObserver *_weightKVOObserver;
    PPKVOObserver *_abGroupKVObserver;
    PPKVOObserver *_queryPlanLoggingKVOObserver;
}


@property (nonatomic, getter=isAppConnectionsLocationsEnabled) BOOL appConnectionsLocationsEnabled;


+(BOOL)isCloudSyncEnabled;
+(BOOL)isVoiceAssistantEnabled;
+(id)cloudSyncDisabledFirstPartyBundleIds;
+(id)sharedInstance;
+(void)clearTestSettings;
+(void)disableBundleIdentifier:(id)arg0 ;
-(BOOL)bundleIdentifierIsEnabledForCloudKit:(id)arg0 ;
-(BOOL)bundleIdentifierIsEnabledForDonation:(id)arg0 ;
-(BOOL)hasWrittenSharedWithYouContentAvailable;
-(BOOL)hasWrittenSharedWithYouContentConsumed;
-(BOOL)isAuthorizedToLogLocation;
-(BOOL)queryPlanLoggingEnabled;
-(BOOL)showLocationsFoundInApps;
-(BOOL)trialUseDefaultFiles;
-(CGFloat)assetMetadataRefreshIntervalSeconds;
-(CGFloat)weightMultiplier;
-(id)abGroupOverride;
-(id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg0 ;
-(id)entitiesBackfilledTimestamp;
-(id)entitiesMappingPreviousTrieSha256;
-(id)init;
-(id)trialPathOverrideForNamespaceName:(id)arg0 factorName:(id)arg1 ;
-(id)trialPathOverrides;
-(id)userDefaults;
-(int)registerDisabledBundleIdentifierChangeHandler:(id)arg0 ;
-(int)registerQueryPlanLoggingChangeHandler:(id)arg0 ;
-(void)clearAssetMetadataRefreshIntervalSeconds;
-(void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg0 ;
-(void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)arg0 ;
-(void)refreshCloudKitDisabledBundleIdsAsync;
-(void)registerCloudKitDisabledBundleIdRewriteHandler;
-(void)registerDisabledBundleIdPurgeHandler;
-(void)rewriteSyncStateForDisabledBundleIdsAsync;
-(void)setAssetDefaultBundleOverridePath:(id)arg0 assetIdentifier:(id)arg1 ;
-(void)setAssetMetadataRefreshIntervalSeconds:(CGFloat)arg0 ;
-(void)setEntitiesBackfilledTimestamp:(id)arg0 ;
-(void)setEntitiesMappingTrieSha256:(id)arg0 ;
-(void)setQueryPlanLoggingEnabled:(BOOL)arg0 ;
-(void)setTrialPathOverrideForNamespaceName:(id)arg0 factorName:(id)arg1 path:(id)arg2 ;
-(void)setTrialUseDefaultFiles:(BOOL)arg0 ;
-(void)setWrittenSharedWithYouContentAvailable:(BOOL)arg0 ;
-(void)setWrittenSharedWithYouContentConsumed:(BOOL)arg0 ;
-(void)triggerDelayedCloudSyncRewrite;


@end


#endif