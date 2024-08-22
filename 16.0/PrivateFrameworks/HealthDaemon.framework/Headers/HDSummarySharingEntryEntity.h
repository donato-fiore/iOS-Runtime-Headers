// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSUMMARYSHARINGENTRYENTITY_H
#define HDSUMMARYSHARINGENTRYENTITY_H



#import "HDHealthEntity.h"

@interface HDSummarySharingEntryEntity : HDHealthEntity



+(BOOL)enumerateCodableEntriesWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)enumerateCodableEntriesWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)insertOrReplaceCodableEntry:(id)arg0 CNContactIdentifier:(id)arg1 shouldPause:(BOOL)arg2 syncProvenance:(NSInteger)arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(BOOL)updateNotificationStatusForInvitiationWithUUID:(id)arg0 newNotificationStatus:(NSInteger)arg1 dateModified:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)updateOwnerParticipant:(id)arg0 cloudKitIdentifier:(id)arg1 predicate:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)updateStatus:(NSInteger)arg0 dateModified:(id)arg1 dateAccepted:(id)arg2 predicate:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(NSInteger)protectionClass;
+(id)_propertiesForEntity;
+(id)anyWithUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)codableWithRow:(struct HDSQLiteRow *)arg0 ;
+(id)databaseTable;
+(id)indices;
+(id)propertyForSyncProvenance;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
+(void)updatePauseStateForEntryWithUUID:(id)arg0 shouldPause:(BOOL)arg1 ;


@end


#endif