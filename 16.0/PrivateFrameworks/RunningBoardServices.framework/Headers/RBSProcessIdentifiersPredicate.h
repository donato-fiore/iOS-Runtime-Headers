// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSPROCESSIDENTIFIERSPREDICATE_H
#define RBSPROCESSIDENTIFIERSPREDICATE_H

@class NSSet;


#import "RBSProcessCollectionPredicateImpl.h"

@interface RBSProcessIdentifiersPredicate : RBSProcessCollectionPredicateImpl

@property (readonly, nonatomic) NSSet *processIdentifiers;


-(BOOL)matchesProcess:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;


@end


#endif