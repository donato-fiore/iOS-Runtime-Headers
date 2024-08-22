// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBANYENTITLEMENTPREDICATE_H
#define RBANYENTITLEMENTPREDICATE_H

@class NSArray;


#import "RBEntitlementPredicate.h"

@interface RBAnyEntitlementPredicate : RBEntitlementPredicate {
    NSArray *_predicate;
}




-(BOOL)matchesEntitlements:(id)arg0 ;
-(NSUInteger)count;
-(id)allEntitlements;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArray:(id)arg0 forDomain:(id)arg1 attribute:(id)arg2 errors:(id)arg3 ;


@end


#endif