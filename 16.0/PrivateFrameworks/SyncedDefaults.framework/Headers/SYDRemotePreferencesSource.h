// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYDREMOTEPREFERENCESSOURCE_H
#define SYDREMOTEPREFERENCESSOURCE_H


#import <Foundation/Foundation.h>


@interface SYDRemotePreferencesSource : NSObject



+(id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+(id)SYDRemotePreferencesSourceDidChangeNotification;
+(id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+(void)migrateSyncedDefaultsForBundleIdentifier:(id)arg0 ;
-(*void)getValueForKey:(struct __CFString *)arg0 ;
-(BOOL)setObject:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(NSInteger)maximumDataLengthPerKey;
-(NSInteger)maximumKeyCount;
-(NSInteger)maximumKeyLength;
-(NSInteger)maximumTotalDataLength;
-(id)copyExternalChangesWithChangeCount:(*NSInteger)arg0 ;
-(id)dictionaryRepresentationWithError:(*id)arg0 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 shared:(BOOL)arg1 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(BOOL)arg2 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(BOOL)arg2 additionalSource:(BOOL)arg3 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(BOOL)arg2 additionalSource:(BOOL)arg3 containerPath:(struct __CFString *)arg4 ;
-(id)initWithApplicationID:(struct __CFString *)arg0 storeID:(struct __CFString *)arg1 shared:(BOOL)arg2 additionalSource:(BOOL)arg3 containerPath:(struct __CFString *)arg4 storeType:(NSInteger)arg5 ;
-(id)objectForKey:(id)arg0 error:(*id)arg1 ;
-(struct __CFDictionary *)copyDictionary;
-(unsigned char)_synchronizeForced:(unsigned char)arg0 ;
-(unsigned char)hasExternalChanges;
-(unsigned char)synchronize;
-(unsigned char)synchronizeForced:(unsigned char)arg0 ;
-(void)dealloc;
-(void)discardExternalChangesForChangeCount:(NSInteger)arg0 ;
-(void)ping;
-(void)registerForSynchronizedDefaults;
-(void)scheduleRemoteSynchronization;
-(void)setDefaultsConfiguration:(id)arg0 ;
-(void)setValue:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(void)synchronizationWithCompletionHandler:(id)arg0 ;
-(void)unregisterForSynchronizedDefaults;
-(void)updateConfiguration;


@end


#endif