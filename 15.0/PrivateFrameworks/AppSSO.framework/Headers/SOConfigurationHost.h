// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOCONFIGURATIONHOST_H
#define SOCONFIGURATIONHOST_H

@class SOConfiguration, SOConfigurationVersion, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SOConfigurationHost : NSObject {
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
    NSMutableArray *_removedProfiles;
}


@property (readonly, nonatomic) NSInteger configVersion;


+(id)_loadProfilesFromDict:(id)arg0 ;
+(id)_loadProfilesFromURL:(id)arg0 ;
+(id)defaultManager;
-(BOOL)_initDataVaultIfNeededWithError:(*id)arg0 ;
-(BOOL)_isConfigFileAvailable;
-(BOOL)_saveConfigToFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveConfigurationData:(id)arg0 error:(*id)arg1 ;
-(NSInteger)willHandleURL:(id)arg0 responseCode:(NSInteger)arg1 callerBundleIdentifier:(id)arg2 ;
-(id)_checkAssociatedDomainForProfiles:(id)arg0 ;
-(id)_checkExtensionsExistenceForProfiles:(id)arg0 ;
-(id)_defaultConfigurationFile;
-(id)_defaultConfigurationPath;
-(id)_stringWithReason:(NSInteger)arg0 ;
-(id)configurationForClientWithError:(*id)arg0 ;
-(id)init;
-(id)profileForURL:(id)arg0 responseCode:(NSInteger)arg1 ;
-(id)profilesWithExtensionBundleIdentifier:(id)arg0 ;
-(id)realms;
-(id)removedProfileForExtensionBundleIdentifier:(id)arg0 ;
-(void)_checkNewVersion;
-(void)_configurationLoadedWithReason:(NSInteger)arg0 ;
-(void)_extensionsLoaded:(id)arg0 ;
-(void)_loadConfigForFirstTime;
-(void)_reloadConfigWithReason:(NSInteger)arg0 ;
-(void)_startKeyBagObserverForReloadingConfiguration;
-(void)dealloc;


@end


#endif