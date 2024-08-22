// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBCOMPOUNDANYDOMAINRESTRICTION_H
#define RBCOMPOUNDANYDOMAINRESTRICTION_H

@class NSArray;


#import "RBDomainRestriction.h"

@interface RBCompoundAnyDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}




+(id)domainRestrictionForDictionary:(id)arg0 withError:(*id)arg1 ;
-(BOOL)allowsContext:(id)arg0 withError:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithRestrictions:(id)arg0 ;
-(id)allEntitlements;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif