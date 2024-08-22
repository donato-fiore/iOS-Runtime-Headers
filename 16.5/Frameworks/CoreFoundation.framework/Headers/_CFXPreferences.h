// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CFXPREFERENCES_H
#define _CFXPREFERENCES_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _CFXPreferences : NSObject {
    *__CFDictionary _sources;
    *__CFDictionary _namedVolatileSources;
    *__CFDictionary _searchLists;
    NSObject<OS_xpc_object> *_systemSessionDaemonConnection;
    NSObject<OS_xpc_object> *_userSessionDaemonConnection;
    NSObject<OS_xpc_object> *_directConnection;
    unsigned int _launchdUID;
    unsigned int _euid;
    uint8_t _userHomeDirectoryState;
    os_unfair_lock_s _sourcesLock;
    os_unfair_lock_s _searchListsLock;
    os_unfair_lock_s _namedVolatileSourcesLock;
    *__CFSet _groupContainersForCurrentUser;
}




+(id)copyDefaultPreferences;
-(*void)copyAppValueForKey:(struct __CFString *)arg0 identifier:(struct __CFString *)arg1 container:(struct __CFString *)arg2 configurationURL:(struct __CFURL *)arg3 ;
-(*void)copyValueForKey:(struct __CFString *)arg0 identifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 host:(struct __CFString *)arg3 container:(struct __CFString *)arg4 ;
-(id)init;
-(void)assertEquivalence:(BOOL)arg0 ofIdentifiers:(struct __CFArray *)arg1 containers:(struct __CFArray *)arg2 cloudConfigurationURLs:(struct __CFArray *)arg3 ;
-(void)assertEquivalence:(BOOL)arg0 ofIdentifiers:(struct __CFArray *)arg1 users:(struct __CFArray *)arg2 hosts:(struct __CFArray *)arg3 containers:(struct __CFArray *)arg4 managedFlags:(struct __CFArray *)arg5 cloudFlags:(struct __CFArray *)arg6 ;
-(void)dealloc;
-(void)generateKVONotificationsForIdentifier:(struct __CFString *)arg0 withOldValues:(id)arg1 newValues:(id)arg2 ;
-(void)registerDefaultValues:(struct __CFDictionary *)arg0 ;
-(void)registerUserDefaultsInstance:(id)arg0 configurationURL:(struct __CFURL *)arg1 ;
-(void)resetPreferences:(BOOL)arg0 ;
-(void)setDaemonCacheEnabled:(BOOL)arg0 identifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 host:(struct __CFString *)arg3 container:(struct __CFString *)arg4 ;
-(void)setValue:(*void)arg0 forKey:(struct __CFString *)arg1 appIdentifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3 configurationURL:(struct __CFURL *)arg4 ;
-(void)simulateTimerSynchronizeForTestingForUser:(struct __CFString *)arg0 ;
-(void)unregisterUserDefaultsInstance:(id)arg0 ;


@end


#endif