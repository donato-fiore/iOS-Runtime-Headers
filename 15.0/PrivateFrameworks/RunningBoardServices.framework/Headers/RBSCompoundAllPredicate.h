// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSCOMPOUNDALLPREDICATE_H
#define RBSCOMPOUNDALLPREDICATE_H

@class NSSet;


#import "RBSProcessPredicateImpl.h"

@interface RBSCompoundAllPredicate : RBSProcessPredicateImpl {
    NSSet *_predicates;
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