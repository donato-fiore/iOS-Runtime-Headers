// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSOURCEENTITY_H
#define HDSOURCEENTITY_H



#import "HDHealthEntity.h"

@interface HDSourceEntity : HDHealthEntity



+(BOOL)enumerateBundleIdentifiersForSourcesForUUIDData:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)enumerateBundleIdentifiersForSourcesWithPredicate:(id)arg0 database:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)firstSourceWithPredicate:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)firstSourceWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)foreignKeys;
+(id)indices;
+(id)insertSourceWithUUID:(id)arg0 logicalSourceID:(NSInteger)arg1 name:(id)arg2 options:(NSUInteger)arg3 isCurrentDevice:(BOOL)arg4 productType:(id)arg5 deleted:(BOOL)arg6 modificationDate:(id)arg7 provenance:(NSInteger)arg8 syncIdentity:(id)arg9 transaction:(id)arg10 error:(*id)arg11 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)propertyForSyncAnchor;
+(id)propertyForSyncProvenance;
+(id)sourceForLocalDeviceWithDatabase:(id)arg0 error:(*id)arg1 ;
+(id)sourceForLogicalSourceID:(id)arg0 localDeviceBundleIdentifier:(BOOL)arg1 localOnly:(BOOL)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(id)sourcesWithPredicate:(id)arg0 includeDeleted:(BOOL)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)sourcesWithPredicate:(id)arg0 includeDeleted:(BOOL)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)sourcesWithPredicate:(id)arg0 orderingTerms:(id)arg1 includeDeleted:(BOOL)arg2 database:(id)arg3 error:(*id)arg4 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)adoptAsLocalSourceWithLogicalSourceID:(id)arg0 UUID:(id)arg1 name:(id)arg2 productType:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
-(BOOL)deleteSourceWithTombstoneLogicalSourceID:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
-(BOOL)setName:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(BOOL)setOptions:(NSUInteger)arg0 profile:(id)arg1 didUpdate:(*BOOL)arg2 error:(*id)arg3 ;
-(id)codableSourceWithEncoder:(id)arg0 error:(*id)arg1 ;
-(id)codableSourceWithProfile:(id)arg0 error:(*id)arg1 ;
-(id)sourceBundleIdentifierInDatabase:(id)arg0 error:(*id)arg1 ;
-(id)sourceUUIDWithHealthDatabase:(id)arg0 error:(*id)arg1 ;
-(id)sourceUUIDWithProfile:(id)arg0 error:(*id)arg1 ;
-(id)sourceWithProfile:(id)arg0 error:(*id)arg1 ;
-(id)unitTest_logicalSourceEntityWithHealthDatabase:(id)arg0 error:(*id)arg1 ;


@end


#endif