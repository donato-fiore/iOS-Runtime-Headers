// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCSTOREENTITY_H
#define HDCLOUDSYNCSTOREENTITY_H



#import "HDHealthEntity.h"

@interface HDCloudSyncStoreEntity : HDHealthEntity



+(BOOL)enumerateShardsForOwnerIdentifier:(id)arg0 containerIdentifier:(id)arg1 transaction:(id)arg2 error:(*id)arg3 handler:(id)arg4 ;
+(BOOL)persistState:(id)arg0 storeUUID:(id)arg1 shouldReplace:(BOOL)arg2 healthDatabase:(id)arg3 error:(*id)arg4 ;
+(BOOL)rebaseRequiredByDate:(id)arg0 intervals:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)resetLastSyncDateExcludingStores:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)persistedMostRecentLastSyncDateForProfile:(id)arg0 error:(*id)arg1 ;
+(id)persistedStateForStoreUUID:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)persistedStateForStoreUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)persistedStoreUUIDsForProfile:(id)arg0 error:(*id)arg1 ;
+(id)storeIdentifiersForOwnerIdentifier:(id)arg0 containerIdentifier:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)fetchShardPropertiesInTransaction:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)updateShardStartDate:(id)arg0 endDate:(id)arg1 type:(NSInteger)arg2 transaction:(id)arg3 error:(*id)arg4 ;
-(id)storeUUIDInTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif