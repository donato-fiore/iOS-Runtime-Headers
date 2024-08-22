// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISSOFTWAREMAP_H
#define ISSOFTWAREMAP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ISSoftwareMap : NSObject {
    NSArray *_applications;
}


@property (readonly, nonatomic) NSArray *applications;


+(BOOL)currentMapIsValid;
+(BOOL)haveApplicationsOfType:(id)arg0 ;
+(id)_newSoftwareUpdateDictionaryForApplication:(id)arg0 ;
+(id)applicationForBundleIdentifier:(id)arg0 ;
+(id)applicationForBundleIdentifier:(id)arg0 applicationType:(id)arg1 ;
+(id)applicationForPluginBundleIdentifier:(id)arg0 ;
+(id)applicationForPluginBundleIdentifier:(id)arg0 extensionType:(id)arg1 ;
+(id)containerPathForApp:(id)arg0 homeDirectory:(id)arg1 systemMetadataDirectory:(id)arg2 ;
+(id)copySoftwareUpdatesPropertyListWithApplications:(id)arg0 updatesContext:(id)arg1 ;
+(id)currentMap;
+(id)loadedMap;
+(void)_startWatchingInstallationNotifications;
+(void)enumerateApplicationsForProxies:(id)arg0 usingBlock:(id)arg1 ;
+(void)enumerateApplicationsOfType:(NSUInteger)arg0 usingBlock:(id)arg1 ;
+(void)invalidateCurrentMap;
+(void)removableSystemApplicationsWithCompletionBlock:(id)arg0 ;
+(void)setCurrentMap:(id)arg0 ;
+(void)startObservingNotifications;
-(id)applicationForBundleIdentifier:(id)arg0 ;
-(id)applicationForItemIdentifier:(id)arg0 ;
-(id)copySoftwareUpdatesPropertyList;
-(id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg0 ;
-(id)init;
-(void)_loadFromMobileInstallation;
-(void)dealloc;


@end


#endif