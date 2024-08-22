// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMOTECONFIGURATIONCONTROLLER_H
#define REMOTECONFIGURATIONCONTROLLER_H

@class NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ProviderConfiguration.h"

@interface RemoteConfigurationController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_currentConfiguration;
    NSObject<OS_dispatch_source> *_updateTimer;
    BOOL _googleConfigurationDidChange;
    BOOL _tencentConfigurationDidChange;
}


@property (readonly, nonatomic) ProviderConfiguration *googleProviderConfiguration; // ivar: _googleProviderConfiguration
@property (readonly, nonatomic, getter=isSafeBrowsingOff) BOOL safeBrowsingOff;
@property (readonly, nonatomic) ProviderConfiguration *tencentProviderConfiguration; // ivar: _tencentProviderConfiguration


+(id)sharedController;
-(BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg0 ;
-(BOOL)forceLoadConfigurationFromDisk;
-(BOOL)forceUpdateConfigurationFromServer;
-(id)_lastConfigurationUpdateAttemptDate;
-(id)_providerToTurnOffFromProviderDictionary:(id)arg0 ;
-(id)_urlOfDownloadedConfiguration;
-(id)init;
-(void)_didReceiveConfigurationData:(id)arg0 ;
-(void)_downloadConfigurationWithCompletionHandler:(id)arg0 ;
-(void)_initializeProviderConfigurationsWithConfiguration:(id)arg0 ;
-(void)_initializeToDefaultProviderConfigurations;
-(void)_loadConfigurationFromDiskIfNecessary;
-(void)_notifyProviderConfigurationsDidChangeIfNecessary;
-(void)_resetProviderConfigurationsDidChange;
-(void)_scheduleConfigurationUpdateDaily;
-(void)_setCurrentConfiguration:(id)arg0 ;
-(void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
-(void)_simplifyProviderConfigurations;
-(void)_updateConfigurationIfNecessary;
-(void)_writeConfigurationToDisk:(id)arg0 ;
-(void)dealloc;


@end


#endif