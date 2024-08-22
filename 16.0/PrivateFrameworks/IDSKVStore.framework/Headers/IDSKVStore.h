// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSKVSTORE_H
#define IDSKVSTORE_H

@class CSDBThreadedRecordStore, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface IDSKVStore : NSObject {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_source> *_databaseCloseTimer;
    CGFloat _databaseLastUpdateTime;
}


@property (nonatomic) unsigned int dataProtectionClass; // ivar: _dataProtectionClass
@property (retain, nonatomic) CSDBThreadedRecordStore *messageStore; // ivar: _messageStore
@property (copy, nonatomic) NSString *path; // ivar: _path
@property (copy, nonatomic) NSString *storeName; // ivar: _storeName


+(void)_initializeMessageStoreIfNeeded:(id)arg0 path:(id)arg1 dataProtectionClass:(unsigned int)arg2 ;
+(void)_invalidateCachesForMessageStore:(id)arg0 ;
-(BOOL)deleteBatchWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteEntriesBeforeDate:(id)arg0 afterDate:(id)arg1 error:(*id)arg2 ;
-(BOOL)persistData:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)_onIvarQueue_serializedValueForKey:(id)arg0 valueType:(char)arg1 ;
-(id)_onIvarQueue_serializedValuesUpToLimit:(NSUInteger)arg0 valueType:(char)arg1 deleteContext:(*id)arg2 ;
-(id)dataForKey:(id)arg0 error:(*id)arg1 ;
-(id)datasUpToLimit:(NSUInteger)arg0 deleteContext:(*id)arg1 error:(*id)arg2 ;
-(id)initWithPath:(id)arg0 storeName:(id)arg1 dataProtectionClass:(unsigned int)arg2 ;
-(void)__closeDatabaseOnIvarQueue;
-(void)_clearDatabaseCloseTimerOnIvarQueue;
-(void)_onIvarQueue_deleteDatesBefore:(id)arg0 after:(id)arg1 ;
-(void)_onIvarQueue_deleteSerializedValueForKey:(id)arg0 valueType:(char)arg1 ;
-(void)_onIvarQueue_deleteUpToRowID:(NSUInteger)arg0 valueType:(char)arg1 ;
// -(void)_onIvarQueue_performBlock:(id)arg0 initializeStore:(unk)arg1  ;
// -(void)_onIvarQueue_performBlock:(id)arg0 initializeStore:(unk)arg1 waitUntilDone:(BOOL)arg2  ;
-(void)_onIvarQueue_persistSerializedValue:(id)arg0 forKey:(id)arg1 valueType:(char)arg2 ;
-(void)_performInitialHousekeepingOnIvarQueue;
-(void)_setDatabaseCloseTimerOnIvarQueue;
-(void)closeDatabaseSynchronously:(BOOL)arg0 ;
-(void)deleteDatabase;


@end


#endif