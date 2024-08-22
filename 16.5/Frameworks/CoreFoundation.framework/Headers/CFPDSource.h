// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFPDSOURCE_H
#define CFPDSOURCE_H

@protocol OS_xpc_object, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "CFPrefsDaemon.h"
#import "CFPDDataBuffer.h"

@interface CFPDSource : NSObject {
    CFPrefsDaemon *_cfprefsd;
    CFPDDataBuffer *_plist;
    NSObject<OS_xpc_object> *_pendingChangesQueue;
    NSUInteger _pendingChangesSize;
    *__CFString _userName;
    *__CFString _domain;
    char * _actualPath;
    char * _fileName;
    *__CFSet _observingConnections;
    NSObject<OS_os_transaction> *_dirtyTransaction;
    *__CFString _uncanonicalizedPathCache;
    os_unfair_lock_s _uncanonicalizedPathCacheLock;
    os_unfair_lock_s _observingConnectionsLock;
    os_unfair_lock_s _writeLock;
    os_unfair_lock_s _lock;
    unsigned int _plistFileOwner;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    int _fileProtectionClass;
    int _parentFD;
    int _cachedPlistFD;
    short _generationShmemIndex;
    BOOL _byHost;
    BOOL _managed;
    BOOL _managedUsesContainer;
    BOOL _watchingParentDirectory;
    BOOL _handlingRequest;
    BOOL _dirty;
    BOOL _neverCache;
    BOOL _checkedForNonPrefsPlist;
    BOOL _restrictedReadability;
    BOOL _waitingForDeviceUnlock;
    BOOL _disableBackup;
    BOOL _plistFileOwnerReadable;
    BOOL _plistFileWorldReadable;
    BOOL _actualPathRedirectedByTerminalSymlink;
}




-(BOOL)byHost;
-(BOOL)enqueueNewKey:(id)arg0 value:(id)arg1 encoding:(int)arg2 inBatch:(BOOL)arg3 fromMessage:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)managed;
-(NSUInteger)hash;
-(id)acceptMessage:(id)arg0 ;
-(id)copyPropertyListValidatingPlist:(BOOL)arg0 ;
-(id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg0 andReturnFileUID:(*unsigned int)arg1 andMode:(*unsigned short)arg2 ;
-(id)createDiskWrite:(SEL)arg0 ;
-(id)description;
-(id)initWithDomain:(struct __CFString *)arg0 userName:(struct __CFString *)arg1 byHost:(BOOL)arg2 managed:(BOOL)arg3 shmemIndex:(short)arg4 daemon:(id)arg5 ;
-(int)cacheFileInfoForWriting:(BOOL)arg0 euid:(unsigned int)arg1 egid:(unsigned int)arg2 didCreate:(*BOOL)arg3 ;
-(int)validateMessage:(id)arg0 withNewKey:(id)arg1 newValue:(id)arg2 plistIsAvailableToRead:(BOOL)arg3 containerPath:(char *)arg4 fileUID:(unsigned int)arg5 mode:(unsigned short)arg6 diagnosticMessage:(*char *)arg7 ;
-(short)shmemIndex;
-(struct __CFString *)cloudConfigurationPath;
-(struct __CFString *)container;
-(struct __CFString *)copyUncanonicalizedPath;
-(struct __CFString *)debugDump;
-(struct __CFString *)domain;
-(struct __CFString *)user;
-(void)asyncNotifyObserversOfWriteFromConnection:(id)arg0 message:(id)arg1 ;
-(void)cacheFileInfo;
-(void)cleanUpAfterAcceptingMessage:(id)arg0 ;
-(void)clearCacheForReason:(struct __CFString *)arg0 ;
-(void)dealloc;
-(void)drainPendingChanges;
-(void)finishedNonRequestWriteWithResult:(struct __CFDictionary *)arg0 ;
-(void)handleWritingResult:(struct __CFDictionary *)arg0 ;
-(void)lock;
-(void)lockedAsync:(id)arg0 ;
-(void)lockedSync:(id)arg0 ;
-(void)observingConnectionWasInvalidated:(id)arg0 ;
-(void)processEndOfMessageIntendingToRemoveSource:(*BOOL)arg0 ;
-(void)respondToFileWrittenToBehindOurBack;
-(void)setDirty:(BOOL)arg0 ;
-(void)setManagedPreferencesUseContainer:(BOOL)arg0 ;
-(void)setUncanonicalizedPathCached:(BOOL)arg0 ;
-(void)syncWriteToDisk;
-(void)syncWriteToDiskAndFlushCacheForReason:(struct __CFString *)arg0 ;
-(void)unlock;
-(void)updateShmemEntry;


@end


#endif