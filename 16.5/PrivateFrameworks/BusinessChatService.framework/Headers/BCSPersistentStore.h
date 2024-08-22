// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSPERSISTENTSTORE_H
#define BCSPERSISTENTSTORE_H

@class NSString;
@protocol BCSBatchable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BCSPersistentStore : NSObject <BCSBatchable>

 {
    NSInteger _batchCount;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *sqlite3 openedDatabase; // ivar: _openedDatabase
@property (readonly) Class superclass;


+(char *)debugQueueName;
-(BOOL)deleteDatabaseFile;
-(NSInteger)schemaVersion;
-(char *)schema;
-(id)databasePath;
-(id)init;
-(void)beginBatch;
-(void)dealloc;
-(void)endBatch;
-(void)schemaVersionDidChangeForDatabase:(struct sqlite3 *)arg0 fromSchemaVersion:(NSInteger)arg1 toSchemaVersion:(NSInteger)arg2 ;
-(void)schemaVersionWillChangeForDatabase:(struct sqlite3 *)arg0 fromSchemaVersion:(NSInteger)arg1 toSchemaVersion:(NSInteger)arg2 ;


@end


#endif