// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSVARIABLEASSIGNMENTEXPRESSION_H
#define NSVARIABLEASSIGNMENTEXPRESSION_H



#import "NSExpression.h"
#import "NSVariableExpression.h"

@interface NSVariableAssignmentExpression : NSExpression {
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)assignmentVariable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithAssignmentExpression:(id)arg0 expression:(id)arg1 ;
-(id)initWithAssignmentVariable:(id)arg0 expression:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateFormat;
-(id)subexpression;
-(id)variable;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif