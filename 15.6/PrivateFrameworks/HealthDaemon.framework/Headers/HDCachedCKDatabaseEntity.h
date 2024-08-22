// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCACHEDCKDATABASEENTITY_H
#define HDCACHEDCKDATABASEENTITY_H



#import "HDHealthEntity.h"

@interface HDCachedCKDatabaseEntity : HDHealthEntity



+(BOOL)deleteDatabasesNotMatchingUserRecordName:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)insertIfDoesNotExistWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 userRecordName:(id)arg2 serverChangeToken:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)insertOrUpdateWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 userRecordName:(id)arg2 serverChangeToken:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)updateServerChangeToken:(id)arg0 containerIdentifier:(id)arg1 databaseScope:(NSInteger)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(NSInteger)previousEpochForTransaction:(id)arg0 error:(*id)arg1 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)entityForContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 userRecordName:(id)arg2 transaction:(id)arg3 shouldCreate:(BOOL)arg4 error:(*id)arg5 ;
+(id)insertWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 userRecordName:(id)arg2 serverChangeToken:(id)arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(id)serverChangeTokenForContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)setCurrentEpoch:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;


@end


#endif