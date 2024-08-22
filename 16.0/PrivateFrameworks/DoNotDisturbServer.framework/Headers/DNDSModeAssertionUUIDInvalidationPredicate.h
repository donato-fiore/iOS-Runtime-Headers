// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMODEASSERTIONUUIDINVALIDATIONPREDICATE_H
#define DNDSMODEASSERTIONUUIDINVALIDATIONPREDICATE_H

@class NSArray;


#import "DNDSModeAssertionInvalidationPredicate.h"

@interface DNDSModeAssertionUUIDInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

@property (readonly, copy, nonatomic) NSArray *UUIDs; // ivar: _UUIDs


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)predicateType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif