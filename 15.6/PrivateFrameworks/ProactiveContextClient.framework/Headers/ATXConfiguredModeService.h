// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCONFIGUREDMODESERVICE_H
#define ATXCONFIGUREDMODESERVICE_H

@class DNDModeConfigurationService, ATXGenericFileBasedCache, NSString;
@protocol DNDModeConfigurationServiceListener;

#import <Foundation/Foundation.h>


@interface ATXConfiguredModeService : NSObject <DNDModeConfigurationServiceListener>

 {
    DNDModeConfigurationService *_service;
    ATXGenericFileBasedCache *_cache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isActivityTypeConfigured:(NSUInteger)arg0 uuid:(*id)arg1 allowsSmartEntry:(*BOOL)arg2 userModeName:(*id)arg3 dndConfigs:(id)arg4 ;
-(BOOL)_isActivityWithUUIDConfigured:(id)arg0 activityType:(*NSUInteger)arg1 allowsSmartEntry:(*BOOL)arg2 userModeName:(*id)arg3 dndConfigs:(id)arg4 ;
-(BOOL)isActivityTypeConfigured:(NSUInteger)arg0 ;
-(BOOL)isActivityTypeConfigured:(NSUInteger)arg0 uuid:(*id)arg1 allowsSmartEntry:(*BOOL)arg2 userModeName:(*id)arg3 ;
-(BOOL)isActivityWithUUIDConfigured:(id)arg0 ;
-(BOOL)isActivityWithUUIDConfigured:(id)arg0 activityType:(*NSUInteger)arg1 allowsSmartEntry:(*BOOL)arg2 userModeName:(*id)arg3 ;
-(id)DNDModeConfigurationForActivityWithUUID:(id)arg0 ;
-(id)_DNDModeConfigurationForActivityWithUUID:(id)arg0 dndConfigs:(id)arg1 ;
-(id)_cacheAndReturnDNDModeConfigurationDictionary;
-(id)_modeConfigurationsReturningError:(*id)arg0 ;
-(id)_nsDataFromDNDModeConfigurationDictionary:(id)arg0 ;
-(id)_retrieveCachedDNDModeConfigurationDictionary;
-(id)dndModeConfigurationDictionaryFromNSData:(id)arg0 ;
-(id)init;
-(void)_cacheDNDModeConfigurationDictionary:(id)arg0 ;
-(void)_checkIfConfigurationOfCurrentModeChangedWithDNDConfigs:(id)arg0 ;
-(void)_createServiceIfNeeded;
-(void)_updateUserDefaultsForAnyNewlyAddedModesWithDNDConfigs:(id)arg0 ;
-(void)modeConfigurationService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;


@end


#endif