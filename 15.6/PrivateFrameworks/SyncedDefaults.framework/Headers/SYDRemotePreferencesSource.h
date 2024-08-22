// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYDREMOTEPREFERENCESSOURCE_H
#define SYDREMOTEPREFERENCESSOURCE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "SYDClient.h"

@interface SYDRemotePreferencesSource : NSObject {
    NSInteger _generationCount;
    NSInteger _lastGenerationFromDisk;
    *__CFString _preferenceID;
    *__CFURL _urlOnDisk;
    *__CFDictionary _cache;
    NSInteger _storageChangeCount;
    NSInteger _initialSyncChangeCount;
    unsigned char _isInitialSync;
    *__CFSet _dirtyKeys;
    *__CFDictionary _configurationDictionary;
    NSMutableDictionary *_externalChanges;
    SYDClient *_client;
    id *_registrationBlock;
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSObject<OS_dispatch_queue> *_protectionQueue;
    BOOL _memoryWarningSourceEnabled;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    CGFloat _lastAccess;
    BOOL _forceNextSynchronization;
    NSObject<OS_os_transaction> *_isExecutingForClient;
}




+(BOOL)alwaysUseKVSOnCloudKit;
+(id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+(id)SYDRemotePreferencesSourceDidChangeNotification;
+(id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+(void)initialize;
+(void)migrateSyncedDefaultsForBundleIdentifier:(id)arg0 ;
+(void)noteAccountChanges:(id)arg0 ;
+(void)resetAllApplicationsWithCompletionHandler:(id)arg0 ;
+(void)setAlwaysUseKVSOnCloudKit:(BOOL)arg0 ;
-(*void)getValueForKey:(struct __CFString *)arg0 ;
-(BOOL)setObject:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(NSInteger)configurationValueForKey:(struct __CFString *)arg0 ;
-(NSInteger)generationCount;
-(NSInteger)maximumDataLengthPerKey;
-(NSInteger)maximumKeyCount;
-(NSInteger)maximumKeyLength;
-(NSInteger)maximumTotalDataLength;
-(id)_warningSource;
-(id)copyExternalChangesWithChangeCount:(*NSInteger)arg0 ;
-(id)dictionaryRepresentationWithError:(*id)arg0 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 shared:(BOOL)arg1 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(BOOL)arg2 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(BOOL)arg2 additionalSource:(BOOL)arg3 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(BOOL)arg2 additionalSource:(BOOL)arg3 containerPath:(struct __CFString *)arg4 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(BOOL)arg2 additionalSource:(BOOL)arg3 containerPath:(struct __CFString *)arg4 storeType:(NSInteger)arg5 ;
-(id)objectForKey:(id)arg0 error:(*id)arg1 ;
-(id)serverSideDebugDescription;
-(struct __CFArray *)copyKeyList;
-(struct __CFDictionary *)copyConfigurationDictionary;
-(struct __CFDictionary *)copyDictionary;
-(unsigned char)_synchronizeForced:(unsigned char)arg0 ;
-(unsigned char)hasExternalChanges;
-(unsigned char)isInitialSync;
-(unsigned char)synchronize;
-(unsigned char)synchronizeForced:(unsigned char)arg0 ;
-(void)_cachePlistFromDisk;
-(void)_createMemoryWarningSource;
-(void)_didReceiveMemoryWarning;
-(void)_forceRegistrationNow;
-(void)_locked_syd_end_transaction;
-(void)_locked_syd_start_transaction;
-(void)_storeConfiguration:(struct __CFDictionary *)arg0 ;
-(void)dealloc;
-(void)discardExternalChangesForChangeCount:(NSInteger)arg0 ;
-(void)ping;
-(void)registerForSynchronizedDefaults;
-(void)scheduleRemoteSynchronization;
-(void)setCache:(struct __CFDictionary *)arg0 ;
-(void)setDefaultsConfiguration:(id)arg0 ;
-(void)setValue:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(void)synchronizationWithCompletionHandler:(id)arg0 ;
-(void)unregisterForSynchronizedDefaults;
-(void)updateConfiguration;


@end


#endif