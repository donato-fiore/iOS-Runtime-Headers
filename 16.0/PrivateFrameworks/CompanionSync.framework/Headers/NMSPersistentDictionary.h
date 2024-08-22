// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSPERSISTENTDICTIONARY_H
#define NMSPERSISTENTDICTIONARY_H

@class NSString;
@protocol NSLocking, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "_SYSharedServiceDB.h"

@interface NMSPersistentDictionary : NSObject <NSLocking>

 {
    Class _objectClass;
    NSString *_path;
    *__CFString _loggingFacility;
    NSObject<OS_dispatch_semaphore> *_lock;
    _SYSharedServiceDB *_sharedDB;
    *sqlite3 _db;
    *sqlite3_stmt _fetch;
    *sqlite3_stmt _insert;
    *sqlite3_stmt _reset;
    *sqlite3_stmt _remove;
    *sqlite3_stmt _removeAll;
    *sqlite3_stmt _byDate;
    *sqlite3_stmt _byEnqueueDate;
}




-(NSUInteger)_checkSchemaVersion;
-(id)_dataFromObject:(id)arg0 ;
-(id)_objectFromData:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 objectClass:(Class)arg1 loggingFacility:(struct __CFString *)arg2 ;
-(id)initWithSharedDBForService:(id)arg0 objectClass:(Class)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)_ensureDBSchema;
-(void)_openDBForceRecreate:(BOOL)arg0 ;
-(void)_prepareStatements;
-(void)_withDB:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsSortedByEnqueueDate:(id)arg0 ;
-(void)enumerateObjectsSortedByExpirationDate:(id)arg0 ;
-(void)lock;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)resetObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 expires:(id)arg2 ;
-(void)unlock;


@end


#endif