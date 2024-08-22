// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSTRINGPREDICATEOPERATOR_H
#define NSSTRINGPREDICATEOPERATOR_H



#import "NSPredicateOperator.h"

@interface NSStringPredicateOperator : NSPredicateOperator {
    NSUInteger _flags;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)flags;
-(NSUInteger)options;
-(id)_modifierString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 variant:(NSUInteger)arg2 ;
-(void)_setOptions:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif