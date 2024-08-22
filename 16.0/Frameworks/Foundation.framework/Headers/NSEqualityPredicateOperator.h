// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSEQUALITYPREDICATEOPERATOR_H
#define NSEQUALITYPREDICATEOPERATOR_H



#import "NSPredicateOperator.h"

@interface NSEqualityPredicateOperator : NSPredicateOperator {
    BOOL _negate;
    NSUInteger _options;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNegation;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(NSUInteger)options;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 negate:(BOOL)arg2 ;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 negate:(BOOL)arg2 options:(NSUInteger)arg3 ;
-(id)predicateFormat;
-(void)_setOptions:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setNegation:(BOOL)arg0 ;


@end


#endif