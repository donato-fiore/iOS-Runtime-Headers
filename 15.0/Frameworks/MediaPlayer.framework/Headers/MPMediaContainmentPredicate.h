// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIACONTAINMENTPREDICATE_H
#define MPMEDIACONTAINMENTPREDICATE_H

@class NSString, NSSet;


#import "MPMediaPredicate.h"

@interface MPMediaContainmentPredicate : MPMediaPredicate

@property (readonly, copy, nonatomic) NSString *property; // ivar: _property
@property (readonly, copy, nonatomic) NSSet *values; // ivar: _values


+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg0 values:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityClass:(Class)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif