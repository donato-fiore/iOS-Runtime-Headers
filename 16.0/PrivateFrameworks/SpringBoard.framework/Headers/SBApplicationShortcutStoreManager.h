// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONSHORTCUTSTOREMANAGER_H
#define SBAPPLICATIONSHORTCUTSTOREMANAGER_H

@class NSLock, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBApplicationShortcutStoreManager : NSObject {
    NSLock *_stateLock;
    NSMutableDictionary *_storesKeyedByBundleIdentifier;
}




+(id)sharedManager;
-(id)_stateLock_storeForBundleIdentifier:(id)arg0 ;
-(id)applicationShortcutItemsForBundleIdentifier:(id)arg0 withVersion:(NSUInteger)arg1 ;
-(id)init;
-(void)_installedAppsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)invalidateCache;
-(void)saveSynchronously;
-(void)setApplicationShortcutItems:(id)arg0 forBundleIdentifier:(id)arg1 withVersion:(NSUInteger)arg2 ;


@end


#endif