// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBORIGINATOREXTENSIONPOINTRESTRICTION_H
#define RBORIGINATOREXTENSIONPOINTRESTRICTION_H

@class NSString;


#import "RBDomainRestriction.h"

@interface RBOriginatorExtensionPointRestriction : RBDomainRestriction {
    NSString *_extensionPoint;
}




+(id)domainRestrictionForDictionary:(id)arg0 withError:(*id)arg1 ;
-(BOOL)allowsContext:(id)arg0 withError:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithExtensionPoint:(id)arg0 ;
-(id)allEntitlements;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif