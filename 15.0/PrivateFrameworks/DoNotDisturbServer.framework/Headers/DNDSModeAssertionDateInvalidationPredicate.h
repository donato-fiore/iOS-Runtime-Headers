// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMODEASSERTIONDATEINVALIDATIONPREDICATE_H
#define DNDSMODEASSERTIONDATEINVALIDATIONPREDICATE_H

@class NSDate;


#import "DNDSModeAssertionInvalidationPredicate.h"

@interface DNDSModeAssertionDateInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)predicateType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif