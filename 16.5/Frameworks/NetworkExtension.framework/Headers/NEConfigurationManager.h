// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NECONFIGURATIONMANAGER_H
#define NECONFIGURATIONMANAGER_H

@class NSString, NSDictionary, NSMutableDictionary, NSKeyedUnarchiver, NSData, NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEHelper.h"

@interface NEConfigurationManager : NSObject {
    NSString *_description;
    BOOL _hasReadPermission;
    BOOL _isVPNPublicAPI;
    BOOL _isVPNPrivateAPI;
    BOOL _isNEHelper;
    BOOL _isSynchronous;
    BOOL _isSyncedOnQueue;
    int _changedNotifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_outerQueue;
    NSDictionary *_currentIndex;
    NSObject<OS_dispatch_queue> *_changedQueue;
    id *_changedHandler;
    NSMutableDictionary *_loadedIndex;
    NSMutableDictionary *_loadedConfigurations;
    NSKeyedUnarchiver *_decoder;
    NSInteger _generation;
    NEHelper *_helper;
    NSData *_SCPreferencesSignature;
}


@property NSInteger configurationChangeSource; // ivar: _configurationChangeSource
@property BOOL hasVPNAPIEntitlement; // ivar: _hasVPNAPIEntitlement
@property (copy) id *incomingMessageHandler;
@property (readonly) NSString *pluginType; // ivar: _pluginType
@property (readonly) NSUUID *userUUID; // ivar: _userUUID


+(id)networkPrivacyConfigurationName;
+(id)sharedManager;
+(id)sharedManagerForAllUsers;
-(id)copyCurrentIndexWithConfigurationIDsExpunged:(id)arg0 ;
-(id)description;
-(id)getCurrentUserUUIDForConfigurationID:(id)arg0 fromIndex:(id)arg1 ;
-(id)init;
-(id)initForAllUsers;
-(id)initSynchronous;
-(id)initWithPluginType:(id)arg0 ;
-(void)copyIdentities:(id)arg0 fromDomain:(NSInteger)arg1 withCompletionQueue:(id)arg2 handler:(id)arg3 ;
-(void)dealloc;
-(void)fetchClientListenerWithBundleID:(id)arg0 completionQueue:(id)arg1 handler:(id)arg2 ;
-(void)fetchUpgradeInfoForPluginType:(id)arg0 completionQueue:(id)arg1 handler:(id)arg2 ;
-(void)handleApplicationsRemoved:(id)arg0 completionQueue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)handleFileRemovedWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadConfigurationAndUserWithID:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)loadConfigurationWithID:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)loadConfigurations:(id)arg0 withFilter:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)loadConfigurationsWithCompletionQueue:(id)arg0 handler:(id)arg1 ;
-(void)loadIndexWithFilter:(id)arg0 completionQueue:(id)arg1 handler:(id)arg2 ;
-(void)postGeneration;
-(void)removeConfiguration:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)removeConfigurationFromDisk:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)repopulateNetworkPrivacyConfigurationResetAll:(BOOL)arg0 ;
-(void)saveConfiguration:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)saveConfigurationToDisk:(id)arg0 currentSignature:(id)arg1 userUUID:(id)arg2 isUpgrade:(BOOL)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)setChangedQueue:(id)arg0 andHandler:(id)arg1 ;
-(void)showLocalNetworkAlertForApp:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)showLocalNetworkAlertForApp:(id)arg0 withCompletionQueue:(id)arg1 query:(id)arg2 hasEntitlement:(BOOL)arg3 handler:(id)arg4 ;
-(void)syncConfigurationsWithSC:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)triggerLocalAuthenticationForConfigurationWithID:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;


@end


#endif