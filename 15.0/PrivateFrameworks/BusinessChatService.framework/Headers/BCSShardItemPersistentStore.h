// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSSHARDITEMPERSISTENTSTORE_H
#define BCSSHARDITEMPERSISTENTSTORE_H

@class NSString;
@protocol BCSShardCacheQueryable;


#import "BCSPersistentStore.h"

@interface BCSShardItemPersistentStore : BCSPersistentStore <BCSShardCacheQueryable>

 {
    NSInteger _schemaVersion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(char *)debugQueueName;
-(NSInteger)countOfExpiredShardsOfType:(NSInteger)arg0 ;
-(NSInteger)countOfShardsOfType:(NSInteger)arg0 ;
-(NSInteger)schemaVersion;
-(char *)schema;
-(id)databasePath;
-(id)init;
-(id)initWithSchemaVersion:(NSInteger)arg0 ;
-(id)shardItemMatching:(id)arg0 ;
-(void)deleteExpiredShardItemsOfType:(NSInteger)arg0 ;
-(void)deleteShardItemMatching:(id)arg0 ;
-(void)deleteShardItemsOfType:(NSInteger)arg0 ;
-(void)schemaVersionWillChangeForDatabase:(struct sqlite3 *)arg0 fromSchemaVersion:(NSInteger)arg1 toSchemaVersion:(NSInteger)arg2 ;
-(void)updateShardItem:(id)arg0 withShardIdentifier:(id)arg1 ;


@end


#endif