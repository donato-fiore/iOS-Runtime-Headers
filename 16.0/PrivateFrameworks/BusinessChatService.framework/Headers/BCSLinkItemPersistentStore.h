// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSLINKITEMPERSISTENTSTORE_H
#define BCSLINKITEMPERSISTENTSTORE_H

@protocol BCSItemCaching, BCSLinkItemCacheClearing;


#import "BCSPersistentStore.h"

@interface BCSLinkItemPersistentStore : BCSPersistentStore <BCSItemCaching, BCSLinkItemCacheClearing>

 {
    NSInteger _schemaVersion;
}




+(char *)debugQueueName;
-(NSInteger)schemaVersion;
-(char *)schema;
-(id)databasePath;
-(id)init;
-(id)itemMatching:(id)arg0 ;
-(void)deleteExpiredItemsOfType:(NSInteger)arg0 ;
-(void)deleteItemMatching:(id)arg0 ;
-(void)deleteItemsOfType:(NSInteger)arg0 ;
-(void)deleteLinkItemsWithBundleID:(id)arg0 ;
-(void)schemaVersionWillChangeForDatabase:(struct sqlite3 *)arg0 fromSchemaVersion:(NSInteger)arg1 toSchemaVersion:(NSInteger)arg2 ;
-(void)updateItem:(id)arg0 withItemIdentifier:(id)arg1 ;


@end


#endif