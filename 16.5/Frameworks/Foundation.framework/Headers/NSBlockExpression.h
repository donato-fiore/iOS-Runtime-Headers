// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSBLOCKEXPRESSION_H
#define NSBLOCKEXPRESSION_H

@class NSArray;


#import "NSExpression.h"

@interface NSBlockExpression : NSExpression {
    id *_block;
    NSArray *_arguments;
}




+(BOOL)supportsSecureCoding;
-(NSUInteger)expressionType;
-(id)_expressionWithSubstitutionVariables:(id)arg0 ;
-(id)arguments;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionBlock:(SEL)arg0 ;
-(id)expressionValueWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
// -(id)initWithType:(NSUInteger)arg0 block:(id)arg1 arguments:(unk)arg2  ;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif