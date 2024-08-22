// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NECONFIGURATIONMANAGER_H
#define NECONFIGURATIONMANAGER_H

@class NSString, NSData, NSDictionary, NSKeyedUnarchiver, NSMutableDictionary, NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEHelper.h"

@interface NEConfigurationManager : NSObject {
    NSString *_description;
}


@property (retain) NSData *SCPreferencesSignature; // ivar: _SCPreferencesSignature
@property (copy) id *changedHandler; // ivar: _changedHandler
@property int changedNotifyToken; // ivar: _changedNotifyToken
@property (retain) NSObject<OS_dispatch_queue> *changedQueue; // ivar: _changedQueue
@property NSInteger configurationChangeSource; // ivar: _configurationChangeSource
@property (retain) NSDictionary *currentIndex; // ivar: _currentIndex
@property (retain) NSKeyedUnarchiver *decoder; // ivar: _decoder
@property NSInteger generation; // ivar: _generation
@property BOOL hasReadPermission; // ivar: _hasReadPermission
@property BOOL hasVPNAPIEntitlement; // ivar: _hasVPNAPIEntitlement
@property (retain) NEHelper *helper; // ivar: _helper
@property (copy) id *incomingMessageHandler;
@property BOOL isNEHelper; // ivar: _isNEHelper
@property BOOL isSyncedOnQueue; // ivar: _isSyncedOnQueue
@property (nonatomic) BOOL isSynchronous; // ivar: _isSynchronous
@property BOOL isVPNPrivateAPI; // ivar: _isVPNPrivateAPI
@property BOOL isVPNPublicAPI; // ivar: _isVPNPublicAPI
@property (retain) NSMutableDictionary *loadedConfigurations; // ivar: _loadedConfigurations
@property (retain) NSMutableDictionary *loadedIndex; // ivar: _loadedIndex
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outerQueue; // ivar: _outerQueue
@property (readonly) NSString *pluginType; // ivar: _pluginType
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSUUID *userUUID; // ivar: _userUUID


+(BOOL)configurationIsEnabled:(id)arg0 ;
+(NSInteger)configuration:(id)arg0 overlapsWithOtherConfiguration:(id)arg1 sameTypeCount:(*NSUInteger)arg2 ;
+(id)sharedManager;
+(id)sharedManagerForAllUsers;
+(void)disableConfiguration:(id)arg0 onDemandOnly:(BOOL)arg1 ;
+(void)updateFlags:(*NSUInteger)arg0 withConfiguration:(id)arg1 ;
-(BOOL)configurationHasChanged:(id)arg0 ;
-(BOOL)isSystemConfiguration:(id)arg0 ;
-(BOOL)reloadFromDisk;
-(BOOL)resetKeychainItemsAfterProtocolChange:(id)arg0 newConfiguration:(id)arg1 ;
-(id)copyChangedConfigurationIDs:(id)arg0 ;
-(id)copyCurrentIndexWithConfigurationIDsExpunged:(id)arg0 ;
-(id)decodeConfigurationWithIdentifier:(id)arg0 ;
-(id)description;
-(id)errorWithCode:(NSInteger)arg0 specifics:(id)arg1 ;
-(id)filterIndexWithFilter:(id)arg0 ;
-(id)getConfigurationUserUUID:(id)arg0 ;
-(id)getCurrentUserUUIDForConfigurationID:(id)arg0 fromIndex:(id)arg1 ;
-(id)init;
-(id)initForAllUsers;
-(id)initSynchronous;
-(id)initWithPluginType:(id)arg0 ;
-(id)initWithUserUUID:(id)arg0 ;
-(id)makeMutableCopyOfIndex:(id)arg0 ;
-(id)readIndexFromDiskWithError:(*id)arg0 ;
-(id)removeConfigurationFromDisk:(id)arg0 updateSCPreferences:(struct __SCPreferences *)arg1 ;
-(id)saveConfigurationToDisk:(id)arg0 updateSCPreferences:(struct __SCPreferences *)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 notifyNow:(BOOL)arg4 isUpgrade:(BOOL)arg5 ;
-(void)clearLoadedConfigurationsWithIDs:(id)arg0 ;
-(void)copyIdentities:(id)arg0 fromDomain:(NSInteger)arg1 withCompletionQueue:(id)arg2 handler:(id)arg3 ;
-(void)dealloc;
-(void)didLoadConfiguration:(id)arg0 ;
-(void)didLoadConfiguration:(id)arg0 withSignature:(id)arg1 ;
-(void)executeBlock:(id)arg0 ;
-(void)executeCallbackOnQueue:(id)arg0 callback:(id)arg1 ;
-(void)fetchClientListenerWithBundleID:(id)arg0 completionQueue:(id)arg1 handler:(id)arg2 ;
-(void)fetchUpgradeInfoForPluginType:(id)arg0 completionQueue:(id)arg1 handler:(id)arg2 ;
-(void)getCurrentIndexWithCompletionHandler:(id)arg0 ;
-(void)handleApplicationsRemoved:(id)arg0 completionQueue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)handleFileRemovedWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)handlePluginTypesRemoved:(id)arg0 configuration:(id)arg1 vpn:(id)arg2 updateSCPreferences:(struct __SCPreferences *)arg3 ;
-(void)loadConfigurationAndUserWithID:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)loadConfigurationWithID:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)loadConfigurations:(id)arg0 withFilter:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)loadConfigurationsInternal:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)loadConfigurationsWithCompletionQueue:(id)arg0 handler:(id)arg1 ;
-(void)loadIndexWithFilter:(id)arg0 completionQueue:(id)arg1 handler:(id)arg2 ;
-(void)loadLegacyPluginConfigurationsWithCompletionQueue:(id)arg0 handler:(id)arg1 ;
-(void)notifyChanges;
-(void)postChangeNotification;
-(void)postChangeNotificationWithGeneration:(NSInteger)arg0 andFlags:(NSUInteger)arg1 onlyIfChanged:(BOOL)arg2 ;
-(void)postGeneration;
-(void)registerForChangeNotifications;
-(void)removeConfiguration:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)removeConfigurationFromDisk:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)repopulateNetworkPrivacyConfigurationResetAll:(BOOL)arg0 ;
-(void)saveConfiguration:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)saveConfigurationToDisk:(id)arg0 currentSignature:(id)arg1 userUUID:(id)arg2 isUpgrade:(BOOL)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)sendRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)showLocalNetworkAlertForApp:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)showLocalNetworkAlertForApp:(id)arg0 withCompletionQueue:(id)arg1 query:(id)arg2 hasEntitlement:(BOOL)arg3 handler:(id)arg4 ;
-(void)syncConfigurationsWithSC:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)triggerLocalAuthenticationForConfigurationWithID:(id)arg0 withCompletionQueue:(id)arg1 handler:(id)arg2 ;
-(void)upgradeLegacyPluginConfigurations:(id)arg0 withUpgradeInfo:(id)arg1 completionQueue:(id)arg2 handler:(id)arg3 ;


@end


#endif