// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKSYSTEMAPPSTATECACHE_H
#define NTKSYSTEMAPPSTATECACHE_H

@class NSMutableSet, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, NTKSystemAppStateCache, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKSystemAppStateCache : NSObject <LSApplicationWorkspaceObserverProtocol, NTKSystemAppStateCache>

 {
    NSMutableSet *_restrictedSystemApps;
    NSMutableSet *_removedSystemApps;
    NSMutableSet *_cachedAppStateBundleId;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_tinCanBundleID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isRemovedSystemApp:(id)arg0 ;
-(BOOL)isRestrictedSystemApp:(id)arg0 ;
-(id)_queue_cachedAppStateBundleId;
-(id)_queue_removedSystemApps;
-(id)_queue_restrictedSystemApps;
-(id)init;
-(id)removedSystemApps;
-(id)restrictedSystemApps;
-(void)_deviceDidPair;
-(void)_queue_applicationsDidChange:(id)arg0 state:(NSUInteger)arg1 ;
-(void)_queue_deviceDidPair;
-(void)_queue_initializeRemovedSystemApps;
-(void)_queue_initializeRestrictedSystemApps;
-(void)_queue_tinCanSettingsChanged;
-(void)_queue_verifyStateForAppBundleId:(id)arg0 ;
-(void)_tinCanSettingsChanged;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)prewarmGizmoDaemon;


@end


#endif