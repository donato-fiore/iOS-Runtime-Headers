// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMEDICALUSERDOMAINCONCEPTGENERATOR_H
#define HDMEDICALUSERDOMAINCONCEPTGENERATOR_H


#import <Foundation/Foundation.h>


@interface HDMedicalUserDomainConceptGenerator : NSObject



+(BOOL)generateUserDomainConceptForMedicalRecord:(id)arg0 entityPersistentID:(id)arg1 insertionContext:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(BOOL)remapMedicalRecordsIfNeededForUserDomainConcept:(id)arg0 shouldExcludeExistingConcept:(BOOL)arg1 ontologyTransaction:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(id)refreshOntologyContentForUserDomainConcept:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;


@end


#endif