// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSPROCESSIDENTIFIERPREDICATE_H
#define RBSPROCESSIDENTIFIERPREDICATE_H

@protocol RBSProcessIdentifier;


#import "RBSProcessPredicateImpl.h"

@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) NSObject<RBSProcessIdentifier> *identifier; // ivar: _identifier


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processPredicate;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif