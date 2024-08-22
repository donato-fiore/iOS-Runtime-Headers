// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCKEYVALUESTORE_H
#define FCKEYVALUESTORE_H

@class NSString, NSMutableDictionary, NSDictionary;
@protocol FCJSONEncodableObjectProviding, NFLocking, FCKeyValueStoreMigrating;

#import <Foundation/Foundation.h>

#import "FCKeyValueStoreClassRegistry.h"
#import "FCKeyValueStoreSavePolicy.h"

@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding>

 {
    BOOL _unsafeWaitingOnSave;
    NSString *_name;
    NSUInteger _storeSize;
    NSMutableDictionary *_unsafeObjectsByKey;
    id<NFLocking> *_lock;
    NSUInteger _clientVersion;
    NSUInteger _optionsMask;
    FCKeyValueStoreClassRegistry *_classRegistry;
    id<FCKeyValueStoreMigrating> *_migrator;
    FCKeyValueStoreSavePolicy *_savePolicy;
    id *_objectHandler;
    id *_arrayObjectHandler;
    id *_dictionaryKeyHandler;
    id *_dictionaryValueHandler;
}


@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (nonatomic) BOOL shouldExportJSONSidecar; // ivar: _shouldExportJSONSidecar
@property (readonly, nonatomic) NSString *storeDirectory; // ivar: _storeDirectory


-(BOOL)boolValueForKey:(id)arg0 ;
-(BOOL)containsObjectForKey:(id)arg0 ;
-(NSUInteger)storeSize;
-(id)allKeys;
-(id)init;
-(id)initWithName:(id)arg0 directory:(id)arg1 version:(NSUInteger)arg2 options:(NSUInteger)arg3 classRegistry:(id)arg4 ;
-(id)initWithName:(id)arg0 directory:(id)arg1 version:(NSUInteger)arg2 options:(NSUInteger)arg3 classRegistry:(id)arg4 migrator:(id)arg5 ;
-(id)initWithName:(id)arg0 directory:(id)arg1 version:(NSUInteger)arg2 options:(NSUInteger)arg3 classRegistry:(id)arg4 migrator:(id)arg5 savePolicy:(id)arg6 ;
-(id)jsonEncodableObject;
-(id)keysOfEntriesPassingTest:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 ;
-(void)addAllEntriesToDictionary:(id)arg0 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)enumerateKeysAndObjectsForKeys:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)replaceContentsWithDictionary:(id)arg0 ;
-(void)save;
-(void)saveWithCompletionHandler:(id)arg0 ;
-(void)setBoolValue:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setCloudBackupEnabled:(BOOL)arg0 ;
// -(void)setJSONEncodingHandlersWithObjectHandler:(id)arg0 arrayObjectHandler:(unk)arg1 dictionaryKeyHandler:(id)arg2 dictionaryValueHandler:(unk)arg3  ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setObjects:(id)arg0 forKeys:(id)arg1 ;
-(void)updateObjectsForKeys:(id)arg0 withBlock:(id)arg1 ;


@end


#endif