// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3ALLCOMPOUNDPREDICATE_H
#define ML3ALLCOMPOUNDPREDICATE_H



#import "ML3CompoundPredicate.h"

@interface ML3AllCompoundPredicate : ML3CompoundPredicate



+(BOOL)supportsSecureCoding;
+(id)predicateByFlatteningAllCompoundPredicate:(id)arg0 ;
+(id)predicateByMergingContainmentPredicatesAllCompoundPredicate:(id)arg0 ;
-(id)compoundOperatorJoiner;


@end


#endif