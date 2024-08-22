// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCONCEPTINDEXENTITY_H
#define HDCONCEPTINDEXENTITY_H



#import "HDHealthEntity.h"

@interface HDConceptIndexEntity : HDHealthEntity



+(BOOL)enumerateConceptIndexEntriesWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)insertConceptIndexEntries:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)removeAllConceptIndexEntriesWithProfile:(id)arg0 error:(*id)arg1 ;
+(NSInteger)protectionClass;
+(id)conceptIndexEntriesForSampleUUID:(id)arg0 type:(NSUInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)indices;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)numberOfIndexedConceptsWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)unitTesting_allConceptIndexEntriesWithProfile:(id)arg0 error:(*id)arg1 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif