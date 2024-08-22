// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSPROCESSBKSLEGACYPREDICATE_H
#define RBSPROCESSBKSLEGACYPREDICATE_H



#import "RBSProcessPredicateImpl.h"

@interface RBSProcessBKSLegacyPredicate : RBSProcessPredicateImpl



+(id)legacyPredicate;
+(id)legacyPredicateMatchingBundleIdentifier:(id)arg0 ;
+(id)legacyPredicateMatchingProcessIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;


@end


#endif