// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSPROCESSCOLLECTIONPREDICATEIMPL_H
#define RBSPROCESSCOLLECTIONPREDICATEIMPL_H

@class NSSet;


#import "RBSProcessPredicateImpl.h"

@interface RBSProcessCollectionPredicateImpl : RBSProcessPredicateImpl {
    NSSet *_identifiers;
}




+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifiers:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processPredicate;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif