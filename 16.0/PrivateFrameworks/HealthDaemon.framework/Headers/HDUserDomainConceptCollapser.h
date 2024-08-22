// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDUSERDOMAINCONCEPTCOLLAPSER_H
#define HDUSERDOMAINCONCEPTCOLLAPSER_H


#import <Foundation/Foundation.h>


@interface HDUserDomainConceptCollapser : NSObject



+(BOOL)preDeduplicationProcessingForUserDomainConcept:(id)arg0 duplicateConcept:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)shouldDeleteDuplicateConcept;
+(id)collapseUserDomainConcept:(id)arg0 with:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)mergeSubclassDataTo:(id)arg0 fromDuplicateConcept:(id)arg1 ;
-(id)init;


@end


#endif