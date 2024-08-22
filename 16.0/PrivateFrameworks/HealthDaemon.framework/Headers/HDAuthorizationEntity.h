// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDAUTHORIZATIONENTITY_H
#define HDAUTHORIZATIONENTITY_H



#import "HDHealthEntity.h"

@interface HDAuthorizationEntity : HDHealthEntity



+(BOOL)resetAllAuthorizationStatusesWithProfile:(id)arg0 error:(*id)arg1 ;
+(BOOL)resetAuthorizationStatusesForBundleIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)setAuthorizationStatuses:(id)arg0 authorizationRequests:(id)arg1 authorizationModes:(id)arg2 sourceEntity:(id)arg3 options:(NSUInteger)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(BOOL)setAuthorizationStatuses:(id)arg0 sourceEntity:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)allSourcesRequestingTypes:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)authorizationRecordsBySourceForType:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)authorizationRecordsByTypeForBundleIdentifier:(id)arg0 types:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)authorizationStatusesForBundleIdentifier:(id)arg0 types:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)modificationDateForSourceEntity:(id)arg0 type:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)propertyForSyncProvenance;
+(id)readAuthorizationStatusesByTypeForBundleIdentifier:(id)arg0 types:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif