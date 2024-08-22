// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONSHORTCUTSTORE_H
#define SBAPPLICATIONSHORTCUTSTORE_H

@class NSLock, NSArray, FBSApplicationDataStore, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBApplicationShortcutStore : NSObject {
    NSLock *_stateLock;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_cachedApplicationShortcutItems;
    NSArray *_cachedLanguages;
    NSUInteger _cachedVersion;
    BOOL _isLoaded;
    BOOL _isDirty;
    FBSApplicationDataStore *_dataStore;
}


@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSArray *languages;
@property (readonly, nonatomic) NSUInteger version;


+(void)clearStore;
-(BOOL)_stateLock_truncateIfNeeded:(id)arg0 ;
-(id)_applicationShortcutItemsFromPlistArray:(id)arg0 ;
-(id)_plistArrayFromApplicationShortcutItems:(id)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)_saveQueue_save;
-(void)_stateLock_loadFromStoreIfNeeded;
-(void)_stateLock_markDirty;
-(void)invalidateCache;
-(void)saveSynchronously;
-(void)truncateIfNecessary;


@end


#endif