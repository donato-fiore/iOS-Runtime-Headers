// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICALUSERDOMAINCONCEPTCOLLAPSER_H
#define HDMEDICALUSERDOMAINCONCEPTCOLLAPSER_H



#import "HDUserDomainConceptCollapser.h"

@interface HDMedicalUserDomainConceptCollapser : HDUserDomainConceptCollapser



+(BOOL)preDeduplicationProcessingForUserDomainConcept:(id)arg0 duplicateConcept:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)mergeSubclassDataTo:(id)arg0 fromDuplicateConcept:(id)arg1 ;


@end


#endif