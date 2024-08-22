// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATAPROVENANCEENTITY_H
#define HDDATAPROVENANCEENTITY_H



#import "HDHealthEntity.h"

@interface HDDataProvenanceEntity : HDHealthEntity



+(BOOL)validateEntityWithProfile:(id)arg0 error:(*id)arg1 validationErrorHandler:(id)arg2 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)insertOrLookupDataProvenanceForSyncProvenance:(NSInteger)arg0 syncIdentity:(NSInteger)arg1 originProductType:(id)arg2 originSystemBuild:(id)arg3 originOSVersion:(struct ? )arg4 localProductType:(id)arg5 localSystemBuild:(id)arg6 sourceVersion:(id)arg7 timeZoneName:(id)arg8 sourceID:(id)arg9 deviceID:(id)arg10 contributorID:(id)arg11 transaction:(id)arg12 error:(*id)arg13 ;
+(id)originProvenanceForPersistentID:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)sourceIDsWithProvenanceFromSourceIDs:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif