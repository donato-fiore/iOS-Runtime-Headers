// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMBALLOONPLUGINMANAGER_H
#define IMBALLOONPLUGINMANAGER_H

@class NSMutableDictionary, NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface IMBalloonPluginManager : NSObject

@property (retain, nonatomic) id *extensionMatchingContext; // ivar: _extensionMatchingContext
@property (nonatomic) BOOL hasCompletedInitialization; // ivar: _hasCompletedInitialization
@property (nonatomic) BOOL hasDefferedInstalledAppsChangedNotification; // ivar: _hasDefferedInstalledAppsChangedNotification
@property (retain, nonatomic) id *highMemoryExtensionMatchingContext; // ivar: _highMemoryExtensionMatchingContext
@property (retain, nonatomic) NSMutableDictionary *pluginIDToMetadataCache; // ivar: _pluginIDToMetadataCache
@property (retain, nonatomic) NSString *pluginMetaDataFolder; // ivar: _pluginMetaDataFolder
@property (retain, nonatomic) NSMutableDictionary *pluginsMap; // ivar: _pluginsMap
@property (retain, nonatomic) NSMutableSet *pluginsToRemoveAfterExtensionsUpdate; // ivar: _pluginsToRemoveAfterExtensionsUpdate
@property (readonly, retain, nonatomic) Class richLinksDataSourceClass; // ivar: _richLinksDataSourceClass


+(BOOL)_allowExtensionWithIdentifier:(id)arg0 ;
+(BOOL)_isExtensionBlocklisted:(id)arg0 ;
+(BOOL)_isServerBlocklistedBundleIdentifier:(id)arg0 serverBag:(id)arg1 ;
+(BOOL)isRunningPPT;
+(id)_extensionBlocklist;
+(id)balloonProviderBundlePathURL;
+(id)precacheBalloonAppExtensionsForExtensions:(id)arg0 ;
+(id)sharedInstance;
+(void)disableExtensionDiscovery;
+(void)enableAlternatePathPlugins;
+(void)setIsRunningPPT:(BOOL)arg0 ;
-(Class)dataSourceClassForBundleID:(id)arg0 ;
-(id)_appProxyBundleIdentifiersForAppPlugins;
-(id)_currentlyInstalledExtensionsExcludingExtensionPoint:(id)arg0 ;
-(id)_extensionWithIdentifier:(id)arg0 ;
-(id)_fallBackMessagesExtensionPluginForBundleID:(id)arg0 ;
-(id)_identifiersForAppPlugins;
-(id)_infoPlistPathForPluginCreatingFolderIfNeeded:(id)arg0 ;
-(id)_insertPluginForAppBundle:(id)arg0 balloonProviderBundle:(id)arg1 ;
-(id)_insertPluginForExtension:(id)arg0 balloonProviderBundle:(id)arg1 precachedBalloonAppExtensions:(id)arg2 timingCollection:(id)arg3 ;
-(id)_loadAppExtensionDataSourcesForExtensionPoint:(id)arg0 ;
-(id)_metadataForPluginIdentifier:(id)arg0 ;
-(id)_pluginPlistPath:(id)arg0 ;
-(id)_pluginsForWhichWeHaveMetadata;
-(id)_proxyIdentifiersForPlugins;
-(id)allPlugins;
-(id)balloonPluginForBundleID:(id)arg0 ;
-(id)conversationID:(id)arg0 appID:(id)arg1 ;
-(id)dataSourceForPluginPayload:(id)arg0 ;
-(id)existingDataSourceForMessageGUID:(id)arg0 bundleID:(id)arg1 ;
-(id)init;
-(id)localParticipantIdentifierForAppID:(id)arg0 conversationID:(id)arg1 ;
-(id)recipientIDForRecipient:(id)arg0 appID:(id)arg1 ;
-(id)systemBundleIdentifierForPluginIdentifier:(id)arg0 ;
-(void)_clearPluginMetadataForUninstalledApps;
-(void)_deleteMetaDataForPlugins:(id)arg0 ;
-(void)_findPluginsInPathInternal:(id)arg0 ;
-(void)_findPluginsInPaths:(id)arg0 ;
-(void)_loadAllDataSources;
-(void)_loadAppBundleDataSources;
-(void)_loadAppExtensionDataSources;
-(void)_moveExtensionDataSourcesFromMessagesExtensionPluginToAppExtensions;
-(void)_postDeferredInstalledAppsChangedNotificationIfNecessary;
-(void)_postInstalledAppsChangedNotification;
-(void)_removePluginsForIdentifiers:(id)arg0 ;
-(void)_removePluginsWithDelay;
-(void)_setPluginsToRemoveAndCallSelectorWithDelay:(id)arg0 ;
-(void)_storeMetadata:(id)arg0 _forPlugin:(id)arg1 ;
-(void)_updatePluginsForBundles:(id)arg0 ;
-(void)_updatePluginsForExtensions:(id)arg0 extensionPoint:(id)arg1 ;
-(void)_updatePluginsForExtensions:(id)arg0 extensionPoint:(id)arg1 precachedBalloonAppExtensions:(id)arg2 ;
-(void)dealloc;
-(void)insertDataSource:(id)arg0 forGUID:(id)arg1 ;
-(void)loadExtensionWithIdentifierIfNeeded:(id)arg0 ;
-(void)pluginChatItem:(id)arg0 didRelenquishNonResuableController:(id)arg1 contextIdentifier:(id)arg2 ;
-(void)pluginChatItem:(id)arg0 didRelinquishReusableController:(id)arg1 contextIdentifier:(id)arg2 ;
-(void)removePluginWithBundleID:(id)arg0 ;
-(void)setPluginEnabled:(BOOL)arg0 identifier:(id)arg1 ;


@end


#endif