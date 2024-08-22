// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBTARGETENTITLEMENTDOMAINRESTRICTION_H
#define RBTARGETENTITLEMENTDOMAINRESTRICTION_H

@class NSString;


#import "RBDomainRestriction.h"

@interface RBTargetEntitlementDomainRestriction : RBDomainRestriction {
    NSString *_entitlement;
}




+(id)domainRestrictionForDictionary:(id)arg0 withError:(*id)arg1 ;
-(BOOL)allowsContext:(id)arg0 withError:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithEntitlement:(id)arg0 ;
-(id)allEntitlements;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif