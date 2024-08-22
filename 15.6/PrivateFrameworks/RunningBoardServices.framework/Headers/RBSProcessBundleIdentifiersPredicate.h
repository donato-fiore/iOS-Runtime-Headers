// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPROCESSBUNDLEIDENTIFIERSPREDICATE_H
#define RBSPROCESSBUNDLEIDENTIFIERSPREDICATE_H

@class NSSet;


#import "RBSProcessPredicateImpl.h"

@interface RBSProcessBundleIdentifiersPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) NSSet *identifiers; // ivar: _identifiers


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