// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCKEYVALUESTORE_H
#define RCKEYVALUESTORE_H

@class NSDictionary, NSString, NSMutableDictionary;
@protocol RCOperationThrottlerDelegate, RCKeyValueStoreMigrating, RCOperationThrottler;

#import <Foundation/Foundation.h>

#import "RCMutexLock.h"

@interface RCKeyValueStore : NSObject <RCOperationThrottlerDelegate>



@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (nonatomic) NSUInteger clientVersion; // ivar: _clientVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<RCKeyValueStoreMigrating> *migrator; // ivar: _migrator
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL needSave; // ivar: _needSave
@property (retain, nonatomic) NSMutableDictionary *objectsByKey; // ivar: _objectsByKey
@property (nonatomic) NSUInteger optionsMask; // ivar: _optionsMask
@property (retain, nonatomic) NSObject<RCOperationThrottler> *saveThrottler; // ivar: _saveThrottler
@property (nonatomic) BOOL shouldExportJSONSidecar; // ivar: _shouldExportJSONSidecar
@property (retain, nonatomic) NSString *storeDirectory; // ivar: _storeDirectory
@property (nonatomic) NSUInteger storeSize; // ivar: _storeSize
@property (readonly) Class superclass;
@property (retain, nonatomic) RCMutexLock *writeLock; // ivar: _writeLock


+(BOOL)shouldDumpToJSON;
+(id)persistenceQueue;
-(BOOL)_isBackupEnabled;
-(BOOL)_persistOnlyInMemoryEnabled;
-(BOOL)_shouldMigrateOnUpgrade;
-(BOOL)boolValueForKey:(id)arg0 ;
-(BOOL)containsObjectForKey:(id)arg0 ;
-(id)_dictionary;
-(id)_initializeStoreDirectoryWithName:(id)arg0 ;
-(id)_loadFromDisk;
-(id)allKeys;
-(id)init;
-(id)initWithName:(id)arg0 directory:(id)arg1 version:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(id)initWithName:(id)arg0 directory:(id)arg1 version:(NSUInteger)arg2 options:(NSUInteger)arg3 migrator:(id)arg4 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 ;
-(void)_clearStore;
-(void)_logCacheStatus;
-(void)_queueSave;
-(void)_saveAsyncWithCompletionHandler:(id)arg0 ;
-(void)addAllEntriesToDictionary:(id)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithCompletion:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)saveWithCompletionHandler:(id)arg0 ;
-(void)setBoolValue:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setObjects:(id)arg0 forKeys:(id)arg1 ;
-(void)setOptionBackupEnabled:(BOOL)arg0 ;
-(void)updateObjectsForKeys:(id)arg0 withBlock:(id)arg1 ;


@end


#endif