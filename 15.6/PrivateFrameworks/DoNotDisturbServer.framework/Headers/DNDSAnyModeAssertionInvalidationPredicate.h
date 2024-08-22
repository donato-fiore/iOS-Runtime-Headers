// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSANYMODEASSERTIONINVALIDATIONPREDICATE_H
#define DNDSANYMODEASSERTIONINVALIDATIONPREDICATE_H



#import "DNDSModeAssertionInvalidationPredicate.h"

@interface DNDSAnyModeAssertionInvalidationPredicate : DNDSModeAssertionInvalidationPredicate



+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)predicateType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif