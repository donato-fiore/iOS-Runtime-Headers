// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBTARGETSSELFDOMAINRESTRICTION_H
#define RBTARGETSSELFDOMAINRESTRICTION_H

@class NSArray;


#import "RBDomainRestriction.h"

@interface RBTargetsSelfDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}




+(id)domainRestrictionForDictionary:(id)arg0 withError:(*id)arg1 ;
-(BOOL)allowsContext:(id)arg0 withError:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)allEntitlements;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif