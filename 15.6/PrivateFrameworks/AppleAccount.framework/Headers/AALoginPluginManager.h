// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AALOGINPLUGINMANAGER_H
#define AALOGINPLUGINMANAGER_H

@class NSArray;
@protocol OS_dispatch_queue, AASetupAssistantDelegateService;

#import <Foundation/Foundation.h>


@interface AALoginPluginManager : NSObject {
    NSArray *_allowedPluginBundleIDs;
    NSArray *_plugins;
    BOOL _shouldStashLoginResponse;
    NSObject<OS_dispatch_queue> *_pluginNotificationQueue;
    id<AASetupAssistantDelegateService> *_idsPlugin;
}


@property (nonatomic) BOOL shouldSkipiTunesPlugin; // ivar: _shouldSkipiTunesPlugin
@property (nonatomic) BOOL shouldStashLoginResponse;


+(id)sharedInstance;
-(BOOL)_notifyServicesOfLoginResponse:(id)arg0 forAppleID:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 ;
-(id)_createLoginContextForAppleID:(id)arg0 rawPassword:(id)arg1 loginResponse:(id)arg2 ;
-(id)_idsPlugin;
-(id)_loadPluginsLimitedToBundleIDs:(id)arg0 ;
-(id)_plugins;
-(id)collectParametersForIdentityEstablishmentRequest;
-(id)collectParametersForLoginRequest;
-(id)init;
-(void)notifyServicesOfLoginResponse:(id)arg0 forAppleID:(id)arg1 password:(id)arg2 completion:(id)arg3 ;
-(void)notifyServicesOfLoginResponse:(id)arg0 forAppleID:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(id)arg4 ;
-(void)restrictToPluginBundleIDs:(id)arg0 ;
-(void)unstashLoginResponse;


@end


#endif