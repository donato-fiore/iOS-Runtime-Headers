// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLEXPRESSIONINTERMEDIATE_H
#define NSSQLEXPRESSIONINTERMEDIATE_H

@class NSExpression;


#import "NSSQLIntermediate.h"

@interface NSSQLExpressionIntermediate : NSSQLIntermediate {
    NSExpression *_expression;
    BOOL _allowToMany;
}




-(id)initWithExpression:(id)arg0 allowToMany:(BOOL)arg1 inScope:(id)arg2 ;


@end


#endif