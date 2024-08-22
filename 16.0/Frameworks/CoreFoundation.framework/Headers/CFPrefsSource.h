// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFPREFSSOURCE_H
#define CFPREFSSOURCE_H


#import <Foundation/Foundation.h>

#import "_CFXPreferences.h"
#import "__CFPrefsWeakObservers.h"

@interface CFPrefsSource : NSObject {
    _CFXPreferences *_containingPreferences;
    *__CFDictionary _dict;
    __CFPrefsWeakObservers *_observers;
    uint8_t _generationCount;
    uint8_t shmemEntry;
    uint8_t lastKnownShmemState;
    os_unfair_lock_s _lock;
    BOOL _isSearchList;
}




-(*void)alreadylocked_copyValueForKey:(struct __CFString *)arg0 ;
-(*void)copyValueForKey:(struct __CFString *)arg0 ;
-(?)alreadylocked_setPrecopiedValues:(?)arg0 forKeys:(?)arg1 countfrom;
-(BOOL)isByHost;
-(BOOL)isDirectModeEnabled;
-(BOOL)isVolatile;
-(BOOL)managed;
-(BOOL)servedByUserSessionDaemon;
-(BOOL)synchronize;
-(NSInteger)alreadylocked_generationCount;
-(NSInteger)generationCount;
-(id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg0 forRole:(*int)arg1 ;
-(id)copyVolatileSourceWithContainingPreferences:(id)arg0 ;
-(id)createRequestNewContentMessageForDaemon:(int)arg0 ;
-(id)description;
-(id)initWithContainingPreferences:(id)arg0 ;
-(int)alreadylocked_updateObservingRemoteChanges;
-(struct __CFArray *)alreadylocked_copyKeyList;
-(struct __CFDictionary *)alreadylocked_copyDictionary;
-(struct __CFString *)container;
-(struct __CFString *)copyOSLogDescription;
-(struct __CFString *)domainIdentifier;
-(struct __CFString *)userIdentifier;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg0 toValuesForKeys:(id)arg1 ;
-(void)alreadylocked_clearCache;
-(void)dealloc;
-(void)fullCloudSynchronizeWithCompletionHandler:(id)arg0 ;
-(void)handleReply:(id)arg0 toRequestNewDataMessage:(id)arg1 onConnection:(id)arg2 retryCount:(int)arg3 error:(*BOOL)arg4 ;
-(void)lock;
-(void)mergeIntoDictionary:(struct __CFDictionary *)arg0 sourceDictionary:(struct __CFDictionary *)arg1 cloudKeyEvaluator:(id)arg2 ;
-(void)setAccessRestricted:(BOOL)arg0 ;
-(void)setBackupDisabled:(BOOL)arg0 ;
-(void)setConfigurationPath:(struct __CFString *)arg0 ;
-(void)setDaemonCacheEnabled:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFileProtectionClass:(int)arg0 ;
-(void)setStoreName:(struct __CFString *)arg0 ;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(id)arg0 ;
-(void)unlock;


@end


#endif