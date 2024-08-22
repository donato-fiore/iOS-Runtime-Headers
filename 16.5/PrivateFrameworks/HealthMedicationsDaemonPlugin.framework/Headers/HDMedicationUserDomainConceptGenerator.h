// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONUSERDOMAINCONCEPTGENERATOR_H
#define HDMEDICATIONUSERDOMAINCONCEPTGENERATOR_H

@class HDUserDomainConceptOntologyContentRefresher;



@interface HDMedicationUserDomainConceptGenerator : HDUserDomainConceptOntologyContentRefresher



+(BOOL)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;
+(id)propertyCollectionWithOntologyConcept:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;


@end


#endif