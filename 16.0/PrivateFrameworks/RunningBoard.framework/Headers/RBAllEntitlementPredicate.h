// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBALLENTITLEMENTPREDICATE_H
#define RBALLENTITLEMENTPREDICATE_H

@class NSDictionary;


#import "RBEntitlementPredicate.h"

@interface RBAllEntitlementPredicate : RBEntitlementPredicate {
    NSDictionary *_predicate;
}




-(BOOL)matchesEntitlements:(id)arg0 ;
-(NSUInteger)count;
-(id)allEntitlements;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 forDomain:(id)arg1 attribute:(id)arg2 errors:(id)arg3 ;


@end


#endif