// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUIACCOUNTVIEWPROVIDERSMANAGER_H
#define ACUIACCOUNTVIEWPROVIDERSMANAGER_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ACUIAccountViewProvidersManager : NSObject {
    NSDictionary *_accountTypeToPluginNameMap;
    NSDictionary *_remoteAccountTypeToPluginNameMapOverride;
    NSMutableDictionary *_pluginCache;
}




+(id)sharedInstance;
-(BOOL)setDelegate:(id)arg0 forSignInController:(id)arg1 forAccountWithType:(id)arg2 ;
-(Class)controllerClassForCreatingAccountWithType:(id)arg0 ;
-(Class)controllerClassForCreatingRemoteAccountWithType:(id)arg0 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg0 ;
-(Class)viewControllerClassForViewingAccount:(id)arg0 ;
-(id)_accountViewProviderPluginForAccountTypeID:(id)arg0 ;
-(id)_cachedPluginForName:(id)arg0 ;
-(id)_loadAccountViewProviderPluginWithName:(id)arg0 ;
-(id)_remoteAccountViewProviderPluginForAccountTypeID:(id)arg0 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg0 ;
-(id)configurationInfoForViewingAccount:(id)arg0 ;
-(id)init;
-(id)localizedStringForDataclass:(id)arg0 withSuffix:(id)arg1 forAccount:(id)arg2 ;


@end


#endif