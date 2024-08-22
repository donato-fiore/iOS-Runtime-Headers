// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPPREDICTIONBLACKLIST_H
#define ATXAPPPREDICTIONBLACKLIST_H

@class _PASLock, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXGlobals.h"

@interface ATXAppPredictionBlacklist : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id *_blacklistNotificationToken;
    NSUserDefaults *_userDefaults;
    _ATXGlobals *_globals;
}




+(id)sharedInstance;
-(id)disabledBundleIds;
-(id)init;
-(id)initWithUserDefaults:(id)arg0 globals:(id)arg1 ;
-(int)registerPrefsChangeHandler:(id)arg0 ;
-(void)_createBlacklistFromPreferencesDisabledApps;
-(void)_listenForUpdates;
-(void)_performMigrationsIfNeeded;
-(void)_resetBlacklistWithSet:(id)arg0 ;
-(void)_updateBlacklist;
-(void)_updateBlacklistFromGlobalsBlacklistedApps;
-(void)dealloc;
-(void)deregisterPrefsChangeHandlerWithToken:(int)arg0 ;


@end


#endif