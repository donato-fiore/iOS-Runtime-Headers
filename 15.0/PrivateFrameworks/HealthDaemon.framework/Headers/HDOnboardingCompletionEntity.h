// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDONBOARDINGCOMPLETIONENTITY_H
#define HDONBOARDINGCOMPLETIONENTITY_H



#import "HDHealthEntity.h"

@interface HDOnboardingCompletionEntity : HDHealthEntity



+(BOOL)deleteAllCompletionsForFeatureIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)enumerateAllOnboardingCompletionsWithTransaction:(id)arg0 predicate:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertCodableOnboardingCompletions:(id)arg0 syncProvenance:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)insertOnboardingCompletion:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)propertyForSyncProvenance;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)onboardingCompletionWithTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif