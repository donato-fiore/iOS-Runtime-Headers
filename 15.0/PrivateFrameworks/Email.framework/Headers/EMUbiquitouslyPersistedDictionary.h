// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMUBIQUITOUSLYPERSISTEDDICTIONARY_H
#define EMUBIQUITOUSLYPERSISTEDDICTIONARY_H

@class NSString, NSUbiquitousKeyValueStore, NSMutableDictionary;
@protocol EFLoggable, EMMutableDictionaryProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EMUbiquitouslyPersistedDictionary : NSObject <EFLoggable, EMMutableDictionaryProtocol>



@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *kvStore; // ivar: _kvStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mutationQueue; // ivar: _mutationQueue
@property (readonly, nonatomic) NSString *plistPath; // ivar: _plistPath
@property (readonly, nonatomic) NSMutableDictionary *storedObjects; // ivar: _storedObjects
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;


+(id)log;
+(id)sharedDictionaryWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithPlistPath:(id)arg0 identifier:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)_ensureStoredObjectsAreInKVStore;
-(void)_mergeKVStoreChangedKeys:(id)arg0 ;
-(void)_purgeOldestEntries;
-(void)_resetKVStore;
-(void)_storeChangedExternally:(id)arg0 ;
-(void)_synchronize;
-(void)_writeToPlist;
-(void)removeAllObjects;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif