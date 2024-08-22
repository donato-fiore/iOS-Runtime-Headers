// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDNDMODECONFIGURATIONCLIENT_H
#define ATXDNDMODECONFIGURATIONCLIENT_H

@class DNDModeConfigurationService, DNDGlobalConfigurationService, NSHashTable, NSDictionary, NSString;
@protocol ATXDNDModeConfigurationClientListenerDelegate, DNDModeConfigurationServiceListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXDNDModeConfigurationClient : NSObject <ATXDNDModeConfigurationClientListenerDelegate>

 {
    DNDModeConfigurationService *_dndConfigurationService;
    DNDGlobalConfigurationService *_dndGlobalConfigurationService;
    id<DNDModeConfigurationServiceListener> *_updateListener;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    BOOL _isCacheValid;
    NSDictionary *_cachedModeConfig;
    NSDictionary *_cachedModesByModeIdentifiers;
    NSDictionary *_cachedModesBySemanticType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isCloudSyncActive;
-(NSUInteger)atxModeForDNDMode:(id)arg0 ;
-(NSUInteger)atxModeForDNDSemanticType:(NSInteger)arg0 ;
-(id)_configuredModesBySemanticType;
-(id)_init;
-(id)appConfigurationsForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)configuredModes;
-(id)debug_allModeDescriptions;
-(id)dndModeForATXMode:(NSUInteger)arg0 ;
-(id)dndModeForDNDModeWithUUID:(id)arg0 ;
-(id)dndModeForDNDModeWithUUID:(id)arg0 useCache:(BOOL)arg1 ;
-(id)dndModeUUIDForDNDModeIdentifier:(id)arg0 ;
-(id)dndModeUUIDForDNDModeSemanticType:(NSInteger)arg0 ;
-(id)dndSemanticTypeForATXMode:(NSUInteger)arg0 ;
-(id)getAllModeConfigurationsWithoutCache;
-(id)iOSAppAllowListForMode:(NSInteger)arg0 ;
-(id)iOSAppDenyListForMode:(NSInteger)arg0 ;
-(id)iOSAppListForMode:(NSInteger)arg0 configurationType:(NSUInteger)arg1 ;
-(id)iOSContactAllowListForMode:(NSInteger)arg0 ;
-(id)iOSContactDenyListForMode:(NSInteger)arg0 ;
-(id)iOSContactListForMode:(NSInteger)arg0 configurationType:(NSUInteger)arg1 ;
-(id)modeConfigurationForDNDModeWithUUID:(id)arg0 ;
-(id)modeConfigurationForDNDModeWithUUID:(id)arg0 useCache:(BOOL)arg1 ;
-(id)modesByModeIdentifiers;
-(void)configuredModesDidChange;
-(void)invalidateCaches;
-(void)refreshCachedConfigs;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif