// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBREUSABLETABMANAGER_H
#define WBREUSABLETABMANAGER_H

@class NSCache, NSTimer, NSString;
@protocol NSCacheDelegate, WBTabGroupManagerObserver;

#import <Foundation/Foundation.h>


@interface WBReusableTabManager : NSObject <NSCacheDelegate, WBTabGroupManagerObserver>

 {
    NSCache *_uuidToTabCache;
    BOOL _reusing;
    NSTimer *_cleanupTimer;
    BOOL _pendingCleanup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)isTabSuspended:(id)arg0 ;
-(id)_referenceToTabWithUUID:(id)arg0 ;
-(id)allGroupsTabsUUIDs;
-(id)init;
-(id)reuseTabForUUID:(id)arg0 ;
-(id)tabGroupManager;
-(id)windowStates;
-(void)_addTabUUIDsFromGroup:(id)arg0 toSet:(id)arg1 ;
-(void)_cleanup;
-(void)_scheduleCleanup;
-(void)addReusableTab:(id)arg0 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)enumerateReusableTabs:(id)arg0 ;
-(void)tabGroupManager:(id)arg0 didRemoveTabGroup:(id)arg1 ;


@end


#endif