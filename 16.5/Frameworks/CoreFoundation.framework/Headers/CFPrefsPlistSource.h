// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFPREFSPLISTSOURCE_H
#define CFPREFSPLISTSOURCE_H



#import "CFPrefsSource.h"

@interface CFPrefsPlistSource : CFPrefsSource {
    *__CFString userIdentifier;
    *__CFString domainIdentifier;
    *__CFString container;
    ? _locallySetDict;
    uint8_t accessPath;
    uint8_t _isByHost;
    uint8_t _volatile;
    uint8_t _readonly;
    uint8_t _avoidsDaemonCache;
    uint8_t _restrictedAccess;
    uint8_t _checkedInvalidHome;
    uint8_t _lastWriteFailed;
    uint8_t _observing;
    uint8_t _byteCountLimitExceeded;
    uint8_t _directMode;
    uint8_t _disableBackup;
    uint8_t _fileProtectionClass;
}




-(*void)alreadylocked_copyValueForKey:(struct __CFString *)arg0 ;
-(*void)copyValueForKey:(struct __CFString *)arg0 ;
-(?)alreadylocked_setPrecopiedValues:(?)arg0 forKeys:(?)arg1 countfrom;
-(BOOL)isByHost;
-(BOOL)isDirectModeEnabled;
-(BOOL)isVolatile;
-(BOOL)servedByUserSessionDaemon;
-(BOOL)synchronize;
-(NSInteger)alreadylocked_generationCount;
-(NSInteger)generationCount;
-(id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg0 forRole:(*int)arg1 ;
-(id)createRequestNewContentMessageForDaemon:(int)arg0 ;
-(id)createSynchronizeMessage;
-(id)initWithDomain:(struct __CFString *)arg0 user:(struct __CFString *)arg1 byHost:(BOOL)arg2 containerPath:(struct __CFString *)arg3 containingPreferences:(id)arg4 ;
-(int)alreadylocked_updateObservingRemoteChanges;
-(struct __CFArray *)alreadylocked_copyKeyList;
-(struct __CFDictionary *)alreadylocked_copyDictionary;
-(struct __CFString *)container;
-(struct __CFString *)domainIdentifier;
-(struct __CFString *)userIdentifier;
-(void)alreadylocked_clearCache;
-(void)dealloc;
-(void)handleReply:(id)arg0 toRequestNewDataMessage:(id)arg1 onConnection:(id)arg2 retryCount:(int)arg3 error:(*BOOL)arg4 ;
-(void)setAccessRestricted:(BOOL)arg0 ;
-(void)setBackupDisabled:(BOOL)arg0 ;
-(void)setDaemonCacheEnabled:(BOOL)arg0 ;
-(void)setFileProtectionClass:(int)arg0 ;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(id)arg0 ;


@end


#endif