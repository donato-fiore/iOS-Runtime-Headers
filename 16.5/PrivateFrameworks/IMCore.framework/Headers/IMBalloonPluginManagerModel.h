// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMBALLOONPLUGINMANAGERMODEL_H
#define IMBALLOONPLUGINMANAGERMODEL_H

@class NSDictionary, NSString, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMThreadSafeBalloonPluginMap.h"

@interface IMBalloonPluginManagerModel : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // ivar: _dataQueue
@property (retain, nonatomic) id *extensionMatchingContext; // ivar: _extensionMatchingContext
@property (nonatomic) BOOL hasCompletedInitialization; // ivar: _hasCompletedInitialization
@property (nonatomic) BOOL hasDeferredInstalledAppsChangedNotification; // ivar: _hasDeferredInstalledAppsChangedNotification
@property (retain, nonatomic) id *highMemoryExtensionMatchingContext; // ivar: _highMemoryExtensionMatchingContext
@property (retain, nonatomic) NSDictionary *pluginIDToMetadataCache; // ivar: _pluginIDToMetadataCache
@property (retain, nonatomic) NSString *pluginMetaDataFolder; // ivar: _pluginMetaDataFolder
@property (readonly, nonatomic) IMThreadSafeBalloonPluginMap *pluginsMap; // ivar: _pluginsMap
@property (retain, nonatomic) NSSet *pluginsToRemoveAfterExtensionsUpdate; // ivar: _pluginsToRemoveAfterExtensionsUpdate


-(id)init;


@end


#endif