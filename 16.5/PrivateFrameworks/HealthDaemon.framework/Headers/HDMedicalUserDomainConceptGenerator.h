// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICALUSERDOMAINCONCEPTGENERATOR_H
#define HDMEDICALUSERDOMAINCONCEPTGENERATOR_H



#import "HDUserDomainConceptOntologyContentRefresher.h"

@interface HDMedicalUserDomainConceptGenerator : HDUserDomainConceptOntologyContentRefresher



+(BOOL)generateUserDomainConceptForMedicalRecord:(id)arg0 entityPersistentID:(id)arg1 insertionContext:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(BOOL)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)remapMedicalRecordsIfNeededForUserDomainConcept:(id)arg0 shouldExcludeExistingConcept:(BOOL)arg1 ontologyTransaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)supportsAutomaticGrouperPromotion;
+(NSInteger)resolveOntologyConceptForRefreshFromUserDomainConceptWithoutOntologyCoding:(id)arg0 outAdditionalCodings:(*id)arg1 outConceptToRefreshWith:(*id)arg2 ontologyTransaction:(id)arg3 error:(*id)arg4 ;
+(id)propertyCollectionWithOntologyConcept:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;


@end


#endif