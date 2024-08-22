// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATAPROVENANCEENTITY_H
#define HDDATAPROVENANCEENTITY_H



#import "HDHealthEntity.h"

@interface HDDataProvenanceEntity : HDHealthEntity



+(BOOL)validateEntityWithProfile:(id)arg0 error:(*id)arg1 validationErrorHandler:(id)arg2 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)insertOrLookupDataProvenanceForSyncProvenance:(NSInteger)arg0 originProductType:(id)arg1 originSystemBuild:(id)arg2 originOSVersion:(struct ? )arg3 localProductType:(id)arg4 localSystemBuild:(id)arg5 sourceVersion:(id)arg6 timeZoneName:(id)arg7 sourceID:(id)arg8 deviceID:(id)arg9 contributorID:(id)arg10 transaction:(id)arg11 error:(*id)arg12 ;
+(id)originProvenanceForPersistentID:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)sourceIDsWithProvenanceFromSourceIDs:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif