// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSUBSTRINGPREDICATEOPERATOR_H
#define NSSUBSTRINGPREDICATEOPERATOR_H



#import "NSStringPredicateOperator.h"

@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
    NSUInteger _position;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(NSUInteger)position;
-(SEL)selector;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperatorType:(NSUInteger)arg0 modifier:(NSUInteger)arg1 variant:(NSUInteger)arg2 position:(NSUInteger)arg3 ;
-(id)symbol;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif