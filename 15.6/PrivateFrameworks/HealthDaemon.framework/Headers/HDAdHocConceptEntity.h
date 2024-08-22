// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDADHOCCONCEPTENTITY_H
#define HDADHOCCONCEPTENTITY_H



#import "HDHealthEntity.h"

@interface HDAdHocConceptEntity : HDHealthEntity



+(BOOL)deleteNonIndexedConceptsWithTransaction:(id)arg0 error:(*id)arg1 ;
+(BOOL)enumerateAdHocConceptWithRawIdentifiers:(id)arg0 profile:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(NSInteger)protectionClass;
+(id)adHocConceptForCodingCollection:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)adHocConceptForIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)generateAdHocConceptForCodingCollection:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif