// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPROCESSHANDLEPREDICATEIMPL_H
#define RBSPROCESSHANDLEPREDICATEIMPL_H



#import "RBSProcessPredicateImpl.h"
#import "RBSProcessIdentity.h"

@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl {
    RBSProcessIdentity *_identity;
    int _pid;
}




+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithHandle:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processIdentifier;
-(id)processPredicate;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif