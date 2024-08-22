// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSAGGREGATEEXPRESSION_H
#define NSAGGREGATEEXPRESSION_H



#import "NSExpression.h"

@interface NSAggregateExpression : NSExpression {
    id *_collection;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)collection;
-(id)constantValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollection:(id)arg0 ;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif