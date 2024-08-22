// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKUNIVERSALDISKSTORAGE_H
#define LKUNIVERSALDISKSTORAGE_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LKUniversalDiskStorage : NSObject

@property (nonatomic) _opaque_pthread_rwlock_t lock; // ivar: _lock
@property (retain, nonatomic) NSDictionary *storageDictionary; // ivar: _storageDictionary
@property (nonatomic, getter=isStorageDictionaryModified) BOOL storageDictionaryModified; // ivar: _storageDictionaryModified
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue; // ivar: _storageQueue


+(id)localDictionaryPath;
+(id)localDirectoryPath;
+(id)sharedStorage;
-(BOOL)clearKeys:(id)arg0 ;
-(BOOL)saveKeyValuePairs:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)retrieveValueForKey:(id)arg0 ;
-(void)_refreshStorageCacheIfNeeded;
-(void)clearAllKeyValueStorage:(id)arg0 ;
-(void)clearKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveKeyValuePairs:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif