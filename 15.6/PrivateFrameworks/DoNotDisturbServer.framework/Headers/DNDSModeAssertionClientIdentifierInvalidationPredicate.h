// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMODEASSERTIONCLIENTIDENTIFIERINVALIDATIONPREDICATE_H
#define DNDSMODEASSERTIONCLIENTIDENTIFIERINVALIDATIONPREDICATE_H

@class NSArray;


#import "DNDSModeAssertionInvalidationPredicate.h"

@interface DNDSModeAssertionClientIdentifierInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

@property (readonly, copy, nonatomic) NSArray *clientIdentifiers; // ivar: _clientIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)predicateType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientIdentifiers:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif