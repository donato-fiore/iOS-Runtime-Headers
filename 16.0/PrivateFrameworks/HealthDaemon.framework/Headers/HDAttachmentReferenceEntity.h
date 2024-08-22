// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDATTACHMENTREFERENCEENTITY_H
#define HDATTACHMENTREFERENCEENTITY_H



#import "HDHealthEntity.h"

@interface HDAttachmentReferenceEntity : HDHealthEntity



+(BOOL)deleteReferences:(id)arg0 cloudStatus:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateReferencesForAttachmentIdentifier:(id)arg0 type:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)enumerateReferencesForObjectIdentifier:(id)arg0 schemaIdentifier:(id)arg1 transaction:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)enumerateReferencesWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)filteredNonTombstoneReferences:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)insertReference:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)insertTombstones:(id)arg0 cloudStatus:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)setCloudStatus:(NSInteger)arg0 references:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)setCloudStatus:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)_insertIfDoesNotExistReference:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)_insertReference:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)anyReferenceWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)referenceWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif