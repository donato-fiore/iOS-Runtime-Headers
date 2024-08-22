// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBDOMAINRESTRICTION_H
#define RBDOMAINRESTRICTION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RBDomainRestriction : NSObject <NSCopying>





+(id)domainRestrictionForDictionary:(id)arg0 withError:(*id)arg1 ;
-(BOOL)allowsContext:(id)arg0 withError:(*id)arg1 ;
-(id)_init;
-(id)allEntitlements;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif