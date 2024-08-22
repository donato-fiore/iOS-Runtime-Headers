// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLSUBQUERYEXPRESSIONINTERMEDIATEPREDICATEVISITOR_H
#define NSSQLSUBQUERYEXPRESSIONINTERMEDIATEPREDICATEVISITOR_H


#import <Foundation/Foundation.h>

#import "NSSQLIntermediate.h"

@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject {
    NSSQLIntermediate *_scope;
    BOOL _foundKeypath;
}




-(BOOL)checkPredicate:(id)arg0 ;
-(void)dealloc;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;


@end


#endif