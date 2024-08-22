// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCACHEDCKRECORDENTITY_H
#define HDCACHEDCKRECORDENTITY_H



#import "HDHealthEntity.h"

@interface HDCachedCKRecordEntity : HDHealthEntity



+(BOOL)deleteRecordWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 recordName:(id)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(BOOL)enumerateRecordIDAndDataWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 recordType:(id)arg4 recordName:(id)arg5 epoch:(NSInteger)arg6 profile:(id)arg7 error:(*id)arg8 enumerationHandler:(id)arg9 ;
+(BOOL)enumerateRecordIDsWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 profile:(id)arg4 error:(*id)arg5 enumerationHandler:(id)arg6 ;
+(BOOL)insertOrUpdateWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 recordData:(id)arg4 recordType:(id)arg5 recordName:(id)arg6 profile:(id)arg7 error:(*id)arg8 ;
+(BOOL)updateWithRecordData:(id)arg0 epoch:(NSInteger)arg1 zoneID:(NSInteger)arg2 recordName:(id)arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(NSInteger)containsRecordWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 recordName:(id)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(NSInteger)containsRecordsWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)insertWithZoneID:(NSInteger)arg0 recordType:(id)arg1 epoch:(NSInteger)arg2 recordName:(id)arg3 recordData:(id)arg4 transaction:(id)arg5 error:(*id)arg6 ;
+(id)recordDataWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 recordName:(id)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif