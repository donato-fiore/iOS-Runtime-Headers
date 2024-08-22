// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCACHEDSECURECKRECORDENTITY_H
#define HDCACHEDSECURECKRECORDENTITY_H



#import "HDHealthEntity.h"

@interface HDCachedSecureCKRecordEntity : HDHealthEntity



+(BOOL)deleteRecordWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 recordName:(id)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(BOOL)insertOrUpdateWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 zoneName:(id)arg2 ownerName:(id)arg3 recordData:(id)arg4 recordName:(id)arg5 profile:(id)arg6 error:(*id)arg7 ;
+(BOOL)insertOrUpdateWithRecordID:(NSInteger)arg0 recordData:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeRecordsWithProfile:(id)arg0 error:(*id)arg1 ;
+(BOOL)updateWithRecordData:(id)arg0 recordID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)insertWithRecordID:(NSInteger)arg0 recordData:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)protectedRecordDataForUnprotectedEntity:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif