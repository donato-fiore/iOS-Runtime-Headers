// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDADHOCCONCEPTENTITY_H
#define HDADHOCCONCEPTENTITY_H



#import "HDHealthEntity.h"

@interface HDAdHocConceptEntity : HDHealthEntity



+(BOOL)deleteNonIndexedConceptsWithTransaction:(id)arg0 error:(*id)arg1 ;
+(BOOL)enumerateAdHocConceptWithRawIdentifiers:(id)arg0 options:(NSUInteger)arg1 profile:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(NSInteger)protectionClass;
+(id)adHocConceptForCodingCollection:(id)arg0 options:(NSUInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)adHocConceptForIdentifier:(id)arg0 options:(NSUInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(id)generateAdHocConceptForCodingCollection:(id)arg0 options:(NSUInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif