// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDUSERDOMAINCONCEPTONTOLOGYCONTENTREFRESHER_H
#define HDUSERDOMAINCONCEPTONTOLOGYCONTENTREFRESHER_H


#import <Foundation/Foundation.h>


@interface HDUserDomainConceptOntologyContentRefresher : NSObject



+(BOOL)_determineIfEligibleForRefreshAndPerformRefreshOperationForConcept:(id)arg0 ontologyTransaction:(id)arg1 outRefreshedUserDomainConcept:(*id)arg2 error:(*id)arg3 ;
+(BOOL)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsAutomaticGrouperPromotion;
+(NSInteger)_isAbleToPromoteConceptToGrouper:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;
+(NSInteger)_isAbleToUpdateUserDomainConcept:(id)arg0 outAdditionalCodings:(*id)arg1 outConceptToRefreshWith:(*id)arg2 ontologyTransaction:(id)arg3 error:(*id)arg4 ;
+(NSInteger)_loadMercuryConceptForRefreshFromUserDomainConcept:(id)arg0 ontologyCoding:(id)arg1 outConcept:(*id)arg2 ontologyTransaction:(id)arg3 error:(*id)arg4 ;
+(NSInteger)_performAutomaticGrouperPromotionForConcept:(id)arg0 userDomainConcept:(id)arg1 outConcept:(*id)arg2 ontologyTransaction:(id)arg3 error:(*id)arg4 ;
+(NSInteger)resolveOntologyConceptForRefreshFromUserDomainConceptWithoutOntologyCoding:(id)arg0 outAdditionalCodings:(*id)arg1 outConceptToRefreshWith:(*id)arg2 ontologyTransaction:(id)arg3 error:(*id)arg4 ;
+(id)_refreshUserDomainConcept:(id)arg0 withOntologyConcept:(id)arg1 codings:(id)arg2 ontologyTransaction:(id)arg3 error:(*id)arg4 ;
+(id)propertyCollectionWithOntologyConcept:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;
+(id)refreshOntologyContentForUserDomainConcept:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;


@end


#endif