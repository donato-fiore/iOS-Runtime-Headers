// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSYNCSTOREENTITY_H
#define HDSYNCSTOREENTITY_H



#import "HDHealthEntity.h"

@interface HDSyncStoreEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)allSyncStoreEntitiesOfType:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)existingSyncStoreEntityWithUUID:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)recreateSyncStoreWithUUID:(id)arg0 type:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)syncStoreEntityWithUUID:(id)arg0 type:(NSInteger)arg1 healthDatabase:(id)arg2 error:(*id)arg3 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(NSInteger)syncProvenance;


@end


#endif