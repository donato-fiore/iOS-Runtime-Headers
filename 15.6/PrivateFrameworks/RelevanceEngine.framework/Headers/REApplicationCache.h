// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REAPPLICATIONCACHE_H
#define REAPPLICATIONCACHE_H

@class NSMutableDictionary, CSLPRFDefaultAppDataProvider, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, CSLPRFAppDataProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "REKeyValueMap.h"

@interface REApplicationCache : NSObject <LSApplicationWorkspaceObserverProtocol, CSLPRFAppDataProviderDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_applicationTypes;
    NSMutableDictionary *_restrictedApps;
    NSMutableDictionary *_removedApps;
    NSMutableDictionary *_watchKitExtensions;
    REKeyValueMap *_remoteApplicationsMap;
    CSLPRFDefaultAppDataProvider *_appProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_queue_applicationIsRemoved:(id)arg0 ;
-(BOOL)_queue_applicationIsRestricted:(id)arg0 ;
-(BOOL)applicationIsRemote:(id)arg0 ;
-(BOOL)applicationIsRemoved:(id)arg0 ;
-(BOOL)applicationIsRestricted:(id)arg0 ;
-(NSUInteger)_trackedApplicationCount;
-(NSUInteger)_typeForProxy:(id)arg0 ;
-(NSUInteger)typeForApplication:(id)arg0 ;
-(id)_init;
-(id)localApplicationForRemoteApplication:(id)arg0 ;
-(id)remoteApplicationForLocalApplication:(id)arg0 ;
-(id)watchKitExtensionForApplication:(id)arg0 ;
-(void)_accessRemoteApplicationsMapWithCompletion:(id)arg0 ;
-(void)_clearApplicationTypesMap;
-(void)_init_loadApplicationTypesMapFromWorkspace:(id)arg0 ;
-(void)_queue_applicationsDidChange:(id)arg0 ;
-(void)_queue_loadRemoteAppsCompletion:(id)arg0 ;
-(void)_queue_loadStateForBundleID:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)clearNanoRegistryApplications;
-(void)dataProviderDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif