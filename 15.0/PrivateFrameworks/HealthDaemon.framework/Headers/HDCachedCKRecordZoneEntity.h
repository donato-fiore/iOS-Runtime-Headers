// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCACHEDCKRECORDZONEENTITY_H
#define HDCACHEDCKRECORDZONEENTITY_H



#import "HDHealthEntity.h"

@interface HDCachedCKRecordZoneEntity : HDHealthEntity



+(BOOL)deleteZoneWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)enumerateCKRecordZoneIDsWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)insertIfDoesNotExistWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 userRecordName:(id)arg4 serverChangeToken:(id)arg5 profile:(id)arg6 error:(*id)arg7 ;
+(BOOL)insertOrUpdateWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 userRecordName:(id)arg4 serverChangeToken:(id)arg5 fetchComplete:(BOOL)arg6 profile:(id)arg7 error:(*id)arg8 ;
+(BOOL)setRequiresFetch:(BOOL)arg0 containerIdentifier:(id)arg1 databaseScope:(NSInteger)arg2 zoneName:(id)arg3 ownerName:(id)arg4 transaction:(id)arg5 error:(*id)arg6 ;
+(BOOL)setZoneEntityState:(NSInteger)arg0 containerIdentifier:(id)arg1 databaseScope:(NSInteger)arg2 zoneName:(id)arg3 ownerName:(id)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(BOOL)updateServerChangeToken:(id)arg0 databaseID:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(NSInteger)protectionClass;
+(NSInteger)requiresFetchForZoneWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)insertWithDatabaseID:(NSInteger)arg0 zoneName:(id)arg1 ownerName:(id)arg2 serverChangeToken:(id)arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(id)serverChangeTokenForContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif