// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSEXPRESSION_H
#define NSEXPRESSION_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSExpression.h"
#import "NSString.h"
#import "NSPredicate.h"

@interface NSExpression : NSObject <NSSecureCoding, NSCopying>

 {
    _expressionFlags _expressionFlags;
    unsigned int reserved;
    NSUInteger _expressionType;
}


@property (readonly, copy) NSArray *arguments;
@property (readonly, retain) id *collection;
@property (readonly, retain) id *constantValue;
@property (readonly, copy) id *expressionBlock;
@property (readonly) NSUInteger expressionType;
@property (readonly, copy) NSExpression *falseExpression;
@property (readonly, copy) NSString *function;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSExpression *leftExpression;
@property (readonly, copy) NSExpression *operand;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSExpression *rightExpression;
@property (readonly, copy) NSExpression *trueExpression;
@property (readonly, copy) NSString *variable;


+(BOOL)supportsSecureCoding;
+(id)_newKeyPathExpressionForString:(id)arg0 ;
+(id)expressionForAggregate:(id)arg0 ;
+(id)expressionForAnyKey;
// +(id)expressionForBlock:(id)arg0 arguments:(unk)arg1  ;
+(id)expressionForConditional:(id)arg0 trueExpression:(id)arg1 falseExpression:(id)arg2 ;
+(id)expressionForConstantValue:(id)arg0 ;
+(id)expressionForEvaluatedObject;
+(id)expressionForFunction:(id)arg0 arguments:(id)arg1 ;
+(id)expressionForFunction:(id)arg0 selectorName:(id)arg1 arguments:(id)arg2 ;
+(id)expressionForIntersectSet:(id)arg0 with:(id)arg1 ;
+(id)expressionForKeyPath:(id)arg0 ;
+(id)expressionForMinusSet:(id)arg0 with:(id)arg1 ;
+(id)expressionForSubquery:(id)arg0 usingIteratorVariable:(id)arg1 predicate:(id)arg2 ;
+(id)expressionForSymbolicString:(id)arg0 ;
+(id)expressionForTernaryWithPredicate:(id)arg0 trueExpression:(id)arg1 falseExpression:(id)arg2 ;
+(id)expressionForUnionSet:(id)arg0 with:(id)arg1 ;
+(id)expressionForVariable:(id)arg0 ;
+(id)expressionForVariableNameAssignment:(id)arg0 expression:(id)arg1 ;
+(id)expressionWithFormat:(id)arg0 ;
+(id)expressionWithFormat:(id)arg0 argumentArray:(id)arg1 ;
+(id)expressionWithFormat:(id)arg0 arguments:(char *)arg1 ;
-(BOOL)_allowsEvaluation;
-(BOOL)_shouldUseParensWithDescription;
-(SEL)selector;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpressionType:(NSUInteger)arg0 ;
-(id)subexpression;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)allowEvaluation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif