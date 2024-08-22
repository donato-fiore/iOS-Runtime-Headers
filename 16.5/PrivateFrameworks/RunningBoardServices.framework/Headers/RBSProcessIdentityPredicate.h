// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSPROCESSIDENTITYPREDICATE_H
#define RBSPROCESSIDENTITYPREDICATE_H



#import "RBSProcessPredicateImpl.h"
#import "RBSProcessIdentity.h"

@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl {
    RBSProcessIdentity *_identity;
}




+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processPredicate;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif