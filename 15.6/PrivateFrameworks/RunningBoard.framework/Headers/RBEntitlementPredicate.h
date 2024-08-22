// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBENTITLEMENTPREDICATE_H
#define RBENTITLEMENTPREDICATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RBEntitlementPredicate : NSObject <NSCopying>



@property (readonly) NSUInteger count; // ivar: _count


+(id)predicateForObject:(id)arg0 forDomain:(id)arg1 attribute:(id)arg2 errors:(id)arg3 ;
-(BOOL)matchesEntitlements:(id)arg0 ;
-(id)allEntitlements;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif