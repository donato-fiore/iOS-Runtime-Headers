// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSPROCESSBUNDLEIDENTIFIERSPREDICATE_H
#define RBSPROCESSBUNDLEIDENTIFIERSPREDICATE_H



#import "RBSProcessCollectionPredicateImpl.h"

@interface RBSProcessBundleIdentifiersPredicate : RBSProcessCollectionPredicateImpl



-(BOOL)matchesProcess:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;


@end


#endif