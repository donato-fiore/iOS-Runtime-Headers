// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
+(id)indices;
+(id)insertCodableSource:(id)arg0 provenance:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)insertSourceWithUUID:(id)arg0 bundleIdentifier:(id)arg1 owningAppBundleIdentifier:(id)arg2 name:(id)arg3 options:(NSUInteger)arg4 isCurrentDevice:(BOOL)arg5 productType:(id)arg6 modificationDate:(id)arg7 provenance:(NSInteger)arg8 profile:(id)arg9 error:(*id)arg10 ;
+(id)propertyForSyncAnchor;
+(id)propertyForSyncProvenance;
+(id)sourceForBundleIdentifier:(id)arg0 localOnly:(BOOL)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)sourceForLocalDeviceWithDatabase:(id)arg0 error:(*id)arg1 ;
+(id)sourcesWithPredicate:(id)arg0 includeDeleted:(BOOL)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)sourcesWithPredicate:(id)arg0 includeDeleted:(BOOL)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)sourcesWithPredicate:(id)arg0 orderingTerms:(id)arg1 includeDeleted:(BOOL)arg2 database:(id)arg3 error:(*id)arg4 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)adoptAsLocalSourceWithBundleIdentifier:(id)arg0 UUID:(id)arg1 name:(id)arg2 productType:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
-(BOOL)deleteSourceWithDatabase:(id)arg0 error:(*id)arg1 ;
-(BOOL)setName:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(BOOL)setOptions:(NSUInteger)arg0 profile:(id)arg1 didUpdate:(*BOOL)arg2 error:(*id)arg3 ;
-(id)codableSourceWithEncoder:(id)arg0 error:(*id)arg1 ;
-(id)codableSourceWithProfile:(id)arg0 error:(*id)arg1 ;
-(id)sourceBundleIdentifierInDatabase:(id)arg0 error:(*id)arg1 ;
-(id)sourceUUIDWithHealthDatabase:(id)arg0 error:(*id)arg1 ;
-(id)sourceUUIDWithProfile:(id)arg0 error:(*id)arg1 ;
-(id)sourceWithProfile:(id)arg0 error:(*id)arg1 ;


@end


#endif