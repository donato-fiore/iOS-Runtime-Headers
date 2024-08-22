// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYDCLIENTTODAEMONCONNECTION_H
#define SYDCLIENTTODAEMONCONNECTION_H

@class NSLock, NSCache, NSString, NSXPCConnection;
@protocol SYDClientProtocol, OS_dispatch_queue;


#import "SYDRemotePreferencesSource.h"
#import "SYDStoreConfiguration.h"

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // ivar: _analyticsQueue
@property (retain, nonatomic) NSLock *cacheLock; // ivar: _cacheLock
@property (retain, nonatomic) NSCache *cachedObjects; // ivar: _cachedObjects
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) int daemonWakeNotifyToken; // ivar: _daemonWakeNotifyToken
@property (nonatomic) BOOL didLogFaultForEntitlements; // ivar: _didLogFaultForEntitlements
@property (readonly, nonatomic) BOOL isSyncingWithCloud;
@property BOOL needsChangeDictionaryFromDaemon; // ivar: _needsChangeDictionaryFromDaemon
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) SYDStoreConfiguration *storeConfiguration; // ivar: _storeConfiguration
@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) NSInteger storeType;
@property NSUInteger syncingWithCloudCounter; // ivar: _syncingWithCloudCounter
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)hasInitializedStoreWithIdentifier:(id)arg0 ;
+(BOOL)isCloudSyncUserDefaultEnabledForStoreIdentifier:(id)arg0 ;
+(id)allStoreIdentifiersWithError:(*id)arg0 ;
+(id)clientProtocolInterface;
+(id)daemonProtocolInterface;
+(id)defaultStoreIdentifierForCurrentProcessWithApplicationIdentifier:(id)arg0 ;
+(id)disgustingUglyHardcodedKnownStoreIdentifierForApplicationIdentifier:(id)arg0 ;
+(id)newXPCConnection;
+(id)shouldSyncOnFirstInitializationOverride;
+(void)processAccountChangesWithCompletionHandler:(id)arg0 ;
+(void)setCloudSyncUserDefaultEnabled:(BOOL)arg0 storeIdentifier:(id)arg1 ;
+(void)setHasInitializedStoreWithIdentifier:(id)arg0 ;
+(void)setShouldSyncOnFirstInitializationOverride:(id)arg0 ;
+(void)synchronizeStoresWithIdentifiers:(id)arg0 type:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(*void)getValueForKey:(struct __CFString *)arg0 ;
-(BOOL)setObject:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateKey:(id)arg0 error:(*id)arg1 ;
-(id)asyncDaemonWithErrorHandler:(id)arg0 ;
-(id)changeToken;
-(id)copyExternalChangesWithChangeCount:(*NSInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithError:(*id)arg0 ;
-(id)init;
-(id)initWithStoreConfiguration:(id)arg0 ;
-(id)initWithStoreIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 error:(*id)arg1 ;
-(id)synchronousDaemonWithErrorHandler:(id)arg0 ;
-(struct __CFDictionary *)copyDictionary;
-(unsigned char)hasExternalChanges;
-(unsigned char)synchronize;
-(unsigned char)synchronizeForced:(unsigned char)arg0 ;
-(void)___For_some_reason_NSUbiquitousKeyValueStore_thinks_you_dont_exist___;
-(void)___NSUbiquitousKeyValueStore_isnt_sure_exactly_what_you_did_but_it_was_invalid___:(id)arg0 ;
-(void)___You_are_about_to_lose_data_in_NSUbiquitousKeyValueStore___;
-(void)___You_are_not_entitled_for_NSUbiquitousKeyValueStore___;
-(void)___You_think_you_can_just_XPC_into_any_process_all_willy_nilly_well_think_again___;
-(void)_clearCachedObjects;
-(void)_handleCacheErrorForKey:(id)arg0 ;
-(void)applicationWillEnterForeground;
-(void)daemonDidWake;
-(void)dealloc;
-(void)discardExternalChangesForChangeCount:(NSInteger)arg0 ;
-(void)logFaultIfNecessaryForError:(id)arg0 ;
-(void)performInitialSyncIfNecessary;
-(void)ping;
-(void)processChangeDictionary:(id)arg0 ;
-(void)registerForApplicationLifecycleEvents;
-(void)registerForDaemonDidWakeNotifications;
-(void)registerForSynchronizedDefaults;
-(void)removeObjectForKey:(id)arg0 ;
-(void)scheduleRemoteSynchronization;
-(void)setChangeToken:(id)arg0 ;
-(void)setDefaultsConfiguration:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(void)storeDidChangeWithStoreID:(id)arg0 changeDictionary:(id)arg1 reply:(id)arg2 ;
-(void)synchronizationWithCompletionHandler:(id)arg0 ;
-(void)unregisterForSynchronizedDefaults;
-(void)updateConfiguration;


@end


#endif