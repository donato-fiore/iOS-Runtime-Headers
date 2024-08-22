// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDUSERDOMAINCONCEPTENTITY_H
#define HDUSERDOMAINCONCEPTENTITY_H



#import "HDHealthEntity.h"

@interface HDUserDomainConceptEntity : HDHealthEntity



+(BOOL)deleteUserDomainConcept:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)enumerateUserDomainConceptsWithPredicate:(id)arg0 limit:(NSInteger)arg1 orderingTerms:(id)arg2 transaction:(id)arg3 error:(*id)arg4 enumerationHandler:(id)arg5 ;
+(BOOL)enumerateUserDomainConceptsWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)insertConcreteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)insertPrivateDataEnitiesForUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)retrievePrivateDataEntitiesForUserDomainConcept:(id)arg0 persistentID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateConcreteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)updateLinksTargetingUserDomainConceptUUID:(id)arg0 toTargetUserDomainConceptUUID:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)updatePrivateDataEnitiesForUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)willDeleteConcreteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(Class)userDomainConceptClass;
+(NSInteger)protectionClass;
+(NSInteger)storeUserDomainConcept:(id)arg0 method:(NSInteger)arg1 syncProvenance:(NSInteger)arg2 syncVersion:(struct ? )arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(NSInteger)storeUserDomainConcept:(id)arg0 method:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(id)deduplicateUserDomainConcept:(id)arg0 with:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)defaultForeignKey;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)predicateMatchingSemanticDuplicatesOf:(id)arg0 ;
+(id)privateDataEntities;
+(id)privateSubEntities;
+(id)propertyForSyncAnchor;
+(id)propertyForSyncProvenance;
+(id)refreshOntologyContentForUserDomainConcept:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif