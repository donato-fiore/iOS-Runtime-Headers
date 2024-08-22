// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITARGETCONTENTIDENTIFIERPREDICATEVALIDATOR_H
#define _UITARGETCONTENTIDENTIFIERPREDICATEVALIDATOR_H

@class NSString;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface _UITargetContentIdentifierPredicateValidator : NSObject <NSPredicateVisitor>

 {
    NSString *_compileTimeIssues;
}




-(BOOL)validatePredicate:(id)arg0 compileTimeIssues:(*id)arg1 runTimeIssues:(*id)arg2 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif