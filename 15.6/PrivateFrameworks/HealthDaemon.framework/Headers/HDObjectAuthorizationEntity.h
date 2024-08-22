// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDOBJECTAUTHORIZATIONENTITY_H
#define HDOBJECTAUTHORIZATIONENTITY_H

@class NSString;
@protocol HDHealthEntitySchema;


#import "HDHealthEntity.h"

@interface HDObjectAuthorizationEntity : HDHealthEntity <HDHealthEntitySchema>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)resetAllObjectAuthorizationRecordsForProfile:(id)arg0 error:(*id)arg1 ;
+(BOOL)resetAuthorizationForObjects:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)resetObjectAuthorizationRecordsForSource:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)setObjectAuthorizationRecords:(id)arg0 syncProvenance:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)authorizationRecordsBySourceForSampleWithUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)authorizationRecordsForSamples:(id)arg0 sourceEntity:(id)arg1 sessionIdentifier:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)authorizationStatusForSamplesOfType:(id)arg0 sourceEntity:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)propertyForSyncProvenance;
+(id)pruneWithProfile:(id)arg0 nowDate:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif