// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSNOTPREDICATE_H
#define RBSNOTPREDICATE_H



#import "RBSProcessPredicateImpl.h"

@interface RBSNotPredicate : RBSProcessPredicateImpl {
    RBSProcessPredicateImpl *_predicate;
}




+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processIdentifier;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif