// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDLISTUSERDOMAINCONCEPTENTITY_H
#define HDLISTUSERDOMAINCONCEPTENTITY_H



#import "HDUserDomainConceptEntity.h"

@interface HDListUserDomainConceptEntity : HDUserDomainConceptEntity



+(BOOL)insertConcreteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateConcreteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)willDeleteConcreteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(Class)userDomainConceptClass;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)deduplicateUserDomainConcept:(id)arg0 with:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)foreignKeys;
+(id)predicateMatchingSemanticDuplicatesOf:(id)arg0 ;
+(id)privateDataEntities;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif