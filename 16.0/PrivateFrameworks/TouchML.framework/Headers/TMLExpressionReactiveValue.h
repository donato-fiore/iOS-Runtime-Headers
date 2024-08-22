// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLEXPRESSIONREACTIVEVALUE_H
#define TMLEXPRESSIONREACTIVEVALUE_H

@class NSString, NSArray;


#import "TMLReactiveValue.h"
#import "TMLContext.h"

@interface TMLExpressionReactiveValue : TMLReactiveValue {
    NSString *_expression;
    TMLContext *_context;
    NSArray *_bindings;
}




-(id)initWithExpression:(id)arg0 context:(id)arg1 bindings:(id)arg2 valueType:(NSUInteger)arg3 ;
-(id)value;


@end


#endif