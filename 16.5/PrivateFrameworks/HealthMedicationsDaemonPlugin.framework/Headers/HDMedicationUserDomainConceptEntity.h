// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONUSERDOMAINCONCEPTENTITY_H
#define HDMEDICATIONUSERDOMAINCONCEPTENTITY_H

@class HDUserDomainConceptEntity;



@interface HDMedicationUserDomainConceptEntity : HDUserDomainConceptEntity



+(BOOL)encodesCodableUserDomainConceptSubclassData;
+(BOOL)insertConcreteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)supportsHidingSemanticDuplicates;
+(BOOL)updateConcreteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)willDeleteConcreteUserDomainConcept:(id)arg0 userDomainConceptID:(NSInteger)arg1 syncProvenance:(NSInteger)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(Class)userDomainConceptClass;
+(Class)userDomainConceptSemanticIdentifierClass;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)deduplicateUserDomainConcept:(id)arg0 with:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)foreignKeys;
+(id)newUserDomainConceptForRefreshWithCodingCollection:(id)arg0 propertyCollection:(id)arg1 ;
+(id)predicateMatchingSemanticDuplicatesOf:(id)arg0 ;
+(id)predicateMatchingSemanticIdentifier:(id)arg0 ;
+(id)privateDataEntities;
+(id)privateSubEntities;
+(id)refreshOntologyContentForUserDomainConcept:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif