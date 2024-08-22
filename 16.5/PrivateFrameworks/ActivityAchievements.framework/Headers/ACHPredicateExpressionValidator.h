// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHPREDICATEEXPRESSIONVALIDATOR_H
#define ACHPREDICATEEXPRESSIONVALIDATOR_H

@class NSMutableArray;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface ACHPredicateExpressionValidator : NSObject <NSPredicateVisitor>

 {
    BOOL _operatorsValid;
    BOOL _predicateExpressionValid;
    NSMutableArray *_issues;
}




-(id)validateExpressionString:(id)arg0 ;
-(id)validateTemplate:(id)arg0 ;
-(void)_addIssue:(id)arg0 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 keyPathScope:(id)arg1 key:(id)arg2 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif